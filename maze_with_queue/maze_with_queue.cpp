#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct point {
    int x;
    int y;
};

int main()
{
    const int M = 5;
    const int N = 7;
    char unvisited = '0'; //未访问过的标记
    char visited = 'V';
    char maze[M][N] = {
      {'*', '*', '*', '*', '*', '*', '*'},
      {'*', '0', '*', '0', '0', '0', '*'},
      {'*', '0', '*', '0', '*', '0', '*'},
      {'*', '0', '0', '0', '*', '0', '*'},
      {'*', '*', '*', '*', '*', '*', '*'}
    };
    const int d = 4;
    point delta[d] = {{0,1},{1,0},{0,-1},{-1,0}};
    point source = {1,1};
    point destination={3,5};
    point parent[M][N];
    queue<point> Q;
    vector<point> P;
    Q.push(destination);
    size_t length = 0;
    bool solved = false;
    while (!Q.empty())
    {
        size_t increment = 0;
        for (size_t i = 0; i<d;++i)
        {
            point neighbor = {Q.front().x+delta[i].x,Q.front().y+delta[i].y};
            if(maze[neighbor.x][neighbor.y]==unvisited)
            {
                increment = 1;
                maze[neighbor.x][neighbor.y] = visited;
                parent[neighbor.x][neighbor.y]=Q.front();
                Q.push(neighbor);
                if(neighbor.x==source.x && neighbor.y == source.y)
                {
                    solved  = true;
                    break;
                }
            }
        }
        length +=increment;
        if (solved)
        {
            P.reserve(length+1);
            P.push_back(source);
            while(P.back().x!=destination.x || P.back().y!=destination.y)
                P.push_back(parent[P.back().x][P.back().y]);
            break;
        }
        Q.pop();
    }
    for(size_t i = 0; i < P.size();++i)
        cout<< P[i].x<<' '<<P[i].y << endl;
    return 0;
}

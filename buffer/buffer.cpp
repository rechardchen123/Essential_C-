#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    vector<int> buffer;
    size_t C =10; //容量取10
    size_t N=C+1;
    buffer.resize(N);
    size_t front = N/2;
    size_t rear = N/2;
    int x = 0;
    while(rear + 1< N ?rear+1!=front : 0 !=front)
    {
      buffer[rear] = x ++;
      if (rear < C)
        ++rear;
      else
        rear  = 0;
    }
    while (front!=rear) {
      cout << buffer[front]<<" ";
      if (front < C)
        ++front;
      else
        front = 0;
    }
    cout <<endl;
    queue<int> Q;
    for(x=0;Q.size()!=C;x++)
      Q.push(x);
    while(!Q.empty())
    {
      cout<<Q.front()<<" ";
      Q.pop();
    }
    cout << endl;
    return 0;
}

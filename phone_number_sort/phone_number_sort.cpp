#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;

int main()
{
    size_t L = 9;  //字符串长度
    size_t B =10;  //基数

    vector<string> phone_numbers(10000000, "123456789");
    vector<queue<string>> Q(B);
    size_t d = L;
    while(d>0)
    {
        --d;
        for (const auto &x:phone_numbers)
        {
            Q[x[d]-'0'].push(x);
        }
        size_t i = 0;
        for (size_t k = 0; k<B;++k)
        {
            while(!Q[k].empty()){
                phone_numbers[i++] = Q[k].front();
                Q[k].pop();
            }
            
        }
    }
     return 0;
}
#include<iostream>
#include<string>
#include<stack>
using namespace std;

void convertor_with_stack(int number, size_t b)
{
  string d2c = "0123456789ABCDEF";
  string result;
  if (number < 0)
  {
    result += "-";
    number = -number;
  }stack<char> s;

  do
  {
    s.push(d2c[number % b]);
    number /=b;
  } while (!s.empty());
  while(!s.empty())
  {
    result += s.top();
    s.pop();
  }
  cout<<result <<endl;
}

int main()
{
  cout << "请输入需要转换的进制数：";
  int number;
  cin>>number;
  size_t b;
  cout<<"请输入所转换的进制（2-16之间）：";
  cin>>b;
  if (b>=2 && b<=16)
  {
    convertor_with_stack(number,b);
  }
  else
  {
    cout<<"进制输入有误！"<<endl;
  }
  return 0;
}

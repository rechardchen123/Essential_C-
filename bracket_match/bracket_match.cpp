#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool valid(const string & brackets)
{
    stack<char> s;
    for (size_t i = 0; i < brackets.size(); ++i)
    {
        switch (brackets[i])
        {
            case '(':
                s.push(brackets[i]);
                break;
            case ')':
                if (s.empty() || s.top()!= '(')
                    return false;
                s.pop();
                break;
            case '[':
                s.push(brackets[i]);
                break;
            case ']':
                if (s.empty() || s.top()!='[')
                    return false;
                s.pop();
                break;
            case '{':
                s.push(brackets[i]);
                break;
            case '}':
                if (s.empty() || s.top()!='{')
                    return false;
                s.pop();
                break;
            default:
                return false;
        }
    }
    return s.empty();
}

int main()
{

    string brackets;
    cout<<"请输入需要匹配的括号："<<endl;
    cin>> brackets;
    cout << (valid(brackets) ? "匹配" : "不匹配或存在非括号字符") << endl;
    return 0;
}

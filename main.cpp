#include <bits/stdc++.h>

using namespace std;

stack <int> s;

void presmetaj(int a, int b, char znak)
{
    int rez;
    if(znak=='+')
        rez=a+b;

    else if(znak=='-')
        rez=a-b;

    else if(znak=='*')
        rez=a*b;

    else if(znak=='/')
        rez=a/b;

    cout<<rez<<endl;
    s.push(rez);
}

int main()
{
    while(1)
    {
        char znak;
        cin>>znak;

        if(isdigit(znak))
            s.push(znak-'0');

        if(znak=='=')
            break;

        if(znak=='+' || znak=='-' || znak=='*' || znak=='/')
        {
            int b=s.top();
            s.pop();
            int a=s.top();
            s.pop();
            cout<<a<<" "<<b<<" "<<znak<<endl;
            presmetaj(a,b,znak);
        }
    }
    cout<<s.top();
    return 0;
}

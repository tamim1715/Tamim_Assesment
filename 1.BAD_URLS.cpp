#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    
    string s,ans="";

    cin>>s;

    for(int i=0; i<s.length(); i++){

        ans+=s[i];

        if(s[i]=='/'){

            while(i<s.length() && s[i]=='/') i++;

            i--;
        }

    }

    cout<<ans<<endl;

    return 0;
}


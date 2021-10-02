#include<iostream>
#include<vector>
#include<cstring>

#define pb push_back

using namespace std;

vector<int>v1,v2,ans;

int main()
{
    
    v1.clear();
    v2.clear();
    ans.clear();

    string a,b;
    int x,carry=0,value,p1,p2;

    cin>>a>>b;
    
    for(int i=0; i<a.length(); i++){
        x=a[i]-48;
        v1.pb(x);
    }

    for(int i=0; i<b.length(); i++){
        x=b[i]-48;
        v2.pb(x);
    }
    p1=v1.size()-1;
    p2=v2.size()-1;
    
    while(p1>=0&&p2>=0){
        value=v1[p1]+v2[p2]+carry;
        carry=value/10;
        ans.pb(value%10);
        p1--;
        p2--;
    }

    while(p1>=0){
        value=v1[p1]+carry;
        carry=value/10;
        ans.pb(value%10);
        p1--; 
    }

    while(p2>=0){
        value=v2[p2]+carry;
        carry=value/10;
        ans.pb(value%10);
        p2--;
        
    }

    if(carry) ans.pb(carry);
    
    for(int i=ans.size()-1; i>=0; i--){
        cout<<ans[i];
    }

    cout<<endl;

    return 0;
}


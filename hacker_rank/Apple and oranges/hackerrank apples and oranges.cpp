#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int i,s,t,d,a,b,m,n,apple[m],orange[n],apples=0,oranges=0;
            
			cin>>s>>t;
            cin>>a>>b;
            cin>>m>>n;
            
            for(i=0;i<m;i++)
            {
                cin>>apple[i];
                if((a-apple[i])<(t-s)&&(a-apple[i]>0))
                apples++;
           
            }
            for(i=0;i<n;i++)
            {
                cin>>orange[i];
                if((b-orange[i])>(t-s)&&(b-orange[i]<0))
                oranges++;
            }
            
            cout<<apples<<endl;
            cout<<oranges;
               /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}


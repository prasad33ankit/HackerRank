#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {int a_i,b_i,i,x=0,n,m,A[n],B[m];
    cin>>n>>m;
            for(a_i=0;a_i<n;a_i++)
            {
                cin>>A[a_i];
            }
            
            for(b_i=0;b_i<m;b_i++)
            {
                cin>>B[b_i];
            }
          
            for(a_i=0,b_i=0;a_i<m,b_i<n;a_i++&b_i++)
            {
                for(i=0;i<m;i++)
                {
                 if(A[i]%A[a_i]==0&&A[i]%B[b_i]==0&&A[i]<abs(B[i]-A[i]))
                 x++;
                }
            }
            
            for(a_i=0,b_i=0;a_i<m,b_i<n;a_i++,b_i++)
            {
                for(i=0;i<n;i++)
                {
                  if(B[i]%A[a_i]==0&&B[i]%B[b_i]==0&&B[i]<abs(B[i]-A[i]))
                  x++;
                }
            }
           
            cout<<x;
            
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}


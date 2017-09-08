#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {int arr[n][n],n,i,j;
            cin>>n;
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    cin>>arr[i][j];
                }
            }
    for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {if(i==j)
                    sum+=arr[i][j];}
            }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}


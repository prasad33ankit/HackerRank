#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{int n,height[n],height_i,j=0;
            cin>>n;
            int max=height[0];
            for(height_i=0;height_i<n;height_i++)
            {
                cin>>height[height_i];
                if(height[height_i]>=max)
                {
                    max=height[height_i];
                }
            }
            for(height_i=0;height_i<n;height_i++)
            {
                if(max==height[height_i])
                {
                    ++j;
                }
                
            }
                cout<<j;
            
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}


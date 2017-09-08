#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<iomanip>
#include <bits/stdc++.h>

using namespace std;


int main() {float pos,neg,zero;
            int n;
            vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];
     cin>>n;
             
                if(arr[arr_i]>0)
                {
                    pos++;
                }
                 if(arr[arr_i]<0)
                {
                    neg++;
                }
                if(arr[arr_i]==0)
                {
                    zero++;
                }
            }
            cout<<setprecision(6)<<(float)pos/n<<endl;
    cout<<setprecision(6)<<(float)neg/n<<endl;
    cout<<setprecision(6)<<(float)zero/n<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}


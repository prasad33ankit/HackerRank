#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s,t,a,b,m,n,ap,apple = 0,ora,orange = 0;
    cin >> s >> t >> a >> b >> m >> n;
    
    for(int i = 0;i < m;i++)
	{
        cin >> ap;
        if(a+ap >= s && a+ap <= t)
		apple++;
    }
    
    for(int i = 0;i < n;i++)
	{
        cin >> ora;
        if(b+ora >= s && b+ora <= t)
		orange++;
    }
    
	cout << apple << "\n" << orange << endl;
    
	return 0;
}

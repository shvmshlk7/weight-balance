#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m;
        
        int k=w2-w1;
        
        if(k<x1*m || k>x2*m)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
	// your code goes here
	return 0;
}

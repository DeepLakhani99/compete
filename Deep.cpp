#include<iostream>
using namespace std;
int main()
{
    int n,i,f=1,c=0;
    cout<<"\nEnter the number:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<"fact="<<f;
    cout<<"\nEnter a number";
    cin>>n;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        cout<<"\nPrime";
    }
    else{cout<<"\nNot Prime";}
    cout<<"\nGood Bye World";
    return 0;
}

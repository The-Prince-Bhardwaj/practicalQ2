#include<iostream>
using namespace std ;

int n,m,i,gcd;
int main()
{
    int n;
    int m;
    cout<<"enter 1st number : ";
    cin>>n;
    cout<<"enter 2nd number : ";
    cin>>m;

    for(i=1;i<=n&& i<=m; ++i)
    {
        //check if i is factor of both 
        if(n%i==0 && m%i==0)
        gcd=i;

    }

    cout<<"G.C.D of two number is : "<<gcd;
    return 0;

}

int hcf( int n, int m)
{
    if (m!=0)
    return hcf(m,n%2);
    else
    return n;
}
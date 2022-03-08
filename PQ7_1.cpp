#include<iostream>
using namespace std ;

int hcf (int n ,int m);
int main()
{
    int n;
    int m;
    cout<<"enter 1st number : ";
    cin>>n;
    cout<<"enter 2nd number : ";
    cin>>m;

    cout<<"G.C.D of two number is : "<<hcf(n,m);
    return 0;

}

int hcf( int n, int m)
{
    if (m!=0)
    return hcf(m,n%2);
    else
    return n;
}
#include<iostream>
using namespace std ;

int main ()
{
    int arr1[45],arr2[45],merge[100];
    int size1,size2,i,k;

    cout<<"enter thesize of arr1 : ";
    cin>>size1;
    cout<<"enter the elements of arr1 : ";
    for(i=0 ;i<size1; i++)
    {
        cin>>arr1[i];
        merge[i]=arr1[i];
    }

    k=i;
    cout<<"enter the size of arr2 :";
    cin>>size2;
    cout<<"enter the elements of arr2 : ";

    for(i=0; i<size2;i++ )
    {
        cin>>arr2[i];
        merge[k]=arr2[i];
        k++;
    }
    cout<<"\nthe new merge array : ";
    for(i=0;i<k;i++)
    cout<<merge[i]<<" ";
    cout<<endl;
    

    return 0;
    
}
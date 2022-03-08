#include<iostream>
using namespace std ;

int main()
{
    char str[80];
    cout<<"Enter your string : ";
    cin.get(str ,80 );
    char check;
cout<<" enter the character : ";
cin>> check;

int count ;

for(int i=0 ; str[i]!='\0' ; ++i)
{
    if(check==str[i])
    ++count;

}
cout<<"Frequency of "<<check << " is "<<count;
return 0;
}
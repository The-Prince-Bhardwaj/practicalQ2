#include<iostream>
using namespace std ;
int main(){
    char i='\0';
    while(1){
       
	       cout<<"  ******       MAIN MENUE  ******    "<<endl;
        cout<<"A. show address of each character of string "<<endl;
        cout<<"B. add two string "<<endl;
        cout<<"C. comparision of string "<<endl;
        cout<<"D. length of string "<<endl;
        cout<<"E. convert into uppercase "<<endl;
         cout<<"F. revese of string "<<endl;
		 cout<<"G. EXIT"<< endl;

	    cin>>i;
            switch(i){
                case 'a':{
                    string str,lock;
    				cout<<"Enter the string: ";
    				getline(cin,lock);
    				getline(cin,str);
    				int n= str.size();
    				for (int i=0; i<n; i++){
      				  cout<<"Address of "<<str[i]<<" is "<<static_cast<void*>(&str[i])<<endl;
    					}
                    break;} 
                    
                    
                case 'b':{
                        string str1, str2,lock;
  						cout<<"Enter 1st string: "<<endl;
  						getline(cin,lock);
    					getline(cin,str1);
    					cout<<"Enter 2nd string: "<<endl;
    					getline(cin,str2);
    					cout<<"Concatenated string is "<<str1+" "+str2<<endl;
                    break;}
                    
                    
                case 'c':{
                    string str1, str2,lock;
    				cout<<"Enter the first string: "<<endl;
    				getline(cin,lock);
    				getline(cin,str1);
    				cout<<"Enter the second string: "<<endl;
    				getline(cin,str2);
    				int n1= str1.size();
    				int n2= str2.size();
    				if (n1 > n2){
    					cout<<"First string is greater \n\n";
    				}else if(n2 > n1){
    					cout<<"Second string is greater \n\n";
					}else{
						cout<<"Both strings are equal \n\n";
					}
        			
                    break;}
                    
                    
                case 'd': {
                    string str,lock;
                    cout<<"Enter the string: ";
                    getline(cin,lock);
    				getline(cin,str);
                    cout<<"The size of string is "<<str.size()<<endl;
                    break;}
                    
                    
                case 'e': {
                    string str1,lock;
	
					cout << "\nPlease Enter the String to Convert into Uppercase  =  ";
					getline(cin,lock);
					getline(cin, str1);
	
					for (int i = 0; i < str1.length(); i++)
  					{
  					str1[i] = toupper(str1[i]);
  					}
  	
					cout<< "\nThe Given String in Uppercase = " << str1 <<"\n\n";
                    break;}
                    
                case 'f': {
                        string str,lock;
    					cout<<"Enter the string: "<<endl;
    					getline(cin,lock);
    					getline(cin,str);
    					string s="";
    					int n= str.size()-1;
    					for (int i=0; i<str.size(); i++){
     					   s= s + str[n];
      					   n--;
    					}
    					
    			cout<<"Reverse string of "<<str<<" is "<<s<<endl;
                    		break;}
                    		
                case 'g': {
                	return 0;
					break;
				}
                default: {
                    cout<<"Invalid option";
                    }
            }
        }
        return 0;
    }
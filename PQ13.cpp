#include <bits/stdc++.h>
using namespace std;

class StudentInfo
{
public:
    int St_RollNumber;
    string St_Name;
    int St_Class;
    int St_Year;
    int St_Marks;
};

int main()
{
    ofstream f2;
    f2.open("studentinfo.txt");

    for (int i = 0; i < 5; i++)
    {
        StudentInfo object;
        
        cout<<"Enter roll number:";
        cin >> object.St_RollNumber;
        f2 << object.St_RollNumber << "  ";

        cin.ignore();
        
        cout<<"Enter student name:";
        getline(cin, object.St_Name);
        f2 << object.St_Name << "    ";
        
        cout<<"Enter student class:";

        cin >> object.St_Class;
		
		cout<<"Enter student year:";
		cin>>object.St_Year;
		cout<<"Enter student marks:"; 
		cin>>object.St_Marks;
        f2 << object.St_Class << "  " << object.St_Year << "  " << object.St_Marks << endl;
        cout<<"\n";
    }
    
    cout<<"\n\n\n\n R.No. Name   Class  Year  Marks \n\n";
    ifstream f("studentinfo.txt");

    if (f.is_open())
        std::cout << f.rdbuf();
    

    return 0;
}
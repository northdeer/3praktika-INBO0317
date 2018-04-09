#include <iostream>
#include <cstring>
using namespace std;
 
class Book {
public:
    string genre;
   string author;
    string title;
    int the_year_of_publishing;
    int value;
 void set()
{
    cout<<"enter genre:";
    cin>>genre;
    cout<<"enter author:";
    cin>>author;
    cout<<"enter title:";
    cin>>title;
    cout<<"enter the_year_of_publishing:";
    cin>>the_year_of_publishing;
    cout<<"enter value:";
    cin>>value;
}
void show()
{
    cout<<"genre:"<<genre<<endl;
    cout<<"author:"<<author<<endl;
    cout<<"title:"<<title<<endl;
    cout<<"the_year_of_publishing:"<<the_year_of_publishing<<endl;
    cout<<"value:"<<value<<endl;
}
 
 
};
 
 
int main()
{
	setlocale (0,"rus");
    Bt
	Book n1;
 
    n1.set();
    n1.show();


    system("pause");
    return 0;
}

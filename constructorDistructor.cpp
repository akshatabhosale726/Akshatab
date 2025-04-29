#include<iostream>
using namespace std;
class Student{
    private: 
        int rollNo;
        string name;
        short age;
    public:
    	Student(){
    		rollNo = 0;
    		name = '-';
    		age = 0;
		}
		Student(int rollNo,string name,short age){
			this->rollNo = rollNo;
			this->name = name;
			this->age = age;
		}
		Student(const Student &std){
			rollNo = std.rollNo;
			name = std.name;
			age = std.age;
		}      

    	Student& getData(){
    		cout<<"Roll No: "<<rollNo<<endl
    			<<"Name: "<<name<<endl
    			<<"Age: "<<age<<endl<<endl;
    			return *this;
		}
		
		Student& setData(int rollNo,string name,short age){
			this->rollNo = rollNo;
			this->name = name;
			this->age = age;
			return *this;
		}
};

int main(){
    Student s1 ;
    s1.getData();
    s1.setData(21,"Sham",18);
    s1.getData();
    Student s2(1,"Raj",19);
    s2.getData();
    Student s3(s1);
    s3.getData();
    cout<<"You want to create your own Student object [y/n]: ";
    char ch;
    cin>>ch;
    if(ch == 'y'){
    	int roll;
    	short age;
    	string name;
    	cout<<"Enter Roll No: ";
    	cin>>roll;
    	cout<<"Enter Name: ";
    	cin>>name;
    	cout<<"Enter Age: ";
    	cin>>age;
    	Student userObj(roll,name,age);
    	cout<<"your object: "<<endl;
    	userObj.getData();
	}
	Student s4;
	Student s5;
	s5.getData().setData(55,"Sham",19);
	s4.setData(30,"Prem",22).getData();
    return 0;
}

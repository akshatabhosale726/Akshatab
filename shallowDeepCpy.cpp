#include<iostream>
using namespace std;
class Demo{
	private:
		int * p ;
	public: 
		void getData(){						  // getter function
			cout<<*p<<endl;
		}
		void setData(int v){                 // setter or mutator function
			*this->p = v;
		}
		void getAdd(){                      
			cout<<this->p<<endl;
		}
		Demo(int i){                        //parameterized constructor
			p = new int(i);
		}
		
		Demo(const Demo &obj){             //copy constructor
//			p = obj.p; 					  //shallow copy
			p = new int(*(obj.p)); 		 //deep copy
		}
		
		~Demo(){                         // destructor
			cout<<"Destructor is Called"<<endl;
		}
		
};
int main(){
	Demo d1(15);
	Demo d2(d1);

	d1.getData();
	d2.getData();
	
	d2.setData(30);
	
	d1.getData();
	d2.getData();
	d1.getAdd();
	d2.getAdd();
	
	return 0;
}

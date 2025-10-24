#include <iostream>
using namespace std ;
class car {
	public :string brand;
	public :string model;
	public :string color;
	void displayinfo(){
		cout<<"brand :"<<brand<<endl;
		cout<<"model :"<<model<<endl;
		cout<<"color :"<<color<<endl; 
	}
};
int main (){
	car mycar1 ;
	mycar1.brand = "BMW" ;
	mycar1.model = "x5";
	mycar1.color = "black";
	cout<<"mycar1"<<endl;
	mycar1.displayinfo();
	cout<<"---------------"<<endl;
	car mycar2 ;
	mycar2.brand = "Toyota" ;
	mycar2.model = "corolla";
	mycar2.color = "white";
	cout<<"mycar2"<<endl;
	mycar2.displayinfo();
	cout<<"---------------"<<endl;
	car mycar3 ;
	mycar3.brand = "Mercedes" ;
	mycar3.model = "c200";
	mycar3.color = "white";
	cout<<"mycar3"<<endl;
	mycar3.displayinfo();
	return 0;
}


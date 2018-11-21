	#include <iostream>
	using namespace std ;

	// declaring a class rectangle
	class rectangle{
	public:double length ; //declaration of the length of the rectangle;
	double breadth ; // declaration of the breadth of the rectangle;
	
	//declaration of the function for area and perimenter and other function to get the data;
	double perimeter(void)
	double area(void);
	void getLength(int length);
	void getBreadth(int breadth); 
	
	};
	// declaration of all the function required in the class rectangle
	void rectangle::getLength(int length){
	length = length;
	}
	void rectangle::getBreadth(int breadth){
	breadth = breadth;
	}
	double rectangle::perimeter(void){
	return 2*(breadth + length);
	}
	double rectangle::area(void) {
	return breadth*length;
	}
	//main function to evaluate the above class.
	int main(){

	//variable declaration for storing the return value .
	rectangle rect1,rect2;    
	int per1,per2,area1,area2;
	int l1,l2,b1,b2;

	//asking for the length and breadth for rectange1;

	cout <<"Enter the value of length1";
	cin >>l1;
	cout <<"Enter the value of breadth1";
	cin >>b1;

	//asking for the length and breadth for rectangle2;

	cout <<"Enter the value of length2";
	cin >>l2;
	cout <<"Enter the value of breadth2";
	cin >>b2;
	
	// storing the length

	rect1.getLength(l1);     
	rect1.getBreadth(b1);
	
	area1 = rect1.area();
	per1 = rect1.perimeter();
	cout << "area1:"<<area1<<endl;
	cout << "perimeter1:"<<per1<<endl;
	
	rect2.getLength(l2);
	rect2.getBreadth(b2);
	area2 = rect2.area();
	per2 = rect2.perimeter();
	
	cout << "area2:"<<area2<<endl;
	cout << "perimeter2:"<<per2<<endl;
	//comparing the area and the perimeter;
	if(per1>per2){
		cout<<"Perimeter of first rectangle is greater"<<endl;
	}
	else
		cout<<"Perimeter of the second rectangle is greater"<<endl;
	if(area1>area2)
		cout<<"Area of the first rectange is greater"<<endl;
	else
		cout<<"Area of the second rectange is greater"<<endl;
	
	return 0;
	
	
	}#include <iostream>
	using namespace std ;

	class rectangle{
	public:double length ; //declaration of the length of the rectangle;
	double breadth ; // declaration of the breadth of the rectangle;
	
	//declaration of the function for area and perimenter and other function to get the data;
	double area(void);
	double perimeter(void) ;
	void getLength(int length);
	void getBreadth(int breadth); 
	
	};
	// declaration of all the function required in the class rectangle
	void rectangle::getLength(int length){
	length = length;
	}
	void rectangle::getBreadth(int breadth){
	breadth = breadth;
	}
	double rectangle::perimeter(void){
	return 2*(breadth + length);
	}
	double rectangle::area(void) {
	return breadth*length;
	}
	//main function to evaluate the above class.
	int main(){

	//variable declaration for storing the return value .
	rectangle rect1,rect2;    
	int per1,per2,area1,area2;
	int l1,l2,b1,b2;
	//asking the length and breadth for rectange 1;
	cout <<"Enter the value of length1";
	cin >>l1;
	cout <<"Enter the value of breadth1";
	cin >>b1;
	//asking the length and breadth for rectangle2;
	cout <<"Enter the value of length2";
	cin >>l2;
	cout <<"Enter the value of breadth2";
	cin >>b2;
	
	// storing the length 

	rect1.getLength(l1);    
	rect1.getBreadth(b1);
	
	area1 = rect1.area();
	per1 = rect1.perimeter();
	cout<< "area1:"<<area1<<endl;
	cout <<"perimeter1:"<<per1<<endl;
	
	rect2.getLength(l2);
	rect2.getBreadth(b2);
	area2 = rect2.area();
	per2 = rect2.perimeter();
	
	cout<< "area2:"<<area2<<endl;
	cout <<"perimeter2:"<<per2<<endl;
	//comparing the area and the perimeter;
	if(per1>per2){
		cout<<"Perimeter of first rectangle is greater"<<endl;
	}
	else
		cout<<"Perimeter of the secand rectangle is greater"<<endl;
	if(area1>area2)
		cout<<"Area of the first rectange is greater"<<endl;
	else
		cout<<"Area of the second rectange is greater"<<endl;
	
	return 0;
	
	
	}

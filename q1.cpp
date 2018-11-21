#include <iostream>
using namespace std ;

class Box{
	public:double length; // declaration of the box
	double breadth ;   // breadth of the box 
	double height ;   // declaring the height for the box
	
};
int main() {
	Box Box1 ;  //declaring Box1 of type Box
	
	Box Box2 ;  //declaring Box2 of type Box ;
	
	double volume =0.0 ; // Store the volume of the box 
	
	//box 1 specification
	
	Box1.height = 10.0 ;
	Box1.length = 5.0 ;
	Box1.breadth = 7.0 ;
	
	// volume of box 1

	volume = Box1.height *Box1.length * Box1.breadth;
	cout << "Volume of Box1 : " << volume <<endl ;
	
	//box2 specifications

	Box2.height = 10.0 ;
	Box2.length = 11.0 ;
	Box2.breadth = 7.0 ;
	volume = Box2.height* Box2.length * Box2.breadth ;
	cout << "Volume of Box2 : " << volume <<endl ;
	
	return 0 ;
}

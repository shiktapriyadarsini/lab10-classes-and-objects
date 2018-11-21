#include <iostream>
using namespace std ;

class Box{
	public:double length; // declaration of the box
	double breadth ;   // breadth of the box 
	double height ;   // declaring the height for the box
	//member functions declaration 
	
	double getVolume(void);
	void setLength(double len) ;
	void setBreadth(double bre);
	void setHeight(double hei);
	
};

//Member functions declarations 
double Box::getVolume(void){
	return length *breadth *height ;
}
void Box::setLength(double len){
	length = len ;
}
void Box::setBreadth(double bre){
	breadth = bre;
}

void Box::setHeight(double hei){
	height = hei ;
}
int main() {
	Box Box1 ;  //declaring Box1 of type Box
	
	Box Box2 ;  //declaring Box2 of type Box ;
	
	double volume =0.0 ; // Store the volume of the box 
	
	//box 1 specification
	Box1.setLength(7.0);
	Box1.setBreadth(9.0);
	Box1.setHeight(8.0) ;
	
	
	
	// volume of box 1
	volume = Box1.getVolume();
	cout << "Volume of Box1 : " << volume <<endl ;
	
	//box2 specification
	Box2.setLength(12.0);
	Box2.setBreadth(13.0);
	Box2.setHeight(14.0) ;
	volume = Box2.getVolume() ;
	cout << "Volume of Box2 : " << volume <<endl ;
	
	return 0 ;
}

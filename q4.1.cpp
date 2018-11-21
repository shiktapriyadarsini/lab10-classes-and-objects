#include <iostream>
using namespace std;


  // *****************************************************
  //  Declaration of class Point
  // *****************************************************

  // class Point representing a two-dimensional point
	class Point
	{
	public:
  // default class constructor
  	  Point(); 

  // class constructor that sets the coordinates a, b
  	  Point(int xvalue, int yvalue);

  // member function for moving a point by da, db:
  	  void Move(int dx, int dy);

  // member functions for getting values of a, b:
  	  int Get_a() const;
  	  int Get_b() const;

  // member functions for setting a, b to avalue, bvalue respectively  
  	  void Set_a(int avalue);
  	  void Set_b(int bvalue);
  
  //Lab 7 exercise 4.1. Add declaration of member function Print here: 
	  void Print(int a,int b);
  // private data members x, y represent coordinates of the point:
	 private:
	  int a;
	  int b;
	};  


  // ****************************************************
  //  Methods for class Point
  // ****************************************************

  // class constructor sets a, b to zero when no values are specified:
	Point::Point()
	{
  	a = 0;	
  	b = 0;
	}	

  // class constructor sets a, b to given values xval, yval:
	Point::Point(int avalue, int bvalue)
	{
	  a = aval;
	  b = bval;
	}

  // member function Move: increases the a coordinate by da and the b coordinate by db
	void Point::Move(int da, int db)
	{
	  a += da;
	  b += db;
	}

  // Get_a returns the value of the a coordinate
	int Point::Get_a() const
	{
	  return a;
	}

  // Get_b returns the value of the b coordinate
	int Point::Get_b() const
	{
	  return b;
	}

  // Set_a sets the value of a coordinate to aval
	void Point::Set_a(int aval)
	{
	  a = aval;
	} 

  // Set_b sets the value of b coordinate to yval
	void Point::Set_b(int bval)
	{
	  b = bval;
	} 
    

  //Lab 7 exercise 4.1. Add definition of member function print:
	void Point::Print(int a,int b)
	{
	cout<<"coordinates of the point (" p "," q ")"<<endl;

	}

  // ***********************************************
  //  Declaration of class Rectangle
  // ***********************************************
	class Rectangle : public Point
	{
	

  //Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE: 
	  Point point1,point2,point3,point4;
	  int side1,side2;
           	 public:
	    Rectangle(Point x1,Point x2);
	    Rectangle ();
	    int area();
	};
	Rectangle::Rectangle(Point x1, Point x2)
	{
    	point1=x1;
    	point2=x2;
    	while(x1.Get_X()<point2.Get_a())
    	{
    	    a1.Move(1,0);
    	}
    	point3=a1;
    	while(a2.Get_a()>point1.Get_a())
    	{
    	    a2.Move(-1,0);
    	}
    	point4=a2;
    	cout<<"point 3 of the rectangle:"<<endl;
    	point3.Print(point3.Get_a(),point3.Get_b());
    	cout<<"point 4 of the rectangle:"<<endl;
    	point4.Print(point4.Get_a(),point4.Get_b());
    	side1=point4.Get_b()-point1.Get_b();
    	side2=point3.Get_a()-point1.Get_a();
	}
  // ************************************************
  //  Methods for class Rectangle
  // ************************************************
  
  //Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE: 
	int Rectangle::area()
	{
    	int area=side1*side2;
    	return area;
	}

  // **************************************************
  //  main() function for testing classes Point and Rectangle
  // **************************************************



  // Testing classes Point and Rectangle
	int main()
	{
  // Declaring a point using default class constructor (a = b = 0):
	  Point p1;
	  cout<< "The a value for p1 is " << p1.Get_a() << endl;
	  cout<< "The b value for p1 is " << p1.Get_b() << endl;

  // Declaring a point with coordinates a = 2, b = 3:
	  Point p2(2, 3);
	  cout<< "The a value for p2 is " << p2.Get_a() << endl;
	  cout<< "The b value for p2 is " << p2.Get_b() << endl;

  // Moving point p2 by (1, -1):
	  p2.Move(1, -1);
	  cout<< "After the move:" << endl;
	  cout<< "The a value for p2 is " << p2.Get_a() << endl;
	  cout<< "The b value for p2 is " << p2.Get_b() << endl;

  //Lab 7 exercise 4.1. Test member function print on points p1, p2:
	cout<<"For p1:"<<endl;
	p1.Print(p1.Get_a(),p1.Get_b());
	cout<<"For p2:"<<endl;
	p2.Print(p2.Get_a(),p2.Get_b());

  //Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  

	cout<<"point1 of the rectangle:"<<endl;
	p1.Print(p1.Get_a(),p1.Get_b());
	cout<<"point2 of the rectangle:"<<endl;
	p2.Print(p2.Get_a(),p2.Get_b());
	Rectangle r(p1,p2);
	cout<<"Area of the rectangle:"<<r.area()<<endl;
	  return 0;
	}


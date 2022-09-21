#include <simplecpp>
int main()
{
	int sidelength = 10, sides = 24;
	float radius = 0, polygonAngle = 0, spokesAngle= 0; 
	polygonAngle = 360.0/sides;
	spokesAngle = (180-polygonAngle)/2;
	radius = (sidelength/2.0)/ cosine(spokesAngle) ;
	
	
	turtleSim();
	penUp();
	left(270);
	forward(20);
	left(90);
	
	//Spokes of the Indian Flag
	repeat(sides)
	{
		penDown();
		forward(sidelength);
		left(180-spokesAngle);
		forward(radius);
		penUp();
		left(180);
		forward(radius);
		penDown();
		left(180-spokesAngle);
	}	
	
	
	penUp();
	left(270);
	forward(2*radius);
	left(270);
	forward(4*radius);
	left(180);
	
	//rectangle printing
	repeat(4)
	{
		penDown();
		forward(8*radius);
		penUp();
		left(90);
		forward(2*radius);
	
		left(90);
		forward(8*radius);
		left(180);	
	}
	penUp();
	left(270);
	forward(2*radius);
	penDown();
	forward(6*radius);
	left(90);
	forward(8*radius);
	penDown();
	left(90);
	forward(6*radius);

	wait(500);
}

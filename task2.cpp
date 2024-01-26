#include <iostream>
using namespace std;



// program 2
class Point {
public:
    double x;
    double y;

	void setX(int x1) {
		x = x1;

	}

	void setY(int y1) {
		y = y1;
	}

	double getX() {
		return x;
	}

	double getY() {
		return y;
	}


	Point(double X1,double Y1) {
        x = X1;
        y = Y1;

	}

    double distance( Point& otherPoint)  {
        double xDiff = x - otherPoint.getX();
        double yDiff = y - otherPoint.getY();
        return sqrt(xDiff * xDiff + yDiff * yDiff);

    }



};





int main() {
// program 2

 // Create two points
Point point1(1.0, 2.0);
Point point2(4.0, 6.0);

// Get coordinates of point1
cout << "Point 1: (" << point1.getX() << ", " << point1.getY() << ")" << endl;

// Set new coordinates for point1
point1.setX(3.0);
point1.setY(5.0);

// Get updated coordinates of point1
cout << "Updated Point 1: (" << point1.getX() << ", " << point1.getY() << ")" << endl;

// Calculate and print the distance between point1 and point2
cout << "Distance between Point 1 and Point 2: " << point1.distance(point2) << endl;

	


    return 0;

}
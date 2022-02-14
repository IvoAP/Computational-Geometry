#include <iostream>
using namespace std;
#define ll long long 

struct Point {
    int x,y;

    Point(int _x, int _y) {
        x = _x;
        y = _y;
    }

    Point operator + (Point p){
        Point result = Point(x + p.x, y - p.y);
        return result;
    }

    Point operator - (Point p) const 
	{
		Point result = Point(x - p.x, y - p.y);
		return result;
	}

    // Cross product operation (Produto vetorial)
    int operator * (Point p){
        int cross = x * p.y - y * p.x;
        return cross;
    }

    // Dot product (Produto Escalar)
    int operator % (Point p){
        int dot = x * p.x + y *p.y;
        return dot;
    } 
};


bool areCollinear(Point a, Point b){    return (a * b == 0);  }

bool arePerpendicular(Point a, Point b){    return (a % b == 0);  }

int main(){
    
    ll x1,y1, x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    Point p1 = Point(x1,y1);
    Point p2 = Point(x2,y2);

    ll dot = p1%p2;
    ll cross = p1*p2;

   cout << "Dot Product of p1 and p2 is : " << dot << endl;
   cout << "Cross Product of p1 and p2 is: " << cross << endl;

   if(areCollinear(p1,p2)){
       cout << "They are collinear" << endl;
   }

   if(arePerpendicular(p1,p2)){
       cout << "They are perpendicular" << endl;
   }

    return 0;
}




#include <iostream>
using namespace std;

struct Point{

    int x, y;

    Point(int x, int y) : x(x), y(y){};

    Point sum (Point a){
        Point result = {x + a.x, y + a.y};
        return result;
    }

    Point diff (Point a){
        Point result = {x - a.x, y - a.y};
        return result;
    }



};

int main(){

    int xa,ya,xb,yb;
    cin >> xa >> ya >> xb >> yb;

    Point p1 = Point(xa,ya);
    Point p2 = Point(xb,yb);
    Point result1  = p1.sum(p2);
    Point result2 = p1.diff(p2);

    cout << "The sum of p1 and p2 is: " <<   result1.x << " y: " << result1.y << endl;
    cout << "The difference of p1 and p2 is: " << result2.x << " y: " << result2.y << endl;
    
    return 0;
}
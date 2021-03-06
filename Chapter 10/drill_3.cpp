#include"std_lib_facilities.h"

struct Point {
    double x,y;
    Point():x{0}, y{0} {}
    Point(double x, double y);
};

Point::Point(double xx, double yy)
{
    x = xx;
    y = yy;
}

istream& operator>>(istream& is, Point& p){
    double x, y;
    char ch1, ch2, ch3;
	is >> ch1 >> x >> ch2 >> y >> ch3;


	if(is && ch1 == '(' && ch2 == ',' && ch3 == ')')
	{
		p = Point(x, y);
	}
    else 
    {
        is.clear(ios_base::failbit);
    }
	
    return is;
}

int main(){
    vector<Point>original_points;
    cout << "Please enter 7 points in format (x,y)" << endl;
    Point p;
    for (;original_points.size() < 3;)
    {
        if(cin >> p)
        {
            original_points.push_back(p);
        }
        else 
        {
            cout << "You sure you typed the points in format (x,y)?" << endl;
            cin.clear();
        }
    }
    cout << endl;
    
    for (int i = 0; i < original_points.size(); i++)
        cout << '(' << original_points[i].x << "," << original_points[i].y << ')' << '\n';

    return 0;
}
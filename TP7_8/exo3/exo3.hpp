class Point {
private:
    int p_x;
    int p_y;
public:
    Point();
    Point(int x, int y);
    void set_point();
    int get_x();
    int get_y();
    void get_point();
    Point operator+(const Point&);
    int operator*(const Point&);
    Point PointMedian(Point&, Point&);
};
class Point {
private:
    int p_x;
    int p_y;
public:
    Point();
    Point(int x, int y);
    void setX(int);
    void setY(int);
    void set_point();
    int get_x();
    int get_y();
    void get_point();
    friend ostream& operator<<(ostream& os, const Point&);
    friend istream& operator>>(istream& is, const Point&);
    Point operator+(const Point&);
    int operator*(const Point&);
    Point operator|(const Point&);
};
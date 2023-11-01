class Point2D {
private:
    float p_x;
    float p_y;
public:
    void set_point();
    float get_x();
    float get_y();
    void get_point();
};

class Vecteur {
private:
    float v_x;
    float v_y;
public:
    void set_vecteur(Point2D p1, Point2D p2);
    void somme(Vecteur& v1, Vecteur& v2);
    void produit(int reel);
    void sontEgaux(Vecteur& v1, Vecteur& v2);
    float get_x();
    float get_y();
    void get_vecteur();
};

class Polygone {
private:
    Point2D a, b, c, d;
    Point2D points[5] = {};
public: 
    void set_points();
    void afficher_points();
    void area();
};
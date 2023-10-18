class Vecteur {
private:
    float x;
    float y;
public:
    void set_vecteur();
    void somme(Vecteur& v1, Vecteur& v2);
    void produit(int reel);
    void sontEgaux(Vecteur& v1, Vecteur& v2);
};
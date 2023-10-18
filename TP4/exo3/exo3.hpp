//
// Created by julesr0y on 14/10/23.
//

#ifndef TP4_PROG_CIR2_EXO3_HPP
#define TP4_PROG_CIR2_EXO3_HPP
class Vecteur{
private:
    float x;
    float y;
public:
    void set_vecteur();
    void somme(Vecteur &v1, Vecteur &v2);
    void produit(int reel);
    void sontEgaux(Vecteur &v1, Vecteur &v2);
};
#endif //TP4_PROG_CIR2_EXO3_HPP

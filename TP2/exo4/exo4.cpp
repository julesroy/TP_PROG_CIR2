//
// Created by julesr0y on 20/09/23.
//
#include <iostream>
using namespace std;

class TextRectangle{
private:
    int width;
    int height;
public:
    void defineValues(){
        bool width_ok = false;
        bool height_ok = false;
        while(!width_ok){
            cout << "Entrez la largeur" << endl;
            cin >> width;
            if(width <= 10 && width > 0){
                width_ok = true;
            }
        }
        while (!height_ok){
            cout << "Entrez la longueur" << endl;
            cin >> height;
            if(height <= 10 && height > 0){
                height_ok = true;
            }
        }
    }

    int getArea(){
        return width * height;
    }

    int getPerimeter(){
        return 2 * width + 2 * height;
    };

    void print(){
        cout << "Surface: " << getArea() << endl;
        cout << "Perimetre: " << getPerimeter() << endl;
    }

    void drawArea(const char& pattern){
        for(int i = 0; i < width; i++){
            for(int j = 0; j < height; j++){
                cout << pattern;
            }
            cout << endl;
        }
    }

    void drawPerimeter(const char& pattern){
        for(int i = 0; i < width; i++){
            for(int j = 0; j < height; j++){
                if(j == 0 || j == (height - 1) || i == 0 || i == (width - 1)) {
                    cout << pattern;
                }
                else{
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
};

int main(){
    TextRectangle rectangle1;
    rectangle1.defineValues();
    char &pattern = (char &) "*";
    rectangle1.print();
    cout << endl;
    rectangle1.drawArea(pattern);
    cout << endl << endl;
    rectangle1.drawPerimeter(pattern);
    return 0;
}
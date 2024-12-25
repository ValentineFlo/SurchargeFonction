// SurchargeFonction.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>


//// fonction redondante
void displayInt(int a)
{
    std::cout << a<< std::endl;
}

void displayFloat(float b)
{
    std::cout << b << std::endl;
}

void displayChar(char c)
{
    std::cout << c << std::endl;
}

//fonction surchargé
void display(int a, float b, char c)
{
    std::cout << a << "\n" << b << "\n" << c << std::endl;
}



int main()
{

    int a = 4;
    float b = 4.2f;
    int c = 'a';

    displayInt(a);
    displayFloat(b);
    displayChar(c);

    display(a, b, c);

    std::cout << "Hello World!" << std::endl;
}


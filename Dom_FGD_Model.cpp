//Dom_FGD_Controller.cpp
//Grupo: FGD
//Felipe Mendes Campos
//Daniel Kwang Hyuc Um
//Gustavo Macedo Costa

// usamos strucut para guardar informacoes das pecas
struct statusPecas
{

    char status;
    int Lado1;
    int Lado2;



} pecas[28], aux;

//struct para guardar irfomacoes da mesa
struct statusMesa
{

    char status;
    int Lado1;
    int Lado2;




} mesa[28];

int mesaP;
char z;
int Tamanhomesa;
int compra;
int empate;
int extD, extE;
int modojogo;

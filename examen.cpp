#include <iostream>
#include <string>
#include <cstdlib>
extern "C"{
    #include "../lib/colores.h"
}
using namespace std;

void dmidentificacion()
{
    int dmcedula = 1724706138;
    string dmcorreo = "dylan.maldonado@epn.edu.ec";
    string dmnombre = "Dylan Isai Maldonado Morales";
    int i;
    for (i = 0; i <= dmcorreo.length(); i++)
    {
        dmnombre[i] = tolower(dmnombre[i]);
    }
    for (i = 0; i <= dmnombre.length(); i++)
    {
        dmnombre[i] = toupper(dmnombre[i]);
    }
    cout << dmBG_GREEN << "CEDULA:" <<dmcedula << dmRESET << endl;
    cout << dmBG_GREEN << "CORREO:" <<dmcorreo << dmRESET<< endl;
    cout << dmBG_GREEN << "NOMBRE:" <<dmnombre << dmRESET << endl;
}

string dmloggin()
{
    cout << dmBG_LBLUE << "------Inicia sesion antes de jugar------"<< dmRESET << endl;
    string dmusuarioyo = "dylan.maldonado@epn.edu.ec";
    string dmcontrayo = "1724706138";
    string dmprofe = "profe";
    string dmcontraprofe = "1234";
    string dmusuario;
    string dmcontraseña;
    bool dmlog;
    int dmintentos = 3;
    do
    {    
        cout << dmBG_ORANGE << "Ingrese su usuario: " << dmRESET;
        getline(cin, dmusuario);
        cout << dmBG_ORANGE << "Ingrese su contrasena: " << dmRESET;
        getline(cin, dmcontraseña);
        if( (dmusuario == dmusuarioyo && dmcontraseña == dmcontrayo) || (dmusuario == dmprofe && dmcontraseña == dmcontraprofe))
        {
            dmlog = true;
            for (int i = 0; i < dmusuario.length(); i++)
            {
                dmusuario[i] = toupper(dmusuario[i]);
            }
            cout <<dmBG_GREEN <<"Bienvenido " << dmusuario << dmRESET << endl;
            break;
        }
        if (dmlog == false)
        {
            dmintentos--;
            cout << "Nro de intentos restantes: " << dmintentos << endl;
        }
        if (dmintentos == 0)
        {
            cout << dmBG_RED << "Lo sentimos tu usuario y clave son incorrectos..!"<< dmRESET << "Gracias" << endl;
            break;
        }
    } while (dmlog == false);
    return dmusuario;
}

void dmmenujuego()
{
    string dmobservador = dmloggin();
    string dmlobo = "lobo";
    string dmuvas = "uvas";
    string dmcaperucita = "caperucita";
    cout << dmBG_GRAY << "------EL JUEGO DEL BARCO------" << dmRESET << endl;
    cout << dmlobo << " " << dmuvas << " " << dmcaperucita << " \\_" << dmobservador << ",pasajero/......." << endl;
    int dmopcion1;
    do
    {
        cout << "0. Solo" << endl;
        cout << "1. Lobo" << endl;
        cout << "2. Caperucita" << endl;
        cout << "3. Uvas" << endl;
        cout << "4. SALIR" << endl;
        string dmopcion;
        cout << "CRUZAR : ";
        cin >> dmopcion;
        dmopcion1 = stoi(dmopcion);
    } while (dmopcion1 <0 || dmopcion1 >4);
}

int main()
{
    dmidentificacion();
    dmmenujuego();
} 
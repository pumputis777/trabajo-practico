/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
// a este programa no le agregue comentarios porque no es parte del tp1, pero me acuerdo que me dijo que hiciera este programa
int num1;
int num2;
int suma;
int resta;
int multiplicacion;
int division;
cout<< "este programa suma,resta,multiplica y divide dos numeros" <<endl;
cout<<"ingrese el primer numero: ";
cin>> num1;
cout<<"ingrese el segundo numero: ";
cin>> num2;
suma = num1 + num2;
multiplicacion= num1 * num2;
resta = num1 - num2; 
division = num1 / num2;
cout<<"este es el resultado de la suma: " <<suma<<endl;
cout<<"este es el resultado de la resta: " <<resta<<endl;
cout<<"este es el resultado de la multiplicacion: " <<multiplicacion<<endl;
cout<<"este es el resultado de la division: " <<division<<endl;
    return 0;
}

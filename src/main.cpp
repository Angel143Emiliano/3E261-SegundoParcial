#include <iostream>
#include <Foco.hpp>
#include <SerieFocos.hpp>

int main( int argc, char const *argv[])
{
SerieFocos serie;
serie.MostrarFocos();
serie.EncenderFocos();
serie.ApagarFocos();
serie.MostrarFocos();


int* dir =(int*) malloc(sizeof(int));
*dir =7;
cout<<*dir<<endl;

return 0;
}
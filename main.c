#include <windows.h>
#include <stdio.h>

void stealClipboard() {
    if(OpenClipboard(NULL)) {
        HANDLE hData = GetClipboardData(CF_TEXT);
        if (hData) {
            printf("Clipboard: %s\n", (char *)hData);
        }
        CloseClipboard();
    }
}

int main() {
    stealClipboard();
    return 0;
}



#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;

int main() {

    _setmode(_fileno(stdout), _O_U16TEXT);
    const wchar_t c[] = L"❤️";

    for (int i = 901; i <= 926; i++) {
        wcout << i << " " << c << endl;
    }
    return 0;
}
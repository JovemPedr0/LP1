#include <iostream>
#include <fstream>
#include <unistd.h>

using namespace std;

int main() {
    ifstream fp;
    fp.open("ufpb_brasao.png");
    if (!fp.is_open()) {
        cout << "Erro abrindo arquivo\n";
        return 0;
    }

    char c_atual;
    char c_anterior = 0;
    while (!fp.eof()) {
        fp.read(&c_atual, 1);

        if (c_atual >= '!' && c_atual <= '~' || c_atual == '\n') {
            if (c_anterior > 0)
                cout << "\033[40;32m" << c_anterior;
            cout << "\033[40;37;1m" << c_atual;
            cout.flush();
            usleep(10000);
            c_anterior = c_atual;
            cout << "\b";
        }
    }
}
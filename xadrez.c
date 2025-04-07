#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0) {
        print("Direita\n");
        moverTorre(casas - 1);
    }
}

int main () {
    moverTorre(5);
    return 0;
}
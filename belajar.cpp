#include <stdio.h>

int main() {
    char nama[50];
    int usia;

    // Meminta input nama
    printf("Masukkan nama Anda: ");
    fgets(nama, sizeof(nama), stdin);

    // Menampilkan output
    printf("\nHalo, %s! Anda berusia %d tahun.\n", nama, usia);

    return 0;
}


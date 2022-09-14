#include <iostream>
// using namespace std;

int main () {
    int harga, jml_barang, total, pilihan;
    std::string item;
    std::cout << "Item yang Tersedia : " << std::endl;
    std::cout << "1. Keyboard : Rp. 165.000" << std::endl;
    std::cout << "2. Mouse : Rp. 75.000" << std::endl;
    std::cout << "3. Flashdisk 16GB : Rp. 82.000" << std::endl;
    std::cout << "4. Keluar Aplikasi" << std::endl;
    do {
        std::cout << "Input Kode ";
        std::cin >> pilihan;
    switch(pilihan) {
        case 1 :
            item = "Keyboard";
            harga = 165000;
            std::cout << "Jumlah Item yang akan Dibeli : ";
            std::cin >> jml_barang;
            total += harga * jml_barang;
            std::cout << jml_barang << " " << item;
            std::cout << " = Rp. "<<harga*jml_barang << std::endl;
            break;

        case 2 :
        item = "Mouse";
        harga = 75000;
        std::cout << "Jumlah Item yang akan Dibeli : ";
        std::cin >> jml_barang;
        total += harga * jml_barang;
        std::cout << jml_barang << " " << item;
        std::cout << " = Rp. "<<harga*jml_barang << std::endl;
        break;

        case 3 :
        item = "Flashdisk 16GB";
        harga = 82000;
        std::cout << "Jumlah Item yang akan Dibeli : ";
        std::cin >> jml_barang;
        total += harga * jml_barang;
        std::cout << jml_barang << " " << item;
        std::cout << " = Rp. "<<harga*jml_barang << std::endl;
        break;

        case 4 :
            std::cout << "Total Belanja : Rp. " << total << std::endl;
            pilihan = 4;
            break;
        default :
            std::cout << "FAILED : Input tidak valid." << std::endl;
            break;
        }
    } while(pilihan != 4);
    system("pause > 0"); // This is not recommended to use because This Function is not portable and only work for Windows Operating System
    std::cout << "Terimakasih Telah berbelanja disini";
    
} 

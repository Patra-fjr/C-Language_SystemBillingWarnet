#include <stdio.h>  
#include <string.h> 
 
// Fungsi untuk menghitung biaya berdasarkan perangkat, paket, dan waktu 
float hitung_biaya(int perangkat, int paket, int waktu) { 
    float harga_perangkat_per_jam = 0, harga_paket_per_jam = 0, harga_member = 5000; 
 
    // Tentukan harga per jam berdasarkan perangkat 
    if (perangkat == 1) { 
        harga_perangkat_per_jam = 5000; // Harga PC per jam 
    } else if (perangkat == 2) { 
        harga_perangkat_per_jam = 5000; // Harga PlayStation per jam 
    } else if (perangkat == 3) { 
        harga_perangkat_per_jam = 5000; // Harga Nintendo per jam 
    } 
 
    // Tentukan harga per jam berdasarkan paket 
    if (paket == 1) { 
        harga_paket_per_jam = 5000; // Paket Reguler 
    } else if (paket == 2) { 
        harga_paket_per_jam = 10000; // Paket VIP 
    } else if (paket == 3) { 
        harga_paket_per_jam = 15000; // Paket VVIP 
    } 
 
    // Hitung biaya total 
    return (harga_perangkat_per_jam + harga_paket_per_jam + harga_member) * waktu; 
} 
 
// Fungsi untuk menghasilkan username berdasarkan nama pelanggan dan nomor room 
void generate_username(char *nama, int nomor_room, char *username) { 
    snprintf(username, 30, "%s_room%d", nama, nomor_room); 
}

int main() { 
    int perangkat, paket, waktu, nomor_room; 
    float total_biaya, pembayaran, kembalian; 
    char nama[50], username[30], ulang; 
 
    do { 
        // Tampilkan menu utama 
        printf("\n=== Sistem Billing Warnet ===\n"); 
        printf("1. Registrasi Pelayanan\n"); 
        printf("2. Pilih Paket\n"); 
        printf("3. Pembayaran\n"); 
        printf("4. Keluar\n"); 
        printf("Pilih menu (1-4): "); 
        int menu; 
        scanf("%d", &menu); 
 
        // Periksa pilihan menu 
        if (menu == 1) { 
            printf("\n--- Registrasi Pelanggan ---\n"); 
            printf("Masukkan nama pelanggan: "); 
            scanf("%s", nama); 
 
            // Input nomor room yang valid 
            do { 
                printf("Masukkan nomor room (1-20): "); 
                scanf("%d", &nomor_room); 
                if (nomor_room < 1 || nomor_room > 20) { 
                    printf("Nomor room tidak valid. Harus antara 1 hingga 20.\n"); 
                } 
            } while (nomor_room < 1 || nomor_room > 20); 
 
            printf("Registrasi pelanggan berhasil!\n"); 
        } else if (menu == 2) { 
            printf("\n--- Pilih Paket ---\n"); 
 
            // Input jenis perangkat yang valid 
            do { 
                printf("Masukkan jenis perangkat (1: PC, 2: PlayStation, 3: Nintendo): "); 
                scanf("%d", &perangkat); 
                if (perangkat < 1 || perangkat > 3) { 
                    printf("Jenis perangkat tidak valid.\n"); 
                } 
            } while (perangkat < 1 || perangkat > 3); 
 
            // Input jenis paket yang valid 
            do { 
                printf("Masukkan jenis paket (1: Reguler, 2: VIP, 3: VVIP): "); 
                scanf("%d", &paket); 
                if (paket < 1 || paket > 3) { 
                    printf("Jenis paket tidak valid.\n"); 
                } 
            } while (paket < 1 || paket > 3); 
            
            // Input waktu penggunaan yang valid 
            do { 
                printf("Masukkan waktu penggunaan (dalam jam): "); 
                scanf("%d", &waktu); 
                if (waktu <= 0) { 
                    printf("Waktu harus lebih dari 0 jam.\n"); 
                } 
            } while (waktu <= 0); 
 
            printf("Paket berhasil dipilih!\n"); 
        } else if (menu == 3) { 
            printf("\n--- Pembayaran ---\n"); 
 
            // Hitung biaya 
            total_biaya = hitung_biaya(perangkat, paket, waktu); 
            printf("Total biaya yang harus dibayar: Rp %.2f\n", total_biaya); 
 
            // Tampilkan username 
            generate_username(nama, nomor_room, username); 
            printf("Username: %s\n", username); 
 
            // Input jumlah pembayaran dari customer 
            printf("Masukkan jumlah pembayaran: Rp "); 
            scanf("%f", &pembayaran); 
            
            // Hitung kembalian 
            kembalian = pembayaran - total_biaya; 
            if (kembalian < 0) { 
                printf("Uang yang dibayarkan kurang. Silakan bayar sesuai atau lebih dari total biaya.\n"); 
            } else { 
                printf("Kembalian: Rp %.2f\n", kembalian); 
                printf("\n--- Struk Pembayaran ---\n"); 
                printf("Nama Pelanggan: %s\n", nama); 
                printf("Nomor Room: %d\n", nomor_room); 
                printf("Jenis Perangkat: %s\n", (perangkat == 1) ? "PC" : (perangkat == 2) ? "PlayStation" : "Nintendo"); 
                printf("Jenis Paket: %s\n", (paket == 1) ? "Reguler" : (paket == 2) ? "VIP" : "VVIP"); 
                printf("Waktu Penggunaan: %d jam\n", waktu); 
                printf("Total Biaya: Rp %.2f\n", total_biaya); 
                printf("Jumlah Pembayaran: Rp %.2f\n", pembayaran); 
                printf("Kembalian: Rp %.2f\n", kembalian); 
                printf("--------------------------\n"); 
                printf("Pembayaran berhasil dilakukan dengan CASH.\n"); 
            } 
        } else if (menu == 4) { 
            printf("Terima kasih telah berkunjung ke warnet kami!\n"); 
            break; 
        } else { 
            printf("Pilihan menu tidak valid. Silakan coba lagi.\n");
        }
        
        // Tanyakan apakah ingin kembali ke menu awal 
        printf("Pilih Ya untuk meneruskan ke menu selanjutnya? (y/n) : "); 
        scanf(" %c", &ulang); 
    } while (ulang == 'y' || ulang == 'Y'); 
 
    return 0; 
}
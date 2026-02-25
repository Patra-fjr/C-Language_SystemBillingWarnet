# 🎮 Sistem Billing Warnet

Sistem billing warnet sederhana yang dibangun menggunakan bahasa C untuk mengelola registrasi pelanggan, pemilihan paket, dan pembayaran di warnet (warung internet).

## 📋 Deskripsi

Aplikasi ini adalah sistem billing berbasis console yang memungkinkan operator warnet untuk:
- Meregistrasi pelanggan baru
- Memilih jenis perangkat (PC, PlayStation, Nintendo)
- Memilih paket layanan (Reguler, VIP, VVIP)
- Menghitung biaya otomatis
- Memproses pembayaran dan mencetak struk

**Project ini dibuat untuk memenuhi tugas Projek Bahasa C.**

## 👥 Tim Pengembang

Project ini dikerjakan oleh:
1. **Putra Fajar Indra Setiawan**
2. **Muhammad Radhwa Bagas Widyasa**
3. **Hiroshi Gusti Amrridho**

## ✨ Fitur

- **Registrasi Pelanggan**: Mendaftarkan nama pelanggan dan nomor room (1-20)
- **Pilihan Perangkat**: 
  - PC (Rp 5.000/jam)
  - PlayStation (Rp 5.000/jam)
  - Nintendo (Rp 5.000/jam)
- **Pilihan Paket**:
  - Reguler (Rp 5.000/jam)
  - VIP (Rp 10.000/jam)
  - VVIP (Rp 15.000/jam)
- **Biaya Member**: Rp 5.000 (biaya tambahan)
- **Generate Username**: Otomatis membuat username berdasarkan nama dan nomor room
- **Perhitungan Otomatis**: Menghitung total biaya dan kembalian
- **Struk Pembayaran**: Menampilkan detail transaksi lengkap
- **Validasi Input**: Memastikan semua input pengguna valid

## 🔧 Teknologi

- **Bahasa Pemrograman**: C
- **Library**: 
  - `stdio.h` - Input/Output
  - `string.h` - Manipulasi string

## 📦 Cara Instalasi dan Menjalankan

### Prasyarat
- Compiler C (GCC, MinGW, atau compiler C lainnya)
- Terminal/Command Prompt

### Langkah-langkah

1. **Clone repository**
```bash
git clone https://github.com/Patra-fjr/C-Language_SystemBillingWarnet.git
cd C-Language_SystemBillingWarnet
```

2. **Kompilasi program**
```bash
gcc index.c -o billing
```

3. **Jalankan program**

**Windows:**
```bash
billing.exe
```

**Linux/Mac:**
```bash
./billing
```

## 💻 Cara Penggunaan

1. **Jalankan program** - Program akan menampilkan menu utama
2. **Pilih Menu 1** - Registrasi Pelanggan
   - Masukkan nama pelanggan
   - Pilih nomor room (1-20)
3. **Pilih Menu 2** - Pilih Paket
   - Pilih jenis perangkat (1: PC, 2: PlayStation, 3: Nintendo)
   - Pilih jenis paket (1: Reguler, 2: VIP, 3: VVIP)
   - Masukkan waktu penggunaan (dalam jam)
4. **Pilih Menu 3** - Pembayaran
   - Lihat total biaya
   - Lihat username yang digenerate
   - Masukkan jumlah pembayaran
   - Lihat kembalian dan struk pembayaran
5. **Pilih Menu 4** - Keluar dari program

## 📊 Rumus Perhitungan Biaya

```
Total Biaya = (Harga Perangkat + Harga Paket + Biaya Member) × Waktu
```

**Contoh:**
- Perangkat: PC (Rp 5.000/jam)
- Paket: VIP (Rp 10.000/jam)
- Biaya Member: Rp 5.000
- Waktu: 2 jam

```
Total = (5.000 + 10.000 + 5.000) × 2 = Rp 40.000
```

## 📸 Contoh Output

```
=== Sistem Billing Warnet ===
1. Registrasi Pelayanan
2. Pilih Paket
3. Pembayaran
4. Keluar
Pilih menu (1-4): 3

--- Pembayaran ---
Total biaya yang harus dibayar: Rp 40000.00
Username: Budi_room5
Masukkan jumlah pembayaran: Rp 50000
Kembalian: Rp 10000.00

--- Struk Pembayaran ---
Nama Pelanggan: Budi
Nomor Room: 5
Jenis Perangkat: PC
Jenis Paket: VIP
Waktu Penggunaan: 2 jam
Total Biaya: Rp 40000.00
Jumlah Pembayaran: Rp 50000.00
Kembalian: Rp 10000.00
--------------------------
Pembayaran berhasil dilakukan dengan CASH.
```

## 🔍 Struktur Kode

### Fungsi Utama

- **`hitung_biaya()`**: Menghitung total biaya berdasarkan perangkat, paket, dan waktu
- **`generate_username()`**: Membuat username dari nama pelanggan dan nomor room
- **`main()`**: Fungsi utama yang menjalankan menu sistem billing

## 🚀 Pengembangan Lebih Lanjut

Beberapa ide untuk pengembangan:
- [ ] Tambahkan sistem database untuk menyimpan data pelanggan
- [ ] Implementasi metode pembayaran digital (E-wallet, Transfer Bank)
- [ ] Sistem diskon untuk pelanggan setia
- [ ] Laporan transaksi harian/bulanan
- [ ] GUI menggunakan library seperti GTK atau Qt
- [ ] Sistem booking room
- [ ] Tracking waktu real-time

## 🤝 Kontribusi

Kontribusi selalu diterima! Silakan:
1. Fork repository ini
2. Buat branch fitur baru (`git checkout -b fitur-baru`)
3. Commit perubahan (`git commit -m 'Menambahkan fitur baru'`)
4. Push ke branch (`git push origin fitur-baru`)
5. Buat Pull Request

## 📝 Lisensi

Project ini dibuat untuk keperluan edukasi dan pembelajaran bahasa pemrograman C.

## 📧 Kontak

Jika ada pertanyaan atau saran, silakan hubungi salah satu anggota tim atau buat issue di repository ini.

---

⭐ Jangan lupa berikan star jika project ini bermanfaat!

**© 2026 - Tim Sistem Billing Warnet**
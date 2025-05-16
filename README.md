# program-tiket-bus-cpp
Program sederhana pemesanan tiket bus menggunakan bahasa C++, cocok untuk latihan logika pemrograman.

---

# 🚌 Agen Bus Perjalanan – C++ CLI App

Program konsol untuk mensimulasikan sistem pemesanan tiket bus dengan input data penumpang, kode bus, tujuan, perhitungan harga tiket, PPN, hingga hadiah dan kembalian.

---

## 🎯 Fitur Utama

- Input nama penumpang, kode bus, dan tujuan perjalanan
- Identifikasi nama bus dari kode (`R`, `S`, `H`)
- Penentuan harga tiket dari kode tujuan (`SBY`, `MLG`, dll)
- Perhitungan total harga, PPN (5%), dan kembalian
- Hadiah spesial jika beli lebih dari 3 tiket

---

## 💻 Contoh Output

```
AGEN BUS PERJALANAN
---------------------------------------------------------------
Masukan Nama Penumpang      : LUQMAN
Masukan Kode Bus [R/S/H]    : R
Masukan Kode Tujuan         : MLG

AGEN BUS PERJALANAN
***************************************************************
Nama Bus                : Rosalinda
Tujuan                  : Malang
Harga Tiket             : 400000
Masukkan Jumlah Beli    : 4
***************************************************************
Total Harga             : 1600000
Hadiah                  : Jam Tangan
PPN                     : 80000
Total Bayar             : 1680000
Masukan Pembayaran      : 1700000
Uang Kembaliannya       : 20000
*********************Terima Kasih******************************
```

---

## 🧠 Konsep yang Dipakai

- `struct` dan manipulasi string (`strcpy`, `strupr`)
- Percabangan `switch` & `if else`
- Perhitungan aritmatika dasar di C++
- Format CLI untuk simulasi agen tiket sederhana

---

**luqmanaru** 

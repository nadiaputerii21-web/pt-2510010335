# P07 std::string dan Validasi Masukan

## Isi Folder
| File | Kegunaan |
|---|---|
| `gabung_banding.cpp` | Mempelajari cara menggabungkan, membandingkan, dan mengakses karakter dalam string |
| `huruf_per_huruf.cpp` | Mengolah teks menggunakan perulangan, seperti menghitung vokal, jumlah kata, dan membalik tulisan |
| `rapikan_nama.cpp` | Mengubah format penulisan nama agar setiap kata diawali huruf kapital |
| `getline_campur.cpp` | Memahami penggunaan `getline()` dan masalah karakter Enter yang tertinggal setelah input |
| `input_aman.cpp` | Mempelajari cara menangani kesalahan saat pengguna memasukkan data yang tidak sesuai |
| `validasi_nama.cpp` | Memastikan nama yang dimasukkan memenuhi ketentuan sebelum diproses |
| `sinilai_v06_awal.cpp` | Kode awal SiNilai v0.6 yang masih perlu dilengkapi |
| `sinilai_v06.cpp` | Hasil pengembangan SiNilai v0.6 dengan validasi input dan pengolahan nama |
| `contoh_masukan.txt` | Data pengujian untuk melihat kemampuan program dalam menangani berbagai jenis input |
| `.vscode/` | Berisi pengaturan editor Visual Studio Code |
| `.gitignore` | Menentukan file atau folder yang tidak perlu dimasukkan ke Git |

## Kasus Uji SiNilai v0.6

- Nama ditulis dengan format huruf yang tidak beraturan, seperti `siti AMINAH` dan `BUDI SANTOSO`.
- Terdapat baris kosong sebelum nama Budi.
- Nama `r2d2` dimasukkan sebelum nama Rina.
- Input `abc` dimasukkan untuk nilai mingguan Dewi.
- Input `120` dimasukkan untuk nilai UTS Eko.

Program yang benar harus menolak masukan yang tidak sesuai, meminta pengguna memasukkan ulang data, dan merapikan nama secara otomatis.

Hasil akhir yang diharapkan sama dengan laporan SiNilai v0.5:

| Mahasiswa (sudah dirapikan) | Nilai akhir | Huruf | Status |
|---|---:|---|---|
| Siti Aminah | 83.97 | A | Lulus |
| Budi Santoso | 67.75 | C+ | Lulus |
| Rina Wati | 49.50 | D | Belum lulus |
| Dewi Lestari | 90.00 | A | Lulus |
| Eko Prasetyo | 71.00 | B | Lulus |
| Fajar Nugroho | 25.75 | E | Belum lulus |

**Laporan kelas:**
- Jumlah mahasiswa: 6
- Lulus: 4
- Belum lulus: 2
- Rata-rata kelas: 64.66
- Nilai tertinggi: Dewi Lestari (90.00)

**Sebaran huruf mutu:**
- A: 2 mahasiswa
- B: 1 mahasiswa
- C: 1 mahasiswa
- D: 1 mahasiswa
- E: 1 mahasiswa

Starter (`sinilai_v06_awal.cpp`) dapat berjalan dengan masukan yang bersih, tetapi belum mampu menangani masukan yang salah pada `contoh_masukan.txt`. Program tersebut harus dilengkapi hingga menghasilkan laporan yang sesuai dengan SiNilai v0.5

## Deklarasi AI

AI yang digunakan: **ChatGPT**
**Prompt:**
"Jelaskan fungsi `cin.fail()`, `cin.clear()`, `cin.ignore()`, `do-while`, `isdigit()`, `toupper()`, dan `tolower()` dalam program validasi masukan C++. Berikan penjelasan sederhana beserta contoh agar mudah dipahami"

**Umpan Balik AI:**
AI membantu menjelaskan fungsi `cin.fail()`, `cin.clear()`, dan `cin.ignore()`, penggunaan `do-while` untuk validasi nama, serta penggunaan `toupper()` dan `tolower()` untuk merapikan nama. Kode yang diberikan diperiksa kembali dan disesuaikan dengan instruksi praktikum sebelum digunakan
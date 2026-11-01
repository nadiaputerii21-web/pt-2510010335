# P06 Perulangan Lanjutan: Bersarang, break, continue, Debugger, iomanip

Folder kode Pertemuan 6 Pemrograman Terstruktur. Setiap program berpasangan dengan flowchart di modul;
pada perulangan bersarang ada dua panah yang kembali, dan pada break/continue ada panah yang
"memotong jalan".

## Isi

| Berkas | Kegunaan |
|---|---|
| `bersarang_tabel.cpp` | Mempelajari perulangan bersarang menggunakan `for` di dalam `for` untuk membuat tabel perkalian. |
| `break_tebak.cpp` | Mempelajari penggunaan `break` untuk menghentikan perulangan ketika tebakan sudah benar. |
| `continue_remediasi.cpp` | Mempelajari penggunaan `continue` untuk melewati iterasi tertentu dan menampilkan mahasiswa yang perlu remediasi. |
| `rapi_iomanip.cpp` | Mempelajari pengaturan tampilan output menggunakan `fixed`, `setprecision`, `setw`, `left`, dan `right`. |
| `debug_rerata.cpp` | Mempelajari cara menemukan dan memperbaiki kesalahan logika program menggunakan debugger. |
| `masukan_debug.txt` | Berisi data nilai yang digunakan sebagai input untuk menguji program `debug_rerata.cpp`. |
| `sinilai_v05_awal.cpp` | Program awal SiNilai v0.5 yang akan dilengkapi dengan fitur pengolahan dan penyajian data nilai mahasiswa. |
| `contoh_masukan.txt` | Berisi data enam mahasiswa untuk menguji program SiNilai v0.5. |
| `.vscode/launch.json` | Mengatur konfigurasi debugger agar program dapat dijalankan dan diperiksa melalui VS Code. |
| `.vscode/settings.json`, `tasks.json`, `.gitignore` | Berisi konfigurasi dan pengaturan proyek seperti pada pertemuan sebelumnya. |

## Kasus uji SiNilai v0.5 (`./sinilai_v05 < contoh_masukan.txt`)

| Mahasiswa | Komponen Nilai | Nilai Akhir | Huruf | Status |
|---|---|---:|---|---|
| Siti Aminah | 100, 85.5, 78, 80 | 83.97 | A | Lulus |
| Budi Santoso | 80, 70, 65, 60 | 67.75 | C+ | Lulus |
| Rina Wati | 60, 50, 40, 55 | 49.50 | D | Belum lulus |
| Dewi Lestari | 90, 90, 90, 90 | 90.00 | A | Lulus |
| Eko Prasetyo | 75, 72, 70, 68 | 71.00 | B | Lulus |
| Fajar Nugroho | 30, 20, 35, 25 | 25.75 | E | Belum lulus |

### Laporan Kelas

- Jumlah mahasiswa: 6 orang.
- Lulus: 4 orang.
- Belum lulus: 2 orang.
- Rata-rata kelas: 64.66.
- Nilai tertinggi: Dewi Lestari (90.00).

### Sebaran Huruf

| Kategori | Jumlah |
|---|---:|
| A | 2 |
| B | 1 |
| C | 1 |
| D | 1 |
| E | 1 |

**Catatan:** Nilai B+ dihitung sebagai kategori B dan C+ dihitung sebagai kategori C.

Nilai 83.975 dapat ditampilkan sebagai 83.97, bukan 83.98, karena angka tersebut dapat tersimpan di komputer sebagai nilai yang sedikit lebih kecil, misalnya 83.97499... Pembulatan mengikuti nilai yang tersimpan dalam representasi komputer.

## Debugger

Konfigurasi `launch.json` menggunakan GDB dari MSYS2 dengan lokasi:
C:/msys64/ucrt64/bin/gdb.exe

Program dijalankan menggunakan file `.exe` hasil kompilasi dari `tasks.json`. Untuk memulai proses debugging, buka file `.cpp` yang ingin diperiksa, kemudian tekan **F5**.

Penyesuaian berdasarkan sistem operasi:

- **Linux:** Hapus akhiran `.exe` pada nama program dan ubah `miDebuggerPath` menjadi `/usr/bin/gdb`.
- **macOS:** Ubah `MIMode` menjadi `lldb` dan hapus `miDebuggerPath`.

Panduan lengkap dapat dilihat pada `03_Modul/Panduan_Debugger_VS_Code.docx`.

## Deklarasi AI

- **AI yang digunakan:** ChatGPT 
- **Prompt:** Meminta penjelasan mengenai konsep perulangan bersarang, `break`, `continue`, penggunaan `iomanip`, serta cara menggunakan debugger. AI juga diminta membantu memahami kode dan menganalisis hasil program.
- **Bentuk bantuan AI:** Memberikan penjelasan fungsi setiap bagian kode, membantu memahami alur program, serta memberikan contoh pengujian dan kemungkinan hasil output.
- **Cara memeriksa hasil AI:** Setiap saran dan kode dari AI diperiksa kembali dengan membandingkannya dengan instruksi pada modul praktikum. Hasil output dibandingkan dengan hasil yang seharusnya, termasuk memeriksa kondisi perulangan, perhitungan nilai, dan hasil rata-rata. Untuk materi debugger, pemeriksaan dilakukan dengan breakpoint dan melihat perubahan nilai variabel selama program berjalan.
- **Umpan balik AI:** AI membantu memahami materi dan menemukan kesalahan, tetapi hasilnya tetap perlu diperiksa dan diuji secara mandiri agar sesuai dengan instruksi praktikum.
# P05 Perulangan: for, while, do-while

Folder kode Pertemuan 5 Pemrograman Terstruktur. Setiap program punya flowchart pasangannya
di modul (Gambar 1 sampai 5); perhatikan panah yang kembali ke atas, itulah perulangan.

## Isi

| Berkas | Kegunaan |
|---|---|
| `for_hitung.cpp` | Menggunakan `for` untuk mengulang proses sebanyak jumlah yang diketahui. Mempelajari nilai awal, kondisi, dan kenaikan penghitung (`i++`). |
| `for_jumlah.cpp` | Menggunakan akumulator untuk menghitung total dan rata-rata nilai serta menghitung banyak nilai yang lulus. |
| `while_sentinel.cpp` | Menggunakan `while` untuk memasukkan nilai satu per satu dengan angka negatif sebagai tanda berhenti (sentinel). |
| `do_while_menu.cpp` | Menggunakan `do-while` untuk menampilkan menu berulang sampai pengguna memilih keluar. Pilihan diproses menggunakan `switch-case`. |
| `sinilai_v04.cpp` | Mengembangkan SiNilai v0.3 agar dapat memproses beberapa mahasiswa sekaligus dan menampilkan rekap kelas. |
| `contoh_masukan.txt` | Berisi data tiga mahasiswa untuk menguji program SiNilai v0.4. |
| `.vscode/`, `.gitignore` | Sama dengan pertemuan sebelumnya |

## Kasus Uji SiNilai v0.4

Program SiNilai v0.4 memproses nilai kehadiran, mingguan, UTS, dan UAS menggunakan bobot yang telah ditentukan.

| Mahasiswa | Komponen (Kehadiran, Mingguan, UTS, UAS) | Nilai akhir | Huruf | Status |
|---|---|---:|---|---|
| Siti Aminah | 100, 85.5, 78, 80 | 83.975 | A | Lulus |
| Budi Santoso | 80, 70, 65, 60 | 67.75 | C+ | Lulus |
| Rina Wati | 60, 50, 40, 55 | 49.5 | D | Belum lulus |

Rekap kelas: 3 mahasiswa, 2 lulus, 1 belum lulus, dan rata-rata kelas 67.075.

Jumlah mahasiswa harus minimal 1. Jika pengguna memasukkan 0 atau bilangan negatif, pertanyaan jumlah mahasiswa akan diulang menggunakan `do-while`.

## Jika Program Berputar Tanpa Henti

Tekan `Ctrl+C` pada terminal untuk menghentikan program. Beberapa penyebab yang perlu diperiksa adalah lupa menambahkan `i++`, kondisi perulangan yang tidak pernah salah, atau input gagal dibaca karena pengguna memasukkan huruf saat program meminta angka.


## Deklarasi AI

**AI yang digunakan:** ChatGPT.

**Tujuan penggunaan AI:** Membantu memahami konsep perulangan `for`, `while`, dan `do-while` dan penggunaan akumulator.

**Prompt:** "Jelaskan perbedaan perulangan for, while, dan do-while serta cara kerja akumulator dalam bahasa yang mudah dipahami."

**Umpan balik AI:** AI memberikan penjelasan mengenai fungsi dan perbedaan setiap jenis perulangan serta contoh penggunaan akumulator untuk menghitung total dan rata-rata nilai.
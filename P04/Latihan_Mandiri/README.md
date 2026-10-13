
## Jawaban Latihan Mandiri

### Soal No. 01

Yang berulang pada flowchart bertingkat adalah proses pengambilan keputusan menggunakan kondisi if-else secara berurutan. Program akan memeriksa nilai dari kondisi paling atas terlebih dahulu. Jika kondisi benar, program mencetak huruf mutu yang sesuai dan selesai. Jika salah, program melanjutkan pemeriksaan ke kondisi berikutnya.

Pada flowchart huruf mutu, proses tersebut dilakukan untuk menentukan nilai A, B+, B, C+, C, D, atau E. Perbedaannya dengan Gambar 4 adalah flowchart ini memiliki tujuh tingkat huruf mutu, sedangkan Gambar 4 hanya memiliki empat kemungkinan hasil, yaitu A, B, C, dan D.

### Soal No. 04

Sebelum diubah, variabel pilihan bertipe `int`, sehingga penulisan `case` menggunakan angka tanpa tanda petik, misalnya `case 1:`.

Setelah diubah, variabel pilihan bertipe `char`, sehingga setiap pilihan harus ditulis sebagai karakter dengan tanda petik satu, misalnya `case '1':`. Huruf k juga ditulis `case 'k':` untuk pilihan keluar.

### Soal No. 05

**Apakah hasilnya persis sama untuk nilai 79.9?**

Hasilnya bisa berbeda, tergantung cara penulisan `switch`. Fungsi `static_cast<int>(nilai) / 10` menghilangkan angka di belakang koma, sehingga nilai 79.9 menjadi 79 dan masuk ke `case 7`. Jika `case 7` langsung menghasilkan huruf B, hasilnya berbeda dari kode `if-else` yang menghasilkan B+. Namun, jika ditambahkan kondisi untuk membedakan nilai 75 ke atas dan di bawah 75, hasilnya tetap sama, yaitu B+.
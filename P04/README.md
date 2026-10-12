# P04 — Percabangan

### 1. `if_dasar.cpp` — if Satu Cabang

Percabangan `if` digunakan untuk menjalankan perintah ketika suatu kondisi bernilai benar. Pada program ini, operator `< 60` digunakan untuk menampilkan peringatan apabila nilai akhir berada di bawah 60.

Kurung kurawal `{ }` berfungsi untuk mengelompokkan beberapa pernyataan agar semuanya mengikuti kondisi `if`.

### 2. `if_else.cpp` — if else

Percabangan `if-else` digunakan untuk memilih satu dari dua kondisi, yaitu lulus atau belum lulus. Program menggunakan operator `>= 60` untuk menentukan kelulusan sesuai aturan bahwa nilai minimal 60 dinyatakan lulus.

Operator `=` digunakan untuk memberikan nilai, sedangkan `==` digunakan untuk membandingkan kesamaan dua nilai.

### 3. `bertingkat.cpp` — If Else Bertingkat

Percabangan `if-else` bertingkat digunakan untuk menentukan huruf mutu berdasarkan rentang nilai. Urutan kondisi harus dimulai dari nilai tertinggi menuju terendah agar hasil konversi sesuai.

Kategori B+ untuk nilai 75 sampai kurang dari 80 ditempatkan setelah kategori A dan sebelum kategori B. Jika kondisi `nilai >= 60` diletakkan paling atas, nilai yang seharusnya mendapat A dapat langsung masuk ke kategori C.

### 4. `logika.cpp` — Operator Logika

Program ini menggunakan operator logika untuk menentukan apakah mahasiswa boleh mengikuti UAS berdasarkan presensi dan kelengkapan tugas.

* `&&` (AND): kedua kondisi harus benar.
* `||` (OR): cukup salah satu kondisi benar.
* `!` (NOT): membalik nilai logika, dari benar menjadi salah atau sebaliknya.
* `%` (modulo): menghasilkan sisa pembagian. Operator `% 2 == 0` digunakan untuk memeriksa apakah suatu bilangan genap.

### 5. `switch_menu.cpp` — Switch dan Break

Percabangan `switch` digunakan untuk memilih blok program berdasarkan nilai pilihan pengguna. Setiap `case` memiliki `break;` untuk menghentikan eksekusi agar tidak berlanjut ke kasus berikutnya.

Jika `break;` dihilangkan, program dapat mengalami *fall-through*, yaitu menjalankan beberapa kasus secara berurutan. Sementara itu, `default` digunakan untuk menangani pilihan yang tidak tersedia pada menu.

## Deklarasi AI
Tidak memakai AI
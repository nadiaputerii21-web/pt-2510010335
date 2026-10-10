
# P02 — Tipe Data dan Input

## Daftar Program dan Pembahasan

| No. | Nama File | Pembahasan |
|---|---|---|
| 1 | `tipe_dasar.cpp` | Mempelajari lima tipe data dasar dalam C++, yaitu `int`, `double`, `char`, `bool`, dan `string`. Nilai `true` ditampilkan sebagai `1`, sedangkan `false` sebagai `0`. Fungsi `sizeof()` digunakan untuk mengetahui ukuran memori setiap tipe data dalam satuan byte. Percobaan mengganti `'B'` menjadi `"B"` dan `78.5` menjadi `"78.5"` menunjukkan bahwa nilai harus sesuai dengan tipe data variabelnya. |
| 2 | `konstanta.cpp` | Mempelajari penggunaan konstanta dengan kata kunci `const`. Konstanta `BOBOT_KEHADIRAN`, `BOBOT_MINGGUAN`, `BOBOT_UTS`, dan `BOBOT_UAS` digunakan untuk menentukan bobot penilaian dengan total 1 atau 100%. Mengubah nilai konstanta setelah deklarasi akan menghasilkan error karena nilainya tidak dapat diubah. |
| 3 | `input_dasar.cpp` | Mempelajari penggunaan `cin` dan `getline()` untuk membaca input. Perintah `cin >> nama;` hanya membaca satu kata, sedangkan `getline(cin, nama);` dapat membaca nama lengkap yang mengandung spasi, seperti Siti Aminah. |
| 4 | `sinilai_v01.cpp` | Membaca dan menampilkan data mahasiswa berupa nama, NPM, kehadiran, nilai mingguan, UTS, dan UAS. Tipe `string` digunakan untuk nama dan NPM agar NPM yang diawali angka nol tetap tersimpan, sedangkan `double` digunakan untuk komponen nilai. Data ditampilkan kembali dalam bentuk kartu data mahasiswa. 

Label: AI 1
Alat: ChatGPT

Penggunaan:
ChatGPT digunakan sebagai alat bantu untuk menjelaskan konsep yang belum saya pahami dan memberikan kritik terhadap kode yang sudah saya buat setelah saya mencoba mengerjakannya sendiri.

Pemeriksaan:
Saya memeriksa kembali penjelasan dan saran dari ChatGPT dengan memahami alasan di balik setiap bagian kode, kemudian menjalankan program menggunakan compiler C++. Saya memastikan program tidak menghasilkan error maupun warning dan mencocokkan keluarannya dengan `contoh_masukan.txt`. Saya juga melakukan pengujian dengan memasukkan data secara manual.
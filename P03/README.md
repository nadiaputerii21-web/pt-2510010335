# P03 — Ekspresi dan Operator

| No. | Nama File | Pembahasan |
|---|---|---|
| 1 | `operator.cpp` | Jika dua bilangan bertipe int dibagi, hasil pecahannya akan dibuang, sedangkan jika menggunakan double, hasilnya bisa berupa bilangan desimal. Operator % hanya bisa digunakan untuk bilangan bulat.Pembagian bilangan negatif di C++ memotong hasil ke arah nol, sedangkan Python menggunakan pembulatan ke bawah untuk pembagian bulat. |
| 2 | `prioritas.cpp` | Mempelajari bahwa urutan pengerjaan operasi matematika dalam C++ mengikuti aturan prioritas operator. Operasi di dalam kurung dikerjakan lebih dahulu, sedangkan perkalian, pembagian, dan sisa bagi memiliki prioritas lebih tinggi daripada penjumlahan dan pengurangan. Jika operator memiliki prioritas yang sama, pengerjaannya umumnya dilakukan dari kiri ke kanan. Selain itu, pembagian bilangan bulat akan membuang angka di belakang koma, sehingga hasilnya bisa berbeda dari perhitungan matematika biasa.
**Catatan:** Pada langkah ketiga, contoh 2 / 4 * 3 bisa menghasilkan 1 dengan lebih dari satu cara, misalnya (2 * 3) / 4 atau 2 / (4 / 3) tidak menghasilkan 1 karena 4 / 3 pada bilangan bulat menjadi 1, lalu 2 / 1 * 3 menjadi 6. Jadi, cara yang aman adalah (2 * 3) / 4.. |
| 3 | `campuran.cpp` | Mempelajari pengaruh tipe data `int` dan `double` terhadap hasil perhitungan rata-rata. Penggunaan `double` atau `static_cast<double>` membantu mempertahankan bagian pecahan dalam pembagian. |
| 4 | `sinilai_v02.cpp` | Mempelajari cara menghitung nilai akhir mahasiswa menggunakan empat komponen, yaitu kehadiran, nilai mingguan, UTS, dan UAS yang masing-masing memiliki bobot berbeda. Selain itu, dipelajari cara menghitung rata-rata sederhana dari keempat komponen tersebut. Hasil perhitungan ditampilkan bersama nama dan NPM mahasiswa. Dari praktikum ini, dapat dipahami bahwa penggunaan konstanta bobot membantu perhitungan nilai menjadi lebih teratur dan sesuai dengan rumus yang telah ditentukan. |

## Deklarasi AI
**Alat yang digunakan :** ChatGPT
**Kegunaannya Untuk :** Membantu memahami instruksi tugas, Meminta penjelasan dan kritik setelah mencoba mengerjakan sendiri
**Cara memeriksa kebenarannya :** Kode tetap ditulis dan diuji secara mandiri menggunakan compiler C++ (g++) dan hasil program dibandingkan dengan perhitungan manual
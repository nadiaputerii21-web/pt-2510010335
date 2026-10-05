**UJI COBA**
*Coba int nilai = 85.7; lalu cetak. Kemudian ganti menjadi int nilai{85.7};. Catat perbedaan sikap compiler pada keduanya*
**Jawab:**
- Waktu dicoba `int nilai = 85.7;`, program masih bisa dijalankan dan hasil yang keluar adalah `85`. Angka `0.7`-nya hilang karena `int` hanya menyimpan bilangan bulat.

- Setelah diganti jadi `int nilai{85.7};`, program malah tidak bisa dijalankan karena compiler memberikan error. Jadi, penggunaan `{}` lebih ketat karena tidak membolehkan nilai pecahan masuk ke tipe `int` dan kehilangan bagian desimal.

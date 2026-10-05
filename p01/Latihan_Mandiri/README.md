# Catatan Kesalahan

## 1. Menghapus tanda kutip penutup pada hello.cpp

Setelah tanda kutip penutup dihapus, kemudian dilakukan build ulang.

Pesan error yang muncul:

hello.cpp:4:18: warning: missing terminating " character
    4 |     std::cout << "Halo dari C++\n;
      |                  ^
hello.cpp:4:18: error: missing terminating " character
    4 |     std::cout << "Halo dari C++\n;
      |                  ^~~~~~~~~~~~~~~~~
hello.cpp: In function 'int main()':
hello.cpp:5:5: error: expected primary-expression before 'return'
    5 |     return 0;
      |     ^~~~~~

Nomor baris yang mengalami kesalahan adalah baris 4 dan 5.

---

## 2. Menghapus `#include <iostream>`

Setelah baris `#include <iostream>` dihapus, kemudian dilakukan build ulang.

Pesan error yang muncul:

hello.cpp: In function 'int main()':
hello.cpp:3:10: error: 'cout' is not a member of 'std'
    3 |     std::cout << "Halo dari C++\n";
      |          ^~~~
hello.cpp:1:1: note: 'std::cout' is defined in header '<iostream>'; this is probably fixable by adding '#include <iostream>'
  +++ |+#include <iostream>
    1 |

Tahap yang gagal adalah tahap **kompilasi**, karena `std::cout` berasal dari library `<iostream>`, sedangkan library tersebut sudah dihapus dari program.

Pesannya berbeda dengan latihan sebelumnya karena pada latihan pertama terjadi kesalahan **sintaks**, yaitu tanda kutip tidak ditutup. Sedangkan pada latihan ini sintaks program masih benar, tetapi `std::cout` tidak dikenali karena header `<iostream>` tidak disertakan.

---

## 3. Build tanpa `-Wall -Wextra`

### Pesan apa yang hilang?

**Jawab:** Pada kode ini tidak ada pesan warning yang hilang, karena program memang tidak menghasilkan warning. Namun, jika ada potensi masalah yang menghasilkan warning, penggunaan `-Wall -Wextra` akan menampilkan peringatan tersebut, sedangkan tanpa opsi itu peringatannya bisa tidak muncul.

### Kenapa merugikan?

**Jawab:** Karena tanpa `-Wall -Wextra`, compiler tidak menampilkan beberapa warning yang sebenarnya bisa membantu kita menemukan potensi kesalahan dalam program. Akibatnya, kesalahan kecil bisa tidak kita sadari meskipun program tetap berhasil dijalankan.
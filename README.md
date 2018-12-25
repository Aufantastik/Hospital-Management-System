# Hospital-Management-System

* [Deskripsi](#deskripsi)
* [Installation](#Installation)
* [Penjelasan Program](#Penjelasan-Program)
* [Flow Chart](#Flow-Chart)
* [Contact Person](#COntact-Person)
* [Pembagian Tugas](#Pointer-Tugas)

## DESKRIPSI
Program yang kita buat adalah program Hospital Management System dimana program ini merupakan sistem financial dan sistem antrian rumah sakit. Selain karena tuntutan proyek akhir yang ditugaskan kepada kita, program ini juga bertujuan untuk memudahkan suatu rumah sakit dalam mengelola sistem keuangannya. Program ini mengimplementasikan linked list dalam bentuk antrian pasien saat ingin mendaftar atau memasuki ruangan untuk diperiksa dan juga dalam bentuk pemasukan bagi rumah sakitnya yang dibayar oleh pasien sesuai taraf yang telah ditentukan. Terdapat 7 menu pada program ini, yaitu :
1) Input Pasien
2) Batal Pasien
3) Pasien Masuk 
4) Antrian Pasien
5) Pendapatan
6) Help
7) Exit

## Installation 
1) Download atau clone repository ke desktop kamu.
2) Ekstrak ke dalam satu folder dan pastikan bahwa semua source code diletakkan di dalam satu branch.
3) Jalankan dengan membuka main.c dengan menggunakan IDE C/C++ language
4) Compile dan Run

## Penjelasan Program

<p align="center"><img src="https://github.com/Aufantastik/Hospital-Management-System/blob/master/1.PNG"></p>
1) Menu pertama untuk menginput pasien yang ingin mendaftar ke rumah sakit, pasien harus meemasukkan nama, nomor telepon, dan alamat rumah yang nantinya program kita akan mensave data tersebut. Jika ingin menginput pasien lagi maka dapat mengisinya kembali dan maksimal pasiennya adalah…. 
2) Pada menu kedua batal pasien, pasien dapat membatalkan pemesanan dan dalam program ini batal pasien menggunakan sistem pop pada struct, jadi program ini membatalkan pemesanan dari yang paling akhir memesan (bila dianalogikan dengan tumpukan, maka tumpukan paling atas yang diambil untuk membatalkan pemesanan). 
3) Pada menu ketiga pasien masuk, pasien dibolehkan masuk ke kamar-kamar yang isinya ada dokter umum, THT, dan penyakit dalam. Pada menu ketiga ini menggunakan algoritma queque dimana pasien yang pertama mendaftar dapat masuk ke kamar tersebut terlebih dahulu baru berikutnya boleh masuk. 
4) Pada  menu keempat antrian pasien, program ini akan menampilkan urutan antrian pasien dari yang pertama mendaftar, selain itu juga bila sudah ada pasien yang masuk ke kamar maka menu ini akan menampilkan antrian sisanya. 
5) Pada menu kelima pendapatan, program ini akan mengkalkulasi pembayaran dari pasien yang sudah ditentukan oleh program tiap kamar-kamarnya sehingga bisa jadi pendapatan rumah sakit ini.
6) Menu keenam adalah help, yang berfugsi pada suatu program selain menyelesaikan permasalah yang mungkin dihadapi oleh user, menu help juga memudahkan user dalam menjalankan program. 
7) Dan yang terakhir menu exit untuk keluar dari program.
<br>
![menu](/images/2.PNG)

## Flowchart

## Contact Person
Bila ada yang ingin ditanyakan dapat menghubungi kontak :

1) aufa.aydan@gmail.com / 081908921959
2) Joshua.white2@gmail.com / 081329598039

## Pembagian Tugas
1) Aufa Dhiya Aydan  : Coding, GitHub 
2) Joshua Evans Todo Sidabutar : Lead Coding, Flowchart 



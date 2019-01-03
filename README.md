# Hospital-Management-System

* [Deskripsi](#deskripsi)
* [Installation](#Installation)
* [Penjelasan Program](#Penjelasan-Program)
* [Flow Chart](#Flow-Chart)
* [Contact Person](#Contact-Person)
* [Pembagian Tugas](#Pembagian-Tugas)

## DESKRIPSI
Program yang kita buat adalah program Hospital Management System dimana program ini merupakan sistem financial dan sistem antrian rumah sakit. Selain karena tuntutan proyek akhir yang ditugaskan kepada kita, program ini juga bertujuan untuk memudahkan suatu rumah sakit dalam mengelola sistem keuangannya. Program ini mengimplementasikan linked list dalam bentuk antrian pasien saat ingin mendaftar atau memasuki ruangan untuk diperiksa dan juga dalam bentuk pemasukan bagi rumah sakitnya yang dibayar oleh pasien sesuai taraf yang telah ditentukan. Terdapat 7 menu pada program ini, yaitu :
1) Input Pasien
2) Batal Pasien
3) Pasien Masuk 
4) Antrian Pasien
5) Pendapatan
6) Help
7) Exit

<p>Created by:
<br>              Aufa Dhiya Aydan & Joshua Evans Todo Sidabutar 
<br>                        Teknik Komputer
<br>                     Universitas Indonesia</p>

## Installation 
1) Download atau clone repository ke desktop kamu.
2) Ekstrak ke dalam satu folder dan pastikan bahwa semua source code diletakkan di dalam satu branch.
3) Jalankan dengan membuka main.c dengan menggunakan IDE C/C++ language
4) Compile dan Run

## Penjelasan Program

<p align="center"><img src="https://github.com/Aufantastik/Hospital-Management-System/blob/master/1.PNG"></img></p>
1) Menu pertama untuk menginput pasien yang ingin mendaftar ke rumah sakit, pasien harus meemasukkan nama, nomor telepon, dan alamat rumah yang nantinya program kita akan mensave data tersebut. Jika ingin menginput pasien lagi maka dapat mengisinya kembali dan maksimal pasiennya adalah sebanyak memori pada komputer
<br>
2) Pada menu kedua batal pasien, pasien dapat membatalkan pemesanan dan dalam program ini batal pasien menggunakan sistem pop pada struct, jadi program ini membatalkan pemesanan dari yang paling akhir memesan (bila dianalogikan dengan tumpukan, maka tumpukan paling atas yang diambil untuk membatalkan pemesanan). 
<br>
3) Pada menu ketiga pasien masuk, pasien dibolehkan masuk ke kamar-kamar yang isinya ada dokter umum, THT, dan penyakit dalam. Pada menu ketiga ini menggunakan algoritma queque dimana pasien yang pertama mendaftar dapat masuk ke kamar tersebut terlebih dahulu baru berikutnya boleh masuk.
<br>
4) Pada  menu keempat antrian pasien, program ini akan menampilkan urutan antrian pasien dari yang pertama mendaftar, selain itu juga bila sudah ada pasien yang masuk ke kamar maka menu ini akan menampilkan antrian sisanya. 
<br>
5) Pada menu kelima pendapatan, program ini akan mengkalkulasi pembayaran dari pasien yang sudah ditentukan oleh program tiap kamar-kamarnya sehingga bisa jadi pendapatan rumah sakit ini.
<br>
6) Menu keenam adalah help, yang berfugsi pada suatu program selain menyelesaikan permasalah yang mungkin dihadapi oleh user, menu help juga memudahkan user dalam menjalankan program. 
<br>
7) Dan yang terakhir menu exit untuk keluar dari program.
<br> <br>

![menu](https://github.com/Aufantastik/Hospital-Management-System/blob/master/images/2.PNG)

<br>
VOID INPUT pada Case 1
<br>
Void inp berfungsi  untuk menginput data pasien yang akan mendaftar. Data dibuat dengan cara mengalokasikan memori untuk data pasien, lalu data akan dimasukkan dalam antrian.
<br> <br>

![menu](https://github.com/Aufantastik/Hospital-Management-System/blob/master/images/Capture.PNG)

<br>

VOID BAT pada Case 2
<br>
Void bat berfungsi untuk membatalkan pesanan pasien terakhir yang diinput. Dilakukan dengan cara menentukan data pasien terakhir (bef) yang akan dihapus lalu mengubah data sebelumnya (bef2) menjadi data terakhir dengan membuat NULL pada nextpasien.
<br>
![menu](https://github.com/Aufantastik/Hospital-Management-System/blob/master/images/Capture2.PNG)

<br> 

VOID MSK pada Case 3
<br>
Void msk berfungsi untuk memasukkan data pasien yang masuk dari antrian dengan memilih ruangan dokternya sesuai pilihan. Setelah itu data pasien akan disimpan di pendataan dan dihapus dari antrian. Dilakukan dengan cara melakukan input bagian dokter lalu harganya ditentukan dari situ. Setelah itu data akan disimpan di memori baru untuk pendataan dan dihapus dari antrian.
<br>
![menu](https://github.com/Aufantastik/Hospital-Management-System/blob/master/images/Capture3.PNG)

<br> 

VOID SHOW pada Case 4
<br>
Void show berfungsi untuk menampilkan daftar antrian yang berisi nama pemesan. Dilakukan dengan cara menampilkan data nama pasien sampai data pointer nextpasien NULL untuk berhenti.
<br>
![menu](https://github.com/Aufantastik/Hospital-Management-System/blob/master/images/Capture4.PNG)

<br> 

VOID PNDPT pada Case 5
<br>
Void pndpt berfungsi untuk menampilkan seluruh data pasien yang sudah masuk ke rumah sakit. Dilakukan dengan cara yang sama dengan menampilkan antrian di void show . Namun antrian void pndpt berbeda dan menampilkan seluruh data pasien. Setelah menampilkan sluruh data total pendapatan ditampilkan dari akumulasi pembayaran pasien.
<br>
![menu](https://github.com/Aufantastik/Hospital-Management-System/blob/master/images/Capture6.PNG)

## Program Berjalan

![menu](https://github.com/Aufantastik/Hospital-Management-System/blob/master/7.PNG)
<br>
![menu](https://github.com/Aufantastik/Hospital-Management-System/blob/master/BARUU/2.PNG)
<br>
![menu](https://github.com/Aufantastik/Hospital-Management-System/blob/master/BARUU/3.PNG)
<br>
![menu](https://github.com/Aufantastik/Hospital-Management-System/blob/master/BARUU/4.PNG)
<br>
![menu](https://github.com/Aufantastik/Hospital-Management-System/blob/master/BARUU/5.PNG)
<br>
![menu](https://github.com/Aufantastik/Hospital-Management-System/blob/master/BARUU/6.PNG)
<br>
1) Program akan menunjukkan tampilan menunya. Pilih no. 1 untuk menginput/mendaftar pasien.
2)Masukkan nama, nomor telpon, dan alamat rumah untuk meregist.
3) Inputan pasien akan ditampilkan ketika memilih menu nomor 4. 
4) Menu batal pasien akan membatalkan pasien dari urutan daftar terakhir. 
5) Pilih menu 3 untuk memasukkan pasien ke ruangan-ruangan yang sudah tersedia yang di dalamnya terbagi atas beberapa dokter-dokter spesialisnya. 
6) Pada menu 5 akan menampilkan pendapatan Rumah Sakit yang didapat dari pasien yang membayar 

## Flow Chart
<br>

![menu](https://github.com/Aufantastik/Hospital-Management-System/blob/master/flochar/Flowup.png)


## Contact Person
<br>
Bila ada yang ingin ditanyakan dapat menghubungi kontak :

1) aufa.aydan@gmail.com / 081908921959
2) Joshua.white2@gmail.com / 081329598039

## Pembagian Tugas
1) Aufa Dhiya Aydan  : Coding, GitHub 
2) Joshua Evans Todo Sidabutar : Lead Coding, Flowchart 



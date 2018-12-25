#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct baris{
  char nama[50];
  char telp[20];
  char alamat[50];
  int bagian;
  int bayar;
  struct baris *nextpasien;
};
typedef struct baris pasien;
typedef pasien *pointpasien;

void menu();
void helep();
void inp(pointpasien *head, pointpasien *tail);
void bat(pointpasien *head, pointpasien *tail);
void msk(pointpasien *head, pointpasien *tail, pointpasien *head2, pointpasien *tail2);
void show(pointpasien now);
void pndpt(pointpasien now);
int kosong(pointpasien head);

// main menu
int main()
{
	int pil;
	pointpasien head = NULL;
	pointpasien tail = NULL;
	pointpasien head2 = NULL;
	pointpasien tail2 = NULL;

	while(pil!=7)
	{
		system("cls");
		printf("Rumah Sakit Velira\n\n");
        menu();
        scanf("%i",&pil);
        switch (pil)
        {
            case 1 :
                inp(&head,&tail);
                break;
            case 2 :
                bat(&head,&tail);
                break;
            case 3 :
                msk(&head,&tail,&head2,&tail2);
                break;
            case 4 :
                show(head);
                break;
            case 5 :
                pndpt(head2);
                break;
            case 6 :
				helep();
				break;
            case 7 :
                break;
            default :
                printf("Input salah");
                getchar(); getchar();
                break;
        }
	}
}


// menu, hanya untuk ditampilkan
void menu()
{
    printf("1. Input pasien\n");
    printf("2. Batal pesan\n");
    printf("3. Pasien masuk\n");
    printf("4. Antrian pasien\n");
    printf("5. Pendapatan\n");
    printf("6. Help\n");
    printf("7. Exit\n\n");
}

// keterangan program
void helep()
{
	system("cls");
	printf("----------------------------------------------------------------------------------------------------------------\n");
	printf("| Program Hospital Management System merupakan sistem financial dan sistem antrian rumah sakit.                |\n");
	printf("| Terdapat 5 menu utuma untuk menjalankan program ini :                                                        |\n");
	printf("| 1. Input Pasien   >> Untuk menginput/ppendataan seorang pasien                                               |\n");
	printf("| 2. Batal Pesan    >> Untuk membatalkan pemesanan seorang pasien. Pembatalan dimulai dari antrian terakhir    |\n");
	printf("| 3. Pasien Masuk   >> Pasien masuk ke setiap kamar yang terbagi atas Dokter Umum, THT, Penyakit Dalam         |\n");
	printf("| 4. Antrian Pasien >> Menampilkan Antrian Pasien yang tersisa sesuai urutan mendaftarnya                      |\n");
	printf("| 5. Pendapatan     >> Penghasilan yang didapat rumah sakit dari uang yang dibayar pasien                      |\n");
    printf("----------------------------------------------------------------------------------------------------------------");
	getchar(); getchar();
}

// input pasien
void inp(pointpasien *head, pointpasien *tail)
{
	system("cls");
	pointpasien new;
	new = malloc(sizeof(pasien));

	if (new != NULL)
	{
		fflush(stdin);
		printf("Masukkan nama : ");
        fgets(new->nama,50,stdin);
        printf("Nomor telepon : ");
        fgets(new->telp,20,stdin);
        printf("Alamat rumah  : ");
        fgets(new->alamat,50,stdin);
        new->nextpasien = NULL;

        if (kosong(*head))
        {
			*head = new;
		}
		else
		{
			(*tail)->nextpasien = new;
		}
		*tail = new;
	}
	else
	{
		printf("Tidak dapat memasukkan");
	}
}

// membatalkan data terakhir diinput
void bat(pointpasien *head, pointpasien *tail)
{
	system("cls");
	pointpasien now, bef, bef2;
	now = *head;
	if (kosong(*head))
	{
		printf("Tidak ada pasien antri");
	}
	else
	{
		bef=NULL;;
		while(now != NULL)
		{
			bef2 = bef;
			bef = now;
			now = now->nextpasien;
		}
		printf("Menghapus data sebelumnya : %s ",bef->nama);
        if (bef2==NULL)
        {
            *head=NULL;
            *tail=NULL;
        }
        else
        {
            *tail = bef2;
            (*tail)->nextpasien = NULL;
        }
		free(bef);
	}
	getchar(); getchar();
}

// Data antrain masuk, menyimpan data sebelumnya di pendataan, menghapus data yang suah masuk
void msk(pointpasien *head, pointpasien *tail, pointpasien *head2, pointpasien *tail2)
{
	system("cls");
	pointpasien tem;

	if(kosong(*head))
	{
		printf("Tidak ada pasien antri");
	}
	else
	{
		printf("Nama : %s \n\n",(*head)->nama);
        printf("Pilih program \n1. Dokter Umum \n2. THT \n3. Penyakit dalam\n\n");
        scanf("%i",&(*head)->bagian);

        if ((*head)->bagian==1)
        {
            (*head)->bayar=25000;
        }
        if ((*head)->bagian==2)
        {
            (*head)->bayar=50000;
        }
        if ((*head)->bagian==3)
        {
            (*head)->bayar=100000;
        }

        pointpasien new;
		new = malloc(sizeof(pasien));
		if (new != NULL)
		{
			strcpy(new->nama,(*head)->nama);
			strcpy(new->telp,(*head)->telp);
			strcpy(new->alamat,(*head)->alamat);
			new->bagian = (*head)->bagian;
			new->bayar = (*head)->bayar;
			new->nextpasien = NULL;
			if (kosong(*head2))
			{
				*head2 = new;
			}
			else
			{
				(*tail2)->nextpasien = new;
			}
			*tail2 = new;
		}
		else
		{
			printf("MEMORI PENUH");
		}

		tem = *head;
		*head = (*head)->nextpasien;
		if (*head == NULL)
		{
			*tail = NULL;
		}
		free(tem);
	}
	getchar(); getchar();
}


// Menampilkan antrian
void show(pointpasien now)
{
	system("cls");
	int ang=1;
	if (now == NULL)
	{
		printf("Pasien kosong");
	}
	else
	{
		printf("Antrian pasien : \n\n");
		while (now != NULL)
		{
			printf("\t %i. %s ",ang,now->nama);
			ang++;
			now = now->nextpasien;
		}
	}
	getchar(); getchar();
}


// Menampilkan data pasien yang sudah masuk + total pendapatan rumah sakit
void pndpt(pointpasien now)
{
	system("cls");
	int ang=1;
	int tot=0;
	if (now == NULL)
	{
		printf("Belum ada pasien yang di data");
	}
	else
	{
		printf("Data pasien yang pernah ke rumah sakit : \n\n");
		while (now != NULL)
		{
			printf("\t %i. %s",ang,now->nama);
			printf("\t Nomor telepon : %s",now->telp);
			printf("\t Alamat        : %s",now->alamat);
			printf("\t Bagian prog   : ");
			if(now->bagian==1)
			{
				printf("Dokter Umum");
			}
			if(now->bagian==2)
			{
				printf("Dokter Umum");
			}
			if(now->bagian==3)
			{
				printf("Dokter Umum");
			}
			printf("\n \t Biaya : %i \n\n",now->bayar);
			ang++;
			tot+=now->bayar;
			now = now->nextpasien;
		}
		printf("Total pendapatan rumah sakit = %i \n",tot);
	}
	getchar(); getchar();
}

// Untuk mengecheck data kosong atau tidak
int kosong(pointpasien head)
{
	return head == NULL;
}

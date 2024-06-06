#include <stdio.h>
#include <stdlib.h>
#define MAXQUEUE 3

typedef struct
{
    int count;
    int front;
    int rear;
    int item[MAXQUEUE];
} QUEUE;

QUEUE antrean;

void inisialisasi(QUEUE *Q)
{
    Q->count = 0;
    Q->front = 0;
    Q->rear = 0;
}

int isEmpty(QUEUE *Q)
{
    int hasil = 0;
    if (Q->count == 0)
    {
        hasil = 1;
    }
    return hasil;
}

int isFull(QUEUE *Q)
{
    int hasil = 0;
    if (Q->count == MAXQUEUE)
    {
        hasil = 1;
    }
    return hasil;
}

void insert(QUEUE *Q, int data)
{
    if (isFull(Q) == 1)
    {
        printf("maaf sudah full");
    }
    else
    {
        Q->item[Q->rear] = data;
        Q->rear = (Q->rear+1) % MAXQUEUE;
        Q->count++;
    }
}

void hapus(QUEUE *Q)
{
    if (isEmpty(Q) == 1)
    {
        printf("maaf antrian kosong");
    }
    else
    {
        printf("\nmenghapus %d dari antrean", Q->item[Q->front] );
        Q->count--;
        Q->front = (Q->front++) % MAXQUEUE;
    }
}

void printQueue(QUEUE *Q)
{
    printf("\nIsi antrean: ");
    int i = Q->front;
    for (int j = i; j < Q->count; j++)
    {
        printf("%d ", Q->item[j]);
        i = (i++) % MAXQUEUE;
    }
}

int main()
{
    inisialisasi(&antrean);
    int nim;

    // insert mhs pertama
    printf("masukan 17");
    insert(&antrean,17);
    printQueue(&antrean);

    // insert mhs kedua
    printf("\nmasukan 45");
    insert(&antrean,45);
    printQueue(&antrean);

    // insert mhs ketiga
    printf("\nmasukan 45");
    insert(&antrean,77);
    printQueue(&antrean);
    
    // hapus mhs pertama 
    hapus(&antrean);

    // insert mhs keempat
    printf("\nmasukan 15");
    insert(&antrean,15);
    printQueue(&antrean);

}
#include <stdio.h>

int main(void)
{
  int idizi[10];
  int id;

  // Dizinin elemanlar�na 1-10 aras�ndaki de�erleri s�ra ile atama
  for (id=0; id<10; id++) {
       idizi[id] = id+1;
  }

  // Dizi de�erlerini ekrana yazma
  for (id=0; id<10; id++) {
       printf("%d ", idizi[id]);
  }

  return 0;
}

 #include<stdio.h>

 int main()
 {
 	char C; 
 
 printf("Harf girin: "); 
 scanf("%c", &C); 
 
 if (C>='A' && C<='Z') 
 printf("%c'nin kucugu %c'dir.\n", C, C + 'a' -'A'); 
 else if (C>='a' && C<='z') 
 printf("%c'nin buyugu %c'dir.\n", C, C + 'A' -'a'); 
 else 
 printf("Girdiginiz karakter harf degil...\n"); 
 
 return 0; 
 }

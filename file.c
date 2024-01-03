#include <stdio.h>

int main() {
   FILE *fp;
   char data[100];

   fp = fopen("filename.txt", "a");

   printf("Enter data to append:\n");
   fgets(data, sizeof(data), stdin);

   fprintf(fp, "%s", data);
   fclose(fp);

   printf("Successfully appended to the file.\n");
   return 0;
}

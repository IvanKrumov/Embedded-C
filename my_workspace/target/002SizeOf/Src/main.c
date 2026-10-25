   #include <stdio.h>
   #include <stdint.h>

   extern void initialise_monitor_handles(void);

   int main(void)
   {
       initialise_monitor_handles();

       printf("Size of char data type is %u\n", (unsigned)sizeof(char));
       printf("Size of short data type is %u\n", (unsigned)sizeof(short));
       printf("Size of int data type is %u\n", (unsigned)sizeof(int));
       printf("Size of long data type is %u\n", (unsigned)sizeof(long));
       printf("Size of long long data type is %u\n", (unsigned)sizeof(long long));
       printf("Size of double data type is %u\n", (unsigned)sizeof(double));

       for(;;);
   }

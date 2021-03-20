// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// void ltoa(unsigned long long M, int* buffer, int num);

// int main()
// {
//   int N=0;
//   unsigned long long M = 0;
//   int* buffer = NULL;
//   int sum = 0;
//   scanf("%d", &N);
//   buffer = (int*)malloc(sizeof(int)*N);
//   scanf("%lld", &M);

//   ltoa(M, buffer, N);

//   for(int i=0;i<N;i++)
//   {
//     sum += buffer[i];
//   }
//   printf("%d\n", sum);
//   free(buffer);
//   return 0;
// }

// void ltoa(unsigned long long M, int* buffer, int num)
// {
//   for(int i=0;i<num;i++)
//   {
//     unsigned long long m = pow(10,i+1);
//     printf("%lld\n", m);
//     buffer[i] = (M % m)/pow(10,i);
//     printf("%lld\n", (M % m));
//     printf("%d\n", buffer[i]);
//   }
// }

// // #include <stdio.h>
// // #include <stdlib.h>

// // int main(void)
// // {
// //   int test = 0;
// //   int H=0, W=0, N=0;
// //   int h, w;
// //   int *arr;
// //   char buf[10];
// //   scanf("%d", &test);
// //   arr = (int*)malloc(sizeof(int)*test);
// //   for(int i=0;i<test;i++)
// //   {
// //     scanf("%d %d %d", &H, &W, &N);
// //     h = 1; w =1;
// //     h = N%H;
// //     if(h == 0) h=H;
// //     w += N/H;
// //     if(N == H) w=1; 
// //     if(w/10 < 1)
// //       sprintf(buf, "%d0%d",h, w);
// //     else 
// //       sprintf(buf,"%d%d",h, w);
// //     arr[i]=atoi(buf);
// //   }
// //   for(int i=0;i<test;i++)
// //     printf("%d\n", arr[i]);
// //   free(arr);
// //   return 0;
// // }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//   int test = 0;
//   int H=0, W=0, N=0;
//   int h, w;
//   scanf("%d", &test);
//   for(int i=0;i<test;i++)
//   {
//     scanf("%d %d %d", &H, &W, &N);
//     h = 1; w =1;
//     h = N%H;
//     w += N/H;
//     if(h == 0){
//       h=H;
//       w=N/H; 
//     }
//     if(w/10 < 1)
//       printf("%d0%d\n",h, w);
//     else 
//       printf("%d%d\n",h, w);
//   }
 
//   return 0;
// }
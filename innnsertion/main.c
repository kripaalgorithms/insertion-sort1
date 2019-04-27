#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
    int K[100],n,temp,i,j;

    printf("total elements: \n");
    scanf("%d", &n);

    printf("Enter %d elements: ",n);
    for(i=0; i<n;i++)
    {
        scanf("%d",&K[i]);
    }

      for(i=1;i<n;i++)
      {
          temp=K[i];
          j=i-1;
          while(temp<K[j]&&j>=0)
          {
              K[j+1]=K[j];
              --j;
          }
          K [j+1]=temp;
      }
      printf("In ascending order: ");
      for(i=0;i<n;i++)
        printf("%d\t", K[i]);

    int k;
    for(k=0; k<n; k++);
    int count=clock();
    printf("Time: %f\n",(float)count/CLOCKS_PER_SEC);
    return 0;

}

#include <stdio.h>
#include <stdlib.h>

const int N = 100;

void Input(double arr[N][N], int n)
{
     int i;
     int j;
     for( i=0; i<n;i++)
     {
      for( j=0; j<n;j++)
      {
       double arrNum;
       printf("Position [%d][%d]: ",i,j);
       scanf("%lf",&arrNum);
       if(arrNum>=-1000&&arrNum<=1000)
       {
        arr[i][j]=arrNum;                              
       }     
       else
       {
        do
        {
             printf("The input is out of boundary!\n");
             printf("Position [%d][%d]: ",i,j);
             scanf("%lf",&arrNum);
        }while(arrNum<=-1000||arrNum>=1000);
        arr[i][j]=arrNum;   
        }  
       }       
      }
}

void Output(double arr[N][N],int n)
{
     int i;
     int j;
     printf("Printing matrix PR[%d][%d]:\n",n,n);
     for(i=0;i<n;i++)
     {
              for( j=0;j<n;j++)
              {
                      printf("%f ",arr[i][j]);
              }
              printf("\n");
     }
}

void ArrayC(double arr[N][N],double c[N],int n)
{
     int j;
     int i;
     for( j=0;j<n;j++)
     {
             double sum=0;
             for( i=0;i<n;i++)
             {
                     sum+=arr[i][j];
             }
             c[j]=sum/n;
     }
}
void PrintC(double c[N],int n)
{
     int i;
     printf("Printing array C[%d]",n);
     for( i=0;i<n;i++)
     {
             printf("%lf.2 ",c[i]);
     }
     printf("\n");
}
void bubblesort(double arr[],int n)
{
     int i,j;
     for(i=0;i<n-1;i++)
     {
     for(j=i+1;j<n;j++)
     {
       if(arr[i]>arr[j])
       {
       double temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp; 
       }         
     }
     }
}
int main()
{
    double matrix[N][N], C[N];
    int n;
    printf("Create a program which works with matrix PR[N][N] and the data must be real number between [-1000,1000].\n");
    printf("Create an array C[N] on whom elements are average of each column in the matrix PR.");
    printf("Sort the array C[N] in ascending order");
    printf("Print the results of the array C[N] before and after sorting.");
    printf("Student: Donislav Stanimirov Ginchev\n");
    printf("Choose lenght of the matrix PR: ");
    scanf("%d",&n);
    Input(matrix,n);
    Output(matrix,n);
    ArrayC(matrix,C,n);
    printf("Printing array C before sorting:\n");
    PrintC(C,n);
    printf("Printing array C after sorting:\n");
    bubblesort(C,n);
    PrintC(C,n);
    system("pause");
 return 0;   
}

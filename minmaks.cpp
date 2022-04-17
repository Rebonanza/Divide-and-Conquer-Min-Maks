#include <cstdlib>
#include <iostream>

using namespace std;

void minmax2(int A[], int i, int j, int &min, int &max ){
     /*
     Mencari nilai maksimum dan minimum di dalam tabel A yang 
     berukuran n elemen secara Divide and Conquer.
     Masukan: tabel A yang sudah terdefinisi elemen-elemennya
     Keluaran: nilai maksimum dan nilai minimum tabel
     */
     int min1, min2, max1, max2,k;
     if(i==j){
              min=A[i];
              max=A[i];
              }
     else if(i==j-1){
          if(A[i]<A[j]){
                        max=A[j];
                        min=A[i];
                        }
          else{
               max=A[i];
               min=A[j];
               }
          }
     else{
          k=(i+j)/2;
          minmax2(A,i,k,min1,max1);
          minmax2(A,(k+1),j,min2,max2);
          if(min1<min2)min=min1;
          else min=min2;
          if(max1<max2)max=max2;
          else max=max1;
          }
     }

int main(int argc, char *argv[])
{
    
    int A[100],n,i,j,min,max;
    cout<<"Mauskkan banyak data : ";
    cin>>n;
    for(int a=1;a<=n;a++){
            cout<<"Data ke-"<<a<<" : "; //Masukan data sebanyak n elemen
            cin>>A[a];
            }
    i=1;
    j=n;
    
    minmax2(A,i,j,min,max);
    
    cout<<"\nNilai max = "<<max<<endl;
    cout<<"Nilai min = "<<min<<endl<<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

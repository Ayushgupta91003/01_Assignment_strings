// #include<iostream>
// using namespace std;
// int main(){
//         int arr[6]={4,5,3,2,6,1};
//         cout<<"Original array: ";
//         for(int i=0;i<6;i++){
//                 cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//         for(int i=0;i<6-1;i++){
//                 for(int j=i;j<=6-i;j++){
//                         if(arr[j]>arr[j+1]){
//                                 int temp=arr[j];
//                                 arr[j]=arr[j+1];
//                                 arr[j+1]=temp;
//                         }
//                 }
//         }
//         cout<<"Sorted Array :";
//         for(int i=0;i<6;i++){
//                 cout<<arr[i]<<" ";
//         }
// }


#include<iostream>
using namespace std;
int main(){
        int arr[]={5,4,3,2,1};
        int n=5;
        for(int i=0;i<4;i++){
                for(int j=0;j<5-i;j++){
                        if(arr[j]>arr[j+1]){
                                int temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;
                        }
                }
        }
        for(int i=0;i<5;i++){
                cout<<arr[i]<<"  ";
        }
}
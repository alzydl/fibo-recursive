#include<iostream> using namespace std; 
//fungsi rekursif fibonacci 
int fibonacci(int n){ 
        if((n==1)||(n==0)){ 
            return(n); 
        }else{ 
            return(fibonacci(n-1)+fibonacci(n-2)); 
    } 
} 

int main(){ 
    int n,i=0; 
    float a=0; 
    cout<<"masukan angka batas fibonacci = ";
    cin>>n; 
    while(i<n){ 
        cout<<fibonacci(i)<<" "; 
        a+=fibonacci(i); //mengumpulkan nilai fibonacci lalu dijumlahkan i++; 
        
        //Perulangan Nilai Fibonacci 
        if(i<n){ 
            //memberikan tanda "+" setelah angka Fibonacci 
            cout<<" + "; 
        }else{ 
            cout<<" = "; 
            //memberikan tanda "=" sebelum nilai n 
        } 
    } cout<<a; 
    //OUTPUT HASIL TOTAL FIBONACCI 
    cout<<"\nrata - rata nilai fibonacci = "<<a/n; 
    return 0; 
}

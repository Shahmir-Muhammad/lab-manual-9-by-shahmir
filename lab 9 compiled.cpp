// sum of diagonals 
 
int num[20][20],i,j,n,sum1=0,sum2=0; 
 cout<<"enter row column number: "<<endl; 
 cin>>n; 
   cout<<"enter matrix elements: "<<endl; 
  for(i=0;i<n;i++){ 
 for(j=0;j<n;j++){ 
   
  cout<<"enter numbers in pocket["<<i<<"] ["<<j<<"]"; 
  cin>>num[i][j]; 
  
 } 
 cout<<endl; 
 } 
 for(i=0;i<n;i++){ 
  for(j=0;j<n;j++){ 
   cout<<num[i][j]<<" "; 
    
  }cout<<endl; 
  for(i=0;i<n;i++){ 
   for (j=0;j<n;j++){ 
    if(i==j){ 
sum1=sum1+num[i][j]; 
} 
if(i+j==n-1); 
sum2=sum2+num[1][2]; 
} 
} 
} 
cout<<"both side diagnol sum of matrix 
are..."<<sum1<<"and"<<sum2<<endl; 
return 0;  }




// addition of matrix 
 
 int a[4][3]; 
  int b[4][3]; 
  int i = 0;  
  int j = 0; 
  int m=0; 
  int n=0;  
   
  int addition=0; 
 cout<<"Enter size of matrix 1: "<<endl; 
 cin>>n; 
    
  for(i=1;i<=n;i++){ 
 for(j=1;j<=n;j++){ 
   
  cout<<"enter numbers in pocket["<<i<<"] ["<<j<<"]: "; 
  cin>>a[i][j]; 
  
 } 
 cout<<endl; 
 } 
  
 cout << "Matrix 1: "<<endl; 
  
 for(i=1;i<=n;i++){ 
  for(j=1;j<=n;j++){ 
   cout<<a[i][j]<<" "; 
    
  }cout<<endl; 
   
  } 
   
  cout<<"Enter size of matrix 2: "<<endl; 
  cin>>m; 
  for(i=1;i<=m;i++){ 
   for(j=1;j<=m;j++){ 
    cout<<"enter elements of matrix in pocket: ["<<i<<"] 
["<<j<<"]: "; 
    cin>>b[i][j]; 
   }cout<<endl; 
  } 
   
  cout << "Matrix 2: " << endl; 
   
  for(i=1;i<=m;i++){ 
   for(j=1;j<=m;j++){ 
    cout<<b[i][j]<<" "; 
     
    }cout<<endl; 
     
    } 
    cout<<"adding matrix a and b :"<< endl; 
     
    for(i=1;i<=n;i++){ 
   for(j=1;j<=n;j++){ 
     
    addition=a[i][j]+b[i][j]; 
    cout <<addition << " "; 
     
      } cout << endl; 
    } 
    return 0; 
     
    }
    
    
    
    
    
    
    
    //Transpose of matrix 
#include<iostream> 
using namespace std; 
int main() 
{ 
int a[4][3]; 
int i = 0 ; 
int j = 0; 
for(i=1;i<=3;i++) 
{ 
for(j=1;j<=3;j++) 
{ 
cout<<"Enter element in pocket["<<i<<"]["<<j<<"]: "; 
cin>>a[i][j]; 
 } 
        cout<<endl; 
} 
     
     
 
cout << "Original Matrix is:"<< endl; 
 
for(i=1;i<=3;i++) 
{ 
 for(j=1;j<=3;j++) 
 { 
  cout<<a[i][j]<<" "; 
 }    
  cout<<endl; 
} 
     
cout << "Transpose of Matrix:"<<endl; 
 
for(i=1;i<=3;i++) 
{ 
 for(j=1;j<=3;j++) 
 { 
  if ( i != j ) 
  { 
   cout << a[j][i] <<" "; 
  } 
       
  else if ( i = j ) 
  { 
   cout <<a[i][j]<<" "; 
  } 
       
       
 } 
  cout<<endl; 
}    
    return 0; 
}




//multiplicaion of matrix
// printing table of 15 using recursion 
#include<iostream> 
using namespace std; 
void table (int x,int y) 
{ 
if (y!=1) 
{ 
} 
table(x,y-1); 
cout<<x*y<<endl;  
} 
int main(){ 
table(15,10); 
return  0; 
}





#include<iostream>
using namespace std;
int main() {
	int matrix1[3][3], matrix2[3][3], multiplied[3][3],element;
	//loop to get input for matrix one
	cout << "Write element for matrix 1" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Enter the element of coloumn " << i + 1 << " and row " << j + 1 << ": " << endl;
			cin >> matrix1[i][j];
		}
	}
	//loop to get input for matrix two
	cout << "Write element for matrix 2" << endl;;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "Enter the element of coloumn " << i + 1 << " and row " << j + 1 << ": " << endl;
			cin >> matrix2[i][j];
		}
	}
	//loops for the multiplication of matrices
	//outer loop for the coloumn of matrix 1
	for (int i = 0; i < 3; i++) {
		//inner loop 1 for the rows of matrix 2
		for (int j = 0; j < 3; j++) {
			int sum = 0;
			//inner loop 2 for row of matrix one and coloumn of matrix 2
			for (int k = 0; k < 3; k++) {
				element=matrix1[i][k] * matrix2[k][j];
				sum += element;
			}
			multiplied[i][j] = sum;
		}
	}
	//loops to display the matrices
	cout << "Matrix 1" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix1[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "Matrix 2" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix2[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "Multiplication of the two matrices" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << multiplied[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}

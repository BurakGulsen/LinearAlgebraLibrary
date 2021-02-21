#include <iostream>
#include "lal.h"
#include "math.h"
#include <cstdlib>


using namespace std;

	
Matrix::Matrix(double *a,int row,int col) {
          this->entries=a;
          this->rows=row;
          this->cols=col;
}
double** Matrix::createMatrix(){
		  double **matrix =(double **)malloc(this->rows*sizeof(double *));
          int i,j;

          for (i=0; i<this->rows; i++) {
                    matrix[i] = (double *)malloc(this->cols * sizeof(double));
          }
return matrix;	
}

double ** Matrix::fillMatrix(){
		  int i,j;
          double ** matrix = createMatrix();   
		  int col = this->cols; 
		  int row = this->rows;    
		  double *dizi = this->entries; 
		  
          for(i=0; i<row; i++) {
                    for( j=0; j<col; j++) {
                              matrix[ i ][ j ] = dizi[ i*col + j ];
                    }
	}
	return matrix;
}
void Matrix::print() {
	
	double ** matrix = fillMatrix();   
		  int i,j;
	  
          for(i=0; i<this->rows; i++) {
                    for(j=0; j<this->cols; j++) {
                              printf("%.2f  \t",matrix[i][j]);
                    }

                    puts("");
          }

}

 Matrix::~Matrix() {
          cout<<"Matriks silindi "<<endl;
}
Vector::Vector(double *a,int row):Matrix(a,row,1)  {
                    int i,toplam=0;

                    for(i=0; i<row; i++) {
                              toplam+=a[i]*a[i];
                    }

                    this->l2Norm=sqrt(toplam);

}
Vector::~Vector() {
          cout<<"Vektor silindi"<<endl;
}

void Vector::print(double * d){
	
	  double *dizi = (double *)malloc(4*sizeof(double)); 
	  for(int i =0; i<4; i++){
	  	
	  	printf("%.2f  \t", d[i]);
	  }
	  	puts(" ");	
	
}


 	Matrix Matrix::operator+(const Matrix &m){
           int a = this->rows+m.rows;
           int b = this->cols+m.cols;
          
          return Matrix(this->entries,a,b);
       }
       
       
    double* Matrix::operator-(const Matrix &m){
           double * oneDimensiolMatrix = (double*)malloc((this->rows*this->cols) * sizeof(double));
           for(int a=0;a<this->rows*this->cols;a++)
			{
             oneDimensiolMatrix[a]= this->entries[a] - m.entries[a]; 
			 
            }
          return oneDimensiolMatrix;
       }
       
     double* Matrix::operator*(const Matrix &m){
           double * oneDimensiolMatrix = (double*)malloc((this->rows*this->cols) * sizeof(double));
           for(int a=0;a<this->rows*this->cols;a++)
			{
             oneDimensiolMatrix[a]= this->entries[a] * m.entries[a]; 
			 
            }
          return oneDimensiolMatrix;
       }   
/*
      	Boolean Matrix::operator==(const Matrix &m){
           int a = this->rows+m.rows;
           int b = this->cols+m.cols;
          
          return Matrix(this->entries,a,b);
       }  
 

void transpose(Matrix *m){
	
	m->createMatrix();
	m->fillMatrix();
	
	
}
*/

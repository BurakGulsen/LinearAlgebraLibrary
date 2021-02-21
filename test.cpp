#include <iostream>
#include "lal.h"
#include <cstdlib>


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
/*	int size;
	cout << "Dizinin boyutunu girin ";
	cin>> size;*/
	double *dizi = (double *)malloc(4*sizeof(double));
	
	for(int i = 0; i <4; i++){
		
		dizi[i]= rand()%10;
	}

	Vector *v = new Vector(dizi,4);
	v->print(dizi);
	cout << "--------" << endl;
	Matrix *m= new Matrix(dizi,2,2);
	m->print();
	cout << "--------" << endl;
	
	Matrix m1(dizi,2,2);
	Matrix m2(dizi,2,2);
	
	Matrix m3 = m2 + m1;
	
	
	
/*
	MatrixVector ** matrixV = new MatrixVector*[5];
	for(int i=0; i<4; i++){
		
			matrixV[i]=dizi[i];
	}
*/
     /*
		int size2=5;
	double *vector1= (double *)(malloc(size2*sizeof(double)));
		for(int i = 0; i <size2; i++){
		
		vector1[i]= rand()%10;
	}
	
	int size3=4;
	double *vector2= (double *)(malloc(size3*sizeof(double)));
		for(int i = 0; i <size3; i++){
		
		vector2[i]= rand()%10;
	}
	int size4=3;
	double *vector3= (double *)(malloc(size4*sizeof(double)));
		for(int i = 0; i <size4; i++){
		
		vector3[i]= rand()%10;
	}
*/

    Vector vector1(dizi,rand()%10);
    Vector vector2(dizi,rand()%10);
    Vector vector3(dizi,rand()%10);
    
	Vector * vectorArray = (Vector*)(malloc(3*sizeof(Vector)));

   		 vectorArray[0] = vector1;
   		 vectorArray[1] = vector2;
   		 vectorArray[2] = vector3;

	
	
	
}

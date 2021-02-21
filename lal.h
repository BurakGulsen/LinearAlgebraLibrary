#define LAL_H

class Vector;

class MatrixVector{
	
	public:
		virtual double toplam();
	
	
};

class Matrix{

public:
	Matrix(double *,int,int);
	~Matrix();
	void print();
	double** createMatrix();
	double** fillMatrix();
	

	
   	Matrix operator+(const Matrix &);
	double* operator-(const Matrix&);
	double* operator*(const Matrix&);
	//Boolean operator==(const Matrix&);
	
	Matrix vectorArray2Matrix(Vector*,int,int);
	
protected:
	double *entries;
	int rows,cols;

};


class Vector:public Matrix{
	
public:
	Vector(double *,int);
	~Vector();
	void print(double *);
    Vector operator+(const Vector& m);
	Vector operator-(const Vector& m);
	Vector operator*(const Vector& m);
//	Vector operator==(const Vector& m);
private:
	double l2Norm;

};
/*
void transpose(Matrix ){
	
	
}
*/

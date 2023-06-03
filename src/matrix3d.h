#ifndef MATRIX_3D_H
#define MATRIX_3D_H


struct Matrix3D {

    float m[3][3];
    /**
     * Matrix3D constructor
    */
    Matrix3D();

    void Log();
    void Add(Matrix3D m);
    void Sub(Matrix3D m);
    void Scalar_Mult(float n);
    float Matrix_Determinant();
};

#endif // MATRIX_3D_H

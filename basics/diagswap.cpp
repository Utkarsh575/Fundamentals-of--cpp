#include <bits/stdc++.h>
using namespace std;

int main()
{

    int mat1[3][3], mat2[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> mat1[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> mat2[i][j];
        }
    }
    cout << "matrix1" << endl;
    cout << mat2[0][0] << "," << mat1[0][1] << "," << mat2[0][2] << endl;
    cout << mat1[1][0] << "," << mat2[1][1] << "," << mat1[1][2] << endl;
    cout << mat2[2][0] << "," << mat1[2][1] << "," << mat2[2][2] << endl;
    cout << "matrix2" << endl;
    cout << mat1[0][0] << "," << mat2[0][1] << "," << mat1[0][2] << endl;
    cout << mat2[1][0] << "," << mat1[1][1] << "," << mat2[1][2] << endl;
    cout << mat1[2][0] << "," << mat2[2][1] << "," << mat1[2][2] << endl;

    return 0;
}
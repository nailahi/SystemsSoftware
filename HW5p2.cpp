#include <iostream>
using namespace std;

int main()
{
    int r, c =0;
    int MatA[4][5], MatB[4][5], sum[4][5], i, j;

    // Storing elements of first matrix
    cout<< "Matrix A:";
    for(i = 0; i <= r; ++i)
       for(j = 0; j < c; ++j)
       {
          MatA[i][j] = rand()% 20+1;
          cout << MatA[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
       }

    // Storing elements of second matrix
 
    for(i = 0; i <= r; ++i)
       for(j = 0; j < c; ++j)
       {
           MatB[i][j] = rand() % 20+1;
           cout << MatB[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
       }


    // Adding Two matrices
    for(i = 0; i <= r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = MatA[i][j] + MatB[i][j];

    // Displaying the resultant sum matrix.
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == c - 1)
                cout << endl;
        }

    return 0;
}

/*Create a class called Matrix containing a constructor that initialises the number of rows and the number of columns of a new Matrix object.*/
#include<iostream>
using namespace std;
class Matrix{ //matrix class
    int row, column, elems;
    public:
    int array[10][10]; //2'D array with default size
        void getRows(){ //get num of rows
            cout<<"number of rows: "<<row<<endl;
        }
        void getColumns(){ //get num of col
            cout<<"number of columns: "<<column<<endl;
        }
        void setValue(int i, int j, int value){ //set value of matrix
            array[i][j] = value;
        }
        Matrix addMatrix( Matrix b){ //matrix addition
            Matrix temp;
            temp.array[row][column];
            for (int i = 0; i < row; i++){
                for (int j = 0; j < column; j++){
                    temp.array[i][j] = array[i][j] + b.array[i][j];
                }   
            }
            return temp;
        }
        Matrix mulMatrix(Matrix b){ //matrix multiplication
            Matrix temp;
            temp.array[row][column];
            for (int i = 0; i < row; i++){
                for (int j = 0; j < column; j++){
                    for(int k = 0; k < column; ++k){
                        temp.array[i][j] += array[i][k] * b.array[k][j];
                    }
                }   
            }
            return temp;
        }
        Matrix(){ //default constructor
            cout<<"default constructor called"<<endl;
        }
        Matrix(int i, int j){ //parameterized constructor 
            row = i;
            column = j;
            elems = row*column;
            array[row][column];
            cout<<"parameterized constructor called"<<endl;
        }
};
int main(){
    Matrix mat1(3,3); //create object of class using default constructor
    mat1.getRows(); //function calling using object of class
    mat1.getColumns(); // function calling using object of class
    mat1.setValue(0,0,10); // function calling using object of class

    Matrix mat2(3,3), mat3(3,3), mat4(3,3), mat5(3,3); //object creation using default constructor calling
    mat2.setValue(0,0,5);
    mat3.setValue(0,0,25);
    mat4 = mat2.addMatrix(mat3);

    mat5 = mat2.mulMatrix(mat3);

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<mat5.array[i][j]<<endl;
        }
        
    }
    return 0;
}

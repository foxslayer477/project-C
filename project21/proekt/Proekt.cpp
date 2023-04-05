#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100;

void Input(double arr[N][N], int n) {
    for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++){
                double arrNum;
                cout << "Position [" << i << "]" << "[" << j << "]: ";
                cin >> arrNum;
                if (arrNum >= -1000 && arrNum <= 1000){
                    arr[i][j] = arrNum;
                }
                else{
                    do{
                        cout << "Въведената информация е извън диапозано, опитайте отново!" << endl;
                        cout << "Position [" << i << "]" << "[" << j << "]: ";
                        cin >> arrNum;
                    } while (arrNum <= -1000 || arrNum >= 1000);
                    arr[i][j] = arrNum;
                }
            }
    }
}

void Output(double arr[N][N], int n) 
{
    cout << "Извеждане на масива PR[" << n << "][" << n << "]:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void ArrayC(double arr[N][N], double c[N], int n) 
{
    for (int j = 0; j < n; j++) {
        double sum = 0;
        for (int i = 0; i < n; i++) {
            sum += arr[i][j];
        }
        c[j] = sum / n;
    }
}

void PrintC(double c[N], int n) 
{
    cout << "Array C[" << n << "]:\n";
    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "Bulgarian");
    double matrix[N][N], C[N];
    int n;
    cout << "Да се състави програма за обработка на масива PR[N,N], където данните са реални числа в интервала [-1000,1000].\n";
    cout << "Да се образува едномерен масив C[N], елементите на който са средно аритметично на съответната колона от масива PR.\n";
    cout << "Полученият масив да се сортира по големина.\n";
    cout << "Отпечатване на получените резултати преди и след обработка.\n";
    cout << "Студент: Донислав Станимиров Гинчев\n";
    cout << endl;
    cout << endl;
    cout << "Въведи големина на масива PR: ";
    cin >> n;
    Input(matrix, n);
    cout << "Извеждане на масива PR:\n";
    Output(matrix, n);
    ArrayC(matrix, C, n);
    cout << "Показване на масива C преди сортиране:\n";
    PrintC(C,n);
    sort(C, C + n);
    cout << "Показване на масива C след сортиране:\n";
    PrintC(C, n);
    return 0;
}
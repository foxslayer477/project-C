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
                        cout << "���������� ���������� � ����� ���������, �������� ������!" << endl;
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
    cout << "��������� �� ������ PR[" << n << "][" << n << "]:\n";
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
    cout << "�� �� ������� �������� �� ��������� �� ������ PR[N,N], ������ ������� �� ������ ����� � ��������� [-1000,1000].\n";
    cout << "�� �� �������� ��������� ����� C[N], ���������� �� ����� �� ������ ����������� �� ����������� ������ �� ������ PR.\n";
    cout << "���������� ����� �� �� ������� �� ��������.\n";
    cout << "����������� �� ���������� ��������� ����� � ���� ���������.\n";
    cout << "�������: �������� ���������� ������\n";
    cout << endl;
    cout << endl;
    cout << "������ �������� �� ������ PR: ";
    cin >> n;
    Input(matrix, n);
    cout << "��������� �� ������ PR:\n";
    Output(matrix, n);
    ArrayC(matrix, C, n);
    cout << "��������� �� ������ C ����� ���������:\n";
    PrintC(C,n);
    sort(C, C + n);
    cout << "��������� �� ������ C ���� ���������:\n";
    PrintC(C, n);
    return 0;
}
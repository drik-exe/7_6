//Пользователь вводит размерность массива и его целочисленные элементы.
//Если в массиве минимальный нечетный элемент больше 10, то переставьте все элементы так, чтобы сначала стояли все нулевые значения,
//затем положительные, затем отрицательные.
//
//3. Самостоятельная работа.
//Индивидуальное задание:
//Пользователь вводит размерность массива и его элементы(+1). Создать новый массив,
//в который поместить сначала все нечетные элементы исходного массива, а затем все четные элементы(+5).
//Вывести полученный массив на экран(+1). Найти максимальный отрицательный элемент массива. (+3)


#include <iostream>


using namespace std;

int main() {

    const int SIZE = 100;
    int arr[SIZE];
    int size;

    cout << "Введите размер массива: ";
    cin >> size;
    cout << endl << "Введите элементы массива: ";
    cin >> arr[0];
    int min_obb = arr[0];


    for (int i = 1; i < size; ++i) {

        cin>>arr[i];

        if(arr[i]%2!=0 && arr[i] < min_obb){
            min_obb = arr[i];
        }

    }
    const int SIZE1 = 100;
    int size1 = 0;
    int arr1[SIZE1];
    if(min_obb > 10){
        for (int i = 0; i < size; ++i) {
            if(arr[i] == 0){
                arr1[size1] = arr[i];
                size1++;
            }
        }
        for (int i = 0; i < size; ++i) {
            if(arr[i] > 0){
                arr1[size1] = arr[i];
                size1++;
            }
        }
        for (int i = 0; i < size; ++i) {
            if(arr[i] < 0){
                arr1[size1] = arr[i];
                size1++;
            }
        }
        cout << "Отсортированный массив: ";
        for (int i = 0; i < size1; ++i) {
            cout << arr1[i] << ' ';
        }

    } else{
        cout << "минимальный нечетный элемент меньше 10" << endl;
    }
//////////////////////////////////////////////////////////////////////////////////////////////////

    const int SIZE2 = 100;
    const int SIZE3 = 100;
    int arr2[SIZE2];
    int arr3[SIZE3];
    int size3 = 0;
    int size2;
    int max_neg = 0;

    cout << endl << "Введите размер массива: ";
    cin >> size2;
    cout << endl << "Введите элементы массива: ";


    for (int i = 0; i < size2; ++i) {

        cin>>arr2[i];
        if(arr2[i] %2 != 0){
            arr3[size3] = arr2[i];
            size3++;
        }
        if(arr2[i] < 0 && max_neg > arr2[i]){
            max_neg = arr2[i];
        }

    }

    for (int i = 0; i < size2; ++i) {
        if(arr2[i] % 2 == 0){
            arr3[size3] = arr2[i];
            size3++;
        }
    }

    for (int i = 0; i < size3; ++i) {
        cout << arr3[i] << ' ';
    }
    if(max_neg < 0){
        cout << endl << "максимальный отрицательный элемент массива: " << max_neg << endl;
    } else{
        cout << endl << "В данном массиве не существует отрицательных элементов" << endl;
    }
    return 0;
}

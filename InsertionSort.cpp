// InsertionSort.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
    int i, j, temp;
    int array[10] = {1,10,5,8,7,6,4,3,2,9};
    for (i = 0; i < 10; i++)
    {
        cout << array[i] << "  ";
    }
    cout << endl;
    for (i = 0; i < 9; i++)     //array[j+1] 때문에 i<10으로 들어가면 에러
    {
        j = i;
        while (j >= 0 && array[j] > array[j + 1])
        {
            temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
            j--;
        }
    }
    for (i = 0; i < 10; i++)
    {
        cout << array[i] << "  ";
    }



    return 0;
}

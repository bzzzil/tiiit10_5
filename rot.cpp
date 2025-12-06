#include <iostream>
using namespace std; // чтобы не писать std::
int main() {
    // input array
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int left = 0;
    int right = n - 1;

    while (left < right) { // добавил закрывающую скобку в while 
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--; добавил - т.к это декремент
    }

    // output
    for (int i = 0; i < n; i++) { // убрал = т.к при инициализаци используется унарный оператор присваивания =
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>

void display_array(int arr[], int max_length = 10);
void delete_array(int arr[], int index, int max_length = 10);
void new_array(int arr[], int max_length = 10);
int main() {
    const int arr_length = 10;
    int delete_index = 0;
    int test_scores[arr_length] = {86, 71, 92, 84, 88, 96};

    display_array(test_scores);

    std::cout << "Enter index you wish to delete: ";
    std::cin >> delete_index;

    delete_array(test_scores, delete_index);
    new_array(test_scores);

    std::cout << "\n";
    return 0;
}

void display_array(int arr[], int max_length) {
    std::cout << "Test scores in array: ";
    for(int i = 0; i < max_length; i++) {
        if(arr[i] == 0)
            break;
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void delete_array(int arr[], int index, int max_length) {
    if(index >= 0 && index < max_length) {
        for(int i = index; i < max_length - 1; i++) {
            if(arr[i] == 0)
                break;
            arr[i] = arr[i + 1];
        }
    }
}

void new_array(int arr[], int max_length) {
    std::cout << "\n";
    std::cout << "Test scores now in array: ";
    for(int i = 0; i < max_length - 1; i++) {
        if(arr[i] == 0)
            break;
        std::cout << arr[i] << " ";
    }
}
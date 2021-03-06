#include <iostream>

void display_array(int arr[], int max_length = 10);
void insert_array(int arr[], int insert_num, int index_num, int max_length = 10);

int main() {
    
    int const arr_length = 10;
    int new_score, index;
    int test_scores[arr_length] = {86, 71, 92, 84, 88, 96};

    display_array(test_scores);

    std::cout << "Enter new test score: ";
    std::cin >> new_score;

    std::cout << "\nEnter index position: ";
    std::cin >> index;

    insert_array(test_scores, new_score, index);
    display_array(test_scores);

    return 0;
}

void display_array(int arr[], int max_length) {
    std::cout << "Test scores in array: ";
    for(int i = 0; i < max_length; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

void insert_array(int arr[], int insert_num, int index_num, int max_length) {
    for(int i = max_length - 1; i > index_num; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index_num] = insert_num;
}

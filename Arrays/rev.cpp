#include <iostream>

class Solution {
public:
    std::string reverseWord(std::string str) {
        int left = 0; // Pointer starting from the beginning of the string
        int right = str.length() - 1; // Pointer starting from the end of the string

        // Swap characters until the pointers meet in the middle
        while (left < right) {
            // Swap characters at left and right pointers
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;

            // Move pointers towards each other
            left++;
            right--;
        }

        return str;
    }
};

int main() {
    Solution solution;
    std::string input = "Hello World!";
    std::cout << "Original string: " << input << std::endl;
    std::string reversed = solution.reverseWord(input);
    std::cout << "Reversed string: " << reversed << std::endl;
    return 0;
}

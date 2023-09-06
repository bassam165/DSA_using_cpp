
#include<iostream>
#include <vector>
#include <string>

using namespace std;

int compress(vector<char>& chars) {
    int index = 0;  // Index to track the position where the compressed characters are placed.
    int count = 1;  // Initialize count to 1 for the first character.

    // Iterate through the input characters, starting from the second character.
    for (int i = 1; i < chars.size(); ++i) {
        if (chars[i] == chars[i - 1]) {
            // If the current character is the same as the previous one, increment the count.
            ++count;
        } else {
            // If the current character is different, write the character and its count to the output.
            chars[index++] = chars[i - 1];  // Write the character.

            // If the count is greater than 1, write its digits one by one.
            if (count > 1) {
                string countStr = to_string(count);
                for (char c : countStr) {
                    chars[index++] = c;
                }
            }

            count = 1;  // Reset the count for the new character.
        }
    }

    // Write the last character and its count (if count > 1).
    chars[index++] = chars.back();
    if (count > 1) {
        string countStr = to_string(count);
        for (char c : countStr) {
            chars[index++] = c;
        }
    }

    return index;  // Return the length of the compressed array.
}

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int compressedLength = compress(chars);

    // Print the compressed array and its length.
    for (int i = 0; i < compressedLength; ++i) {
        cout << chars[i] << " ";
    }
    cout << endl;

    return 0;
}

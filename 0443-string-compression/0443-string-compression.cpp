class Solution
{
public:
    int compress(vector<char> &chars)
    {
        // Two pointers approach
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();

        // Iterate through the characters
        while (i < n){
            
            // Find the next different character
            int j = i;

            // Count the number of occurrences of the current character
            while (j < n && chars[i] == chars[j]){
                j++;
            }
            
            // Write the character to the answer index
            chars[ansIndex++] = chars[i];

            // Count the number of occurrences and write it to the answer index if greater than 1
            int count = j - i;
            if (count > 1){

                // Convert the count to a string and write each digit to the answer index
                string countStr = to_string(count);

                // Write each digit of the count string to the answer index
                for (char ch : countStr){
                    chars[ansIndex++] = ch;
                }
            }
            i = j;
        }
        return ansIndex;
    }
};
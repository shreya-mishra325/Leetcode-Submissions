class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string sum = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        while (i >= 0 || j >= 0 || carry) {
            int num1 = 0;
            int num2 = 0;
            if (i >= 0) {
                num1 = a[i]-'0';
                i--;
            }
            if (j >= 0) {
                num2 = b[j]-'0';
                j--;
            }
            int total=num1+num2+carry;
            sum = to_string(total % 2)+sum;
            carry = total / 2;
        }

        return sum;
    }
};
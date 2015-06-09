class Solution {
public:
    string intToRoman(int num) {
        string thous[] = {"", "M", "MM", "MMM"};
        string hun[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string ten[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string single[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        string ans="";
        ans+=thous[num/1000];
        num%=1000;

        ans+=hun[num/100];
        num%=100;

        ans+=ten[num/10];
        num%=10;

        ans+=single[num];
        return ans;
    }
};

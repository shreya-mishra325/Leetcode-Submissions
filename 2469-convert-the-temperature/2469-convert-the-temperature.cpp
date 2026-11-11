class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> v;
        double kelvin=celsius+273.15;
        v.push_back(kelvin);
        double fahhh=celsius*1.80+32.00;
        v.push_back(fahhh);
        return v;
    }
};
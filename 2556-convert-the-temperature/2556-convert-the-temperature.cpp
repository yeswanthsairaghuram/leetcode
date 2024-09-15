class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>res;
        double kelvin = celsius + 273.15;
        double fah= celsius * 1.80 + 32.00; 
        res.push_back(kelvin);
        res.push_back(fah);
        return res; 
    }
};
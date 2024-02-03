#include <iostream>
#include <vector>
#include <cmath>
#include <utility>

// Inluding custom header files.
#include "HEADERS/statistics.h"

class linear_regressor{
    private:
        double slope;
        double intercept;

    public:
        linear_regressor() : slope(0.0), intercept(0.0) {};

        void train(std::vector<double> X, std::vector<double> Y){
            double mean_X = mean(X);
            double mean_Y = mean(Y);

            slope = covariance(X, Y) / variance(X);
            intercept = mean_Y - slope * mean_X;
        }

        double predict(double x){
            return slope * x + intercept;
        }
};

int main(){

    linear_regressor lin_reg = linear_regressor();
    std::vector<double> X = {1, 2, 3, 4, 5};
    std::vector<double> Y = {2, 3, 4, 5, 6};

    lin_reg.train(X, Y);

    std::cout << lin_reg.predict(6) << "\n";
    return 0;
}



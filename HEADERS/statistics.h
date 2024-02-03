// 'statistics.h' -> Header file for statistics functions.
#include <vector>
#include <cmath>
#ifndef STATISTICS_H
#define STATISTICS_H

class statistics{
    private:
    public:
        static double mean(std::vector<double> D){
            double sum = 0;
            for (int i = 0; i < D.size(); i++)
                sum += D[i];
            return sum / D.size();
        }
};

// Mean of vector D.
double mean(std::vector<double> D){
    double sum = 0;
    for (int i = 0; i < D.size(); i++)
        sum += D[i];
    return sum / D.size();
}

// Sum of deviations of vector D.
double sum_deviations(std::vector<double> D){
    double mean_D = mean(D);
    double sum_dev = 0;
    for (int i = 0; i < D.size(); i++)
        sum_dev += (D[i] - mean_D);
    return sum_dev;
}

// Sum of squares of deviations of vector D.
double sum_deviations_square(std::vector<double> D){
    double mean_D = mean(D);
    double sum_dev = 0;
    for (int i = 0; i < D.size(); i++)
        sum_dev += (D[i] - mean_D) * (D[i] - mean_D);
    return sum_dev;
}

double sum_deviations_XY(std::vector<double> X, std::vector<double> Y){
    double mean_X = mean(X);
    double mean_Y = mean(Y);
    double sum_dev_XY = 0;
    for (int i = 0; i < X.size(); i++)
        sum_dev_XY += (X[i] - mean_X) * (Y[i] - mean_Y);
    return sum_dev_XY;
}

// Covariance vectors X, Y.
double covariance(std::vector<double> X, std::vector<double> Y){
    return sum_deviations_XY(X, Y) / X.size();
}

// Variance of vector X.
double variance(std::vector<double> X){
    return sum_deviations_square(X) / X.size();
}

#endif
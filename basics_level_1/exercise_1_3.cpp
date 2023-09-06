#include<iostream>
#include<vector>
#include<numeric>

int main()
{
    /* 1.3 Create a vector of 4 float numbers, compute the average and print it */
    std::cout << "Exercise 1.3" << std::endl;
    std::vector<double> exercise3 = { 48.1, 19.91, 20.22, 20.23 };
    std::cout << "This are the vector elements: " << std::endl;
    for (double &number : exercise3) {
        std::cout << number << std::endl;
    }
    double vector_sum = std::accumulate(exercise3.begin(), exercise3.end(), 0.0);
    double vector_avg = vector_sum / 4;
    std::cout << "This is the vector average: " << vector_avg << std::endl;
        

    return 0;
}

#include <iostream>
#include "tensor.hpp"
#include <eigen3/Eigen/Dense>

Tensor::Tensor(int *value)
{
    this->value = *value;
}

int Tensor::Value()
{
    return this->value;
}

int main()
{
    int val = 5;
    auto val_p = &val;
    auto t = Tensor(val_p);
    std::cout << t.Value() << std::endl;
    Eigen::MatrixXd m(2, 2);
    return 0;
}
#include <iostream>
#include <Eigen/Dense>
#include "obj.h"
#include "const.h"

using namespace std;
using namespace Eigen;

void initA();
double half_ip(MatrixXd X, VectorXd p);
double sev(VectorXd x);
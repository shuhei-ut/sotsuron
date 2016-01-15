#include <Eigen/Dense>

using namespace std;
using namespace Eigen;

void initA();
pair<double, VectorXd> sev_x(VectorXd x, VectorXd y0, VectorXd U, VectorXd L); // U,Yはy0のBOX, <ψ(x, y*), y*>を返す
pair<double, VectorXd> sev_y(VectorXd y, VectorXd x0, VectorXd U, VectorXd L); // U,Yはx0のBOX, <ψ(x*, y), x*>を返す

pair<double, VectorXd> local_search(VectorXd x0, VectorXd y0); // <ψ(x*, y*), x*>を返す
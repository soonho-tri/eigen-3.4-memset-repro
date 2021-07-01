#include <iostream>
#include <memory>

#include <Eigen/Dense>

using Eigen::MatrixXd;

namespace test {
class T {
public:
  T() : T(0.0) {}
  explicit T(double v) : v_{std::make_shared<double>(v)}{}

  friend T& operator+=(T& lhs, const T& rhs);
  friend T& operator*=(T& lhs, const T& rhs);
  friend std::ostream& operator<<(std::ostream& os, const T& t);


private:
  std::shared_ptr<double> v_;
};

T &operator+=(T &lhs, const T &rhs) {
  *(lhs.v_) += *(rhs.v_);
  return lhs;
}
T operator+(T lhs, const T &rhs) { return lhs += rhs; }

T &operator*=(T &lhs, const T &rhs) {
  *(lhs.v_) *= *(rhs.v_);
  return lhs;
}
T operator*(T lhs, const T& rhs) {
  return lhs *= rhs;
}

std::ostream& operator<<(std::ostream& os, const T& t) {
  return os << *(t.v_);
}

}

int main() {

  using test::T;

  Eigen::Matrix<T, Eigen::Dynamic, Eigen::Dynamic> m(2,2);

  // MatrixXd m(2, 2);
  m(0, 0) = T(3.0);
  m(1, 0) = T(2.5);
  m(0, 1) = T(-1.0);
  m(1, 1) = T(4.0);

  m = m * m + m;

  std::cerr << m << "\n";

}

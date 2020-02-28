#include "mat.h"

dvec4 dmat44_dvec4_mul(dmat44 const A, dvec4 const x) {
  dvec4 y;
  for (int i = 0; i < 4; ++i) {
    y.data[i] = dvec4_dot(A.rows[i], x);
  }
  return y;
}

dmat44 dmat44_dmat44_mul(dmat44 const A, dmat44 const B) {
  dmat44 C;
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      C.data[i][j] = 0;
      for (int k = 0; k < 4; ++k) {
        C.data[i][j] += A.data[i][k]*B.data[k][j];
      }
    }
  }
  return C;
}

dvec4 dmat4_col(dmat44 const A, int j) {
  dvec4 a;
  for (int i = 0; i < 4; ++i) {
    a.data[i] = A.rows[i].data[j];
  }
  return a;
}

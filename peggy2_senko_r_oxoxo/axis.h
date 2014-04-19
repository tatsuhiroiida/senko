
struct Point {
  byte y;
  byte x;
  };

Point rMatrix[8][41] = {
  // Y  0       1       2       3       4       5       6       7       8       9      10      11      12 |    13      14      15      16      17      18      19      20 |    21      22      23      24      25      26      27      28      29      30      31      32      33      34      35    // X
  {{ 8,15},{ 8,13},{ 8,11},{ 8, 9},{ 8, 7},{ 8, 5},{ 8, 3},{ 8, 1},{24,24},{24,24},{24,24},{24,24},{13,13},{13, 9},{13, 5},{13, 1},{13, 3},{13, 7},{13,11},{13,15},{ 0, 0},{ 0, 2},{ 0, 4},{ 0, 6},{ 0, 8},{ 0,10},{ 0,12},{ 0,14},{ 1, 0},{ 1, 2},{ 1, 4},{ 1, 6},{ 1, 8},{ 1,10},{ 1,12},{ 1,14},{ 7, 7},{ 7, 9},{ 7,11},{ 7,13},{ 7,15}},
  {{ 8,14},{ 8,12},{ 8,10},{ 8, 8},{ 8, 6},{ 8, 4},{ 8, 2},{ 8, 0},{24,24},{24,24},{24,24},{24,24},{13,12},{13, 8},{13, 4},{13, 0},{13, 2},{13, 6},{13,10},{13,14},{ 0, 1},{ 0, 3},{ 0, 5},{ 0, 7},{ 0, 9},{ 0,11},{ 0,13},{ 0,15},{ 1, 1},{ 1, 3},{ 1, 5},{ 1, 7},{ 1, 9},{ 1,11},{ 1,13},{ 1,15},{ 7, 8},{ 7,10},{ 7,12},{ 7,14},{24,24}},
  {{ 9,15},{ 9,13},{ 9,11},{ 9, 9},{ 9, 7},{ 9, 5},{ 9, 3},{ 9, 1},{24,24},{24,24},{24,24},{24,24},{14,13},{14, 9},{14, 5},{14, 1},{14, 3},{14, 7},{14,11},{14,15},{ 2, 0},{ 2, 2},{ 2, 4},{ 2, 6},{ 2, 8},{ 2,10},{ 2,12},{ 2,14},{ 3, 0},{ 3, 2},{ 3, 4},{ 3, 6},{ 3, 8},{ 3,10},{ 3,12},{ 3,14},{ 7, 0},{ 7, 2},{ 7, 4},{ 7, 6},{24,24}},
  {{ 9,14},{ 9,12},{ 9,10},{ 9, 8},{ 9, 6},{ 9, 4},{ 9, 2},{ 9, 0},{24,24},{24,24},{24,24},{24,24},{14,12},{14, 8},{14, 4},{14, 0},{14, 2},{14, 6},{14,10},{14,14},{ 2, 1},{ 2, 3},{ 2, 5},{ 2, 7},{ 2, 9},{ 2,11},{ 2,13},{ 2,15},{ 3, 1},{ 3, 3},{ 3, 5},{ 3, 7},{ 3, 9},{ 3,11},{ 3,13},{ 3,15},{ 7, 1},{ 7, 3},{ 7, 5},{24,24},{24,24}},
  {{12, 7},{12, 5},{12, 3},{12, 1},{10,15},{10,13},{10,11},{10, 9},{10, 7},{10, 5},{10, 3},{10, 1},{15, 7},{15, 5},{15, 3},{15, 1},{24,24},{24,24},{24,24},{24,24},{ 4, 0},{ 4, 2},{ 4, 4},{ 4, 6},{ 4, 8},{ 4,10},{ 4,12},{ 4,14},{ 5, 0},{ 5, 2},{ 5, 6},{ 5, 8},{ 5,10},{ 5,12},{ 5,14},{24,24},{24,24},{24,24},{24,24},{24,24},{24,24}},
  {{12, 6},{12, 4},{12, 2},{12, 0},{10,14},{10,12},{10,10},{10, 8},{10, 6},{10, 4},{10, 2},{10, 0},{15, 6},{15, 4},{15, 2},{15, 0},{24,24},{24,24},{24,24},{24,24},{ 4, 1},{ 4, 3},{ 4, 5},{ 4, 7},{ 4, 9},{ 4,11},{ 4,13},{ 4,15},{ 5, 1},{ 5, 3},{ 5, 7},{ 5, 9},{ 5,11},{ 5,13},{ 5,15},{24,24},{24,24},{24,24},{24,24},{24,24},{24,24}},
  {{12,15},{12,13},{12,11},{12, 9},{11,15},{11,13},{11,11},{11, 9},{11, 7},{11, 5},{11, 3},{11, 1},{15,15},{15,13},{15,11},{15, 9},{24,24},{24,24},{24,24},{24,24},{ 6, 0},{ 6, 2},{ 6, 4},{ 6, 6},{ 6, 8},{ 6,10},{ 6,12},{ 6,14},{ 5, 4},{ 5, 5},{24,24},{24,24},{24,24},{24,24},{24,24},{24,24},{24,24},{24,24},{24,24},{24,24},{24,24}},
  {{12,14},{12,12},{12,10},{12, 8},{11,14},{11,12},{11,10},{11, 8},{11, 6},{11, 4},{11, 2},{11, 0},{15,14},{15,12},{15,10},{15, 8},{24,24},{24,24},{24,24},{24,24},{ 6, 1},{ 6, 3},{ 6, 5},{ 6, 7},{ 6, 9},{ 6,11},{ 6,13},{ 6,15},{24,24},{24,24},{24,24},{24,24},{24,24},{24,24},{24,24},{24,24},{24,24},{24,24},{24,24},{24,24},{24,24}}
};


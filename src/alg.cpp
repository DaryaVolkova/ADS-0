// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int n;
    int max = a > b ? a : b;
    for (int i = 1; i <= max; i++){
        if ((a % i == 0) && (b % i == 0)) n = i;
    }
    return n;
}

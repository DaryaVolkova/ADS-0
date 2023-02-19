// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    if (a < 0) {
        a = 0 - a;
    }
    if (b < 0) {
        b = 0 - b;
    }
    if ((a != 0) && (b != 0)) {
        while (a != b) {
            if (a > b) {
                a = a - b;
            } else {
                b = b - a;
            }
        }
        return a;
    } else { 
        return (a + b);
    }
}

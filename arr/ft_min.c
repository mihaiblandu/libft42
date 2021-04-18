//
// Created by mihai on 29.11.2020.
//
float minimum(int n, float a[n]) {
    float min = a[0];
    for(int i = 1 ; i != n ; i++) {
        if (a[i] < min) min = a[i];
    }
    return min;
}

float maximum(int n, float a[n]) {
    float max = a[0];
    for(int i = 1 ; i != n ; i++) {
        if (a[i] > max) max = a[i];
    }
    return max;
}


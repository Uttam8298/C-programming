char * fizzBuzz(int n, int* returnSize){
    char **a = calloc(1, sizeof(char *[n])), s[100], m3, m5;
    *returnSize = n;
    for (; m3 = !(n % 3), m5 = !(n % 5), n ; n--)
        if (!m3 && !m5)
            snprintf(s, sizeof s, "%d", n), a[n - 1] = strdup(s);
        else
            a[n - 1] = strdup(m3 && m5 ? "FizzBuzz" : m3 ? "Fizz" : "Buzz");
    return a;
}
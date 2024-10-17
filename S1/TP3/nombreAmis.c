int NombreAmis() {
    int m, n, sm, sn, i;

    do {
        printf("donner m : ");
        scanf("%d", &m);
    } while (m <= 1);

    do {
        printf("donner n : ");
        scanf("%d", &n);
    } while (n <= 1 || m == n);

    sn = 0;
    sm = 0;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            sn += i;
        }
    }
    for (i = 2; i <= m / 2; i++) {
        if (m % i == 0) {
            sm += i;
        }
    }

    if (sm == n && sn == m) {
        printf("%d et %d sont amis\n", m, n);
    } else {
        printf("%d et %d ne sont pas amis\n", m, n);
    }

    return 0;
}

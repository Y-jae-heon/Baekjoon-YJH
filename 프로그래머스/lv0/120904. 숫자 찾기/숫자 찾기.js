const solution = (n, k) => {
    const el = n.toString().indexOf(k);
    return el == -1 ? el : el + 1;
};
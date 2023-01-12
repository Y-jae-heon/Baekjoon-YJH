const solution = (s) => Array(...s).sort().filter((x,i) => s.split(x).length === 2).join("");

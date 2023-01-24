class Counter {
    data = {};
    add(num) {
        if (this.data[num] === undefined) {
            this.data[num] = 1;
        } else {
            this.data[num] += 1;  
        } 
    }
    get(num) {
        if (this.data[num] === undefined) {
            return 0;
        } else {
            return this.data[num];
        }
    }
}

function solution(weights) {
    const counter = new Counter();
    weights.sort((a,b) => a-b);
    let result = 0;
    for (const weight of weights) {
        result += counter.get(weight);
        counter.add(weight);
        counter.add(weight * 4 / 3);
        counter.add(weight * 1.5);
        counter.add(weight * 2);
    }
    return result;
}
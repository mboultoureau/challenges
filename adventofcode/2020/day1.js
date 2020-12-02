/**
 * Specifically, they need you to find the two entries that sum to 2020 and then multiply those two numbers together.
 */

const fs = require('fs');
const objective = 2020;

let content = fs.readFileSync('./day1input.txt', 'utf8').split('\n');

// Part one
content.some((val1) => {
    let difference = objective - val1;
    if (content.includes(`${difference}`)) {
        console.log(val1 * difference);
        return true;
    }
    return false;
});

/**
 * They offer you a second one if you can find three numbers in your expense report that meet the same criteria.
 */

let found = false;

let i = 0;
while (!found && i < content.length) {

    let j = 0;
    while (!found && j < content.length) {

        let k = 0;
        while (!found && k < content.length) {
            if (parseInt(content[i]) + parseInt(content[j]) + parseInt(content[k]) === objective) {
                console.log(parseInt(content[i]) * parseInt(content[j]) * parseInt(content[k]));
                found = true;
            }
            k++;
        }
        j++;
    }
    i++;
}
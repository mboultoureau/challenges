/*******
 * Read input from STDIN
 * Use: console.log()  to output your result.
 * Use: console.error() to output debug information into STDERR
 * ***/

var input = [];
var occurrences = [];

readline_object.on("line", (value) => { //Read input values
	input.push(value.split(" "));
})
//Call ContestResponse when all inputs are read
readline_object.on("close", ContestResponse); 


function ContestResponse(){
    input.splice(0, 1);
	input.forEach((echantillon) => {
		let index = occurrences.findIndex(occurrence => occurrence.v === echantillon[1]);
	    if (index != -1) {
            occurrences[index].nb++;
	    } else {
	        occurrences.push({
	            nb: 1,
	            p: echantillon[0],
	            v: echantillon[1]
	        });
	    }
	});
	
	occurrences.sort((a, b) => a.nb - b.nb);
	
	console.log(occurrences[0].p);
}
fs = require('fs')

function convert(input){
	const newInput = input.replace(/^\s+|\s+$/gm,'').replace(/\n/g,'');
	const arr = newInput.split(',');
	let result = '';
	for(let i = 0; i< 51 ; i+=1){
		let word = `${arr[i + 51]};${arr[i]};${arr[i + 102]}`;
		result += word;
		result += '\n';
    }
	return result
}

let newData = '';


for(let i = 1; i < 9; i ++){
    let data = fs.readFileSync(`./cmake-build-debug/resultM1.csv`, 'utf8');
    newData+=convert(data);
}


fs.writeFile("new.csv", newData, function(err) {
    if(err) {
        return console.log(err);
    }

    console.log("The file was saved!");
}); 



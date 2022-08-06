let Nepal_Input = document.querySelector("#Nepali-Rupees > input");
let India_Input = document.querySelector("#Indian-Rupees > input");

function main() {
	Nepal_Input.addEventListener("input", Nepali_To_India);
	India_Input.addEventListener("input", India_To_Nepali);
}

function Round_Num(num) {
	return Math.round(num * 100) / 100;
}

function Nepali_To_India() {
	let Nepal = parseFloat(Nepal_Input.value);
	let India = (Nepal * 1.6);
	India_Input.value = Round_Num(India);
}

function India_To_Nepali() {
	let India = parseFloat(India_Input.value);
	let Nepal = (India / 1.6);
	Nepal_Input.value = Round_Num(Nepal);
}

main();
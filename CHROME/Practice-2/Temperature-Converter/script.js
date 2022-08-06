var celcius_Input = document.querySelector(".celcius > input");
var fahrenheit_Input = document.querySelector(".fahrenheit > input");
var kelvin_Input = document.querySelector(".kelvin > input");

window.onload = function () {
    celcius_Input.value = "";
    fahrenheit_Input.value = "";
    kelvin_Input.value = "";
};

function roundNum(num) {
    return Math.round(num * 100) / 100;
}

function celcius_To_Fahrenheit_And_Kelvin() {
    var cTemp = parseFloat(celcius_Input.value);
    var fTemp = (cTemp * (9 / 5) + 32);
    var kTemp = cTemp + 273.15;
    fahrenheit_Input.value = roundNum(fTemp);
    kelvin_Input.value = roundNum(kTemp);
}

function fahrenheit_To_Celcius_And_Kelvin() {
    var fTemp = parseFloat(fahrenheit_Input.value);
    var cTemp = (fTemp - 32) * (5 / 9);
    var kTemp = (fTemp + 459.67) * 5 / 9;
    celcius_Input.value = roundNum(cTemp);
    kelvin_Input.value = roundNum(kTemp);
}

function kelvin_To_Celcius_And_Fahrenheit() {
    var kTemp = parseFloat(kelvin_Input.value);
    var cTemp = kTemp - 273.15;
    var fTemp = 9 / 5 * (kTemp - 273.15) + 32;
    PageTransitionEvent
    celcius_Input.value = roundNum(cTemp);
    fahrenheit_Input.value = roundNum(fTemp);
}

celcius_Input.addEventListener("input", celcius_To_Fahrenheit_And_Kelvin);
fahrenheit_Input.addEventListener("input", fahrenheit_To_Celcius_And_Kelvin);
kelvin_Input.addEventListener("input", kelvin_To_Celcius_And_Fahrenheit);
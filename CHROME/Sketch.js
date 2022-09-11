function setup() {
	createCanvas(400, 400);
}

function draw() {
	background(230);
	// First Line From Left To Right.
	line(0, 0, 400, 400);
	// Second Line From Right To Left.
	line(0, 400, 400, 0);
	// Objects In First Line.
	rectMode(CENTER);
	fill(0, 83, 156);
	rect(200, 200, 80, 80);
	// Objects For Rect In Which Square And Circle Is Center.
	fill(108, 2, 29);
	square(200, 200, 50);
	fill(0, 32, 63);
	circle(200, 200, 40);
	// In Circle Square Is In Center.
	fill(215, 15, 9);
	circle(50, 50, 80);
	fill(10, 182, 225);
	square(50, 50, 50);
	// In Circle Square Is In Center.
	fill(215, 15, 9);
	circle(350, 350, 80);
	fill(10, 182, 225);
	square(350, 350, 50);
	// In Square Circle Is In Center.
	fill(62, 13, 111);
	square(133, 133, 50);
	fill(43, 174, 102);
	circle(133, 133, 40);
	// In Square Circle Is In Center.
	fill(217, 0, 91);
	square(267, 267, 50);
	fill(254, 231, 21);
	circle(267, 267, 40);
}
#include <math.h>

int minInt(int int1, int int2, int int3) {

	if ( int1 <= int2 && int1 <= int3 ) {
		return int1;
	}

	else if ( int2 <= int1 && int2 <= int3 ) {
		return int2;
	}

	return int3;
}

int maxInt(int int1, int int2, int int3) {

	if ( int1 >= int2 && int1 >= int3 ) {
		return int1;
	}

	else if ( int2 >= int1 && int2 >= int3 ) {
		return int2;
	}

	return int3;
}

int toGrayScaleAverage(int red, int green, int blue) {

	double avg;
	avg = (red + green + blue) / (double) 3;
	return round(avg);
}

int toGrayScaleLightness(int red, int green, int blue) {

	double lightness;
	lightness = (maxInt(red, green, blue) + minInt(red, green, blue)) / (double) 2;
	return round(lightness);
}

int toGrayScaleLuminosity(int red, int green, int blue) {

	double luminosity;
	luminosity = (0.21) * red + (0.72) * green + (0.07) * blue;
	return round(luminosity);
}

int toSepiaRed(int red, int green, int blue) {

	double sepiaRed;
	sepiaRed = (0.393) * red + (0.769) * green + (0.189) * blue;

	if ( sepiaRed > 255 ) {
		sepiaRed = 255;
	}

	return round(sepiaRed);
}

int toSepiaGreen(int red, int green, int blue) {

	double sepiaGreen;
	sepiaGreen= (0.349) * red + (0.686) * green + (0.168) * blue;

	if ( sepiaGreen > 255 ) {
		sepiaGreen = 255;
	}

	return round(sepiaGreen);
}

int toSepiaBlue(int red, int green, int blue) {

	double sepiaBlue;
	sepiaBlue = (0.272) * red + (0.534) * green + (0.131) * blue;

	if ( sepiaBlue > 255 ) {
		sepiaBlue = 255;
	}

	return round(sepiaBlue);
}
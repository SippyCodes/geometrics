#pragma once

auto pythag_gethypotnuse(float leg1, float leg2) {
	auto cs = leg1 * leg1 + leg2 * leg2;
	return sqrt(cs);
}

auto pythag_findmissingleg(float hypotnuse, float ab) {
	auto leg = hypotnuse * hypotnuse - ab * ab;
	return sqrt(leg);
}

auto circle_findarea(float radius) {
	float rs = radius * radius;
	return rs * 3.14159265;
}

auto circle_getdiameterfromrad(float radius) {
	return radius * 2;
}

auto circle_getcurcumference(float diameter) {
	return diameter * 3.14159265;
}

auto circle_getradiusfromarea(float area) {
	float radUS = area / 3.14159265;
	return radUS / 2;
}

auto circle_getdiameterfromcurcumference(float curcumference) {
	return curcumference / 3.14159265;
}

auto parallelogram_getarea(float base, float height) {
	return base * height;
}

auto paralellogram_getbasefromah(float area, float height) {
	return area / height;
}

auto paralellogram_getheightfromab(float area, float base) {
	return area / base;
}

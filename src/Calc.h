#pragma once

int addition(int A, int B) {
	addition=A + B;
	return addition;
}

int subtraction(int A, int B) {
	subtraction=A - B;
	return subtraction;
}

int multiplication(int A, int B) {
	multiplication=A * B
	return multiplication;
}

int divide(int A, int B) {
	if (B == 0) {
		return A;
	}

	return A / B;
}

int exponentation(int A, int B) {
	int tmp = 1;

	if (B < 0) {
		if (A > 1 || A < -1) {
			return 0;
		}
		else {
			if (A == 1) {
				return 1;
			}
			else {
				if (A == -1) {
					if (B % 2 == 0) {
						return 1;
					}

					return -1;
				}
				else {
					return 0;
				}
			}
		}
	}

	while (B > 0) {
		tmp *= A;
		--B;
	}

	return tmp;
}

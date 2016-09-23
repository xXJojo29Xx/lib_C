int rstbuf(char *buf) {
	int i=0;
	while (buf[i] != '\0') {
		buf[i] = '\0';
		i++;
	}
	return i;
}

int buflen(char *str) {
	int i;
	for (i=0; str[i] != '\0'; i++);
	return i;
}

int intlen(int nb) {
	int i=1, j=0;
	if (nb > -9 && nb < 9)
		return 1;
	while (i <= nb) {
		i *= 10;
		j++;
		printf("j=%d i=%d nb=%d\n", j, i, nb);
	}
	return j;
}

int print(char *str) {
	int ret = write(1, str, buflen(str));
	return ret;
}

int println(char *str) {
	int ret = write(1, str, buflen(str));
	ret += write(1, "\n", 1);
	return ret;
}

int print_i(int *array, int len) {
	int i, j, k;

	char buf[24] = "";

	for (i=0; i<len; i++) {
		print(itoa(buf, array[i]));
		print(" ");
		if (i%10 == 0 && i>0)
			print("\n");
	}

	return i;
}



char *itoa(char *dest, int nb) {
	int len = intlen(nb)-1, j=0;

	if (nb < 0) {
		dest[0] = '-';
		len++;
	}

	while (len >= 0) {
		while ( (nb % 10) != 0) {
			nb--;
			j++;
		}
		dest[len] = (char) j + ASCII_DECAL_NUM;
		if (len > -1)
			len--;
		nb /= 10;
		j=0;
	}
	
	return dest;
}

void fatal(char *str) {
	fputs("[FATAL] Error : ", stderr);
	fputs(str, stderr);
	fputs("\nExiting...\n", stderr);
	exit(-1);
}

void critik(char *str) {
	fputs("[CRITIK] Error : ", stderr);
	fputs(str, stderr);
	fputs("\nContinue...", stderr);
}

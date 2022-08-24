// 규칙에 따라 문자에 대응하는 수를 출력하는 문제

#include <stdio.h>

main() {
	char _input[16];
	int Size, i;
	int dap=0;
	
	scanf("%s",_input); // 알파벳 대문자로 이루어진 단어
	Size = strlen(_input);
	//printf("%d\n",Size); // debug
	
	for(i=0; i<Size; i++) {
		switch(_input[i]) {
			case 'A' :
			case 'B' :
			case 'C' :
				dap+=3; break;
			case 'D' :
			case 'E' :
			case 'F' :
				dap+=4; break;
			case 'G' :
			case 'H' :
			case 'I' :
				dap+=5; break;
			case 'J' :
			case 'K' :
			case 'L' :
				dap+=6; break;
			case 'M' :
			case 'N' :
			case 'O' :
				dap+=7; break;
			case 'P' :
			case 'Q' :
			case 'R' :
			case 'S' :
				dap+=8; break;
			case 'T' :
			case 'U' :
			case 'V' :
				dap+=9; break;
			case 'W' :
			case 'X' :
			case 'Y' :
			case 'Z' :
				dap+=10; break;
		}
	}

	printf("%d\n",dap);
}
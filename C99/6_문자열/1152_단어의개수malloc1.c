// �ܾ��� ������ ���ϴ� ����

#include <stdio.h>
#include <stdlib.h>

main() {
	char *tmp = (char*)malloc(sizeof(char) * 1000000);
	char *s; // ���� ��ҹ��ڿ� �������� �̷���� ���ڿ�
	int count = 0;
	
	scanf("%[^\n]", tmp); // %[^\n] == ' \n(����) ' �� ��������� ���ڿ��� �޴´�(���� ����
	
	s = (char*)malloc(sizeof(char) * strlen(tmp));
	strcpy(s, tmp);
    
	free(tmp); // ���� �Ҵ� ����
    
    
	if(s[0] != ' ') count++;
	for(int i=1; i<strlen(s); i++)
		if(s[i-1] == ' ' && s[i] != ' ') count++;
	
	free(s); // ���� �Ҵ� ���� 
	
	printf("%d\n", count); // ���(�ܾ��� ���� ���
}
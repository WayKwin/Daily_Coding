#include "game.h"
char board[ROW][COL] = { 0 };

void game(){
	InitBoard(board, 3, 3);
	PrintBoard(board, 3, 3);
	while (1)
	{
	if (1 == CheckFull(board))  // ��������� ƽ�ֿ϶������������
	{
		PrintBoard(board, 3, 3);
		printf("��������\n");
		break;
	}
	PlayerMove(board);
	if (0 == CheckWin(board))
	{
		PrintBoard(board, 3, 3);
		printf("��Ӯ��\n");
		break;
	}
	CompterMove(board);
	PrintBoard(board, 3, 3);
	if (0 == CheckWin(board))
	{
		PrintBoard(board, 3, 3);
		printf("����Ӯ��\n");
		break;
	}
}
}
void menu(){
	printf("****************\n");
	printf("***1.��ʼ 0.�˳�****\n");
	int choose = 0;
		printf("�����ѡ��\n");

	do{
			scanf("%d", &choose);
			switch(choose)
			{
			case 1:
					game();
					break;
			case 0:
					break;
				default :
					printf("����������\n");
					continue;
			}

	}
	while (choose);
}
int main()
{
	//srand((unsigned int)time(NULL));
	menu();
	system("pause");
	return 0;
}
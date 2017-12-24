package FaceBook;

import java.util.Arrays;

/*
 * ������άƽ���ڵ��ĸ��㣬�ж����ĸ����Ƿ�����������Ρ�����(x,y)Ϊ������
 �����������ΧΪ [-10000, 10000]��
 */
public class Is_square {
	public boolean isSquare(int p1[], int p2[], int p3[], int p4[]) {
		int p[][] = { { p1[0], p1[1] }, { p2[0], p2[1] }, { p3[0], p3[1] },
				{ p4[0], p4[1] } };
		int cnt = 0;
		int len[] = new int[6];
		for (int i = 0; i <= 3; i++) {
			for (int j = i + 1; j <= 3; j++) {
				// p[i][0]�ǵ�i�����x����;p[j][1]�ǵ�j�����y����
				len[cnt++] = (p[i][0] - p[j][0]) * (p[i][0] - p[j][0])
						+ (p[i][1] - p[j][1]) * (p[i][1] - p[j][1]);
			}
		}
		// �������� ����ǶԽ���
		Arrays.sort(len);
		// �����������,�Խ�����ȵ��ı�����������;
		if (len[0] == len[1] && len[4] == len[5] && len[4] > len[1]) {
			return true;
		}
		return false;
	}
}
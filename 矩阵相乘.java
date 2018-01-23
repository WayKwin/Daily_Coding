
public class Matrix {
	public static int[][] multiple(int[][]a,int[][]b){
		if(a[0].length != b.length)
			return null;
		int[][] c=new int[a.length][b[0].length];
		for (int i = 0; i <a.length; i++) {
			for (int j = 0; j <b[0].length; j++) {
				for (int k = 0; k < a[0].length; k++) {
					c[i][j]+=a[i][k]*b[k][j];//  iΪa������ jΪb������      kΪa���������ɳ˷�����ĵ�a�������պ���b������ 
				}
				
			}
		}
		return c;
	}
	public static void print(int[][] a){
		for (int i = 0; i < a.length; i++) {
			for (int j = 0; j < a[i].length; j++) {
				System.out.print(a[i][j]+"     ");
			}
			System.out.println();
		}
	}
	 public static void main(String[] args) {
		int[][] a={
				{2,1},
				{4,3},
		};
		int[][] b={
				{1,2},
				{1,0},
		};
		 print(multiple(a,b));
	}
}

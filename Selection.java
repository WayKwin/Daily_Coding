
public class Selection extends Sort {

	@Override
	/**
	 * ð���������ڲ�ѭ������
	 * 
	 * ѡ���������ڲ������СԪ�� �Ƚ� n*(n-1)/2��
	 * �����ѭ������ ��������Ҫ����N��
	 * 
	 */
	
	public void sort(Comparable[] a) {
		for (int i = 0; i < a.length; i++) {
			int min=i;
			for(int j=i+1;j<a.length;j++){//�Ƚ�(N-1	)+(N-2).....2+1��  ÿ�ν���һ��
				if(less(a[j],a[min]))
					min=j;//�ҳ���С�������±�(�Ƚ�)
			}
			exch(a,i,min);//��Ĭ����СԪ��(����ߵ�)����Ԫ��(����)
		}	
	}
public static void main(String[] args) {
	Selection s=new Selection();
	Comparable[] a={4,3,2,1};//�Զ�װ��
	s.sort(a);
	show(a);
}
}

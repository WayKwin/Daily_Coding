
public class Shell extends Sort{

	@Override
	public void sort(Comparable[] a) {
		int N=a.length;
		int h=1;
		while(h<N/3)
			h=h*3+1; //1,4,13,
		while(h>=1){
			// ÿ�������ΪH  ÿ��ѭ����ÿ�鶼�������
			for(int i=h;i<N;i++){//��h��ʼ�����Ҵ�����鴦��
			    for(int j=i;j>=h&&less(a[j],a[j-h]);j-=h){//h���ż�(�������һ��ѭ���ڶ���Ԫ�غ͵�һ��Ԫ�ر�)
			    	exch(a,j,j-h);     //���J��H �����ǵ�һ���a[0]��a[h]��    �ڶ����H+1���Ǻ�a[1]��,��hС��2h��ʱ��ֻ�Ƚ�һ��
			    	                   //=2h��Ƚ�����,  ����һ����h��  ÿ����nh��Ԫ��
			    }
			}
			//��������С,���ϱƽ�1
			h/=3;
		} 
	
	}
public static void main(String[] args) {
	Shell s=new Shell();
	Comparable[] a={4,3,2,1};//�Զ�װ��
	s.sort(a);
	show(a);
}
}

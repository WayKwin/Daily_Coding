
public class Insertion  extends Sort{

	@Override
	public void sort(Comparable[] a) {
		for(int i=1;i<a.length;i++){
			for(int j=i;j>=1&&less(a[j],a[j-1]);j--){//�ż��ǵڶ���Ԫ�غ͵�һ��Ԫ�رȽ�
				exch(a,j,j-1);//����Ԫ�غ�ǰ���Ѿ��ź����Ԫ�����αȽ�
			}
		}
	}
	
	public void sort2(Comparable[] a) {
		for(int i=1;i<a.length;i++){
			Comparable temp=a[i];
			int inserpoint=i-1;
		
			while(inserpoint>=0&&less(temp,a[inserpoint]))//��ߵı��ұߵĴ�,6 3
			{
				a[inserpoint+1]=a[inserpoint];//���Ԫ�����ұ��ƶ�   6->3 ��� 6->6
				inserpoint--;// 
			}
			//���inserpointָ���tempС��Ԫ��,��ôtempҪ��ֵ��inserpoint�ұߵ�Ԫ��
			a[inserpoint+1]=temp;
		}
	}
        public static void main(String[] args) {
        	Insertion eg=new Insertion();
        	Comparable[] a={4,3,2,1};//�Զ�װ��
        	eg.sort2(a);
        	show(a);
		} 
}

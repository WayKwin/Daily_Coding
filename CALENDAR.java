import java.util.Calendar;
import java.util.Date;
import java.util.GregorianCalendar;
import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;


public class CALENDAR {
public static void main(String[] args) throws ParseException {
	

	String temp="2017-10-12";
	DateFormat d=new SimpleDateFormat("yyyy-MM-dd");
	 Date date=d.parse(temp);
	 Calendar c=new GregorianCalendar();
	 c.setTime(date);
	 c.set(c.DATE, 1);// �������������Ϊ1��
     System.out.println(c.get(c.DAY_OF_WEEK));//��ȡ��ǰ1����һ�ܵĵڼ��� sunday��1
    //��ס��cc.get(c.DAY_OF_WEEK) ���ֱ����c.DAY_OF_WEEK ��Calendar����Ĭ�ϵĳ���7
      System.out.println(c.getActualMaximum(c.DATE));//��ȡ������������
     int maxDayOfMonth=c.getActualMaximum(c.DATE);
   int DAY_OF_WEEK=c.get(c.DAY_OF_WEEK);
	System.out.println("��\tһ\t��\t��\t��\t��\t��");
	//ѭ��    ����������5�� ���ǿ�ʼ��6���ȥһ��
	for (int i = 1; i <= c.getActualMaximum(c.DATE)+DAY_OF_WEEK-1; i++) {
		if(i<DAY_OF_WEEK)//��1��֮ǰ�����ڱ�ɿհ�
			System.out.print("\t");
		
		else {
			System.out.print(i-DAY_OF_WEEK+1+"\t"); //�ӵ�5�쿪ʼ��1��  �������1��0;
		if(i%7==0)
			System.out.println();
		}
	}


}
}

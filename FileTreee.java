package treefile;

import java.io.File;

public class FileTreee {
	public static void main(String[] args) {
		File f=new File("d:/Java�ļ���/");//��ǰĿ¼Ϊ���ڵ� 
		//File f2=new File("d:/���ް�");//���������Ŀ¼��û���ӽڵ�
		printFile(f,0);
	   System.out.println(f.isDirectory());
	}
	static void printFile(File file,int level){
		for(int i=0;i<level;i++){
			System.out.print("-");
		}
		System.out.println(file.getName());
		//ͨ��������Է���,��⵽1���ļ���,���õݹ��1������;Ȼ��ص�JAVA�ļ���,
		//��⵽2Ҳ���ļ���,���õݹ����a��,
		if(file.isDirectory()){
			File[] files=file.listFiles();//������ͨ�ı��浱ǰĿ¼�µ��ļ�(Ŀ¼),��������״�ǵݹ�ʵ�ֵ�i3
			for( int i=0;i<files.length;i++){
				printFile(files[i],level+1);
			}
		}
	}
}

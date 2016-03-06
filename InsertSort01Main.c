/**
 * �ļ����ƣ�ֱ�Ӳ�������InsertSort01(���ڱ�����)
 * ʱ�䣺2016-3-6 21:26
 * ˵����1��ֱ�Ӳ�����������һ����¼���뵽�Ѿ��ź����(i-1)�������
 * �Ӷ��õ�һ���µġ�����i����¼�������
 * */

/**
 * �������ƣ�InsertSort
 * ����������a--��������ָ�룬arrayLength---�������鳤��
 * ����˵������С����ֱ�Ӳ������򣬺��ڱ�����
 * */
void InsertSort(int *a,int arrayLength)
{
	int i,j;
	for(i=2;i<arrayLength;i++)
	{
		if(a[i]<a[i-1])/*����ǰ��i����¼a[i]�������������ʱ*/
		{
			a[0]=a[i];/*�����±�Ϊ0��Ԫ����Ϊ�ڱ�������ʱ�����洢�ռ�*/
			for(j=i-1;a[0]<a[j];j--)/*���ڱ�(��ʱ����)�е�ֵС��a[j]ʱ�ƶ�ǰi-1�����ź�˳�������*/
			{
				a[j+1]=a[j];
			}
			a[j+1]=a[0];
		}
	}
}

void arrayTraversal(int *a,int arrayLength)
{
	int i;
	for(i=0;i<arrayLength;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void main()
{
	int i;
	int a[8]={0,5,4,3,2,1,7,6};
	InsertSort(a,8);
	arrayTraversal(a,8);

	int b[6]={0,5,3,4,6,2};
	InsertSort(b,6);
	arrayTraversal(b,6);
}

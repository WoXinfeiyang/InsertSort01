/**
 * 文件名称：直接插入排序InsertSort01(含哨兵变量)
 * 时间：2016-3-6 21:26
 * 说明：1、直接插入排序概念：将一个记录插入到已经排好序的(i-1)个有序表，
 * 从而得到一个新的、含有i个记录的有序表。
 * */

/**
 * 函数名称：InsertSort
 * 函数参数：a--整型数组指针，arrayLength---整型数组长度
 * 函数说明：从小到大直接插入排序，含哨兵变量
 * */
void InsertSort(int *a,int arrayLength)
{
	int i,j;
	for(i=2;i<arrayLength;i++)
	{
		if(a[i]<a[i-1])/*当当前第i个记录a[i]不符合排序规则时*/
		{
			a[0]=a[i];/*数组下标为0的元素作为哨兵，即临时变量存储空间*/
			for(j=i-1;a[0]<a[j];j--)/*当哨兵(临时变量)中的值小于a[j]时移动前i-1个已排好顺序的数组*/
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

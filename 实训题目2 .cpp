#include<cstdio>
#include<cstring>
#include<algorithm>
#include<stack>
#define INF 999999
#define M 20
int dist[M][M];///����
int path[M][M];///·��
int Stack[M];///·��ջ
int top;///ջ��
int counts;///��¼·����
int visited[M];///�������
using namespace std;
struct vertex///������Ϣ�ṹ��
{
    int num;///������
    char name[20];///��������
    char info[300];///�������
};
struct maps
{
    int n;///����
    int m;///����
    vertex v[M];
    int edgs[M][M];///�ڽӾ���
} g; ///����ͼ�Ľṹ��
void Creat_vertex()
{
    g.v[0].num=1;
    strcpy(g.v[0].name,"��ְ������¥");
    strcpy(g.v[0].info,"����ѧУ��ʦְ���ļ���¥");
    g.v[1].num=2;
    strcpy(g.v[1].name,"��ѧ�������");
    strcpy(g.v[1].info,"���Ǿٰ����ջ�ĳ���");
    g.v[2].num=3;
    strcpy(g.v[2].name,"������");
    strcpy(g.v[2].info,"���Ｏ����ѧУ�������������������");
    g.v[3].num=4;
    strcpy(g.v[3].name,"�칫ʵ��¥");
    strcpy(g.v[3].info,"8¥һ����ѧ��ʵ�������������쵼��ʦ�İ칫����");
    g.v[4].num=5;
    strcpy(g.v[4].name,"�Ľ�");
    strcpy(g.v[4].info,"����ѧУ�ĵ�������ѧ¥");
    g.v[5].num=6;
    strcpy(g.v[5].name,"���");
    strcpy(g.v[5].info,"����ѧУ�ĵ�������ѧ¥");
    g.v[6].num=7;
    strcpy(g.v[6].name,"����");
    strcpy(g.v[6].info,"����ѧУ�ĵڶ�����ѧ¥��Ҳ�Ǽ������ѧ�뼼��ѧԺ��ϵ¥");
    g.v[7].num=8;
    strcpy(g.v[7].name,"ͼ���");
    strcpy(g.v[7].info,"����ѧУ��ͼ��ݣ�����ḻ����ͬѧ���Ķ���ϰ�ĺ�ȥ��");
    g.v[8].num=9;
    strcpy(g.v[8].name,"����");
    strcpy(g.v[8].info,"����ѧУ�ĵ�������ѧ¥");
    g.v[9].num=10;
    strcpy(g.v[9].name,"������");
    strcpy(g.v[9].info,"����ѧ���������ڱ�����������ĳ���");
    g.v[10].num=11;
    strcpy(g.v[10].name,"��������");
    strcpy(g.v[10].info,"���Ƕ�У������Ϣ���������������޴��¥");
    g.v[11].num=12;
    strcpy(g.v[11].name,"���ٳ�");
    strcpy(g.v[11].info,"���Ƕ�У���ﾶ�ٳ���ͬѧ�Ƕ��������������");
    g.v[12].num=13;
    strcpy(g.v[12].name,"��ѩ��");
    strcpy(g.v[12].info,"����ѧУ��һ���˹���");
}
void Creat_maps()
{
    int i,j;
    g.n=13;///13������
    g.m=18;///18��˫��·��
    for(i=0; i<g.n; i++) ///��ʼ���ڽӾ���
    {
        for(j=0; j<g.n; j++)
        {
            g.edgs[i][j]=INF;
        }
    }
    g.edgs[0][1]=g.edgs[1][0]=500;///д��ߵ���Ϣ
    g.edgs[0][2]=g.edgs[2][0]=1000;
    g.edgs[0][7]=g.edgs[7][0]=500;
    g.edgs[1][3]=g.edgs[3][1]=200;
    g.edgs[1][4]=g.edgs[4][1]=200;
    g.edgs[2][7]=g.edgs[7][2]=400;
    g.edgs[2][10]=g.edgs[10][2]=300;
    g.edgs[3][4]=g.edgs[4][3]=300;
    g.edgs[4][5]=g.edgs[5][4]=300;
    g.edgs[4][6]=g.edgs[6][4]=100;
    g.edgs[5][6]=g.edgs[6][5]=300;
    g.edgs[5][8]=g.edgs[8][5]=200;
    g.edgs[6][8]=g.edgs[8][6]=200;
    g.edgs[6][12]=g.edgs[12][6]=100;
    g.edgs[6][7]=g.edgs[7][6]=200;
    g.edgs[8][9]=g.edgs[9][8]=500;
    g.edgs[9][11]=g.edgs[11][9]=450;
    g.edgs[10][11]=g.edgs[11][10]=300;
}
void Search_info()
{
    int i,n;
    printf("ɽ������ѧԺ��У���ľ����У�\n");
    for(i=0; i<13; i++)
    {
        printf("%d:%s\n",g.v[i].num,g.v[i].name);
    }
    while(1)
    {
        printf("����������Ҫ��ѯ�ľ����ţ�\n");
        printf("��0�˳�\n\n");
        scanf("%d",&n);
        getchar();
        if(n==0)
        {
            break;
        }
        else if(n<0||n>13)
        {
            printf("�����������������룡����\n\n");
            continue;
        }
        else
        {
            printf("%d:%s\n",g.v[n-1].num,g.v[n-1].name);
            printf("%s\n\n",g.v[n-1].info);
        }
    }
    return ;
}
void Floyd() ///��������
{
    int i,j,k;
    for(i=0; i<g.n; i++) ///��ʼ��������·������
    {
        for(j=0; j<g.n; j++)
        {
            dist[i][j]=g.edgs[i][j];
            if(i!=j&&dist[i][j]<INF)
            {
                path[i][j]=i;
            }
            else
            {
                path[i][j]=-1;///-1�����ɴ�
            }
        }
    }
    //printf("%d\n",g.n);
    for(k=0; k<g.n; k++)
    {
        for(i=0; i<g.n; i++)
        {
            for(j=0; j<g.n; j++)
            {
                if(dist[i][j]>(dist[i][k]+dist[k][j]))
                {
                    dist[i][j]=dist[i][k]+dist[k][j];///����
                    path[i][j]=k;         ///path���ڼ�¼���·���ϵĽ��*/
                }
            }
        }
    }
    return ;
}
void Floyd_print(int s, int e)
{
    if(path[s][e]==-1||path[s][e]==e||path[s][e]==s)///�ݹ���ֹ����
    {
        return;
    }
    else
    {
        Floyd_print(s,path[s][e]);///���м����Ϊ�յ������ӡ·��
        printf("%s->",g.v[path[s][e]].name);///��ӡ�м侰������
        Floyd_print(path[s][e],e);///���м����Ϊ��������ӡ·��
    }
}

void Dfs_allpath(int s,int e)
{
    int dis=0;
    int i,j;
    Stack[top]=s;
    top++;  ///�����ջ
    visited[s]=1;///�����ջ
    for(i=0; i<g.n; i++)
    {
        if(g.edgs[s][i]>0&&g.edgs[s][i]!=INF&&!visited[i])
        {
            ///��������ɴ���δ������
            if(i==e)///DFS�����յ㣬��ӡ·��
            {
                printf("��%d��·:",counts++);
                for(j=0; j<top; j++)
                {
                    printf("%s->",g.v[Stack[j]].name);
                    if(j<top-1)///ͳ��·������
                    {
                        dis=dis+g.edgs[Stack[j]][Stack[j+1]];
                    }
                }
                dis=dis+g.edgs[Stack[top-1]][e];
                printf("%s\n",g.v[e].name);///��ӡ�յ�
                printf("�ܳ����ǣ�%dm\n\n",dis);
            }
            else///�����յ����DFS
            {
                Dfs_allpath(i,e);
                top--;///֧·ȫ������һ��,�����ջ
                visited[i]=0;///��ջ����Ϊ�ѳ�ջ�������´η���
            }
        }
    }
}
void Bestpath_Multispot()
{
    int vNum[M]= {0};
    int i,j,dis;
    j=1;
    dis=0;///ͳ��ȫ���ܳ�
    printf("��������Ҫ�����ĵ�%d������ı�ţ�����-1�������룩��",j);
    scanf("%d",&vNum[j-1]);
    while(vNum[j-1]!=-1&&j<13)
    {
        printf("��������Ҫ�����ĵ�%d�������ţ�",++j);
        scanf("%d", &vNum[j-1]);
        if(vNum[j-1]==-1)
        {
            break;
        }
    }
    printf("\n������ѷ���·����");
    for(i=0; vNum[i]>0&&vNum[i+1]>0; i++)
    {
        printf("%s->",g.v[vNum[i]-1].name);///���·���ϵ����
        Floyd_print(vNum[i]-1,vNum[i+1]-1);///���÷��������㷨
        dis+=dist[vNum[i]-1][vNum[i+1]-1];
    }
    printf("%s\n\n",g.v[vNum[j-2]-1].name);///*���·���ϵ��յ�*/
    printf("ȫ���ܳ�Ϊ��%dm\n\n",dis);
}

void Dis_menu()
{
    printf("\n");
    printf("       ************��ӭʹ��ɽ������ѧԺ������ѯϵͳ***********\n\n");
    printf("       *****   1.ɽ�̾�����Ϣ��ѯ           ******************\n");
    printf("       *****   2.������֮�����·��ѯ       ******************\n");
    printf("       *****   3.�����������·����ѯ       ******************\n");
    printf("       *****   4.�ྰ������·�߲�ѯ       ******************\n");
    printf("       *****   5.�˳�ϵͳ                   ******************\n");
    printf("       *******************************************************\n");
    return ;
}
void Dis_map()
{
    printf("\n                          *ɽ�̶�У��У԰�����ͼһ��*\n\n");
    printf("                                                               ��������       \n");
    printf("                                 �����      ������              ��------|    \n");
    printf("                                    ��          ��---------------|       |    \n");
    printf("                                    |------------|               |       |    \n");
    printf("                                                 |               |------��    \n");
    printf("                          ���Ľ�          �˶��� |     (13)��ѩ��|   �ж��ٳ� \n");
    printf("                          ��                    ��      ��       |       |    \n");
    printf("      �Ȱ칫ʵ��¥��-------|--------------------|------|---------|       |    \n");
    printf("                |          |                    |               ��-------|    \n");
    printf("                |          |                    |            �� ��������     \n");
    printf("                |          |                    ��               |            \n");
    printf("                ��ƴ�ѧ�������             ��ͼ���          |            \n");
    printf("                |--------------------------------|               |            \n");
    printf("                |                                |---------------�ǲ���        \n");
    printf("                |                                                            \n");
    printf("                ��� ְ������¥                                                \n\n");
}
int main()
{
    int i,n;
    int start,ends;
    Creat_vertex();
    Creat_maps();
    Dis_map();
    while(1)
    {
        Dis_menu();
        printf("��������Ҫ���������\n");
        scanf("%d",&n);
        getchar();
        if(n<1||n>5)
        {
            printf("�����������������룡����\n");
            continue;
        }
        else
        {
            if(n==1)
            {
                Search_info();
            }
            else if(n==2)
            {
                Dis_map();
                printf("���������ľ��㣺\n");
                scanf("%d",&start);
                printf("�������յ�ľ��㣺\n");
                scanf("%d",&ends);
                Floyd();///��������
                printf("��%s��%s��̾����ǣ�%d\n",g.v[start-1].name,g.v[ends-1].name,dist[start-1][ends-1]);
                printf("%s->",g.v[start-1].name);
                Floyd_print(start-1, ends-1);
                printf("%s\n",g.v[ends-1].name);
            }
            else if(n==3)
            {
                Dis_map();
                counts=1;///��ʼ·����Ϊ1
                printf("���������ľ��㣺\n");
                scanf("%d",&start);
                printf("�������յ�ľ��㣺\n");
                scanf("%d",&ends);
                Dfs_allpath(start-1,ends-1);
            }
            else if(n==4)
            {
                Dis_map();
                Floyd();///��������
                Bestpath_Multispot();
            }
            else if(n==5)
            {
                return 0;
            }
        }

    }
    return 0;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stidio.h>
int main()
{ 
//1.1git bush�ϴ���github�Ĳ��裺
    //�������master��֧��Ҫת����main��֧��
	//git branch -M main
//1.2�����Ҫ�ϲ�master�������²���
	//git checkout - b main
	//# Switched to a new branch 'main'
	//		git branch
	//# * main
	//#  master
	//		git merge master # ��master��֧�ϲ���main��
	//# Already up to date.
	//		git pull origin main --allow - unrelated - histories # git pull origin main�ᱨ��refusing to merge unrelated histories
	//		git push origin main
//2Ȼ������ļ���
	//git add �ļ���
//3���ע��
	//git commit -m "ע����������"
//4�ϴ��ļ�
	//git pull -u origin main
	//git push -u origin main
//ɾ��github�ϵ��ļ�
	//git rm --cached filename    //git rm --cached a.txtɾ�����Ǳ��زֿ��е��ļ�
	//git commit - m "delete filename"
	//git push
//ɾ��github�ϵ�Ŀ¼
	//git rm --cached - r useless    // - r����ɾ��Ŀ¼
	//git commit - m "remove directory from remote repository"
	//git push
	return 0;
}
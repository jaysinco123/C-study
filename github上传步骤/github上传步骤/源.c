#define _CRT_SECURE_NO_WARNINGS
#include <stidio.h>
int main()
{ 
//1.1git bush上传到github的步骤：
    //如果还是master分支需要转换长main分支：
	//git branch -M main
//1.2如果想要合并master则用以下步骤
	//git checkout - b main
	//# Switched to a new branch 'main'
	//		git branch
	//# * main
	//#  master
	//		git merge master # 将master分支合并到main上
	//# Already up to date.
	//		git pull origin main --allow - unrelated - histories # git pull origin main会报错：refusing to merge unrelated histories
	//		git push origin main
//2然后添加文件名
	//git add 文件名
//3添加注释
	//git commit -m "注释内容任意"
//4上传文件
	//git push -u origin main
	return 0;
}
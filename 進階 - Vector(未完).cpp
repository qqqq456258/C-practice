#include <iostream>
#include <vector>
using namespace std;

int main(){
	cout<<"�i Vector(STL) �j"<<endl;
	//�򥻫ŧi�C 
	vector <int> s;
	vector <int>::iterator k;
	s.push_back(100);
	s.push_back(200);
	s.push_back(300);
	s.pop_back();
	for(k=s.begin();k!=s.end();k++){
		k.erase();
		cout<<*k<<endl;
	}
	/*
	vec[i] - �s�����ޭȬ� i �������ѷӡC
	vec.at(i) - �s�����ޭȬ� i ���������ѷӡA
	vec.front() - �^�� vector �Ĥ@�Ӥ������ѷӡC
	vec.back() - �^�� vector �̧��������ѷӡC
	
	vec.push_back() - �s�W������ vector �����ݡA���n�ɷ|�i��O����t�m�C
	vec.pop_back() - �R�� vector �̧��ݪ������C
	vec.insert() - ���J�@�өΦh�Ӥ����� vector �������N��m�C
	vec.erase() - �R�� vector ���@�өΦh�Ӥ����C
	vec.clear() - �M�ũҦ������C
	vec.size() - ���o vector �ثe�����������ӼơC
	vec.empty() - �p�G vector �������šA�h�Ǧ^ true �ȡC
	vec.capacity() - ���o vector �ثe�i�e�Ǫ��̤j�����ӼơC�o�Ӥ�k�P�O���骺�t�m�����A���q�`�u�|�W�[�A���|�]�������Q�R����H����֡C
	
	���s�t�m�����]����
	vec.reserve() - �p�����n�A�i���� vector ���e�q�j�p�]�t�m��h���O����^�C�b���h�� STL �갵�A�e�q�u��W�[�A���i�H��֡C
	vec.resize() - ���� vector �ثe�����������ӼơC
	
	�|	�N (Iterator)
	vec.begin() - �^�Ǥ@��Iterator�A�����V vector �Ĥ@�Ӥ����C
	vec.end() - �^�Ǥ@��Iterator�A�����V vector �̧��ݤ������U�@�Ӧ�m�]�Ъ`�N�G�����O�̥������^�C
	vec.rbegin() - �^�Ǥ@�ӤϦVIterator�A�����V vector �̧��ݤ������C
	vec.rend() - �^�Ǥ@��Iterator�A�����V vector ���Ĥ@�Ӥ����C
	*/ 
	

	return 0;
}

#include <iostream>
#include <vector>
using namespace std;

int main(){
	cout<<"【 Vector(STL) 】"<<endl;
	//基本宣告。 
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
	vec[i] - 存取索引值為 i 的元素參照。
	vec.at(i) - 存取索引值為 i 的元素的參照，
	vec.front() - 回傳 vector 第一個元素的參照。
	vec.back() - 回傳 vector 最尾元素的參照。
	
	vec.push_back() - 新增元素至 vector 的尾端，必要時會進行記憶體配置。
	vec.pop_back() - 刪除 vector 最尾端的元素。
	vec.insert() - 插入一個或多個元素至 vector 內的任意位置。
	vec.erase() - 刪除 vector 中一個或多個元素。
	vec.clear() - 清空所有元素。
	vec.size() - 取得 vector 目前持有的元素個數。
	vec.empty() - 如果 vector 內部為空，則傳回 true 值。
	vec.capacity() - 取得 vector 目前可容納的最大元素個數。這個方法與記憶體的配置有關，它通常只會增加，不會因為元素被刪減而隨之減少。
	
	重新配置／重設長度
	vec.reserve() - 如有必要，可改變 vector 的容量大小（配置更多的記憶體）。在眾多的 STL 實做，容量只能增加，不可以減少。
	vec.resize() - 改變 vector 目前持有的元素個數。
	
	疊	代 (Iterator)
	vec.begin() - 回傳一個Iterator，它指向 vector 第一個元素。
	vec.end() - 回傳一個Iterator，它指向 vector 最尾端元素的下一個位置（請注意：它不是最末元素）。
	vec.rbegin() - 回傳一個反向Iterator，它指向 vector 最尾端元素的。
	vec.rend() - 回傳一個Iterator，它指向 vector 的第一個元素。
	*/ 
	

	return 0;
}

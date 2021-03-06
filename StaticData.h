//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : FishingJoy
//  @ File Name : StaticData.h
//  @ Date : 2017/9/30
//  @ Author : Gloria
//
//


#if !defined(_STATICDATA_H)
#define _STATICDATA_H
#include "StaticData.h" 
#include "cocos2d.h"
USING_NS_CC;   
using namespace std;  
#define STATIC_DATA_STRING(key) StaticData::sharedStaticData()->stringFormKey(key)  
#define STATIC_DATA_INT(key)   StaticData::sharedStaticData()->intFromKey(key)  
#define STATIC_DATA_FLOAT(key) StaticData::sharedStaticData()->floatFromKey(key)  
#define STATIC_DATA_BOOLEAN(key) StaticData::sharedStaticData()->booleanFromKey(key)  
#define STATIC_DATA_POINT(key)   StaticData::sharedStaticData()->pointFromKey(key)  
#define STATIC_DATA_RECT(key)    StaticData::sharedStaticData()->rectFromKey(key)  
#define STATIC_DATA_SIZE(key)   StaticData::sharedStaticData()->sizeFromKey(key)  

class StaticData {
public:
	static StaticData* sharedStaticData();
	static void purge();
	int intValueForKey(const std::string &key);
	const char* stringValueFromKey(const std::string &key);
	bool booleanFromKey(const std::string &key);
	cocos2d::CCPoint pointFromKey(const std::string &key);
	cocos2d::CCRect rectFromKey(const std::string &key);
	cocos2d::CCSize sizeFromKey(const std::string &key);
protected:
	cocos2d::CCDictionary* _dictionary;
	std::string _staticFileName;
	bool init();
private:
	~StaticData();
	StaticData();
};

#endif  //_STATICDATA_H

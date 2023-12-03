#ifndef ___StagesProvider_h___
#define ___StagesProvider_h___

class TmxMap;

class StagesProvider
{
public:
	StagesProvider() {}
	virtual ~StagesProvider() {}
public:
	virtual bool hasStage() const = 0;
	virtual TmxMap* getStage() const = 0;
};

#endif
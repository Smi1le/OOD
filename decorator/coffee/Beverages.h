#pragma once

#include "IBeverage.h"

// Базовая реализация напитка, предоставляющая его описание
class CBeverage : public IBeverage
{
public:
	CBeverage(const std::string & description)
		:m_description(description)
	{}

	std::string GetDescription()const override final
	{
		return m_description;
	}
private:
	std::string m_description;
};

// Кофе
class CCoffee : public CBeverage
{
public:
	CCoffee(const std::string& description = "Coffee")
		:CBeverage(description) 
	{}

	double GetCost() const override 
	{
		return 60; 
	}
};

// Капуччино
class CCapuccino : public CCoffee
{
public:
	CCapuccino() 
		:CCoffee("Capuccino") 
	{}

	double GetCost() const override 
	{
		return 80; 
	}
};

class CDoubleCapuccino : public CCoffee
{
	CDoubleCapuccino():
		CCoffee("Double capuccino")
	{}

	double GetCost() const override
	{
		return 120;
	}
};

// Латте
class CLatte : public CCoffee
{
public:
	CLatte() 
		:CCoffee("Latte") 
	{}

	double GetCost() const override 
	{
		return 90; 
	}
};

class CDoubleLatte : public CCoffee
{
public:
	CDoubleLatte() 
		:CCoffee("Double latte")
	{}

	double GetCost() const override
	{
		return 130;
	}
};

// Зеленый Чай
class CGreenTea : public CBeverage
{
public:
	CGreenTea()
		:CBeverage("Green tea") 
	{}

	double GetCost() const override 
	{
		return 30; 
	}
};

// Черный Чай
class CBlackTea : public CBeverage
{
public:
	CBlackTea()
		:CBeverage("Black tea")
	{}

	double GetCost() const override
	{
		return 30;
	}
};

// Чай Earl Grey
class CEarlGreyTea : public CBeverage
{
public:
	CEarlGreyTea()
		:CBeverage("Earl grey tea")
	{}

	double GetCost() const override
	{
		return 30;
	}
};

// Чай Earl Grey
class CPuerTea : public CBeverage
{
public:
	CPuerTea()
		:CBeverage("Puer tea")
	{}

	double GetCost() const override
	{
		return 30;
	}
};

// Молочный коктейль
class CSmallPortionMilkshake : public CBeverage
{
public:
	CSmallPortionMilkshake()
		:CBeverage("Small Portion Milkshake") 
	{}

	double GetCost() const override 
	{ 
		return 50; 
	}
};


class CMidstreamMilkshake : public CBeverage
{
public:
	CMidstreamMilkshake()
		:CBeverage("Midstream Milkshake")
	{}

	double GetCost() const override
	{
		return 60;
	}
};

class CLargePortionMilkshake : public CBeverage
{
public:
	CLargePortionMilkshake()
		:CBeverage("Midstream Milkshake")
	{}

	double GetCost() const override
	{
		return 80;
	}
};
#pragma once

#include "Item.h"
#include "Player.h"

class Potion : public Item
{
public:

	Potion(string _name, short _hpRegen, string _textAction = "", string _textPickup = "");
	Potion(const Potion& other);

	void action() override;
	void pickup() override;

private:

	short hpRegen;
};


class Key : public Item
{
public:

	Key();
	Key(string _name, string _textAction, string _textPickup, bool _erased = false);

	void action() override;
	void pickup() override;

	bool erasedUse = false;

	static Key& getKey(const short _id);
	static Key& getKey(const string& _name);
	static Key& getRandomKey();

private:

	static vector<Key> allKey;
	static void initAllKey();
};
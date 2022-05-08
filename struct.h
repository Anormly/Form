#pragma once
#include <vector>
#include <fstream>
#include <string>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include <algorithm>

struct USER {
	std::string surname;
	std::string name;
	std::string mName;
	std::string number;
	std::string mail;
	std::string login;
	std::string password;
};

struct Book {
	std::string name;
	std::string autor_name;
	std::string cost;
	std::string genre;
};
struct Order {
	std::string book_name;
	std::string author_name;
	std::string cost;
	std::string genre;
	std::string date;
	std::string user_name;
	std::string user_surname;
	std::string user_m_name;
};
struct CompareFirstName
{
	CompareFirstName(const std::string& s) : user_surname(s) {}

	bool operator () (const Order& order) const
	{
		return order.user_surname == user_surname;
	}

	std::string user_surname;
};

static USER admin;
static USER user;
#include <bits/stdc++.h> 
using namespace std; 

struct lan
{
	int bridge_count;
	char id;
	vector<int> lan_connect;
	vector<int> hosts;

	lan() {

	}

	lan(int bridge_count, char id, vector<int> &lan_connect) {
		this->bridge_count = bridge_count;
		this->id = id;
		this->lan_connect = lan_connect;
	}
};

struct bridge
{
	int lan_count;
	int id;
	vector<char> bridge_connect;
	map<int, char> table;
	map<char, char> port_type;

	bridge() {

	}

	bridge(int lan_count,int id, vector<char> &bridge_connect) {
		this->lan_count = lan_count;
		this->id = id;
		this->bridge_connect = bridge_connect;
	}

};

struct message
{
	int sender;
	int assumed_root;
	int distance;

	message() {

	}

	message(int assumed_root, int distance, int sender) {
		this->assumed_root = assumed_root;
		this->distance = distance;
		this->sender = sender;
	}
};


struct trace
{
	char status;
	int occurs_at;
	char port;
	message msg;

	trace() {

	}

	trace(char status, int occurs_at, char port, message msg) {
		this->status = status;
		this->occurs_at = occurs_at;
		this->port = port;
		this->msg = msg;
	}
};
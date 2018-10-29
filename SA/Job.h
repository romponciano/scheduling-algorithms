#pragma once

class Job {
	int id;
	int lenght;
	int fcfs;
	int rr;
	int sjf;
	int mlfq;

	public:
		Job():id(-1),lenght(-1),rr(-1) {}
		Job(int i, int l) { id = i; lenght = l; }
		int getId() { return id; }
		int getLenght() { return lenght; }
		int getFcfs() { return fcfs; }
		int getRr() { return rr; }
		int getSjf() { return sjf; }
		int getMlfq() { return mlfq; }
		void setFcfs(int val) { fcfs = val; }
		void setRr(int val) { rr = val; }
		void setSjf(int val) { sjf = val; }
		void setMlfq(int val) { mlfq = val; }
};
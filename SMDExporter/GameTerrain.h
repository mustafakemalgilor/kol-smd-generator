#pragma once
#include "stdafx.h"
#include <string>


class CGameTerrain
{
public:
	CGameTerrain();
	~CGameTerrain();

	bool Load(const std::string & szGtdFile);


	bool LoadFromStream(FILE * fp,bool readingGtd = false);
	void SaveToFilestream(FILE * fp);

	float GetHeight(int fX, int fZ);
	bool ValidPosition(int fX, int fZ);
	bool MakeMoveTable(short ** move);
	int GetMapSize() const { return m_iHeightMapSize; }
private:
	float ** m_ppHeights;
	//short ** m_ppEvents;
	int m_iHeightMapSize;
	float m_fUnitDistance;
};


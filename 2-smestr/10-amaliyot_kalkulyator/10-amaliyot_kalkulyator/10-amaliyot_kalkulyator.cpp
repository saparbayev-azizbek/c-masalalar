// 10-amaliyot_kalkulyator.cpp: ������� ���� �������.

#include "stdafx.h"
#include "Form1.h"

using namespace My10amaliyot_kalkulyator;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew Form1());
	return 0;
}

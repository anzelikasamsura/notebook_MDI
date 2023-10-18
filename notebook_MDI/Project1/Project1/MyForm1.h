#pragma once

#include"Count.h"
#include <iostream>
#include <fstream>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// ������ ��� MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

		MyForm1(String^ text) {
			InitializeComponent();
			richTextBox1->Text == text;
			MessageBox::Show(richTextBox1->Text + "\n\n\n\n" + text);
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	public: System::Windows::Forms::RichTextBox^ richTextBox1;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripComboBox^ toolStripComboBox1;
	private: System::Windows::Forms::ToolStripComboBox^ toolStripComboBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->toolStripComboBox2 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox2 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripComboBox1,
					this->toolStripComboBox2, this->�������������ToolStripMenuItem, this->����������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(601, 27);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripComboBox1
			// 
			this->toolStripComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"8", L"10", L"12", L"14", L"16", L"18",
					L"20"
			});
			this->toolStripComboBox1->Name = L"toolStripComboBox1";
			this->toolStripComboBox1->Size = System::Drawing::Size(114, 23);
			this->toolStripComboBox1->Text = L"������ ������";
			this->toolStripComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::toolStripComboBox1_SelectedIndexChanged);
			// 
			// toolStripComboBox2
			// 
			this->toolStripComboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"�������", L"����������", L"������",
					L"�������", L"�������", L"�����", L"����������", L"�������", L"������", L"�����", L"�����"
			});
			this->toolStripComboBox2->Name = L"toolStripComboBox2";
			this->toolStripComboBox2->Size = System::Drawing::Size(92, 23);
			this->toolStripComboBox2->Text = L"���� ������";
			this->toolStripComboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::toolStripComboBox2_SelectedIndexChanged);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripTextBox1,
					this->���������ToolStripMenuItem
			});
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(110, 23);
			this->�������������ToolStripMenuItem->Text = L"��������� ����";
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(200, 23);
			this->toolStripTextBox1->Text = L"�������� �����";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(260, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::���������ToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripTextBox2,
					this->�������ToolStripMenuItem
			});
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(92, 23);
			this->����������ToolStripMenuItem->Text = L"������ ����";
			// 
			// toolStripTextBox2
			// 
			this->toolStripTextBox2->Name = L"toolStripTextBox2";
			this->toolStripTextBox2->Size = System::Drawing::Size(150, 23);
			this->toolStripTextBox2->Text = L"�������� �����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(210, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::�������ToolStripMenuItem_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(0, 27);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(601, 278);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(601, 305);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm1";
			this->Text = L"��������� ����";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm1::MyForm1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		COUNT--;
	}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
		toolStripComboBox1->Text = "8";
	}
			 Int32 wight = 8;
	private: System::Void toolStripComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (toolStripComboBox1->SelectedIndex != -1) {
			wight = Convert::ToInt32(toolStripComboBox1->Text);
			richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", wight,
				System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
		}
	}

		   String^ color;
private: System::Void toolStripComboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (toolStripComboBox2->SelectedIndex != -1) {
		color = toolStripComboBox2->Text;
		if (color == "�������") { richTextBox1->ForeColor = Color::Red; return;  }
		if(color == "����������"){ richTextBox1->ForeColor = Color::Orange; return; }
		if(color == "������"){ richTextBox1->ForeColor = Color::Yellow; return; }
		if(color == "�������"){ richTextBox1->ForeColor = Color::Green; return; }
		if(color == "�������"){ richTextBox1->ForeColor = Color::SkyBlue; return; }
		if(color == "�����"){ richTextBox1->ForeColor = Color::Blue; return; }
		if(color == "����������"){ richTextBox1->ForeColor = Color::Purple; return; }
		if(color == "�������"){ richTextBox1->ForeColor = Color::Pink; return; }
		if(color == "������"){ richTextBox1->ForeColor = Color::Black; return; }
		if(color == "�����"){ richTextBox1->ForeColor = Color::White; return; }
		if(color == "�����"){ richTextBox1->ForeColor = Color::Gray; return; }
	}
}

	void _MarshalStringg(String^ s, string& os) {
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

private: System::Void ���������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	if (toolStripTextBox1->Text == "�������� �����" || toolStripTextBox1->Text == "") {
		MessageBox::Show("�� �� ����� �������� �����!", "��������!");
		return;
	}
	string text;
	_MarshalStringg(richTextBox1->Text, text);

	string name;
	_MarshalStringg(toolStripTextBox1->Text, name);

	ofstream file;
	file.open(name + ".txt");
	file << text;
	file.close();

	MessageBox::Show("���� ��������!\n\n" + toolStripTextBox1->Text + ".txt");
}
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (COUNT == 3) {
			MessageBox::Show("������� ������ 3-� ������!", "��������!");
			return;
		}

		ifstream file;
		string name, a, text;
		_MarshalStringg(toolStripTextBox2->Text, name);

		file.open(name + ".txt");

		if (!file) {
			MessageBox::Show("����� �� ����������!", "��������!"); 
			return;
		}

		while (!file.eof()) {
			file >> a;
			text += a + "\n";
		}
		file.close();

		String^ textt = gcnew String(text.c_str());

		richTextBox1->Text = textt;

	}
	catch (Exception ^ ex) { MessageBox::Show(ex->Message->ToString()); }

}
};
}

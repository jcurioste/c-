#pragma once

namespace trabajosuma10 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  suma;
	protected: 

	protected: 

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  resta;

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  calcular;


	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->suma = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->resta = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->calcular = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// suma
			// 
			this->suma->AutoSize = true;
			this->suma->Location = System::Drawing::Point(36, 36);
			this->suma->Name = L"suma";
			this->suma->Size = System::Drawing::Size(32, 13);
			this->suma->TabIndex = 0;
			this->suma->Text = L"suma";
			this->suma->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(137, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// resta
			// 
			this->resta->AutoSize = true;
			this->resta->Location = System::Drawing::Point(39, 112);
			this->resta->Name = L"resta";
			this->resta->Size = System::Drawing::Size(30, 13);
			this->resta->TabIndex = 2;
			this->resta->Text = L"resta";
			this->resta->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(137, 112);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// calcular
			// 
			this->calcular->Location = System::Drawing::Point(92, 195);
			this->calcular->Name = L"calcular";
			this->calcular->Size = System::Drawing::Size(75, 23);
			this->calcular->TabIndex = 4;
			this->calcular->Text = L"calcular";
			this->calcular->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->calcular);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->resta);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->suma);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}


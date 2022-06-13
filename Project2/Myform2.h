#pragma once
#include "MyForm1.h"
#include "MyForm4.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de My
	/// </summary>
	public ref class My : public System::Windows::Forms::Form
	{
	public:
		My(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~My()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::IContainer^ components;
	private: System::DateTime^ date = System::DateTime::Now;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(30, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 62);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Gestion de statistiques";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &My::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(399, 337);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 41);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Fermer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &My::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(171, 64);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 62);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Gestion de Clients";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(30, 151);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 62);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Gestion de stock";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(171, 151);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(121, 62);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Gestion de Personnels";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &My::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(171, 238);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(121, 62);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Gestion de commandes";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// label1
			// 
		
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 390);
			this->label1->Name = L"datetimenow";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"La date du jour:" + date->ToString();
			// 
			// My
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(514, 405);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"My";
			this->Text = L"Tronik";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm1^ ostats;
		ostats = gcnew MyForm1;
		ostats->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		My::~My();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm4^ opersonnel;
		opersonnel = gcnew MyForm4;
		opersonnel->ShowDialog();
	}
};
}

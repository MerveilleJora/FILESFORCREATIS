#pragma once
#include "CLServiceStatistique.h"
#include "CLTBStatistique.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Simulation
	/// </summary>
	public ref class Simulation : public System::Windows::Forms::Form
	{
	public:
		Simulation(void)
		{
			InitializeComponent();
			oSvcStat = gcnew  NS_Services::CLsvcStatistique;
			oDs = gcnew System::Data::DataSet;
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Simulation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ TVAc;
	protected:

	private: System::Windows::Forms::TextBox^ TVA;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ marge;
	private: System::Windows::Forms::ComboBox^ margeC;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ demarque;
	private: System::Windows::Forms::ComboBox^ DemC;


	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ L1;


	private: System::Windows::Forms::Label^ rsl;

	private: NS_Services::CLsvcStatistique^ oSvcStat;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ rsl2;
	private: System::Windows::Forms::Button^ button2;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TVAc = (gcnew System::Windows::Forms::ComboBox());
			this->TVA = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->marge = (gcnew System::Windows::Forms::TextBox());
			this->margeC = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->demarque = (gcnew System::Windows::Forms::TextBox());
			this->DemC = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->L1 = (gcnew System::Windows::Forms::Label());
			this->rsl = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->rsl2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TAUX TVA";
			// 
			// TVAc
			// 
			this->TVAc->DisplayMember = L"4";
			this->TVAc->FormattingEnabled = true;
			this->TVAc->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5", L"10", L"15" });
			this->TVAc->Location = System::Drawing::Point(79, 9);
			this->TVAc->Name = L"TVAc";
			this->TVAc->Size = System::Drawing::Size(121, 21);
			this->TVAc->TabIndex = 1;
			this->TVAc->ValueMember = L"3";
			// 
			// TVA
			// 
			this->TVA->Location = System::Drawing::Point(79, 207);
			this->TVA->Name = L"TVA";
			this->TVA->Size = System::Drawing::Size(100, 20);
			this->TVA->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 259);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Démarque";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Marge";
			// 
			// marge
			// 
			this->marge->Location = System::Drawing::Point(80, 233);
			this->marge->Name = L"marge";
			this->marge->Size = System::Drawing::Size(100, 20);
			this->marge->TabIndex = 6;
			// 
			// margeC
			// 
			this->margeC->FormattingEnabled = true;
			this->margeC->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"5", L"10", L"15" });
			this->margeC->Location = System::Drawing::Point(79, 36);
			this->margeC->Name = L"margeC";
			this->margeC->Size = System::Drawing::Size(121, 21);
			this->margeC->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(29, 39);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Marge";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(28, 207);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"TVA";
			// 
			// demarque
			// 
			this->demarque->Location = System::Drawing::Point(80, 256);
			this->demarque->Name = L"demarque";
			this->demarque->Size = System::Drawing::Size(100, 20);
			this->demarque->TabIndex = 10;
			// 
			// DemC
			// 
			this->DemC->FormattingEnabled = true;
			this->DemC->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"2", L"3", L"5" });
			this->DemC->Location = System::Drawing::Point(79, 68);
			this->DemC->Name = L"DemC";
			this->DemC->Size = System::Drawing::Size(121, 21);
			this->DemC->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 71);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Démarque";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(227, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(39, 20);
			this->button3->TabIndex = 14;
			this->button3->Text = L"ok";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Simulation::button3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(206, 39);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(15, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"%";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(185, 233);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(15, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"%";
			// 
			// L1
			// 
			this->L1->AutoSize = true;
			this->L1->Location = System::Drawing::Point(76, 175);
			this->L1->Name = L"L1";
			this->L1->Size = System::Drawing::Size(80, 13);
			this->L1->TabIndex = 18;
			this->L1->Text = L"Saisie manuelle";
			// 
			// rsl
			// 
			this->rsl->AutoSize = true;
			this->rsl->Location = System::Drawing::Point(272, 19);
			this->rsl->Name = L"rsl";
			this->rsl->Size = System::Drawing::Size(16, 13);
			this->rsl->TabIndex = 19;
			this->rsl->Text = L"...";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(240, 271);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 20);
			this->button1->TabIndex = 20;
			this->button1->Text = L"Retour";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Simulation::button1_Click);
			// 
			// rsl2
			// 
			this->rsl2->AutoSize = true;
			this->rsl2->Location = System::Drawing::Point(280, 233);
			this->rsl2->Name = L"rsl2";
			this->rsl2->Size = System::Drawing::Size(16, 13);
			this->rsl2->TabIndex = 22;
			this->rsl2->Text = L"...";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(227, 229);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(39, 20);
			this->button2->TabIndex = 23;
			this->button2->Text = L"ok";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Simulation::button2_Click);
			// 
			// Simulation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(306, 303);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->rsl2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->rsl);
			this->Controls->Add(this->L1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->demarque);
			this->Controls->Add(this->DemC);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->marge);
			this->Controls->Add(this->margeC);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TVA);
			this->Controls->Add(this->TVAc);
			this->Controls->Add(this->label1);
			this->Name = L"Simulation";
			this->Text = L"Simulation";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int TVAr = Convert::ToInt32(TVAc->Text);
	int marger = Convert::ToInt32(margeC->Text);
	int demr = Convert::ToInt32(DemC->Text);

	//this->rsl->Text= Convert::ToString(TVAr + marger + demr);
	this->rsl->Text = this->oSvcStat->simulationvaleurstock(TVAr, marger, demr);
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Simulation::~Simulation();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int TVAr = Convert::ToInt32(TVA->Text);
	int marger = Convert::ToInt32(marge->Text);
	int demr = Convert::ToInt32(demarque->Text);

	//this->rsl->Text= Convert::ToString(TVAr + marger + demr);
	this->rsl2->Text = this->oSvcStat->simulationvaleurstock(TVAr, marger, demr);
}
};
#pragma endregion
	}


#pragma once
#include "CLCAD.h"
#include "CLServiceStatistique.h"
#include "MyForm3.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: NS_Services::CLsvcStatistique^ oSvcStat;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ PMoyen;
	private: System::Windows::Forms::Label^ Caffaire;
	private: System::Windows::Forms::Label^ Vcom;
	private: System::Windows::Forms::Label^ Vachat;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->PMoyen = (gcnew System::Windows::Forms::Label());
			this->Caffaire = (gcnew System::Windows::Forms::Label());
			this->Vcom = (gcnew System::Windows::Forms::Label());
			this->Vachat = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Panier moyen";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(524, 163);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 103);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Retour à l\'accueil";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(12, 181);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(137, 85);
			this->button8->TabIndex = 7;
			this->button8->Text = L"Simulation";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(12, 41);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(137, 23);
			this->button9->TabIndex = 8;
			this->button9->Text = L"Chiffre d\'affaire";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(381, 163);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(137, 23);
			this->button10->TabIndex = 9;
			this->button10->Text = L"articles sous seuil";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(381, 188);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(137, 23);
			this->button11->TabIndex = 10;
			this->button11->Text = L"articles les moins vendus";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm1::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(381, 217);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(137, 23);
			this->button12->TabIndex = 11;
			this->button12->Text = L"articles les plus vendus";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(12, 70);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(137, 23);
			this->button13->TabIndex = 12;
			this->button13->Text = L"Valeur d\'achat";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(381, 243);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(137, 23);
			this->button14->TabIndex = 13;
			this->button14->Text = L"Achat par client";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm1::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(12, 99);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(137, 23);
			this->button15->TabIndex = 14;
			this->button15->Text = L"Valeur commercial";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm1::button15_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(277, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(322, 141);
			this->dataGridView1->TabIndex = 15;
			// 
			// PMoyen
			// 
			this->PMoyen->AutoSize = true;
			this->PMoyen->Location = System::Drawing::Point(155, 17);
			this->PMoyen->Name = L"PMoyen";
			this->PMoyen->Size = System::Drawing::Size(0, 13);
			this->PMoyen->TabIndex = 16;
			// 
			// Caffaire
			// 
			this->Caffaire->AutoSize = true;
			this->Caffaire->Location = System::Drawing::Point(155, 46);
			this->Caffaire->Name = L"Caffaire";
			this->Caffaire->Size = System::Drawing::Size(0, 13);
			this->Caffaire->TabIndex = 17;
			// 
			// Vcom
			// 
			this->Vcom->AutoSize = true;
			this->Vcom->Location = System::Drawing::Point(155, 104);
			this->Vcom->Name = L"Vcom";
			this->Vcom->Size = System::Drawing::Size(0, 13);
			this->Vcom->TabIndex = 18;
			// 
			// Vachat
			// 
			this->Vachat->AutoSize = true;
			this->Vachat->Location = System::Drawing::Point(155, 75);
			this->Vachat->Name = L"Vachat";
			this->Vachat->Size = System::Drawing::Size(0, 13);
			this->Vachat->TabIndex = 19;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 287);
			this->Controls->Add(this->Vachat);
			this->Controls->Add(this->Vcom);
			this->Controls->Add(this->Caffaire);
			this->Controls->Add(this->PMoyen);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm1";
			this->Text = L"Service Statistique";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Caffaire->Text = this->oSvcStat->calculChiffreAffaire("Rsl");
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->PMoyen->Text = this->oSvcStat->calculPanierMoyen("Rsl");
	
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oDs = this->oSvcStat->ArticleSousSeuil("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
	this->dataGridView1->ClearSelection();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Vachat->Text = this->oSvcStat->calculvaleurachat("Rsl");
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oDs = this->oSvcStat->montanttotalparclient("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Vcom->Text = this->oSvcStat->Calculvaleurcommercial("Rsl");
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oDs = this->oSvcStat->AfficherArticlesmoinsvendus("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oDs = this->oSvcStat->AfficherArticlesplusvendus("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	Simulation^ osim;
	osim = gcnew Simulation;
	osim->ShowDialog();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1::~MyForm1();
}

};
}

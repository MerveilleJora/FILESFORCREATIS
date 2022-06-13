#include "CLServiceStatistique.h"
#include "CLCAD.h"
NS_Services::CLsvcStatistique::CLsvcStatistique()
{
	this->oCAD = gcnew NS_Comp_Data::CLCAD;
	this->oTBStatistique = gcnew NS_Composants::CLTBStatistique;
};
String^ NS_Services::CLsvcStatistique::calculChiffreAffaire(System::String^ dataTableName)
{
	System::String^ sql;
	this->oTBStatistique = gcnew NS_Composants::CLTBStatistique;
	sql = this->oCAD->actionRows(this->oTBStatistique->SelectchiffreAffaire());
	return sql;
};
System::Data::DataSet^ NS_Services::CLsvcStatistique::ArticleSousSeuil(System::String^ dataTableName)
{
	System::String^ sql;
	this->oTBStatistique = gcnew NS_Composants::CLTBStatistique;
	sql = this->oTBStatistique->Selectsousseuil();
	return this->oCAD->getRows(sql, dataTableName);
};


System::String^ NS_Services::CLsvcStatistique::calculPanierMoyen(System::String^ dataTableName)
{
	System::String^ sql;
	this->oTBStatistique = gcnew NS_Composants::CLTBStatistique;
	sql = this->oCAD->actionRows(this->oTBStatistique->SelectavgPanierAchat());
	return sql;
};

System::Data::DataSet^ NS_Services::CLsvcStatistique::AfficherArticlesmoinsvendus(System::String^ dataTableName)
{
	System::String^ sql;
	this->oTBStatistique = gcnew NS_Composants::CLTBStatistique;
	sql = this->oTBStatistique->Select10moinsvendus();
	return this->oCAD->getRows(sql, dataTableName);

};

System::Data::DataSet^ NS_Services::CLsvcStatistique::AfficherArticlesplusvendus(System::String^ dataTableName)
{
	System::String^ sql;
	this->oTBStatistique = gcnew NS_Composants::CLTBStatistique;
	sql = this->oTBStatistique->Select10plusvendus();
	return this->oCAD->getRows(sql, dataTableName);
};

String^ NS_Services::CLsvcStatistique::calculvaleurachat(System::String^ dataTableName)
{
	System::String^ sql;
	this->oTBStatistique = gcnew NS_Composants::CLTBStatistique;
	sql = this->oCAD->actionRows(this->oTBStatistique->SelectValeurAchat());
	return sql;
};

System::Data::DataSet^ NS_Services::CLsvcStatistique::montanttotalparclient(System::String^ dataTableName)
{
	System::String^ sql;
	this->oTBStatistique = gcnew NS_Composants::CLTBStatistique;
	sql = this->oTBStatistique->SelectachatparClient();
	return this->oCAD->getRows(sql, dataTableName);
};

System::String^ NS_Services::CLsvcStatistique::Calculvaleurcommercial(System::String^ dataTableName)
{
	System::String^ sql;
	this->oTBStatistique = gcnew NS_Composants::CLTBStatistique;
	sql = this->oCAD->actionRows(this->oTBStatistique->SelectValeurcommerciale());
	return sql;
};

#include "CLTBPersonne.h"


System::String^ NS_Comp_Mappage::CLPersonne::SelectPersonnel(void)
{
	return "select id_Personne, Nom, Prenom,id_type from Personne inner join Associer on Personne.id_Personne = Associer.identifiantwhere id_type = 'Personnel';";
}

System::String^ NS_Comp_Mappage::CLPersonne::SelectClient(void)
{
	return "select id_Personne, Nom, Prenom,id_type from Personne inner join Associer on Personne.id_Personne = Associer.identifiantwhere id_type = 'Client';";
}

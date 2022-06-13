#include "CLTBStatistique.h"

System::String^ NS_Composants::CLTBStatistique::SelectavgPanierAchat(void)
{
	return " select sum(Ventepararticle)/count(distinct id_commande) as Panier_Moyen from (select  Composer.Reference_article, Composer.id_commande, Composer.quantiteartticle, Composer.type_articles, Article.Prix_ht, Article.Taux_TVA, (Article.Prix_ht * Composer.quantiteartticle) as Ventepararticle from Composer INNER JOIN Article on Article.Reference_article = composer.Reference_article) as calcul;";
}
System::String^ NS_Composants::CLTBStatistique::SelectachatparClient(void)
{
	return "select   id_Personne, sum(join1.Prix_HT) as montantparclient  from Appartenir inner join (select Article.Reference_article, Article.Prix_HT, Composer.id_commande from Article inner join Composer on Composer.Reference_article = Article.Reference_article) as join1 on Appartenir.id_commande = join1.id_commande group by id_Personne; ";
}
System::String^ NS_Composants::CLTBStatistique::SelectchiffreAffaire(void)//check
{
	return " select sum(Ventepararticle) as chiffre_d_affaire_du_mois  from (select  Composer.Reference_article, Composer.id_commande, Composer.quantiteartticle, Composer.type_articles, Article.Prix_ht, Article.Taux_TVA, (Article.Prix_ht * Composer.quantiteartticle) as Ventepararticle from Composer INNER JOIN Article on Article.Reference_article = composer.Reference_article ) as ChiffreaffaireHT; ";

}
System::String^ NS_Composants::CLTBStatistique::Selectsousseuil(void)//check
{
	return "select Reference_article, Nom_d_article, Seuil_d_approvisionnement, quantite_article from Article where quantite_article < '10';";
}
System::String^ NS_Composants::CLTBStatistique::SelectValeurAchat(void)
{
	return "select sum(Prix_HT*Taux_TVA + Prix_HT) as valeur_d_achat from Article";
}
System::String^ NS_Composants::CLTBStatistique::SelectValeurcommerciale(void)
{
	return "select sum(Prix_HT*Taux_TVA*Quantite_article + Prix_HT*Quantite_article) as valeur_commerciale from Article";
}
System::String^ NS_Composants::CLTBStatistique::Select10moinsvendus(void)
{
	return "select Article.Nom_d_article as articles_les_moins_vendus, Composer.quantiteartticle as quantite_venus from Article full outer join composer on composer.Reference_article=Article.Reference_article order by quantiteartticle";
}
System::String^ NS_Composants::CLTBStatistique::Select10plusvendus(void)
{
	return "select Article.Nom_d_article as articles_les_plus_vendus, Composer.quantiteartticle as quantite_venus from Article full outer join composer on composer.Reference_article=Article.Reference_article order by quantiteartticle desc";
}
System::String^ NS_Composants::CLTBStatistique::Simulation(void)
{
	//select 
	//return "select sum(Prix_HT*'" + this->TauxTVA + "' * Quantite_article + Prix_HT * Quantite_article + Prix_HT*'" + this->marge + "'*Quantite_article - Prix_HT*'" + this->demarche + "'* Quantite_article) as valeur_commerciale from Article";
	return "select sum(Prix_HT*Quantite_article) as valeur_commerciale from Article;";
}
<!DOCTYPE html>
<!-- Déclarér que le doc est de type html -->
<html>

<head>
    <meta charset="utf-8" />
  	<meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="description" content="l'INSTITUT SUPERIEURE DES SCIENCES ÉCONOMIQUES, COMMERCIALES DE L'INFORMATION ET DE LA COMMUNICATION est un établissement privé agréé par le Ministère de l’Enseignement Supérieur.
                     Il propose des diplômes universitaires reconnus par l´état et conformes au système LMD. 
                    ISSEC-IC offre des formations de haut niveau avec un corps professoral de qualité,
                     des formateurs, des coachs et des experts internationaux.">
    <link rel="stylesheet" href="Styles/Accueil.css" />
    <link rel="stylesheet" href="Styles/banners.css" />
    <link rel="icon" href="Images/Logo.png"/>
    <!--Lien vers le doc css-->
    <title>Ecole ISSEC-IC GABON</title>
    <!--Titre de l'onglet-->
</head>

<!-- Le body est la boite qui va contenir toute notre page-->

<body class="bodycentral">
    <!-- Le header est l'en tête notre page-->
<?php require('header.php'); ?>
<main>
    <article>
        <section id="contentactu" class="contenus">
            <div id="pcontentactu" class="pActus" style="color: white;">
                <p><strong>ISSEC-IC c'est aussi</strong><ul>
                    <li>Une bibliothèque actualisée de 800 ouvrages </li>
                    <li>Un studio Radio et Télévision</li>
                    <li>Un programme intitulé "transformation"</li>
                    <li>Un service de stage et insertion professionnelle pour un accompagnement complet de l'étudiant durant son cursus.</li>
                </ul></p>
            </div>
        </section>
        <section id="actuellement" class="contenus">
            <div id="pactuellement" class="pActus" style="color: white;">
			  <p><strong>Etablissement privé gabonais agréé par le Ministère de l’Enseignement Supérieur</strong><br>
                     Nous vous proposons des diplômes universitaires reconnus par l´état et conformes au système LMD. 
                    ISSEC-IC GABON offre des formations de haut niveau avec un corps professoral de qualité,
                     des formateurs, des coachs et des experts internationaux.</p>
            </div>
        </section>
    </article>

    <section id="central">
        <h3 id="LMD" class="ombre centre" style="color:rgb(255, 255, 255);">Nous disposons d’un programme de formation qui vient répondre aux besoins des entreprises</h3>
        <div id="categories" class="centre ombre">
            <a href="Formation.php"><h5 class="centre" style="color:rgb(255, 255, 255);">Nos formations</h5></a><br>
            <a href="Equipe.php"><h5 class="centre" style="color:rgb(255, 255, 255);">Notre équipe</h5></a><br>
            <a href="Candidature.php"><h5 class="centre" style="color:rgb(255, 255, 255);">Inscription en ligne</h5></a><br>
            <a href="#footer"><h5 class="centre" style="color:rgb(255, 255, 255);">Nous contacter</h5></a><br>
        </div>
    </section>
</main>

<?php require('footer.php'); ?>
</body>
</html>
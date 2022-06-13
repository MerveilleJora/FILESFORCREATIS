const btncompetence = document.querySelector('.comp')
const btncert = document.querySelector('.certif')
const btnlog = document.querySelector('.log')

//const eventcomp = document.getElementById('CompetencesID')
btncompetence.addEventListener("click", () => {
    document.getElementById('Competence').classList.toggle('show')
})
btncert.addEventListener("click", () => {
    document.getElementById('certif').classList.toggle('show')
})
btnlog.addEventListener("click", () => {
    document.getElementById('logiciel').classList.toggle('show')
})

const theme = document.querySelectorAll('.theme')

theme.forEach(element => {
    console.log(element)
    element.addEventListener('click', (e) => {
        document.body.classList.remove('bodynuit')

        document.querySelector('header').classList.remove('headernuit')
        document.querySelector('.paragraphe1').classList.remove('paragraphe1nuit')
            /*console.log(titres)
            titres.classList.remove('h1nuit')... à étudier*/
        document.querySelector('.comp').classList.remove('h1nuit')
        document.querySelector('.certif').classList.remove('h1nuit')
        document.querySelector('.log').classList.remove('h1nuit')
        document.querySelector('.porto').classList.remove('h1nuit')

        document.querySelector('#blog').classList.remove('blognuit')

        document.querySelector('main').classList.remove('mainnuit')

        console.log("mode feeling activé")
        document.body.classList.remove('bodytechno')

        document.querySelector('header').classList.remove('headertechno')
        document.querySelector('.paragraphe1').classList.remove('paragraphe1techno')
            /*console.log(titres)
            titres.classList.add('h1nuit')... à étudier*/
        document.querySelector('.comp').classList.remove('h1techno')
        document.querySelector('.certif').classList.remove('h1techno')
        document.querySelector('.log').classList.remove('h1techno')
        document.querySelector('.porto').classList.remove('h1techno')

        document.querySelector('#blog').classList.remove('blogtechno')
        console.log(document.querySelector('main'))
        console.log(e.target.id)
        switch (e.target.id) {
            case "clair":

                break
            case "nuit":
                console.log("mode nuit activé")
                document.body.classList.add('bodynuit')

                document.querySelector('header').classList.add('headernuit')
                document.querySelector('.paragraphe1').classList.add('paragraphe1nuit')
                    /*console.log(titres)
                    titres.classList.add('h1nuit')... à étudier*/
                document.querySelector('.comp').classList.add('h1nuit')
                document.querySelector('.certif').classList.add('h1nuit')
                document.querySelector('.log').classList.add('h1nuit')
                document.querySelector('.porto').classList.add('h1nuit')

                document.querySelector('#blog').classList.add('blognuit')

                document.querySelector('main').classList.add('mainnuit')
                console.log(document.querySelector('main'))
                break
            case "techno":
                console.log("mode feeling activé")
                document.body.classList.add('bodytechno')

                document.querySelector('header').classList.add('headertechno')
                document.querySelector('.paragraphe1').classList.add('paragraphe1techno')
                    /*console.log(titres)
                    titres.classList.add('h1nuit')... à étudier*/
                document.querySelector('.comp').classList.add('h1techno')
                document.querySelector('.certif').classList.add('h1techno')
                document.querySelector('.log').classList.add('h1techno')
                document.querySelector('.porto').classList.add('h1techno')

                document.querySelector('#blog').classList.add('blogtechno')
                console.log(document.querySelector('main'))
                break

        }
    })
});
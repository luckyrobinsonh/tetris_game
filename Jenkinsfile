pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                // Récupère le code depuis le repo
                git 'git@github.com:luckyrobinsonh/tetris_game.git'
            }
        }

        stage('Build') {
            steps {
                echo 'Compilation / Build en cours...'
            }
        }

        stage('Test') {
            steps {
                echo 'Exécution des tests...'
            }
        }
    }

    post {
        success {
            echo 'Build réussi 🎉'
        }
        failure {
            echo 'Build échoué ❌'
        }
    }
}

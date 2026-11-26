# Exerc-cio

Esercitazione di gruppo su Git e GitHub: repository condiviso, branch dedicati, Pull Request e code review.

## Obiettivo

Imparare il flusso di lavoro collaborativo su GitHub:

- creare un repository e aggiungere un collaboratore
- aprire una Issue e assegnarla
- lavorare su un branch dedicato
- aprire una Pull Request collegata alla Issue
- fare code review e risolvere i commenti con nuovi commit

## Ruoli

| Studente | Responsabilità |
| --- | --- |
| A | Crea il repository, aggiunge il file base su `main`, invita B come collaboratore, revisiona la PR e fa il merge |
| B | Si assegna la Issue, crea il branch, implementa la modifica, apre la PR e risolve i commenti di review |

## Flusso di lavoro

### 1. Setup (Studente A)

1. Crea il repository su GitHub e aggiunge un file base su `main`.
2. Invita Studente B: **Settings → Collaborators → Add people**.
3. Studente B accetta l'invito dalle notifiche.

### 2. Sviluppo (Studente B)

```bash
git clone https://github.com/Sapienti-El-Farouki/Exerc-cio.git
cd Exerc-cio
git switch main
git pull
git switch -c ReadMeModify

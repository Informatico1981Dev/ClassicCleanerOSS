# ClassicCleanerOSS - Stati della UI (Draft)

## Obiettivo
Definire gli stati principali che la UI dovrà gestire per ogni modulo.

---

## Stati dei moduli

### 1. Stato "Idle"
- Il modulo è pronto ma non sta facendo nulla.
- Mostra: descrizione + pulsante "Avvia pulizia".

### 2. Stato "Running"
- Il modulo è in esecuzione.
- Mostra: spinner di caricamento.
- Disabilita i pulsanti.
- Mostra log in tempo reale.

### 3. Stato "Completed"
- La pulizia è terminata.
- Mostra: messaggio di successo.
- Mostra: numero di file rimossi.
- Pulsante: "Esegui di nuovo".

### 4. Stato "Error"
- Si è verificato un errore.
- Mostra: messaggio rosso.
- Mostra: log dell’errore.
- Pulsante: "Riprova".

### 5. Stato "Disabled"
- Il modulo è disattivato dalle impostazioni.
- Mostra: messaggio grigio.
- Pulsante disabilitato.

---

## Stati globali della UI

### 1. "Ready"
- Tutto è pronto.
- Mostra la dashboard.

### 2. "Busy"
- Un modulo è in esecuzione.
- La UI evita di avviare altri moduli.

### 3. "Error"
- Errore globale (es. file mancante, permessi).
- Mostra banner rosso.

---

## Note
- Gli stati saranno usati quando implementeremo la UI reale.
- Manteniamo la logica coerente con il core modulare.

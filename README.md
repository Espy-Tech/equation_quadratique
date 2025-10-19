# 🧮 Solveur d'Équations Quadratiques

Un programme C++ pour résoudre des équations du second degré de la forme **ax² + bx + c = 0**.

![google](https://github.com/user-attachments/assets/4c775626-5666-4946-8edf-ec3518de4ea1)

## ✨ Fonctionnalités

- 🔍 **Résolution complète** des équations quadratiques
- 📊 **Calcul automatique** du discriminant
- 🎯 **Gestion des 3 cas** :
  - Δ > 0 : Deux solutions réelles distinctes
  - Δ = 0 : Une solution double
  - Δ < 0 : Aucune solution réelle
- ⚡ **Interface utilisateur** intuitive
- 🛡️ **Validation des entrées** (a ≠ 0)

## 🚀 Installation et Exécution

### Prérequis
- Compilateur C++ (g++, clang, ou MSVC)
- Bibliothèque standard C++

### Compilation
```bash
g++ -o solveur_equations main.cpp
```
Exécution
```bash
./solveur_equations
```
📸 Exemple d'Utilisation
```text
==========================================
 Calcul d'equation : ax^2 + bx + c = 0
==========================================
a = 2
b = 5
c = -3

Discriminant = 49.0
L'equation admet deux solutions distinctes
x1 = -3.0
x2 = 0.5
```
## 🧮 Théorie Mathématique

### **Équation Quadratique Standard**
Une équation du second degré est de la forme :

```
ax² + bx + c = 0
```

Où :
- **a** ≠ 0 (coefficient quadratique)
- **b** (coefficient linéaire)  
- **c** (terme constant)

### **Discriminant (Δ)**
Le discriminant détermine la nature des solutions :

```
Δ = b² - 4ac
```

### **Formule de Résolution**
Les solutions sont données par :

```
        -b ± √Δ
x = ─────────────
         2a
```

### **Cas Possibles**

#### **1. Δ > 0 : Deux solutions réelles distinctes**
```
       -b - √Δ           -b + √Δ
x₁ = ───────────     x₂ = ───────────
         2a                  2a
```

#### **2. Δ = 0 : Une solution réelle double**
```
        -b
x₀ = ───────
       2a
```

### **Exemple Détaillé**

**Pour l'équation :** 2x² + 5x - 3 = 0

- **Coefficients :** a = 2, b = 5, c = -3
- **Discriminant :** Δ = 5² - 4×2×(-3) = 25 + 24 = 49
- **Racine carrée :** √Δ = 7
- **Solutions :**
  ```
        -5 - 7                -5 + 7
  x₁ = ───────── = -3   x₂ = ───────── = 0,5
         2×2                   2×2
  ```

### **Propriétés Importantes**

- **Somme des racines :** x₁ + x₂ = -b/a
- **Produit des racines :** x₁ × x₂ = c/a
- **Forme factorisée :** a(x - x₁)(x - x₂) = 0

### **Applications**
Les équations quadratiques sont fondamentales en :
- 🚀 **Physique** : Mouvement projectile, circuits électriques
- 🏗️ **Ingénierie** : Calcul des structures, optimisation
- 💰 **Économie** : Modèles de coût et revenu
- 💻 **Informatique** : Graphiques, algorithmes de collision

### 📁 Structure du Code

```cpp
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;
    // Saisie et validation des coefficients
    // Calcul du discriminant
    // Résolution selon la valeur du discriminant
    return 0;
}
```
### 🔧 Fonctionnalités Techniques

✅ Gestion des erreurs : Vérification que a ≠ 0

✅ Précision numérique : Utilisation de ```double```

✅ Affichage formaté : 1 décimale avec ```setprecision(1)```

✅ Calculs optimisés : Utilisation de la bibliothèque ```<cmath>```

### 🎯 Cas de Test

| Équation | a | b | c | Solutions |
|----------|---|---|---|-----------|
| x² - 3x + 2 = 0 | 1 | -3 | 2 | x₁=1.0, x₂=2.0 |
| 4x² - 4x + 1 = 0 | 4 | -4 | 1 | x₀=0.5 |
| x² + x + 1 = 0 | 1 | 1 | 1 | Aucune solution réelle |
| 2x² + 5x - 3 = 0 | 2 | 5 | -3 | x₁=-3.0, x₂=0.5 |
### 🤝 Contribution

Les contributions sont les bienvenues ! N'hésitez pas à :

🐛 Signaler des bugs

💡 Proposer des améliorations

📚 Améliorer la documentation

📄 Licence
Ce projet est sous licence MIT - voir le fichier LICENSE pour plus de détails.

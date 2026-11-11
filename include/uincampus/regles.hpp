#pragma once

#include <string_view>

namespace uin {

/// Bornes du baréme etde seuil de validation d'une UE.
inline constexpr double noteMin = 0.0;
inline constexpr double noteMax = 20.0;
inline constexpr double seuilValidation = 10.0;

/// Mention atrribuées selon la moyenne.
enum class Mention { Ajourne, Passable, AssezBien, Bien, TresBien };

/// UNe note est valide si elle appartient à [noteMin ; noteMaxe].

constexpr bool estNoteValide(double note)
{
    return note >= noteMin && note <= noteMax;
}
/// Mention correspondant à une moyenne.
Mention mentionPour(double moyenne);

/// Libellé affichable d'une mention.
std::string_view libelle(Mention mention);
} // namespace uin

/*
 * Softcam plugin to VDR (C++)
 *
 * This code is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This code is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 * Or, point your browser to http://www.gnu.org/copyleft/gpl.html
 */

#include "i18n.h"

#if APIVERSNUM < 10507

const tI18nPhrase ScPhrases[] = {
  { "Update keys (AU)",
    "Keys updaten (AU)",
    "",
    "",
    "Keys updaten (AU)",
    "",
    "Mise � jour des Cl�s (AU)",
    "",
    "Tilausten p�ivitys (AU)",
    "Aktualizuj klucze (AU)",
    "",
    "",
    "Nyckeluppdatering (AU)",
    "",
    "",
    "",
    "��������� ����� (AU)",
  },
  { "off",
    "aus",
    "",
    "",
    "uit",
    "",
    "off",
    ""
    "pois",
    "wy��cz",
    "",
    "",
    "av",
    "",
    "",
    "",
    "����",
  },
  { "active CAIDs",
    "aktive CAIDs",
    "",
    "",
    "actieve CAIDS",
    "",
    "CAIDs actifs",
    "",
    "aktiiviset CAID:t",
    "aktywne CAID",
    "",
    "",
    "aktiva CAID",
    "",
    "",
    "",
    "�������� CAID",
  },
  { "all CAIDs",
    "alle CAIDs",
    "",
    "",
    "alle CAIDs",
    "",
    "tous les CAIDs",
    "",
    "kaikki CAID:t",
    "wszystkie CAID",
    "",
    "",
    "alla CAID",
    "",
    "",
    "",
    "��� CAID",
  },
  { "Active on DVB card",
    "Aktiv auf DVB Karte",
    "",
    "",
    "Actief op DVB kaart",
    "",
    "Actif sur la carte DVB",
    "",
    "Aktiivinen DVB-kortilla",
    "Aktywny na karcie DVB",
    "",
    "",
    "Aktiv p� DVB-kort",
    "",
    "",
    "",
    "�������� �� ����� DVB",
  },
  { "Concurrent FF streams",
    "Gleichzeitige FF Streams",
    "",
    "",
    "",
    "",
    "",
    "",
    "Yht�aikainen salauksenpurku (FF)",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "������������ ������ FF",
  },
  { "Force TransferMode",
    "Transfermodus erzwingen",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
  },
  { "Prefer local systems",
    "Lokale Systeme bevorzugen",
    "",
    "",
    "",
    "",
    "",
    "",
    "Suosi paikallista salauksenpurkua",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "������������ ��������� �������",
  },
  { "Ignore CAID",
    "Ignoriere CAID",
    "",
    "",
    "",
    "",
    "",
    "",
    "J�t� huomioimatta CAID",
    "",
    "",
    "",
    "Ignorera CAID",
    "",
    "",
    "",
    "������������ CAID",
  },
  { "Key update status:",
    "Key update Status:",
    "",
    "",
    "Key update status:",
    "",
    "Mise � jour des cl�s Statut:",
    "",
    "Tilausten p�ivitys:",
    "Stan aktualizacji kluczy:",
    "",
    "",
    "Nyckeluppdateringsstatus:",
    "",
    "",
    "",
    "���������� ������:",
  },
  { "  [Seen keys]",      // 2 leading spaces
    "  [Gefundene Keys]",
    "",
    "  [Chiavi trovate]",
    "",
    "  [Gevonden keys]",
    "  [Cl�s trouv�es]",
    "",
    "  [L�ydetyt p�ivitykset]",
    "  [widzianych kluczy]",
    "",
    "  [vriskomena klidia]",
    "  [P�tr�ffade nycklar]",
    "",
    "",
    "",
    "  [������ �������]",
  },
  { "  [New keys]",       // 2 leading spaces
    "  [Neue Keys]",
    "",
    "  [Nuove chiavi]",
    "  [Nieuwe keys]",
    "",
    "  [Nouvelles cl�s]",
    "",
    "  [Uudet p�ivitykset]",
    "  [nowych kluczy]",
    "",
    "  [Nea klidia]",
    "  [Nya nycklar]",
    "",
    "",
    "",
    "  [����� ������]",
  },
  { "Current keys:",
    "Aktuelle Keys:",
    "",
    "Chiave in uso:",
    "Huidige keys:",
    "",
    "Cl� courante:",
    "",
    "Nykyiset avaimet:",
    "Obecne klucze:",
    "",
    "Energo klidi kartas:",
    "Aktuell nyckel:",
    "",
    "",
    "",
    "������������ �����:",
  },
  { "(none)",
    "(keiner)",
    "",
    "(nessuno)",
    "(geen)",
    "",
    "(aucune)",
    "",
    "(ei)",
    "(brak)",
    "",
    "(kanena)",
    "(ingen)",
    "",
    "",
    "",
    "(���)",
  },
  { "undisclosed key",
    "unbekannter Key",
    "",
    "",
    "onbekende key",
    "",
    "Cl� non-r�v�l�e",
    "",
    "tuntematon avain",
    "niejawny klucz",
    "",
    "",
    "ej avsl�jad nyckel",
    "",
    "",
    "",
    "����������� ����",
  },
  { "Status information...",
    "Status Informationen...",
    "",
    "",
    "Status informatie...",
    "",
    "Statut information...",
    "",
    "Tilannetiedot...",
    "Informacje o stanie...",
    "",
    "",
    "Statusinformation...",
    "",
    "",
    "",
    "���������...",
  },
  { "Flush ECM cache",
    "ECM Zwischenspeicher leeren",
    "",
    "",
    "",
    "",
    "",
    "",
    "Tyhjenn� ECM-v�limuisti",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "�������� ��� ECM",
  },
  { "Really flush ECM cache?",
    "ECM Zwischenspeicher wirklich leeren?",
    "",
    "",
    "",
    "",
    "",
    "",
    "Tyhjennet��nk� ECM-v�limuisti?",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "������������� �������� ��� ECM?",
  },
  { "Reload files",
    "Dateien neu laden",
    "",
    "",
    "Opnieuw laden bestanden?",
    "",
    "Recharger les fichiers",
    "",
    "Lataa avaintiedostot uudelleen",
    "Prze�aduj pliki",
    "",
    "Ksanadiavasma arxeion",
    "Ladda om filer",
    "",
    "",
    "",
    "������������� �����",
  },
  { "Really reload files?",
    "Dateien wirklich neu laden?",
    "",
    "Ricarica il file delle chiavi?",
    "Werkelijk opnieuw laden bestanden?",
    "",
    "Vraiment recharger les fichiers?",
    "",
    "Ladataanko avaintiedostot uudelleen?",
    "Na pewno prze�adowa� klucze?",
    "",
    "Na diavastoun pali ta arxeia?",
    "Bekr�fta omladdning av filer?",
    "",
    "",
    "",
    "������������� ������������� �����?",
  },
  { "Active! Can't reload files now",
    "Aktiv! Kann Dateien jetzt nicht neu laden",
    "",
    "Chiave in uso!",
    "Actief! Kan bestanden niet herladen",
    "",
    "Actif ! Je ne peux pas recharger maintenant",
    "",
    "Aktiivinen! Uudelleen lataus ei onnistu",
    "Aktywny! Nie mo�na teraz prze�adowa� plik�w.",
    "",
    "Energo! Den ine dinato to ksanadiavasma",
    "Aktiv! Kan inte ladda om filer nu",
    "",
    "",
    "",
    "�����! �� ���� ������������� �����",
  },
  { "Smartcard",
    "Smartcard",
    "",
    "",
    "Smartcard",
    "",
    "Smartcard",
    "",
    "�lykortti",
    "Smartcard",
    "",
    "",
    "Smartcard",
    "",
    "",
    "",
    "��������",
  },
  { "Reset card",
    "Karte reseten",
    "",
    "",
    "Reset smartcard",
    "",
    "R�initialiser la carte",
    "",
    "Nollaa kortti",
    "Resetuj kart�",
    "",
    "",
    "Nollst�ll kortet",
    "",
    "",
    "",
    "�������� ��������",
  },
  { "Really reset card?",
    "Karte wirklich reseten?",
    "",
    "",
    "Werkelijk smartcard resetten?",
    "",
    "R�initialiser vraiment la carte?",
    "",
    "Nollataanko kortti?",
    "Na pewno zrestartowa� kart�?",
    "",
    "",
    "Bekr�fta nollst�llning av kortet?",
    "",
    "",
    "",
    "������������� �������� ��������?",
  },
  { "Smartcard interface",
    "Smartcard Interface",
    "",
    "",
    "Smartcard interface",
    "",
    "Interface Smartcard",
    "",
    "�lykorttiliit�nt�",
    "Interfejs Smartcard",
    "",
    "",
    "Smartcard-gr�nssnitt",
    "",
    "",
    "",
    "��������� ������",
  },
  { "(empty)",
    "(leer)",
    "",
    "(nessuna)",
    "(leeg)",
    "",
    "(vide)",
    "",
    "(tyhj�)",
    "(puste)",
    "",
    "",
    "(tom)",
    "",
    "",
    "",
    "(�����)",
  },
  { "SoftCAM",
    "SoftCAM",
    "",
    "SoftCAM",
    "SoftCAM",
    "",
    "SoftCAM",
    "",
    "SoftCAM",
    "SoftCAM",
    "",
    "SoftCAM",
    "SoftCAM",
    "",
    "",
    "",
    "SoftCAM",
  },
  { "A software emulated CAM",
    "Ein Software emuliertes CAM",
    "",
    "",
    "In software ge�muleerde CAM",
    "",
    "Un logiciel emulateur de CAM",
    "",
    "Ohjelmistopohjainen salauksenpurku",
    "Programowo emulowany CAM",
    "",
    "",
    "En mjukvaruemulerad CAM",
    "",
    "",
    "",
    "���������� �������� CAM",
  },
  { "Cryptsystem options...",
    "Cryptsystem Optionen...",
    "",
    "",
    "",
    "",
    "",
    "",
    "Salausj�rjestelmien asetukset...",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "����� ������������...",
  },
  { "Cryptsystem options",
    "Cryptsystem Optionen",
    "",
    "",
    "",
    "",
    "",
    "",
    "Salausj�rjestelmien asetukset",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "����� ������������",
  },
  { "Message logging...",
    "Meldungsprotokolierung...",
    "",
    "",
    "",
    "",
    "",
    "",
    "Viestien tulostus...",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "���������������� ���������...",
  },
  { "Message logging",
    "Meldungsprotokolierung",
    "",
    "",
    "",
    "",
    "",
    "",
    "Viestien tulostus",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "���������������� ���������",
  },
  { "Log to console",
    "Meldungen auf Konsole",
    "",
    "",
    "",
    "",
    "",
    "",
    "Tulosta konsoliin",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "��������� � �������",
  },
  { "Log to file",
    "Meldungen in Datei",
    "",
    "",
    "",
    "",
    "",
    "",
    "Tulosta tiedostoon",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "��������� � ����",
  },
  { "Filename",
    "Dateiname",
    "",
    "",
    "",
    "",
    "",
    "",
    "Tiedoston nimi",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "�������� �����",
  },
  { "Log to syslog",
    "Meldungen in Syslog",
    "",
    "",
    "",
    "",
    "",
    "",
    "Tulosta systeemilokiin",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "��������� � Syslog",
  },
  { "Disable ALL modules",
    "ALLE Module ausschalten",
    "",
    "",
    "",
    "",
    "",
    "",
    "Poista kaikki moduulit k�yt�st�",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "��������� ��� ������",
  },
  { "Really disable ALL modules?",
    "Wirklich ALLE Module ausschalten?",
    "",
    "",
    "",
    "",
    "",
    "",
    "Poistetaanko kaikki moduulit k�yt�st�?",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "������������� ��������� ��� ������?",
  },
  { "Reset ALL modules to default",
    "ALLE Module auf Standard zur�cksetzen",
    "",
    "",
    "",
    "",
    "",
    "",
    "Nollaa kaikki moduulit oletusarvoihin",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "�������� ��� ������ �� ���������",
  },
  { "Really reset ALL modules to default?",
    "Wirklich ALLE Module auf Standard zur�cksetzen?",
    "",
    "",
    "",
    "",
    "",
    "",
    "Nollataanko kaikki moduulit oletusarvoihin?",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "������������� �������� ��� ������ �� ���������?",
  },
  { "Module",
    "Modul",
    "",
    "",
    "",
    "",
    "",
    "",
    "Moduuli",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "������",
  },
  { "Module config",
    "Modul Einstellungen",
    "",
    "",
    "",
    "",
    "",
    "",
    "Moduulin asetukset",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "��������� ������",
  },
  { "Reset module to default",
    "Modul auf Standard zur�cksetzen",
    "",
    "",
    "",
    "",
    "",
    "",
    "Nollaa moduuli oletusarvoihin",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "����� ������ �� ���������",
  },
  { "Really reset module to default?",
    "Wirklich Modul auf Standard zur�cksetzen?",
    "",
    "",
    "",
    "",
    "",
    "",
    "Nollataanko moduuli oletusarvoihin?",
    "",
    "",
    "",
    "",
    "",
    "",
    "",
    "������������� �������� ������ �� ���������?",
  },
  { "Cardclient: connect immediately",
    "Cardclient: sofort verbinden",
    "",
    "",
    "Cardclient: direct contact maken",
    "",
    "Cardclient: connecter immediatement",
    "",
    "Korttiasiakas: yhdist� v�litt�m�sti",
    "Klient karty: pod��cz natychmiast",
    "",
    "",
    "",
  },
  { "Nagra: min. ECM processing time",
    "Nagra: min. ECM Bearbeitungszeit",
    "",
    "",
    "Nagra: min. ECM bewerkingstijd",
    "",
    "Nagra: min. dur�e du processus ECM",
    "",
    "Nagra: Min. ECM-prosessointiaika",
    "Nagra: min. czas przetwarzania ECM",
    "",
    "",
    "",
  },
  { "SC-Cryptoworks: Parental rating",
    "SC-Cryptoworks: Altersbeschr�nkung",
    "",
    "",
    "SC-Cryptoworks: Leeftijdsadvies",
    "",
    "SC-Cryptoworks: Autorisation parentale",
    "",
    "SC-Cryptoworks: Ik�raja",
    "SC-Cryptoworks: wska�nik rodzica",
    "",
    "",
    "",
  },
  { "don't touch",
    "nicht �ndern",
    "",
    "",
    "niet wijzigen",
    "",
    "Ne pas modifier",
    "",
    "�l� koske",
    "nie dotykaj",
    "",
    "",
    "",
  },
  { "disable",
    "ausschalten",
    "",
    "",
    "uitschakelen",
    "",
    "D�sactiver",
    "",
    "poista",
    "wy��cz",
    "",
    "",
    "",
  },
  { "SC-Seca: EMM updates",
    "SC-Seca: EMM updates",
    "",
    "",
    "SC-Seca: EMM updates",
    "",
    "SC-Seca: Mise � jour EMM",
    "",
    "SC-Seca: EMM-p�ivitykset",
    "SC-Seca: aktualizacje EMM",
    "",
    "",
    "",
  },
  { "allow ALL",
    "alle erlauben",
    "",
    "",
    "ALLES toestaan",
    "",
    "Permettre tous",
    "",
    "salli kaikki",
    "dopu�� wszystkie",
    "",
    "",
    "",
  },
  { "block UNIQUE",
    "UNIQUE blocken",
    "",
    "",
    "UNIEKE blokkeren",
    "",
    "Bloquer UNIQUE",
    "",
    "est� uniikit",
    "blokuj unikaty",
    "",
    "",
    "",
  },
  { "block SHARED",
    "SHARED blocken",
    "",
    "",
    "GEDEELDE blokkeren",
    "",
    "Bloquer PARTAGE",
    "",
    "est� jaetut",
    "blokuj dzielone",
    "",
    "",
    "",
  },
  { "block ALL",
    "alle blocken",
    "",
    "",
    "ALLES blokkeren",
    "",
    "Bloquer TOUS",
    "",
    "est� kaikki",
    "blokuj wszystkie",
    "",
    "",
    "",
  },
  { "SC-Seca: activate PPV",
    "SC-Seca: PPV aktivieren",
    "",
    "",
    "SC-Seca: activeer PPV",
    "",
    "SC-Seca: activer PPV",
    "",
    "SC-Seca: Aktivoi PPV",
    "SC-Seca: aktywuj PPV",
    "",
    "",
    "",
  },
  { NULL }
  };

#endif

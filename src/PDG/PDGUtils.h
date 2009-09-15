//____________________________________________________________________________
/*!

\namespace genie::pdg

\brief     Utilities for improving the code readability when using PDG codes.

\author    Costas Andreopoulos <costas.andreopoulos \at stfc.ac.uk>
           STFC, Rutherford Appleton Laboratory

\created   May 06, 2004

\cpright   Copyright (c) 2003-2009, GENIE Neutrino MC Generator Collaboration
           For the full text of the license visit http://copyright.genie-mc.org
           or see $GENIE/LICENSE
*/
//____________________________________________________________________________

#ifndef _PDG_UTILS_H_
#define _PDG_UTILS_H_

namespace genie {

namespace pdg
{
  bool IsPseudoParticle(int pdgc);

  int  IonPdgCodeToZ   (int pdgc);
  int  IonPdgCodeToA   (int pdgc);
  int  IonPdgCode      (int A, int Z);
  int  IonPdgCode      (int A, int Z, int L, int I);
  bool IsIon           (int pdgc);

  bool IsParticle      (int pdgc); 
  
  bool IsNeutrino      (int pdgc);
  bool IsAntiNeutrino  (int pdgc);
  bool IsNeutralLepton (int pdgc);
  bool IsChargedLepton (int pdgc);

  bool IsNuE           (int pdgc);
  bool IsNuMu          (int pdgc);
  bool IsNuTau         (int pdgc);
  bool IsAntiNuE       (int pdgc);
  bool IsAntiNuMu      (int pdgc);
  bool IsAntiNuTau     (int pdgc);
  
  bool IsElectron      (int pdgc);
  bool IsPositron      (int pdgc);
  bool IsMuon          (int pdgc);
  bool IsAntiMuon      (int pdgc);
  bool IsTau           (int pdgc);
  bool IsAntiTau       (int pdgc);
  
  bool IsDiQuark       (int pdgc);
  bool IsQuark         (int pdgc);
  bool IsUQuark        (int pdgc);
  bool IsDQuark        (int pdgc);
  bool IsSQuark        (int pdgc);
  bool IsCQuark        (int pdgc);
  bool IsAntiQuark     (int pdgc);
  bool IsAntiUQuark    (int pdgc);
  bool IsAntiDQuark    (int pdgc);
  bool IsAntiSQuark    (int pdgc);
  bool IsAntiCQuark    (int pdgc);
  
  bool IsProton          (int pdgc);
  bool IsNeutron         (int pdgc);
  bool IsNeutronOrProton (int pdgc);
  bool IsHadron          (int pdgc);
  bool IsBaryonResonance (int pdgc);
  bool Is2NucleonCluster (int pdgc);
  
  int  SwitchProtonNeutron    (int pdgc);
  int  Neutrino2ChargedLepton (int pdgc);

  int  GeantToPdg (int geant_code);

}      // pdg namespace
}      // genie namespace

#endif // _PDG_UTILS_H_

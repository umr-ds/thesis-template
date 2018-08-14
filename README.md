# Eine Vorlage für Bachelor- und Masterthesen an der AG DS

Das hier vorliegende Design ist historisch gewachsen und teilweise bereinigt. Sollten Fehler existieren, kann gerne in Pull-Request gestellt werden.

## Design

Das verwendete Design basiert auf:

 *  report.cls (LaTeX base system)
 *  mreport.cls (Michael Piotrowski)
 *  wdok-title.sty (Michael Piotrowski)
 
## Struktur

```bash
.
├── code                            # Code im Rahmen der Arbeit
├── literature                      # PDFs der verwendeten Literatur
└── thesis                          # LaTeX Thesis
    ├── Makefile
    ├── README.md
    ├── appendix                    # Abkürzungen
    │   └── acronyms.tex
    ├── chapters                    # Kapitel separiert
    │   ├── 00_Abstract.tex
    │   └── 01_Einleitung.tex
    ├── figures                     # Abbildungen
    ├── includes
    │   ├── erklaerung.tex
    │   ├── listings.tex
    │   ├── longtable.inc
    │   ├── mpreport.cls
    │   ├── report.cls
    │   ├── siegel-philipp-new.pdf
    │   └── wdok-title.sty
    ├── literature.bib              # Literatur
    └── thesis.tex                  # Thesis Hauptdokument
```
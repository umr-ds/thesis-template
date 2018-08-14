DOCNAME = thesis
LATEX = pdflatex
BIBTEX = bibtex
MAKEINDEX = makeindex

all: $(DOCNAME).pdf

$(DOCNAME).pdf: $(DOCNAME).bbl
	$(LATEX) $(DOCNAME)
	$(LATEX) $(DOCNAME)
	
$(DOCNAME).bbl: $(DOCNAME).aux
	$(BIBTEX) $(DOCNAME)
	
$(DOCNAME).aux:
	$(LATEX) $(DOCNAME)
	$(LATEX) $(DOCNAME)

s simple:
	@$(LATEX) $(DOCNAME)

o open:
	@open $(DOCNAME).pdf
	
todo:
	clear
	grep -nr TODO chapters/*.tex
	
clean:	
	@echo Removing temporary files...
	@rm -f .*.lb *.toc *.bbl *.log *.lof *.blg *.lot *.out *.idx *.dvi *.ilg *.ind *~ *lol *.thm *.synctex.gz $(DOCNAME).pdf
	@find . -regex ".*\.aux$ " -delete
	@find . -regex ".*\.log$ " -delete
	@find . -regex ".*\.DS_Store$ " -delete

.PHONY:	clean
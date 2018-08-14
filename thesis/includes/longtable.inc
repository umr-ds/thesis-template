\makeatletter
\setlength\LTleft{0pt}
\setlength\LTright{0pt}

\renewcommand{\LT@makecaption}[3]{%
  \LT@mcol\LT@cols l{%
\settoheight{\mp@capht}%
{\parbox[b]{.9\mp@margwd}{\raggedleft\sffamily\slshape\small#1{#2}: #3}}%
\hspace{-\mp@margwd}%
\vspace{-\mp@capht}%
\parbox[t]{.9\mp@margwd}{\raggedleft\sffamily\slshape\small#1{#2}: #3}%
  }
}
\makeatother

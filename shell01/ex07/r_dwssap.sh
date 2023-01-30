cat /etc/passwd | grep -v '^#' | sed -n 'p;n' | cut -d: -f1 | rev | sort -r | sed -n "$FT_LINE1","$FT_LINE2"p |awk '$1=$1' RS= OFS=', ' | sed '$s/$/./'

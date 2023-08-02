cat /etc/passwd | sed 's/:/ /'| awk '{print $1}' | sed -n 2~2p | rev | sort -r | sed -n '$FT_LINE1,$FT_LINE2p' | sed ':a;N;$!ba;s/\n/, /g' | sed 's/$/./' 

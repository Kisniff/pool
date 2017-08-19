grep -i bauer contacts_easy.txt | grep -i nicolas | awk 'NR % 2' | cut -c15-26

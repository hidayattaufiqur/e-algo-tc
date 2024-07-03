# sentences = input().split()

sentences = "Saya sangat senang mengerjakan soal algoritma".split()

longest_length = 0
longest_sentence = ""

for sentence in sentences: 
    if len(sentence) > longest_length:
        longest_length = len(sentence)
        longest_sentence = sentence

print(f"{longest_sentence}: {longest_length} characters")

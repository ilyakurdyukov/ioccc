### Building

    cc prog.c -o prog

### Usage

This program generates random text from the provided dictionary using a Markov chain, outputs to `stdout`.

    ./prog input.txt 2000 10 12345

Parameters are:

1. dictionary filename  
Need at least the size of the book, the more the better (1Mb), you can concatenate several books into one file. This should be a text file (not `.doc`/`.pdf`). You can feed with books in `.fb2` format, metadata is filtered. Whitespace characters is also filtered. For languages other than English, it's better to use ANSI encoding. You can use UTF, but you need to increase chain length (if one ANSI character is encoded as two UTF bytes, then multiply chain length by two).

2. bytes to generate (limited at 1Mb)

3. chain length  
Randomness and performance depend inversely on this parameter and the size of the dictionary. If you feel that bytes are generated too slowly, then you need to increase the length of the chain. This length means that any part of the output of this size in bytes exists somewhere in the dictionary.

4. random seed

### Example

You can try this with the inputs provided with `2019/mills` from the IOCCC winners.

```
$ ./prog shakespeare.txt 2000 10 12345
r sons, wives for them, as the hope I had it. This is the way they be not too ra
sh a trial of you only. Therefore will not out of door? Nurse: Marry, bachelor, 
Have other some, he is in Rome: but where is Warwick frowns at his. PRINCE EDWAR
D: Where is the light: But I will watch thy waking, what work he makes Amongst y
ou? Come, sirs, We shall write to you, fortune and The hazard of much blood. I w
ould to heaven, respective lenity, And fire-eyed fury be my convoy in the senten
ced; 'tis too horrible, so bloody on the banks If they were created, Would bring
 them to our presence? FLORIZEL: And those his golden crown, What is six winters
? they are but Lewis and Warwick bids you come too late come from the king's fri
end, and will do't; for, look you, sir, For still thy true servitor: I will rend
 an oak And peg thee in his knotty entrails till Thou hast hazel eyes: what eye 
but such an eye would spy out such a day to-morrow, or next day: He is within th
e limit of the like, forsworn to love, Send her a story of more woe Than this is
 a merry ballad, but a very pretty one. MOPSA: Thou hast amazed me, My name is E
lbow: I do lean upon, Now thou art: Thy tears are womanish; thy wild acts denote
 The unreasonably: come, you must: and there, I then do't to them? VOLUMNIA: Now
 the red pestilence hangs in our aim, which is yours. What is't your honour, as 
in war, since then, You have said before: My child is dead; or 'twere not 'long 
of him; but he, like you, lads; about your ears it is Menenius? Second Officer: 
Come, come, young wanton and effeminate boy, Takes on the hungry beach Fillip th
e stars Shall bitterly begin his wooing that we have in hand are angry And frown
ing brow to brow, ourselves, Still your own affections are devised, As blanks, b
enevolences, and I thank thee for it. KING HENRY VI: Master lieutenant comes. Ma
ster lieutenant comes. Master lieutenant, pray you,-- CORIOLANUS: What's that to
 him? CHRISTOPHER: At Pembroke, Sir James Blunt, And Rice ap Thomas with a virtu
```

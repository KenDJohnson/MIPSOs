/* 	gpio.h
	Ken Johnson
	10/28/2015

	Header file for addressing the GPIO of the JZ4780, for use with the
	MIPS Creator CI20.

	GPIO Register addresses; For more information consult the JZ4870 
	Programmers Manual Chapter 28 (pages 629-640) */



/* PORT A */
#define PAPIN 		0xb0010000 /* PIN Level Register 				| R  	*/
#define PAINT 		0xb0010010 /* Interrupt Register 				| RW 	*/
#define PAINTS 		0xb0010014 /* Interrupt Set Regitser 			| W 	*/
#define PAINTC 		0xb0010018 /* Interrupt Clear Register 			| W 	*/
#define PAMSK 		0xb0010020 /* Interrupt Mask Register 			| R 	*/
#define PAMSKS 		0xb0010024 /* Interrupt Mask Set Register 		| W 	*/
#define PAMSKC 		0xb0010028 /* Interrupt Mask Clear Register 	| W 	*/
#define PAPAT1 		0xb0010030 /* Pattern 1 Register 				| R 	*/
#define PAPAT1S 	0xb0010034 /* Pattern 1 Set Register 			| W 	*/
#define PAPAT1C 	0xb0010038 /* Pattern 1 Clear Register 			| W 	*/
#define PAPAT0 		0xb0010040 /* Pattern 0 Register 				| R 	*/
#define PAPAT0S 	0xb0010044 /* Pattern 0 Set Register 			| W 	*/
#define PAPAT0C 	0xb0010048 /* Pattern 0 Clear Register 			| W 	*/
#define PAFLG 		0xb0010050 /* FLAG Register 					| R 	*/
#define PAFLGC 		0xb0010058 /* FLAG Clear Register 				| W 	*/
#define PAPEN 		0xb0010070 /* PULL Disable Register 			| RW 	*/
#define PAPENS 		0xb0010074 /* PULL Disable Set Register 		| W 	*/
#define PAPENC 		0xb0010078 /* PULL Disable Clear Register 		| W 	*/
#define PADRVL 		0xb0010080 /* 									| RW 	*/
#define PADRVLS 	0xb0010084 /* 									| W 	*/
#define PADRVLC 	0xb0010088 /* 									| W 	*/
#define PADIR 		0xb0010090 /* 									| RW 	*/
#define PADIRS  	0xb0010094 /* 									| W 	*/
#define PADCIRC 	0xb0010098 /* 									| W 	*/
#define PADRVH 		0xb00100A0 /* 									| RW 	*/
#define PADRVHS 	0xb00100A4 /* 									| W 	*/
#define PADRVHC 	0xb00100A8 /* 									| W 	*/


/* PORT B */
#define PBPIN 		0xb0010100 /* PIN Level Register 				| R  	*/
#define PBINT 		0xb0010110 /* Interrupt Register 				| RW 	*/
#define PBINTS 		0xb0010114 /* Interrupt Set Regitser 			| W 	*/
#define PBINTC 		0xb0010118 /* Interrupt Clear Register 			| W 	*/
#define PBMSK 		0xb0010120 /* Interrupt Mask Register 			| R 	*/
#define PBMSKS 		0xb0010124 /* Interrupt Mask Set Register 		| W 	*/
#define PBMSKC 		0xb0010128 /* Interrupt Mask Clear Register 	| W 	*/
#define PBPAT1 		0xb0010130 /* Pattern 1 Register 				| R 	*/
#define PBPAT1S 	0xb0010134 /* Pattern 1 Set Register 			| W 	*/
#define PBPAT1C 	0xb0010138 /* Pattern 1 Clear Register 			| W 	*/
#define PBPAT0 		0xb0010140 /* Pattern 0 Register 				| R 	*/
#define PBPAT0S 	0xb0010144 /* Pattern 0 Set Register 			| W 	*/
#define PBPAT0C 	0xb0010148 /* Pattern 0 Clear Register 			| W 	*/
#define PBFLG 		0xb0010150 /* FLAG Register 					| R 	*/
#define PBFLGC 		0xb0010158 /* FLAG Clear Register 				| W 	*/
#define PBPEN 		0xb0010170 /* PULL Disable Register 			| RW 	*/
#define PBPENS 		0xb0010174 /* PULL Disable Set Register 		| W 	*/
#define PBPENC 		0xb0010178 /* PULL Disable Clear Register 		| W 	*/
#define PBDRVL 		0xb0010180 /* 									| RW 	*/
#define PBDRVLS 	0xb0010184 /* 									| W 	*/
#define PBDRVLC 	0xb0010188 /* 									| W 	*/
#define PBDIR 		0xb0010190 /* 									| RW 	*/
#define PBDIRS  	0xb0010194 /* 									| W 	*/
#define PBDCIRC 	0xb0010198 /* 									| W 	*/
#define PBDRVH 		0xb00101A0 /* 									| RW 	*/
#define PBDRVHS 	0xb00101A4 /* 									| W 	*/
#define PBDRVHC 	0xb00101A8 /* 									| W 	*/


/* PORT C */
#define PCPIN 		0xb0010200 /* PIN Level Register 				| R  	*/
#define PCINT 		0xb0010210 /* Interrupt Register 				| RW 	*/
#define PCINTS 		0xb0010214 /* Interrupt Set Regitser 			| W 	*/
#define PCINTC 		0xb0010218 /* Interrupt Clear Register 			| W 	*/
#define PCMSK 		0xb0010220 /* Interrupt Mask Register 			| R 	*/
#define PCMSKS 		0xb0010224 /* Interrupt Mask Set Register 		| W 	*/
#define PCMSKC 		0xb0010228 /* Interrupt Mask Clear Register 	| W 	*/
#define PCPAT1 		0xb0010230 /* Pattern 1 Register 				| R 	*/
#define PCPAT1S 	0xb0010234 /* Pattern 1 Set Register 			| W 	*/
#define PCPAT1C 	0xb0010238 /* Pattern 1 Clear Register 			| W 	*/
#define PCPAT0 		0xb0010240 /* Pattern 0 Register 				| R 	*/
#define PCPAT0S 	0xb0010244 /* Pattern 0 Set Register 			| W 	*/
#define PCPAT0C 	0xb0010248 /* Pattern 0 Clear Register 			| W 	*/
#define PCFLG 		0xb0010250 /* FLAG Register 					| R 	*/
#define PCFLGC 		0xb0010258 /* FLAG Clear Register 				| W 	*/
#define PCPEN 		0xb0010270 /* PULL Disable Register 			| RW 	*/
#define PCPENS 		0xb0010274 /* PULL Disable Set Register 		| W 	*/
#define PCPENC 		0xb0010278 /* PULL Disable Clear Register 		| W 	*/
#define PCDRVL 		0xb0010280 /* 									| RW 	*/
#define PCDRVLS 	0xb0010284 /* 									| W 	*/
#define PCDRVLC 	0xb0010288 /* 									| W 	*/
#define PCDIR 		0xb0010290 /* 									| RW 	*/
#define PCDIRS  	0xb0010294 /* 									| W 	*/
#define PCDCIRC 	0xb0010298 /* 									| W 	*/
#define PCDRVH 		0xb00102A0 /* 									| RW 	*/
#define PCDRVHS 	0xb00102A4 /* 									| W 	*/
#define PCDRVHC 	0xb00102A8 /* 									| W 	*/


/* PORT D */
#define PDPIN 		0xb0010300 /* PIN Level Register 				| R  	*/
#define PDINT 		0xb0010310 /* Interrupt Register 				| RW 	*/
#define PDINTS 		0xb0010314 /* Interrupt Set Regitser 			| W 	*/
#define PDINTC 		0xb0010318 /* Interrupt Clear Register 			| W 	*/
#define PDMSK 		0xb0010320 /* Interrupt Mask Register 			| R 	*/
#define PDMSKS 		0xb0010324 /* Interrupt Mask Set Register 		| W 	*/
#define PDMSKC 		0xb0010328 /* Interrupt Mask Clear Register 	| W 	*/
#define PDPAT1 		0xb0010330 /* Pattern 1 Register 				| R 	*/
#define PDPAT1S 	0xb0010334 /* Pattern 1 Set Register 			| W 	*/
#define PDPAT1C 	0xb0010338 /* Pattern 1 Clear Register 			| W 	*/
#define PDPAT0 		0xb0010340 /* Pattern 0 Register 				| R 	*/
#define PDPAT0S 	0xb0010344 /* Pattern 0 Set Register 			| W 	*/
#define PDPAT0C 	0xb0010348 /* Pattern 0 Clear Register 			| W 	*/
#define PDFLG 		0xb0010350 /* FLAG Register 					| R 	*/
#define PDFLGC 		0xb0010358 /* FLAG Clear Register 				| W 	*/
#define PDPEN 		0xb0010370 /* PULL Disable Register 			| RW 	*/
#define PDPENS 		0xb0010374 /* PULL Disable Set Register 		| W 	*/
#define PDPENC 		0xb0010378 /* PULL Disable Clear Register 		| W 	*/
#define PDDRVL 		0xb0010380 /* 									| RW 	*/
#define PDDRVLS 	0xb0010384 /* 									| W 	*/
#define PDDRVLC 	0xb0010388 /* 									| W 	*/
#define PDDIR 		0xb0010390 /* 									| RW 	*/
#define PDDIRS  	0xb0010394 /* 									| W 	*/
#define PDDCIRC 	0xb0010398 /* 									| W 	*/
#define PDDRVH 		0xb00103A0 /* 									| RW 	*/
#define PDDRVHS 	0xb00103A4 /* 									| W 	*/
#define PDDRVHC 	0xb00103A8 /* 									| W 	*/


/* PORT E */
#define PEPIN 		0xb0010400 /* PIN Level Register 				| R  	*/
#define PEINT 		0xb0010410 /* Interrupt Register 				| RW 	*/
#define PEINTS 		0xb0010414 /* Interrupt Set Regitser 			| W 	*/
#define PEINTC 		0xb0010418 /* Interrupt Clear Register 			| W 	*/
#define PEMSK 		0xb0010420 /* Interrupt Mask Register 			| R 	*/
#define PEMSKS 		0xb0010424 /* Interrupt Mask Set Register 		| W 	*/
#define PEMSKC 		0xb0010428 /* Interrupt Mask Clear Register 	| W 	*/
#define PEPAT1 		0xb0010430 /* Pattern 1 Register 				| R 	*/
#define PEPAT1S 	0xb0010434 /* Pattern 1 Set Register 			| W 	*/
#define PEPAT1C 	0xb0010438 /* Pattern 1 Clear Register 			| W 	*/
#define PEPAT0 		0xb0010440 /* Pattern 0 Register 				| R 	*/
#define PEPAT0S 	0xb0010444 /* Pattern 0 Set Register 			| W 	*/
#define PEPAT0C 	0xb0010448 /* Pattern 0 Clear Register 			| W 	*/
#define PEFLG 		0xb0010450 /* FLAG Register 					| R 	*/
#define PEFLGC 		0xb0010458 /* FLAG Clear Register 				| W 	*/
#define PEPEN 		0xb0010470 /* PULL Disable Register 			| RW 	*/
#define PEPENS 		0xb0010474 /* PULL Disable Set Register 		| W 	*/
#define PEPENC 		0xb0010478 /* PULL Disable Clear Register 		| W 	*/
#define PEDRVL 		0xb0010480 /* 									| RW 	*/
#define PEDRVLS 	0xb0010484 /* 									| W 	*/
#define PEDRVLC 	0xb0010488 /* 									| W 	*/
#define PEDIR 		0xb0010490 /* 									| RW 	*/
#define PEDIRS  	0xb0010494 /* 									| W 	*/
#define PEDCIRC 	0xb0010498 /* 									| W 	*/
#define PEDRVH 		0xb00104A0 /* 									| RW 	*/
#define PEDRVHS 	0xb00104A4 /* 									| W 	*/
#define PEDRVHC 	0xb00104A8 /* 									| W 	*/


/* PORT F */
#define PFPIN 		0xb0010500 /* PIN Level Register 				| R  	*/
#define PFINT 		0xb0010510 /* Interrupt Register 				| RW 	*/
#define PFINTS 		0xb0010514 /* Interrupt Set Regitser 			| W 	*/
#define PFINTC 		0xb0010518 /* Interrupt Clear Register 			| W 	*/
#define PFMSK 		0xb0010520 /* Interrupt Mask Register 			| R 	*/
#define PFMSKS 		0xb0010524 /* Interrupt Mask Set Register 		| W 	*/
#define PFMSKC 		0xb0010528 /* Interrupt Mask Clear Register 	| W 	*/
#define PFPAT1 		0xb0010530 /* Pattern 1 Register 				| R 	*/
#define PFPAT1S 	0xb0010534 /* Pattern 1 Set Register 			| W 	*/
#define PFPAT1C 	0xb0010538 /* Pattern 1 Clear Register 			| W 	*/
#define PFPAT0 		0xb0010540 /* Pattern 0 Register 				| R 	*/
#define PFPAT0S 	0xb0010544 /* Pattern 0 Set Register 			| W 	*/
#define PFPAT0C 	0xb0010548 /* Pattern 0 Clear Register 			| W 	*/
#define PFFLG 		0xb0010550 /* FLAG Register 					| R 	*/
#define PFFLGC 		0xb0010558 /* FLAG Clear Register 				| W 	*/
#define PFPEN 		0xb0010570 /* PULL Disable Register 			| RW 	*/
#define PFPENS 		0xb0010574 /* PULL Disable Set Register 		| W 	*/
#define PFPENC 		0xb0010578 /* PULL Disable Clear Register 		| W 	*/
#define PFDRVL 		0xb0010580 /* 									| RW 	*/
#define PFDRVLS 	0xb0010584 /* 									| W 	*/
#define PFDRVLC 	0xb0010588 /* 									| W 	*/
#define PFDIR 		0xb0010590 /* 									| RW 	*/
#define PFDIRS  	0xb0010594 /* 									| W 	*/
#define PFDCIRC 	0xb0010598 /* 									| W 	*/
#define PFDRVH 		0xb00105A0 /* 									| RW 	*/
#define PFDRVHS 	0xb00105A4 /* 									| W 	*/
#define PFDRVHC 	0xb00105A8 /* 									| W 	*/


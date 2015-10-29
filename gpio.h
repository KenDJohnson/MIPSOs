/* GPIO Register addresses */
/* PORT A */
#define PAPIN 		0x10010000 /* PIN Level Register 				| R  	*/
#define PAINT 		0x10010010 /* Interrupt Register 				| RW 	*/
#define PAINTS 		0x10010014 /* Interrupt Set Regitser 			| W 	*/
#define PAINTC 		0x10010018 /* Interrupt Clear Register 			| W 	*/
#define PAMSK 		0x10010020 /* Interrupt Mask Register 			| R 	*/
#define PAMSKS 		0x10010024 /* Interrupt Mask Set Register 		| W 	*/
#define PAMSKC 		0x10010028 /* Interrupt Mask Clear Register 	| W 	*/
#define PAPAT1 		0x10010030 /* Pattern 1 Register 				| R 	*/
#define PAPAT1S 	0x10010034 /* Pattern 1 Set Register 			| W 	*/
#define PAPAT1C 	0x10010038 /* Pattern 1 Clear Register 			| W 	*/
#define PAPAT0 		0x10010040 /* Pattern 0 Register 				| R 	*/
#define PAPAT0S 	0x10010044 /* Pattern 0 Set Register 			| W 	*/
#define PAPAT0C 	0x10010048 /* Pattern 0 Clear Register 			| W 	*/
#define PAFLG 		0x10010050 /* FLAG Register 					| R 	*/
#define PAFLGC 		0x10010058 /* FLAG Clear Register 				| W 	*/
#define PAPEN 		0x10010070 /* PULL Disable Register 			| RW 	*/
#define PAPENS 		0x10010074 /* PULL Disable Set Register 		| W 	*/
#define PAPENC 		0x10010078 /* PULL Disable Clear Register 		| W 	*/
#define PADRVL 		0x10010080 /* 									| RW 	*/
#define PADRVLS 	0x10010084 /* 									| W 	*/
#define PADRVLC 	0x10010088 /* 									| W 	*/
#define PADIR 		0x10010090 /* 									| RW 	*/
#define PADIRS  	0x10010094 /* 									| W 	*/
#define PADCIRC 	0x10010098 /* 									| W 	*/
#define PADRVH 		0x100100A0 /* 									| RW 	*/
#define PADRVHS 	0x100100A4 /* 									| W 	*/
#define PADRVHC 	0x100100A8 /* 									| W 	*/


/* PORT B */
#define PBPIN 		0x10010100 /* PIN Level Register 				| R  	*/
#define PBINT 		0x10010110 /* Interrupt Register 				| RW 	*/
#define PBINTS 		0x10010114 /* Interrupt Set Regitser 			| W 	*/
#define PBINTC 		0x10010118 /* Interrupt Clear Register 			| W 	*/
#define PBMSK 		0x10010120 /* Interrupt Mask Register 			| R 	*/
#define PBMSKS 		0x10010124 /* Interrupt Mask Set Register 		| W 	*/
#define PBMSKC 		0x10010128 /* Interrupt Mask Clear Register 	| W 	*/
#define PBPAT1 		0x10010130 /* Pattern 1 Register 				| R 	*/
#define PBPAT1S 	0x10010134 /* Pattern 1 Set Register 			| W 	*/
#define PBPAT1C 	0x10010138 /* Pattern 1 Clear Register 			| W 	*/
#define PBPAT0 		0x10010140 /* Pattern 0 Register 				| R 	*/
#define PBPAT0S 	0x10010144 /* Pattern 0 Set Register 			| W 	*/
#define PBPAT0C 	0x10010148 /* Pattern 0 Clear Register 			| W 	*/
#define PBFLG 		0x10010150 /* FLAG Register 					| R 	*/
#define PBFLGC 		0x10010158 /* FLAG Clear Register 				| W 	*/
#define PBPEN 		0x10010170 /* PULL Disable Register 			| RW 	*/
#define PBPENS 		0x10010174 /* PULL Disable Set Register 		| W 	*/
#define PBPENC 		0x10010178 /* PULL Disable Clear Register 		| W 	*/
#define PBDRVL 		0x10010180 /* 									| RW 	*/
#define PBDRVLS 	0x10010184 /* 									| W 	*/
#define PBDRVLC 	0x10010188 /* 									| W 	*/
#define PBDIR 		0x10010190 /* 									| RW 	*/
#define PBDIRS  	0x10010194 /* 									| W 	*/
#define PBDCIRC 	0x10010198 /* 									| W 	*/
#define PBDRVH 		0x100101A0 /* 									| RW 	*/
#define PBDRVHS 	0x100101A4 /* 									| W 	*/
#define PBDRVHC 	0x100101A8 /* 									| W 	*/


/* PORT C */
#define PCPIN 		0x10010200 /* PIN Level Register 				| R  	*/
#define PCINT 		0x10010210 /* Interrupt Register 				| RW 	*/
#define PCINTS 		0x10010214 /* Interrupt Set Regitser 			| W 	*/
#define PCINTC 		0x10010218 /* Interrupt Clear Register 			| W 	*/
#define PCMSK 		0x10010220 /* Interrupt Mask Register 			| R 	*/
#define PCMSKS 		0x10010224 /* Interrupt Mask Set Register 		| W 	*/
#define PCMSKC 		0x10010228 /* Interrupt Mask Clear Register 	| W 	*/
#define PCPAT1 		0x10010230 /* Pattern 1 Register 				| R 	*/
#define PCPAT1S 	0x10010234 /* Pattern 1 Set Register 			| W 	*/
#define PCPAT1C 	0x10010238 /* Pattern 1 Clear Register 			| W 	*/
#define PCPAT0 		0x10010240 /* Pattern 0 Register 				| R 	*/
#define PCPAT0S 	0x10010244 /* Pattern 0 Set Register 			| W 	*/
#define PCPAT0C 	0x10010248 /* Pattern 0 Clear Register 			| W 	*/
#define PCFLG 		0x10010250 /* FLAG Register 					| R 	*/
#define PCFLGC 		0x10010258 /* FLAG Clear Register 				| W 	*/
#define PCPEN 		0x10010270 /* PULL Disable Register 			| RW 	*/
#define PCPENS 		0x10010274 /* PULL Disable Set Register 		| W 	*/
#define PCPENC 		0x10010278 /* PULL Disable Clear Register 		| W 	*/
#define PCDRVL 		0x10010280 /* 									| RW 	*/
#define PCDRVLS 	0x10010284 /* 									| W 	*/
#define PCDRVLC 	0x10010288 /* 									| W 	*/
#define PCDIR 		0x10010290 /* 									| RW 	*/
#define PCDIRS  	0x10010294 /* 									| W 	*/
#define PCDCIRC 	0x10010298 /* 									| W 	*/
#define PCDRVH 		0x100102A0 /* 									| RW 	*/
#define PCDRVHS 	0x100102A4 /* 									| W 	*/
#define PCDRVHC 	0x100102A8 /* 									| W 	*/


/* PORT D */
#define PDPIN 		0x10010300 /* PIN Level Register 				| R  	*/
#define PDINT 		0x10010310 /* Interrupt Register 				| RW 	*/
#define PDINTS 		0x10010314 /* Interrupt Set Regitser 			| W 	*/
#define PDINTC 		0x10010318 /* Interrupt Clear Register 			| W 	*/
#define PDMSK 		0x10010320 /* Interrupt Mask Register 			| R 	*/
#define PDMSKS 		0x10010324 /* Interrupt Mask Set Register 		| W 	*/
#define PDMSKC 		0x10010328 /* Interrupt Mask Clear Register 	| W 	*/
#define PDPAT1 		0x10010330 /* Pattern 1 Register 				| R 	*/
#define PDPAT1S 	0x10010334 /* Pattern 1 Set Register 			| W 	*/
#define PDPAT1C 	0x10010338 /* Pattern 1 Clear Register 			| W 	*/
#define PDPAT0 		0x10010340 /* Pattern 0 Register 				| R 	*/
#define PDPAT0S 	0x10010344 /* Pattern 0 Set Register 			| W 	*/
#define PDPAT0C 	0x10010348 /* Pattern 0 Clear Register 			| W 	*/
#define PDFLG 		0x10010350 /* FLAG Register 					| R 	*/
#define PDFLGC 		0x10010358 /* FLAG Clear Register 				| W 	*/
#define PDPEN 		0x10010370 /* PULL Disable Register 			| RW 	*/
#define PDPENS 		0x10010374 /* PULL Disable Set Register 		| W 	*/
#define PDPENC 		0x10010378 /* PULL Disable Clear Register 		| W 	*/
#define PDDRVL 		0x10010380 /* 									| RW 	*/
#define PDDRVLS 	0x10010384 /* 									| W 	*/
#define PDDRVLC 	0x10010388 /* 									| W 	*/
#define PDDIR 		0x10010390 /* 									| RW 	*/
#define PDDIRS  	0x10010394 /* 									| W 	*/
#define PDDCIRC 	0x10010398 /* 									| W 	*/
#define PDDRVH 		0x100103A0 /* 									| RW 	*/
#define PDDRVHS 	0x100103A4 /* 									| W 	*/
#define PDDRVHC 	0x100103A8 /* 									| W 	*/


/* PORT E */
#define PEPIN 		0x10010400 /* PIN Level Register 				| R  	*/
#define PEINT 		0x10010410 /* Interrupt Register 				| RW 	*/
#define PEINTS 		0x10010414 /* Interrupt Set Regitser 			| W 	*/
#define PEINTC 		0x10010418 /* Interrupt Clear Register 			| W 	*/
#define PEMSK 		0x10010420 /* Interrupt Mask Register 			| R 	*/
#define PEMSKS 		0x10010424 /* Interrupt Mask Set Register 		| W 	*/
#define PEMSKC 		0x10010428 /* Interrupt Mask Clear Register 	| W 	*/
#define PEPAT1 		0x10010430 /* Pattern 1 Register 				| R 	*/
#define PEPAT1S 	0x10010434 /* Pattern 1 Set Register 			| W 	*/
#define PEPAT1C 	0x10010438 /* Pattern 1 Clear Register 			| W 	*/
#define PEPAT0 		0x10010440 /* Pattern 0 Register 				| R 	*/
#define PEPAT0S 	0x10010444 /* Pattern 0 Set Register 			| W 	*/
#define PEPAT0C 	0x10010448 /* Pattern 0 Clear Register 			| W 	*/
#define PEFLG 		0x10010450 /* FLAG Register 					| R 	*/
#define PEFLGC 		0x10010458 /* FLAG Clear Register 				| W 	*/
#define PEPEN 		0x10010470 /* PULL Disable Register 			| RW 	*/
#define PEPENS 		0x10010474 /* PULL Disable Set Register 		| W 	*/
#define PEPENC 		0x10010478 /* PULL Disable Clear Register 		| W 	*/
#define PEDRVL 		0x10010480 /* 									| RW 	*/
#define PEDRVLS 	0x10010484 /* 									| W 	*/
#define PEDRVLC 	0x10010488 /* 									| W 	*/
#define PEDIR 		0x10010490 /* 									| RW 	*/
#define PEDIRS  	0x10010494 /* 									| W 	*/
#define PEDCIRC 	0x10010498 /* 									| W 	*/
#define PEDRVH 		0x100104A0 /* 									| RW 	*/
#define PEDRVHS 	0x100104A4 /* 									| W 	*/
#define PEDRVHC 	0x100104A8 /* 									| W 	*/


/* PORT F */
#define PFPIN 		0x10010500 /* PIN Level Register 				| R  	*/
#define PFINT 		0x10010510 /* Interrupt Register 				| RW 	*/
#define PFINTS 		0x10010514 /* Interrupt Set Regitser 			| W 	*/
#define PFINTC 		0x10010518 /* Interrupt Clear Register 			| W 	*/
#define PFMSK 		0x10010520 /* Interrupt Mask Register 			| R 	*/
#define PFMSKS 		0x10010524 /* Interrupt Mask Set Register 		| W 	*/
#define PFMSKC 		0x10010528 /* Interrupt Mask Clear Register 	| W 	*/
#define PFPAT1 		0x10010530 /* Pattern 1 Register 				| R 	*/
#define PFPAT1S 	0x10010534 /* Pattern 1 Set Register 			| W 	*/
#define PFPAT1C 	0x10010538 /* Pattern 1 Clear Register 			| W 	*/
#define PFPAT0 		0x10010540 /* Pattern 0 Register 				| R 	*/
#define PFPAT0S 	0x10010544 /* Pattern 0 Set Register 			| W 	*/
#define PFPAT0C 	0x10010548 /* Pattern 0 Clear Register 			| W 	*/
#define PFFLG 		0x10010550 /* FLAG Register 					| R 	*/
#define PFFLGC 		0x10010558 /* FLAG Clear Register 				| W 	*/
#define PFPEN 		0x10010570 /* PULL Disable Register 			| RW 	*/
#define PFPENS 		0x10010574 /* PULL Disable Set Register 		| W 	*/
#define PFPENC 		0x10010578 /* PULL Disable Clear Register 		| W 	*/
#define PFDRVL 		0x10010580 /* 									| RW 	*/
#define PFDRVLS 	0x10010584 /* 									| W 	*/
#define PFDRVLC 	0x10010588 /* 									| W 	*/
#define PFDIR 		0x10010590 /* 									| RW 	*/
#define PFDIRS  	0x10010594 /* 									| W 	*/
#define PFDCIRC 	0x10010598 /* 									| W 	*/
#define PFDRVH 		0x100105A0 /* 									| RW 	*/
#define PFDRVHS 	0x100105A4 /* 									| W 	*/
#define PFDRVHC 	0x100105A8 /* 									| W 	*/


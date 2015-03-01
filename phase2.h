/*
 * These are the definitions for phase0 of the project (the kernel).
 */

#ifndef _PHASE2_H
#define _PHASE2_H

/*
 * Maximum line length
 */

#define P2_MAX_LINE	72

#define P2_MAX_MBOX 	200

/* 
 * Function prototypes for this phase.
 */

extern  int	P2_Sleep(int seconds);
extern	int	P2_TermRead(int unit, int size, char *buffer);
extern	int	P2_TermWrite(int unit, int size, char *text);
extern	int	P2_DiskRead(int unit, int track, int first, int sectors, void *buffer);
extern	int	P2_DiskWrite(int unit, int track, int first, int sectors, void *buffer);
extern 	int 	P2_DiskSize(int unit, int *sector, int *track, int *disk);

extern	int 	P3_Startup(void *);

#endif /* _PHASE2_H */

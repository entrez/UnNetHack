/* NetHack may be freely redistributed.  See license for details. */

#ifndef SYS_H
#define SYS_H

struct sysopt {
    char *support; /* local support contact */

#ifdef LIVELOGFILE
    unsigned int livelog;  /* event types to livelog */
    int ll_conduct_turns;  /* do not livelog conducts before this turncount */
#endif
};

extern struct sysopt sysopt;

#endif /* SYS_H */

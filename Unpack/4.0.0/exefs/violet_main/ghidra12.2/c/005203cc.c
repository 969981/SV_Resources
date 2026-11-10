/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005203cc; name: FUN_005203cc
 */


void FUN_005203cc(long *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  
  for (lVar1 = *param_1; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
    plVar3 = *(long **)(lVar1 + 0x18);
    if (plVar3 != (long *)0x0) {
      lVar5 = (*(long *)(lVar1 + 0x38) - (long)plVar3) + -0x10 >> 4;
      while( true ) {
        if (lVar5 != 0) {
          plVar2 = plVar3 + lVar5 * 2 + 1;
          do {
                    /* try { // try from 00520468 to 0052046b has its CatchHandler @ 00520490 */
            (*(code *)*plVar2)(plVar2[-1]);
            lVar5 = lVar5 + -1;
            plVar2 = plVar2 + -2;
          } while (lVar5 != 0);
        }
        plVar3 = (long *)plVar3[1];
        if (plVar3 == (long *)0x0) break;
        lVar5 = *plVar3;
      }
    }
  }
  lVar1 = *param_1;
  while (lVar1 != 0) {
    plVar3 = (long *)(lVar1 + 0x10);
    lVar1 = *(long *)(lVar1 + 0x20);
    if ((long *)*plVar3 != (long *)0x0) {
      plVar2 = (long *)param_1[3];
      pcVar4 = (code *)param_1[10];
      plVar3 = (long *)*plVar3;
      do {
        plVar6 = (long *)*plVar3;
        if (plVar3 != plVar2) {
                    /* try { // try from 00520430 to 00520433 has its CatchHandler @ 0052048c */
          (*pcVar4)(plVar3,plVar3[2]);
        }
        plVar3 = plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return;
}



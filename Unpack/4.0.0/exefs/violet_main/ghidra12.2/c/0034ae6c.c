/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034ae6c; name: FUN_0034ae6c
 */


void FUN_0034ae6c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (param_2 < 1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_0038db40();
  if (*(long *)(param_1 + 0x38) < param_2) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0034af64 to 0034af67 has its CatchHandler @ 0034af68 */
    abort();
  }
  plVar2 = (long *)(param_1 + 0x28);
  plVar1 = (long *)*plVar2;
  if (plVar1 != (long *)0x0) {
    plVar3 = plVar1;
    plVar5 = plVar2;
    do {
      if (param_2 <= plVar3[4]) {
        plVar5 = plVar3;
      }
      plVar3 = (long *)plVar3[plVar3[4] < param_2];
    } while (plVar3 != (long *)0x0);
    if ((plVar5 != plVar2) && (plVar5[4] <= param_2)) {
      plVar2 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        plVar2 = plVar5 + 2;
        plVar3 = (long *)*plVar2;
        if ((long *)*plVar3 != plVar5) {
          do {
            lVar4 = *plVar2;
            plVar2 = (long *)(lVar4 + 0x10);
            plVar3 = (long *)*plVar2;
          } while (*plVar3 != lVar4);
        }
      }
      else {
        do {
          plVar3 = plVar2;
          plVar2 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
      if (*(long **)(param_1 + 0x20) == plVar5) {
        *(long **)(param_1 + 0x20) = plVar3;
      }
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
      FUN_01336080(plVar1,plVar5);
      FUN_0049e790(PTR_LAB_047cba48,plVar5);
    }
  }
                    /* try { // try from 0034af4c to 0034af53 has its CatchHandler @ 0034af80 */
  FUN_0038db60(param_1);
  return;
}



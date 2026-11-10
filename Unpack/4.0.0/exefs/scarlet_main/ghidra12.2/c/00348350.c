/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00348350; name: FUN_00348350
 */


void FUN_00348350(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  FUN_0038db40(param_1 + 0x108);
  lVar1 = *(long *)(param_1 + 0x130);
  if (lVar1 != 0) {
    lVar3 = lVar1;
    lVar5 = param_1 + 0x130;
    do {
      if (param_2 <= *(long *)(lVar3 + 0x20)) {
        lVar5 = lVar3;
      }
      lVar3 = *(long *)(lVar3 + (ulong)(*(long *)(lVar3 + 0x20) < param_2) * 8);
    } while (lVar3 != 0);
    if ((lVar5 != param_1 + 0x130) && (*(long *)(lVar5 + 0x20) <= param_2)) {
      plVar4 = *(long **)(lVar5 + 8);
      if (*(long **)(lVar5 + 8) == (long *)0x0) {
        plVar4 = (long *)(lVar5 + 0x10);
        plVar2 = (long *)*plVar4;
        if (*plVar2 != lVar5) {
          do {
            lVar3 = *plVar4;
            plVar4 = (long *)(lVar3 + 0x10);
            plVar2 = (long *)*plVar4;
          } while (*plVar2 != lVar3);
        }
      }
      else {
        do {
          plVar2 = plVar4;
          plVar4 = (long *)*plVar2;
        } while ((long *)*plVar2 != (long *)0x0);
      }
      if (*(long *)(param_1 + 0x128) == lVar5) {
        *(long **)(param_1 + 0x128) = plVar2;
      }
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + -1;
      FUN_01336080(lVar1,lVar5);
      FUN_0049e790(PTR_LAB_047cba48,lVar5);
    }
  }
                    /* try { // try from 00348428 to 0034842f has its CatchHandler @ 00348440 */
  FUN_0038db60(param_1 + 0x108);
  return;
}



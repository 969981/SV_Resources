/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00270ba4; name: FUN_00270ba4
 */


void FUN_00270ba4(long param_1)

{
  char cVar1;
  bool bVar2;
  void *__ptr;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 8);
  if (plVar4 != (long *)0x0) {
    do {
      lVar3 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar3 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar3 + -1 == 0) {
      FUN_00270ba4(plVar4);
      FUN_0049e790(PTR_LAB_047cba48,plVar4);
      __ptr = *(void **)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 8) = 0;
      goto joined_r0x00270bdc;
    }
  }
  __ptr = *(void **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = 0;
joined_r0x00270bdc:
  if (__ptr != (void *)0x0) {
    if (*(long *)(param_1 + 0x18) != 0) {
      lVar3 = 0;
                    /* try { // try from 00270bf4 to 00270bf7 has its CatchHandler @ 00270c98 */
      for (uVar5 = 1; FUN_002ebda0((long)__ptr + lVar3), uVar5 < *(ulong *)(param_1 + 0x18);
          uVar5 = uVar5 + 1) {
        __ptr = *(void **)(param_1 + 0x10);
        lVar3 = lVar3 + 0x18;
      }
      __ptr = *(void **)(param_1 + 0x10);
    }
                    /* try { // try from 00270c18 to 00270c1b has its CatchHandler @ 00270c94 */
    free(__ptr);
    plVar4 = *(long **)(param_1 + 8);
    if (plVar4 != (long *)0x0) {
      do {
        lVar3 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 + -1 == 0) {
        FUN_00270ba4(plVar4);
        FUN_0049e790(PTR_LAB_047cba48,plVar4);
        return;
      }
    }
  }
  return;
}



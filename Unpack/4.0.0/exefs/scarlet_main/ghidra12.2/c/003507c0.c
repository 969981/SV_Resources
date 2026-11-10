/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003507c0; name: FUN_003507c0
 */


void FUN_003507c0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = FUN_0038dac0(param_1 + 0xa0);
  if (iVar4 != 0) {
    plVar1 = (long *)(param_1 + 0x60);
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      if (*plVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (param_1 + 0x50 != *(long *)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00350830 to 00350837 has its CatchHandler @ 00350838 */
        abort();
      }
      if (*(long *)(param_1 + 0x48) != *(long *)(param_1 + 8)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_0049e790(PTR_LAB_047cba48,param_1);
      return;
    }
  }
  return;
}



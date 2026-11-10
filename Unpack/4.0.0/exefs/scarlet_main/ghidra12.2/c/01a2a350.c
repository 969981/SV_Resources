/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a2a350; name: FUN_01a2a350
 */


undefined4 FUN_01a2a350(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(ulong *)(param_1 + 0x88) <= (ulong)(long)(int)param_2) {
    return 0;
  }
  plVar1 = *(long **)(param_1 + 0x60);
  if ((0 < (int)param_2) && (plVar1 = (long *)*plVar1, 1 < param_2)) {
    lVar2 = (ulong)param_2 + 1;
    do {
      plVar1 = (long *)*plVar1;
      lVar2 = lVar2 + -1;
    } while (2 < lVar2);
  }
  return *(undefined4 *)(plVar1 + 2);
}



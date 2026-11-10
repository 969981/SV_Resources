/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02169ed4; name: FUN_02169ed4
 */


void FUN_02169ed4(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((ulong)(*(long *)(param_1 + 0x2e0) - *(long *)(param_1 + 0x2d8) >> 3) <= (ulong)(long)param_2)
  {
    return;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0x2d8) + (long)param_2 * 8);
  for (plVar2 = *(long **)(lVar1 + 0xa8); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    FUN_01739524(lVar1,plVar2 + 2);
  }
  FUN_015e3f5c(lVar1 + 0x78);
  return;
}



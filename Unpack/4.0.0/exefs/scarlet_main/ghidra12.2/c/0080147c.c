/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0080147c; name: FUN_0080147c
 */


long * FUN_0080147c(ushort *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  
  if ((ulong)*param_1 != 0) {
    uVar2 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 4) + uVar2 * 8);
      if ((*plVar1 != -1) && (plVar1[1] == param_2)) {
        return plVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_1);
  }
  return (long *)0x0;
}



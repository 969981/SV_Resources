/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02714a08; name: FUN_02714a08
 */


undefined4 FUN_02714a08(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  long *plVar4;
  
  plVar1 = *(long **)(param_1 + 0xd0);
  plVar2 = *(long **)(param_1 + 0xd8);
  plVar4 = plVar1;
  if ((plVar1 != plVar2) && (*plVar1 != *param_2)) {
    do {
      plVar4 = plVar4 + 4;
      if (plVar2 == plVar4) {
        plVar4 = plVar2;
        goto LAB_02714a48;
      }
    } while (*plVar4 != *param_2);
  }
LAB_02714a48:
  uVar3 = (undefined4)((ulong)((long)plVar4 - (long)plVar1) >> 5);
  if (plVar2 == plVar4) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



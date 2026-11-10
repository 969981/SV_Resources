/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027531a8; name: FUN_027531a8
 */


void FUN_027531a8(long param_1,long *param_2)

{
  long lVar1;
  long *plVar3;
  long *plVar2;
  
  if (*(long **)(param_1 + 8) != param_2) {
    plVar2 = *(long **)(param_1 + 8);
    do {
      plVar3 = plVar2 + -4;
      lVar1 = *plVar3;
      *plVar3 = 0;
      if (lVar1 != 0) {
        FUN_00cdf7a4(plVar2 + -3);
      }
      plVar2 = plVar3;
    } while (param_2 != plVar3);
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}



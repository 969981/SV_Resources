/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003b1c20; name: FUN_003b1c20
 */


int * FUN_003b1c20(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = FUN_0047e430(param_1);
    if (iVar1 < 1) {
      return (int *)0x0;
    }
    iVar3 = 0;
    do {
      piVar2 = (int *)FUN_0047e450(param_1,iVar3);
      if (*piVar2 == param_2) {
        return piVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return (int *)0x0;
}



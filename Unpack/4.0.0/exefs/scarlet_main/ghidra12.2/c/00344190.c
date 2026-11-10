/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00344190; name: FUN_00344190
 */


bool FUN_00344190(long *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  if (param_1 != (long *)0x0) {
    lVar3 = *param_1;
    if (lVar3 == 0) {
      return false;
    }
    piVar2 = (int *)(param_1[1] + 0x10);
    do {
      iVar1 = strcmp(*(char **)(piVar2 + -2),"grpc.minimal_stack");
      if (iVar1 == 0) {
        if (piVar2[-4] == 1) {
          return *piVar2 != 0;
        }
        return false;
      }
      piVar2 = piVar2 + 8;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return false;
}



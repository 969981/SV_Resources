/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eda074; name: FUN_01eda074
 */


void FUN_01eda074(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_2 + 0x11) != '\0') {
    lVar1 = *(long *)(*param_1 + 8);
    lVar2 = *(long *)(*param_1 + 0x10);
    if (lVar1 == lVar2) {
LAB_01eda0c0:
      if (lVar1 != lVar2) {
        FUN_01ed9190(lVar1 + 8,param_2);
        return;
      }
    }
    else {
      do {
        if (*(int *)(lVar1 + 0x310) == *(int *)(param_2 + 8)) goto LAB_01eda0c0;
        lVar1 = lVar1 + 0x318;
      } while (lVar2 != lVar1);
    }
    FUN_01eda0e4();
  }
  return;
}



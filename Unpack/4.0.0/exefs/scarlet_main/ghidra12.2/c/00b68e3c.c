/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b68e3c; name: FUN_00b68e3c
 */


bool FUN_00b68e3c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((*param_1 == 0) || (lVar2 = *(long *)(*param_1 + 0x10), lVar2 == 0)) {
    return false;
  }
  lVar3 = *(long *)(lVar2 + 0x148);
  lVar2 = *(long *)(lVar2 + 0x150);
  if (lVar3 != lVar2) {
    if (*(long *)(lVar3 + 8) != *param_2) {
      do {
        lVar4 = lVar3 + 0x10;
        if (lVar2 == lVar4) {
          lVar3 = lVar2;
          break;
        }
        plVar1 = (long *)(lVar3 + 0x18);
        lVar3 = lVar4;
      } while (*plVar1 != *param_2);
    }
  }
  return lVar2 != lVar3;
}



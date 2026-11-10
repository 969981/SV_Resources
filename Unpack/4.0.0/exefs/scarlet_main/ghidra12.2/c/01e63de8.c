/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e63de8; name: FUN_01e63de8
 */


void FUN_01e63de8(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 0xb0);
  if (*plVar1 != param_2) {
    lVar2 = *(long *)(param_1 + 0xb8);
    if (lVar2 != param_2) {
      lVar3 = *(long *)(param_1 + 0xc0);
      if (lVar3 != param_2) {
        lVar4 = *(long *)(param_1 + 200);
        if (lVar4 != param_2) {
          if ((*plVar1 != 0) && (plVar1 = (long *)(param_1 + 0xb8), lVar2 != 0)) {
            if (lVar3 == 0) {
              plVar1 = (long *)(param_1 + 0xc0);
            }
            else {
              if (lVar4 != 0) {
                return;
              }
              plVar1 = (long *)(param_1 + 200);
            }
          }
          *plVar1 = param_2;
        }
      }
    }
  }
  return;
}



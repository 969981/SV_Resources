/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0277e0f0; name: FUN_0277e0f0
 */


long FUN_0277e0f0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != param_2) {
    do {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10)) {
        lVar1 = *(long *)(param_1 + 8);
        lVar2 = param_3;
        while( true ) {
          if (lVar1 == param_1) {
            return param_1;
          }
          lVar2 = *(long *)(lVar2 + 8);
          if (*(long *)(lVar1 + 0x10) != *(long *)(lVar2 + 0x10)) break;
          lVar1 = *(long *)(lVar1 + 8);
        }
      }
      param_1 = param_1 + 0x38;
    } while (param_1 != param_2);
    param_1 = param_2;
  }
  return param_1;
}



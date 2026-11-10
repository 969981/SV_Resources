/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020050b0; name: FUN_020050b0
 */


long FUN_020050b0(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((param_1 != param_2) && (uVar2 = FUN_0200548c(param_3,param_1), (uVar2 & 1) == 0)) {
    do {
      if (param_2 + -0x40 == param_1) {
        return param_2;
      }
      param_1 = param_1 + 0x40;
      uVar2 = FUN_0200548c(param_3,param_1);
    } while ((uVar2 & 1) == 0);
  }
  lVar1 = param_1;
  if (param_1 != param_2) {
    while (lVar1 = lVar1 + 0x40, lVar1 != param_2) {
      uVar2 = FUN_0200548c(param_3,lVar1);
      if ((uVar2 & 1) == 0) {
        FUN_010ef684(param_1,lVar1);
        param_1 = param_1 + 0x40;
      }
    }
  }
  return param_1;
}



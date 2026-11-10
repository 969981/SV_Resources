/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02005164; name: FUN_02005164
 */


void FUN_02005164(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != param_3) {
    lVar2 = *(long *)(param_1 + 8);
    lVar1 = param_2 + (param_3 - param_2);
    if (lVar1 != lVar2) {
      lVar1 = param_3 - param_2 >> 6;
      do {
        FUN_010ef684(param_2,param_2 + lVar1 * 0x40);
        param_2 = param_2 + 0x40;
      } while (lVar2 + lVar1 * -0x40 != param_2);
      lVar1 = *(long *)(param_1 + 8);
    }
    if (((lVar1 != param_2) && (FUN_00db239c(lVar1 + -0x40), lVar1 + -0x40 != param_2)) &&
       (FUN_00db239c(lVar1 + -0x80), lVar1 + -0x80 != param_2)) {
      do {
        FUN_00db239c(lVar1 + -0xc0);
        lVar1 = lVar1 + -0x40;
      } while (param_2 + 0x80 != lVar1);
    }
    *(long *)(param_1 + 8) = param_2;
  }
  return;
}



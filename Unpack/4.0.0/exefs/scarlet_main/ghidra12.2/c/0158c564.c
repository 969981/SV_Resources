/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0158c564; name: FUN_0158c564
 */


void FUN_0158c564(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  lVar1 = lVar3 - *param_1 >> 3;
  uVar2 = lVar1 * -0x1084210842108421;
  if (uVar2 < param_2) {
    FUN_0158c718(param_1,param_2 + lVar1 * 0x1084210842108421);
    return;
  }
  if (uVar2 != param_2) {
    lVar1 = *param_1 + param_2 * 0xf8;
    while (lVar1 != lVar3) {
      lVar3 = lVar3 + -0xf8;
      FUN_0192f8e8(lVar3);
    }
    param_1[1] = lVar1;
  }
  return;
}



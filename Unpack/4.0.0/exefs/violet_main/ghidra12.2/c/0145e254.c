/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0145e254; name: FUN_0145e254
 */


void FUN_0145e254(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  lVar1 = lVar3 - *param_1 >> 3;
  uVar2 = lVar1 * 0x6db6db6db6db6db7;
  if (uVar2 < param_2) {
    FUN_0145e664(param_1,param_2 + lVar1 * -0x6db6db6db6db6db7);
    return;
  }
  if (uVar2 != param_2) {
    lVar1 = *param_1 + param_2 * 0x38;
    while (lVar1 != lVar3) {
      lVar3 = lVar3 + -0x38;
      FUN_0145ebcc(lVar3);
    }
    param_1[1] = lVar1;
  }
  return;
}



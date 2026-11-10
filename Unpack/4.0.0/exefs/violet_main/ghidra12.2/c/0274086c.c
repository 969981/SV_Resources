/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0274086c; name: FUN_0274086c
 */


void FUN_0274086c(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  lVar2 = lVar3 - *param_1;
  uVar1 = lVar2 >> 3;
  if (uVar1 < 4) {
    FUN_02740e28(param_1,4 - uVar1);
    return;
  }
  if (lVar2 != 0x20) {
    lVar2 = *param_1 + 0x20;
    while (lVar2 != lVar3) {
      lVar3 = lVar3 + -8;
      FUN_00f1900c(lVar3);
    }
    param_1[1] = lVar2;
  }
  return;
}



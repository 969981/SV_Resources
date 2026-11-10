/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0164e97c; name: FUN_0164e97c
 */


void FUN_0164e97c(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [40];
  
  lVar3 = param_1[1] - *param_1;
  lVar4 = lVar3 >> 2;
  if (4 < (ulong)(lVar4 * -0x2353b860c950d10f)) {
    if (lVar3 != 0x2954) {
      param_1[1] = *param_1 + 0x2954;
    }
    return;
  }
  uVar2 = lVar4 * 0x2353b860c950d10f + 5;
  if ((ulong)((param_1[2] - param_1[1] >> 2) * -0x2353b860c950d10f) < uVar2) {
    uVar1 = FUN_0164ea9c(param_1,uVar2 + (param_1[1] - *param_1 >> 2) * -0x2353b860c950d10f);
    FUN_0164eb00(auStack_58,uVar1,(param_1[1] - *param_1 >> 2) * -0x2353b860c950d10f,param_1 + 3);
    FUN_0164ed18(auStack_58,uVar2);
    FUN_0164eb94(param_1,auStack_58);
    FUN_0164ec3c(auStack_58);
    return;
  }
  FUN_0164f3b8(param_1,uVar2);
  return;
}



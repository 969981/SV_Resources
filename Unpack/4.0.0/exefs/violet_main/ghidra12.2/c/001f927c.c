/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f927c; name: FUN_001f927c
 */


undefined8 FUN_001f927c(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1[2];
  if (uVar3 < (ulong)param_1[3]) {
    lVar1 = *param_1;
  }
  else {
    uVar2 = param_1[3] * 2;
    if (uVar2 < 5) {
      uVar2 = 4;
    }
    lVar1 = FUN_001f45ec(param_1[1],*param_1,uVar2 << 3);
    if (lVar1 == 0) {
      return 0xfffffc7b;
    }
    uVar3 = param_1[2];
    param_1[3] = uVar2;
    *param_1 = lVar1;
  }
  *(long **)(lVar1 + uVar3 * 8) = param_2;
  *param_2 = param_1[2];
  param_1[2] = param_1[2] + 1;
  FUN_001f9310(param_1);
  return 0;
}



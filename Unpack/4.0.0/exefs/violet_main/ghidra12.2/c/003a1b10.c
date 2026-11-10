/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a1b10; name: FUN_003a1b10
 */


undefined8 FUN_003a1b10(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (((param_2 == 0) || (param_1[5] == 0)) || ((ulong)(param_1[4] - param_1[3]) < param_2)) {
    return 0;
  }
  if (param_1[1] == 0) {
    uVar3 = *(ulong *)*param_1;
    if (uVar3 - param_1[3] < param_2) {
      uVar1 = param_2;
      if (param_2 <= uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 * 2;
      if (uVar3 < 0x101) {
        uVar3 = 0x100;
      }
      if ((long)uVar1 < 0) {
        uVar3 = 0xffffffffffffffff;
      }
      lVar2 = FUN_003f31c0((ulong *)*param_1,uVar3);
      if (lVar2 == 0) {
        return 0;
      }
    }
  }
  if (param_3 == (long *)0x0) {
    lVar2 = param_1[2];
  }
  else {
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      lVar4 = *(long *)(*param_1 + 8);
    }
    lVar2 = param_1[2];
    *param_3 = lVar4 + lVar2;
  }
  param_1[2] = lVar2 + param_2;
  param_1[3] = param_1[3] + param_2;
  return 1;
}



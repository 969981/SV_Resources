/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a2140; name: FUN_003a2140
 */


undefined8 FUN_003a2140(long *param_1,long param_2,ulong *param_3,long param_4)

{
  long lVar1;
  ulong extraout_x8;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_4 + param_2;
  if (((uVar2 == 0) || (param_1[5] == 0)) || ((ulong)(param_1[4] - param_1[3]) < uVar2)) {
    return 0;
  }
  if (param_1[1] == 0) {
    uVar3 = *(ulong *)*param_1;
    if (uVar3 - param_1[3] < uVar2) {
      if (uVar2 <= uVar3) {
        uVar2 = uVar3;
      }
      uVar3 = uVar2 * 2;
      if (uVar3 < 0x101) {
        uVar3 = 0x100;
      }
      if ((long)uVar2 < 0) {
        uVar3 = 0xffffffffffffffff;
      }
      lVar1 = FUN_003f31c0((ulong *)*param_1,uVar3);
      uVar2 = extraout_x8;
      if (lVar1 == 0) {
        return 0;
      }
    }
  }
  if (param_3 != (ulong *)0x0) {
    lVar1 = param_1[1];
    if (lVar1 == 0) {
      lVar1 = *(long *)(*param_1 + 8);
    }
    uVar2 = lVar1 + param_1[2];
    *param_3 = uVar2;
  }
  *param_3 = uVar2 + param_4;
  return 1;
}



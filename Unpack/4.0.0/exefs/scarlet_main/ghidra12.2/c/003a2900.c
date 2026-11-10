/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a2900; name: FUN_003a2900
 */


undefined8 FUN_003a2900(long *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_3 == 0) {
    return 1;
  }
  if (param_1[5] == 0) {
    return 0;
  }
  if ((ulong)(param_1[4] - param_1[3]) < param_3) {
    return 0;
  }
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    uVar3 = *(ulong *)*param_1;
    if (uVar3 - param_1[3] < param_3) {
      uVar1 = param_3;
      if (param_3 <= uVar3) {
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
      lVar2 = param_1[1];
      if (lVar2 != 0) goto LAB_003a29a4;
    }
    lVar2 = *(long *)(*param_1 + 8);
  }
LAB_003a29a4:
  lVar4 = param_1[2];
  param_1[3] = param_1[3] + param_3;
  param_1[2] = lVar4 + param_3;
  memcpy((void *)(lVar2 + lVar4),param_2,param_3);
  return 1;
}



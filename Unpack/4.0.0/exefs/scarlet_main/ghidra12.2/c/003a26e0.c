/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a26e0; name: FUN_003a26e0
 */


bool FUN_003a26e0(long *param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  if (4 < param_3) {
    return false;
  }
  if (((param_3 == 0) || (param_1[5] == 0)) || ((ulong)(param_1[4] - param_1[3]) < param_3)) {
    return false;
  }
  lVar5 = param_1[1];
  if (lVar5 == 0) {
    uVar3 = *(ulong *)*param_1;
    if (uVar3 - param_1[3] < param_3) {
      uVar2 = param_3;
      if (param_3 <= uVar3) {
        uVar2 = uVar3;
      }
      uVar3 = uVar2 * 2;
      if (uVar3 < 0x101) {
        uVar3 = 0x100;
      }
      if ((long)uVar2 < 0) {
        uVar3 = 0xffffffffffffffff;
      }
      lVar5 = FUN_003f31c0((ulong *)*param_1,uVar3);
      if (lVar5 == 0) {
        return false;
      }
      lVar5 = param_1[1];
      if (lVar5 != 0) goto LAB_003a2790;
    }
    lVar5 = *(long *)(*param_1 + 8);
  }
LAB_003a2790:
  uVar2 = (ulong)param_2;
  lVar6 = param_1[2];
  uVar4 = param_3 - 1;
  uVar3 = param_3 & 3;
  param_1[3] = param_1[3] + param_3;
  param_1[2] = lVar6 + param_3;
  if (uVar3 == 0) {
    lVar5 = lVar5 + lVar6 + uVar4;
  }
  else {
    do {
      *(char *)(lVar6 + lVar5 + -1 + param_3) = (char)uVar2;
      uVar2 = uVar2 >> 8;
      param_3 = param_3 - 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    lVar5 = lVar6 + lVar5 + param_3 + -1;
  }
  if (2 < uVar4) {
    do {
      uVar1 = ((uint)uVar2 & 0xff00ff00) >> 8 | ((uint)uVar2 & 0xff00ff) << 8;
      uVar2 = 0;
      *(uint *)(lVar5 + -3) = uVar1 >> 0x10 | uVar1 << 0x10;
      param_3 = param_3 - 4;
      lVar5 = lVar5 + -4;
    } while (param_3 != 0);
  }
  return uVar2 == 0;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e3f660; name: FUN_01e3f660
 */


void FUN_01e3f660(long *param_1,ulong *param_2,ulong param_3,long param_4,ulong param_5,
                 long *param_6)

{
  ulong *puVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = ((param_5 & 0xffffffff) - (param_3 & 0xffffffff)) + (param_4 - (long)param_2) * 8;
  if (0 < (long)uVar6) {
    if ((int)param_3 == 0) {
      __dest = (void *)*param_6;
    }
    else {
      uVar3 = (ulong)(0x40 - (int)param_3);
      uVar5 = uVar6;
      if ((long)uVar3 <= (long)uVar6) {
        uVar5 = uVar3;
      }
      uVar4 = *param_2;
      uVar3 = 0xffffffffffffffffU >> (uVar3 - uVar5 & 0x3f) & -1L << (param_3 & 0x3f);
      *(ulong *)*param_6 = *(ulong *)*param_6 & (uVar3 ^ 0xffffffffffffffff);
      *(ulong *)*param_6 = *(ulong *)*param_6 | uVar4 & uVar3;
      uVar6 = uVar6 - uVar5;
      lVar2 = uVar5 + *(uint *)(param_6 + 1);
      lVar7 = lVar2 + 0x3f;
      if (-1 < lVar2) {
        lVar7 = lVar2;
      }
      __dest = (void *)(*param_6 + (lVar7 >> 6) * 8);
      *param_6 = (long)__dest;
      *(int *)(param_6 + 1) = (int)lVar2 + (int)(lVar7 >> 6) * -0x40;
      param_2 = param_2 + 1;
    }
    uVar5 = uVar6 + 0x3f;
    if (-1 < (long)uVar6) {
      uVar5 = uVar6;
    }
    lVar7 = (long)uVar5 >> 6;
    memmove(__dest,param_2,lVar7 << 3);
    lVar2 = (long)uVar6 % 0x40;
    puVar1 = (ulong *)(*param_6 + lVar7 * 8);
    *param_6 = (long)puVar1;
    if (0 < lVar2) {
      uVar6 = 0xffffffffffffffff >> (-lVar2 & 0x3fU);
      uVar5 = param_2[lVar7];
      *puVar1 = *puVar1 & (uVar6 ^ 0xffffffffffffffff);
      *(ulong *)*param_6 = *(ulong *)*param_6 | uVar5 & uVar6;
      *(int *)(param_6 + 1) = (int)lVar2;
    }
  }
  *param_1 = *param_6;
  *(int *)(param_1 + 1) = (int)param_6[1];
  return;
}



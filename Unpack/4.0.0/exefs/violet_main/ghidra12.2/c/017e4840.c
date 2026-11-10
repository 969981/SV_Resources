/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017e4840; name: FUN_017e4840
 */


void FUN_017e4840(long *param_1,long *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  ulong *__src;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  __src = (ulong *)*param_2;
  uVar1 = *(uint *)(param_2 + 1);
  uVar7 = ((ulong)*(uint *)(param_3 + 1) + (*param_3 - (long)__src) * 8) - (ulong)uVar1;
  if (0 < (long)uVar7) {
    if (uVar1 != 0) {
      uVar3 = (ulong)(0x40 - uVar1);
      uVar6 = uVar7;
      if ((long)uVar3 <= (long)uVar7) {
        uVar6 = uVar3;
      }
      uVar3 = 0xffffffffffffffffU >> (uVar3 - uVar6 & 0x3f) & -1L << ((ulong)uVar1 & 0x3f);
      uVar4 = *__src;
      *(ulong *)*param_4 = *(ulong *)*param_4 & (uVar3 ^ 0xffffffffffffffff);
      *(ulong *)*param_4 = *(ulong *)*param_4 | uVar4 & uVar3;
      uVar7 = uVar7 - uVar6;
      lVar2 = uVar6 + *(uint *)(param_4 + 1);
      lVar8 = lVar2 + 0x3f;
      if (-1 < lVar2) {
        lVar8 = lVar2;
      }
      *param_4 = *param_4 + (lVar8 >> 6) * 8;
      *(int *)(param_4 + 1) = (int)lVar2 + (int)(lVar8 >> 6) * -0x40;
      __src = (ulong *)(*param_2 + 8);
      *param_2 = (long)__src;
    }
    uVar6 = uVar7 + 0x3f;
    if (-1 < (long)uVar7) {
      uVar6 = uVar7;
    }
    lVar8 = (long)uVar6 >> 6;
    memmove((void *)*param_4,__src,lVar8 << 3);
    lVar2 = (long)uVar7 % 0x40;
    *param_4 = *param_4 + lVar8 * 8;
    if (0 < lVar2) {
      lVar5 = *param_2;
      *param_2 = lVar5 + lVar8 * 8;
      uVar6 = 0xffffffffffffffff >> (-lVar2 & 0x3fU);
      uVar7 = *(ulong *)(lVar5 + lVar8 * 8);
      *(ulong *)*param_4 = *(ulong *)*param_4 & (uVar6 ^ 0xffffffffffffffff);
      *(ulong *)*param_4 = *(ulong *)*param_4 | uVar7 & uVar6;
      *(int *)(param_4 + 1) = (int)lVar2;
    }
  }
  *param_1 = *param_4;
  *(int *)(param_1 + 1) = (int)param_4[1];
  return;
}



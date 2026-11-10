/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029da330; name: FUN_029da330
 */


void FUN_029da330(long *param_1,ulong *param_2,uint param_3,long param_4,ulong param_5,long *param_6
                 )

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar6 = ((param_5 & 0xffffffff) - (ulong)param_3) + (param_4 - (long)param_2) * 8;
  if (0 < (long)uVar6) {
    if (param_3 == 0) {
      uVar9 = (ulong)*(uint *)(param_6 + 1);
    }
    else {
      uVar9 = (ulong)(0x40 - param_3);
      uVar10 = uVar6;
      if ((long)uVar9 <= (long)uVar6) {
        uVar10 = uVar9;
      }
      uVar11 = (ulong)(0x40 - *(uint *)(param_6 + 1));
      uVar6 = uVar6 - uVar10;
      uVar7 = 0xffffffffffffffffU >> (uVar9 - uVar10 & 0x3f) & -1L << ((ulong)param_3 & 0x3f) &
              *param_2;
      uVar2 = uVar11;
      if (uVar10 <= uVar11) {
        uVar2 = uVar10;
      }
      *(ulong *)*param_6 =
           *(ulong *)*param_6 &
           (0xffffffffffffffffU >> (uVar11 - uVar2 & 0x3f) &
            -1L << ((ulong)*(uint *)(param_6 + 1) & 0x3f) ^ 0xffffffffffffffff);
      uVar3 = *(uint *)(param_6 + 1);
      uVar9 = uVar7 << ((ulong)(uVar3 - param_3) & 0x3f);
      if (uVar3 < param_3 || uVar3 - param_3 == 0) {
        uVar9 = uVar7 >> ((ulong)(param_3 - uVar3) & 0x3f);
      }
      *(ulong *)*param_6 = *(ulong *)*param_6 | uVar9;
      uVar4 = *(uint *)(param_6 + 1);
      uVar10 = uVar10 - uVar2;
      uVar3 = uVar4 + (int)uVar2 & 0x3f;
      uVar9 = (ulong)uVar3;
      *(uint *)(param_6 + 1) = uVar3;
      puVar5 = (ulong *)(*param_6 + (uVar2 + uVar4 >> 3 & 0x1ffffffffffffff8));
      *param_6 = (long)puVar5;
      if (0 < (long)uVar10) {
        *puVar5 = *puVar5 & (0xffffffffffffffffU >> (-uVar10 & 0x3f) ^ 0xffffffffffffffff);
        uVar9 = uVar10 & 0xffffffff;
        *(ulong *)*param_6 = *(ulong *)*param_6 | uVar7 >> (uVar2 + param_3 & 0x3f);
        *(int *)(param_6 + 1) = (int)uVar10;
      }
      param_2 = param_2 + 1;
    }
    uVar3 = 0x40 - (int)uVar9;
    if (0x3f < (long)uVar6) {
      uVar10 = -1L << (uVar9 & 0x3f);
      puVar5 = param_2;
      uVar9 = uVar6;
      do {
        param_2 = puVar5 + 1;
        uVar6 = *puVar5;
        *(ulong *)*param_6 = *(ulong *)*param_6 & ~uVar10;
        *(ulong *)*param_6 = *(ulong *)*param_6 | uVar6 << ((ulong)*(uint *)(param_6 + 1) & 0x3f);
        lVar8 = *param_6;
        *param_6 = lVar8 + 8;
        *(ulong *)(lVar8 + 8) = *(ulong *)(lVar8 + 8) & uVar10;
        *(ulong *)*param_6 = *(ulong *)*param_6 | uVar6 >> ((ulong)uVar3 & 0x3f);
        uVar6 = uVar9 - 0x40;
        bVar1 = 0x7f < (long)uVar9;
        puVar5 = param_2;
        uVar9 = uVar6;
      } while (bVar1);
    }
    if (0 < (long)uVar6) {
      uVar10 = *param_2 & 0xffffffffffffffffU >> (-uVar6 & 0x3f);
      uVar9 = (ulong)uVar3;
      if ((long)uVar6 <= (long)(ulong)uVar3) {
        uVar9 = uVar6;
      }
      *(ulong *)*param_6 =
           *(ulong *)*param_6 &
           (-1L << ((ulong)*(uint *)(param_6 + 1) & 0x3f) &
            0xffffffffffffffffU >> (uVar3 - uVar9 & 0x3f) ^ 0xffffffffffffffff);
      *(ulong *)*param_6 = *(ulong *)*param_6 | uVar10 << ((ulong)*(uint *)(param_6 + 1) & 0x3f);
      uVar3 = *(uint *)(param_6 + 1);
      lVar8 = uVar6 - uVar9;
      *(uint *)(param_6 + 1) = uVar3 + (int)uVar9 & 0x3f;
      puVar5 = (ulong *)(*param_6 + (uVar9 + uVar3 >> 3 & 0x1ffffffffffffff8));
      *param_6 = (long)puVar5;
      if (0 < lVar8) {
        *puVar5 = *puVar5 & (0xffffffffffffffffU >> (-lVar8 & 0x3fU) ^ 0xffffffffffffffff);
        *(ulong *)*param_6 = *(ulong *)*param_6 | uVar10 >> (uVar9 & 0x3f);
        *(int *)(param_6 + 1) = (int)lVar8;
      }
    }
  }
  *param_1 = *param_6;
  *(int *)(param_1 + 1) = (int)param_6[1];
  return;
}



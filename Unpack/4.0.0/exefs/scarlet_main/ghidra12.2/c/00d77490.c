/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d77490; name: FUN_00d77490
 */


void FUN_00d77490(long *param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  puVar6 = (ulong *)*param_2;
  uVar2 = *(uint *)(param_2 + 1);
  uVar4 = ((ulong)*(uint *)(param_3 + 1) + (*param_3 - (long)puVar6) * 8) - (ulong)uVar2;
  if (0 < (long)uVar4) {
    if (uVar2 != 0) {
      uVar10 = (ulong)(0x40 - uVar2);
      uVar5 = uVar4;
      if ((long)uVar10 <= (long)uVar4) {
        uVar5 = uVar10;
      }
      uVar9 = (ulong)(0x40 - *(uint *)(param_4 + 1));
      uVar4 = uVar4 - uVar5;
      uVar7 = 0xffffffffffffffffU >> (uVar10 - uVar5 & 0x3f) & -1L << ((ulong)uVar2 & 0x3f) &
              *puVar6;
      uVar10 = uVar9;
      if (uVar5 <= uVar9) {
        uVar10 = uVar5;
      }
      *(ulong *)*param_4 =
           *(ulong *)*param_4 &
           (0xffffffffffffffffU >> (uVar9 - uVar10 & 0x3f) &
            -1L << ((ulong)*(uint *)(param_4 + 1) & 0x3f) ^ 0xffffffffffffffff);
      uVar2 = *(uint *)(param_4 + 1);
      uVar3 = *(uint *)(param_2 + 1);
      uVar9 = uVar7 << ((ulong)(uVar2 - uVar3) & 0x3f);
      if (uVar2 < uVar3 || uVar2 - uVar3 == 0) {
        uVar9 = uVar7 >> ((ulong)(uVar3 - uVar2) & 0x3f);
      }
      *(ulong *)*param_4 = *(ulong *)*param_4 | uVar9;
      uVar2 = *(uint *)(param_4 + 1);
      *(uint *)(param_4 + 1) = uVar2 + (int)uVar10 & 0x3f;
      lVar8 = uVar5 - uVar10;
      puVar6 = (ulong *)(*param_4 + (uVar10 + uVar2 >> 3 & 0x1ffffffffffffff8));
      *param_4 = (long)puVar6;
      if (0 < lVar8) {
        *puVar6 = *puVar6 & (0xffffffffffffffffU >> (-lVar8 & 0x3fU) ^ 0xffffffffffffffff);
        *(ulong *)*param_4 = uVar7 >> (uVar10 + *(uint *)(param_2 + 1) & 0x3f) | *(ulong *)*param_4;
        *(int *)(param_4 + 1) = (int)lVar8;
      }
      puVar6 = (ulong *)(*param_2 + 8);
      *param_2 = (long)puVar6;
    }
    uVar2 = 0x40 - *(uint *)(param_4 + 1);
    if (0x3f < (long)uVar4) {
      uVar10 = -1L << ((ulong)*(uint *)(param_4 + 1) & 0x3f);
      uVar5 = uVar4;
      do {
        uVar4 = *puVar6;
        *(ulong *)*param_4 = *(ulong *)*param_4 & ~uVar10;
        *(ulong *)*param_4 = *(ulong *)*param_4 | uVar4 << ((ulong)*(uint *)(param_4 + 1) & 0x3f);
        lVar8 = *param_4;
        *param_4 = lVar8 + 8;
        *(ulong *)(lVar8 + 8) = *(ulong *)(lVar8 + 8) & uVar10;
        *(ulong *)*param_4 = *(ulong *)*param_4 | uVar4 >> ((ulong)uVar2 & 0x3f);
        uVar4 = uVar5 - 0x40;
        puVar6 = (ulong *)(*param_2 + 8);
        *param_2 = (long)puVar6;
        bVar1 = 0x7f < (long)uVar5;
        uVar5 = uVar4;
      } while (bVar1);
    }
    if (0 < (long)uVar4) {
      uVar10 = *puVar6 & 0xffffffffffffffffU >> (-uVar4 & 0x3f);
      uVar5 = (ulong)uVar2;
      if ((long)uVar4 <= (long)(ulong)uVar2) {
        uVar5 = uVar4;
      }
      *(ulong *)*param_4 =
           *(ulong *)*param_4 &
           (-1L << ((ulong)*(uint *)(param_4 + 1) & 0x3f) &
            0xffffffffffffffffU >> (uVar2 - uVar5 & 0x3f) ^ 0xffffffffffffffff);
      *(ulong *)*param_4 = *(ulong *)*param_4 | uVar10 << ((ulong)*(uint *)(param_4 + 1) & 0x3f);
      uVar2 = *(uint *)(param_4 + 1);
      *(uint *)(param_4 + 1) = uVar2 + (int)uVar5 & 0x3f;
      lVar8 = uVar4 - uVar5;
      puVar6 = (ulong *)(*param_4 + (uVar5 + uVar2 >> 3 & 0x1ffffffffffffff8));
      *param_4 = (long)puVar6;
      if (0 < lVar8) {
        *puVar6 = *puVar6 & (0xffffffffffffffffU >> (-lVar8 & 0x3fU) ^ 0xffffffffffffffff);
        *(ulong *)*param_4 = *(ulong *)*param_4 | uVar10 >> (uVar5 & 0x3f);
        *(int *)(param_4 + 1) = (int)lVar8;
      }
    }
  }
  *param_1 = *param_4;
  *(int *)(param_1 + 1) = (int)param_4[1];
  return;
}



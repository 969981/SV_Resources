/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00109950; name: FUN_00109950
 */


void FUN_00109950(long *param_1,uint *param_2,long param_3,uint *param_4)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  if (*param_1 == param_1[1]) {
    uVar16 = param_2[4];
    uVar9 = (ulong)uVar16;
    uVar12 = *(uint *)(param_1 + 7);
    puVar14 = *(uint **)(param_2 + 2);
    uVar7 = (ulong)*param_2;
    puVar15 = puVar14;
    if (uVar16 < uVar12) {
      puVar15 = puVar14 + 1;
      Hint_Prefetch(puVar14 + 0x100,0,0,0);
      uVar16 = uVar16 + 0x20;
      uVar7 = (ulong)*puVar14 << (uVar9 & 0x3f) | uVar7;
    }
    uVar9 = uVar7 >> ((ulong)uVar12 & 0x3f);
    uVar17 = (uint)uVar9;
    uVar16 = uVar16 - uVar12;
    uVar12 = 0xffffffffU >> (ulong)(-uVar12 & 0x1f) & (uint)uVar7;
    if ((uVar12 == 0) || (*(int *)((long)param_1 + 0x3c) < (int)uVar12)) {
LAB_00109b88:
      *param_1 = param_1[8] + 4;
      param_1[1] = param_1[8];
    }
    else {
      pbVar8 = (byte *)param_1[8];
      lVar10 = param_1[6];
      *param_1 = (long)pbVar8;
      param_1[1] = (long)(pbVar8 + (int)uVar12);
      uVar2 = *(uint *)(param_1 + 5);
      uVar18 = *(uint *)(param_3 + 0x1c0);
      puVar14 = puVar15;
      if (uVar16 == 0) {
        puVar14 = puVar15 + 1;
        uVar9 = (ulong)*puVar15;
        uVar16 = 0x20;
      }
      if ((uVar9 & 1) != 0) {
        uVar12 = -uVar12 - 0x14;
      }
      uVar16 = uVar16 - 1;
      uVar4 = 0xffffffff >> (ulong)(-uVar2 & 0x1f);
      uVar7 = uVar9 >> 1 & 0x7fffffff;
      iVar6 = uVar12 + 0x15;
      do {
        iVar11 = iVar6;
        uVar12 = *(uint *)(param_3 + (ulong)uVar18 * 4 + 0x100);
        uVar9 = (ulong)uVar18;
        uVar17 = (uint)uVar7;
        puVar15 = puVar14;
        if (uVar16 < uVar12) {
          if (param_4 <= puVar14) goto LAB_00109b88;
          bVar3 = *(byte *)(*(long *)(param_3 + uVar9 * 8 + 0x140) +
                           (ulong)((*puVar14 << (ulong)(uVar16 & 0x1f) | uVar17) &
                                  0xffffffffU >> (ulong)(-uVar12 & 0x1f)));
          uVar5 = (uint)(bVar3 >> 4);
          uVar18 = (uint)*(byte *)(param_3 + uVar9 * 0x10 + ((ulong)bVar3 & 0xf));
          puVar15 = puVar14 + 1;
          uVar12 = *puVar14 >> (ulong)(uVar5 - uVar16 & 0x1f);
          uVar13 = uVar16 + 0x20;
          if (uVar5 <= uVar16) {
            puVar15 = puVar14;
            uVar12 = uVar17 >> (ulong)uVar5;
            uVar13 = uVar16;
          }
          uVar13 = uVar13 - uVar5;
          puVar14 = puVar15;
          if (uVar2 <= uVar13) goto LAB_00109b60;
LAB_00109a24:
          bVar3 = *(byte *)(lVar10 + (ulong)((*puVar14 << (ulong)(uVar13 & 0x1f) | uVar12) & uVar4))
          ;
          uVar5 = (uint)(bVar3 >> 4);
          bVar3 = *(byte *)((long)param_1 + ((ulong)bVar3 & 0xf) + 0x18);
          puVar15 = puVar14 + 1;
          uVar16 = uVar13 + 0x20;
          uVar17 = *puVar14 >> (ulong)(uVar5 - uVar13 & 0x1f);
          if (uVar5 <= uVar13) {
            puVar15 = puVar14;
            uVar16 = uVar13;
            uVar17 = uVar12 >> (ulong)uVar5;
          }
          uVar16 = uVar16 - uVar5;
        }
        else {
          bVar3 = *(byte *)(*(long *)(param_3 + uVar9 * 8 + 0x140) +
                           (0xffffffff >> (ulong)(-uVar12 & 0x1f) & uVar7));
          uVar13 = (uint)(bVar3 >> 4);
          uVar18 = (uint)*(byte *)(param_3 + uVar9 * 0x10 + ((ulong)bVar3 & 0xf));
          uVar12 = uVar17 >> (ulong)uVar13;
          uVar13 = uVar16 - uVar13;
          if (uVar13 < uVar2) goto LAB_00109a24;
LAB_00109b60:
          bVar3 = *(byte *)(lVar10 + (ulong)(uVar12 & uVar4));
          uVar16 = (uint)(bVar3 >> 4);
          bVar3 = *(byte *)((long)param_1 + ((ulong)bVar3 & 0xf) + 0x18);
          uVar17 = uVar12 >> (ulong)uVar16;
          uVar16 = uVar13 - uVar16;
        }
        uVar7 = (ulong)uVar17;
        uVar12 = (uint)bVar3 | uVar18 << 4;
        bVar3 = (byte)uVar12 & 0x7f;
        bVar1 = -bVar3;
        if ((uVar12 & 0x80) == 0) {
          bVar1 = bVar3;
        }
        *pbVar8 = bVar1 ^ 0x80;
        pbVar8 = pbVar8 + 1;
        puVar14 = puVar15;
        iVar6 = iVar11 + -1;
      } while (0 < iVar11 + -0x16);
      if (iVar11 + -0x16 < -0x16) {
        memset((byte *)param_1[8],(uint)*(byte *)param_1[8],(long)-(iVar11 + -1));
      }
      *(uint *)(param_3 + 0x1c0) = uVar18;
    }
    *(uint **)(param_2 + 2) = puVar15;
    *param_2 = uVar17;
    param_2[4] = uVar16;
  }
  return;
}



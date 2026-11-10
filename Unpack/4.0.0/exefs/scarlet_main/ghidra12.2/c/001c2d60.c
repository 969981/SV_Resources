/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c2d60; name: FUN_001c2d60
 */


undefined8 FUN_001c2d60(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  
  puVar15 = (ulong *)param_1[3];
  uVar21 = (ulong)*(uint *)(param_1 + 5);
  uVar22 = (ulong)*(uint *)((long)param_1 + 0x2c);
  if (7 < (ulong)(param_1[1] - *param_1) && 7 < (ulong)(param_1[4] - (long)puVar15)) {
    lVar9 = param_1[1] + -7;
    puVar18 = (ulong *)(param_1[4] + -8);
    uVar8 = *param_1 - lVar9;
    piVar10 = (int *)(param_1[2] + -8);
    do {
      while( true ) {
        while( true ) {
          uVar12 = *(ulong *)(lVar9 + uVar8);
          uVar16 = uVar21 & 7;
          uVar19 = uVar22 & 7;
          uVar17 = *puVar18;
          uVar13 = uVar12 >> 4 & 0xf0f0f0f0f0f;
          Hint_Prefetch((long)puVar15 + 0x47,0,0,1);
          uVar21 = uVar13 + 0x7171717171717171 & 0x8080808080808080;
          uVar22 = (*puVar15 & 0xff00ff00ff00ff00) >> 8 | (*puVar15 & 0xff00ff00ff00ff) << 8;
          uVar22 = (uVar22 & 0xffff0000ffff0000) >> 0x10 | (uVar22 & 0xffff0000ffff) << 0x10;
          uVar14 = uVar22 >> 0x20 | uVar22 << 0x20;
          Hint_Prefetch(puVar18 + -8,0,0,1);
          if (uVar21 != 0) break;
          uVar21 = uVar12 >> 8 & 0xff;
          bVar7 = 0xfffffffffffffff9 < uVar8;
          uVar8 = uVar8 + 6;
          uVar23 = -((uVar12 & 0xff) >> 4) - 4;
          uVar25 = -(uVar21 >> 4) - 4;
          iVar2 = *(int *)(param_2 + uVar21 * 4);
          uVar21 = uVar12 >> 0x10 & 0xff;
          uVar22 = uVar12 >> 0x18 & 0xff;
          uVar13 = uVar16 - uVar23;
          uVar24 = -(uVar21 >> 4) - 4;
          uVar20 = uVar19 - uVar25;
          iVar3 = *(int *)(param_2 + uVar21 * 4);
          uVar26 = -(uVar22 >> 4) - 4;
          iVar4 = *(int *)(param_2 + uVar22 * 4);
          piVar10[2] = *(int *)(param_2 + (uVar12 & 0xff) * 4) +
                       (int)((uVar14 << uVar16) >> (uVar23 & 0x3f)) * -0x10;
          piVar10[3] = iVar2 + (int)((uVar17 << uVar19) >> (uVar25 & 0x3f)) * -0x10;
          uVar16 = uVar13 - uVar24;
          uVar21 = uVar12 >> 0x20 & 0xff;
          uVar22 = uVar12 >> 0x28 & 0xff;
          uVar12 = uVar20 - uVar26;
          uVar19 = -(uVar21 >> 4) - 4;
          iVar2 = *(int *)(param_2 + uVar21 * 4);
          uVar23 = -(uVar22 >> 4) - 4;
          iVar5 = *(int *)(param_2 + uVar22 * 4);
          uVar21 = uVar16 - uVar19;
          uVar22 = uVar12 - uVar23;
          puVar15 = (ulong *)((long)puVar15 + (uVar21 >> 3));
          puVar18 = (ulong *)((long)puVar18 - (uVar22 >> 3));
          piVar10[4] = iVar3 + (int)((uVar14 << (uVar13 & 0x3f)) >> (uVar24 & 0x3f)) * -0x10;
          piVar10[5] = iVar4 + (int)((uVar17 << (uVar20 & 0x3f)) >> (uVar26 & 0x3f)) * -0x10;
          piVar11 = piVar10 + 6;
          *piVar11 = iVar2 + (int)((uVar14 << (uVar16 & 0x3f)) >> (uVar19 & 0x3f)) * -0x10;
          piVar10[7] = iVar5 + (int)((uVar17 << (uVar12 & 0x3f)) >> (uVar23 & 0x3f)) * -0x10;
          piVar10 = piVar11;
          if (bVar7 || puVar18 < puVar15) goto LAB_001c304c;
        }
        uVar20 = uVar21 - (uVar21 >> 7);
        lVar1 = (0x3c3c3c3c3c3c3c3c - uVar13) +
                (0x4343434343434343 - (uVar12 & 0xf0f0f0f0f0f0f0f) & uVar20);
        uVar20 = uVar20 ^ 0xffffffffffffffff;
        uVar13 = uVar20 & 0x404040404040404;
        if (((uVar12 & 0xf0f0f0f0f0f0f0f) + 0x7272727272727272 & uVar21) != 0) {
          return 0;
        }
        uVar23 = (lVar1 << 0x3a) >> 0x3a;
        uVar24 = (lVar1 << 0x32) >> 0x3a;
        iVar2 = *(int *)(param_2 + (uVar12 >> 8 & 0xff) * 4);
        uVar21 = uVar16 - uVar23;
        uVar22 = uVar19 - uVar24;
        piVar10[2] = *(int *)(param_2 + (uVar12 & 0xff) * 4) -
                     ((int)((uVar14 << uVar16) >> (uVar23 & 0x3f)) << (ulong)((uint)uVar20 & 4));
        piVar10[3] = iVar2 - ((int)((uVar17 << uVar19) >> (uVar24 & 0x3f)) <<
                             (ulong)((uint)(uVar13 >> 8) & 0x1f));
        if ((0x22 < uVar21) || (0x22 < uVar22)) break;
        uVar20 = (lVar1 << 0x2a) >> 0x3a;
        uVar23 = (lVar1 << 0x22) >> 0x3a;
        uVar16 = uVar21 & 0x3f;
        uVar19 = uVar22 & 0x3f;
        iVar2 = *(int *)(param_2 + (uVar12 >> 0x18 & 0xff) * 4);
        uVar21 = uVar21 - uVar20;
        uVar22 = uVar22 - uVar23;
        piVar10[4] = *(int *)(param_2 + (uVar12 >> 0x10 & 0xff) * 4) -
                     ((int)((uVar14 << uVar16) >> (uVar20 & 0x3f)) <<
                     (ulong)((uint)(uVar13 >> 0x10) & 0x1f));
        piVar10[5] = iVar2 - ((int)((uVar17 << uVar19) >> (uVar23 & 0x3f)) <<
                             (ulong)((uint)(uVar13 >> 0x18) & 0x1f));
        if ((uVar21 < 0x23) && (uVar22 < 0x23)) {
          uVar19 = lVar1 * 0x4000000 >> 0x3a;
          uVar20 = lVar1 * 0x40000 >> 0x3a;
          uVar16 = uVar21 & 0x3f;
          uVar21 = uVar21 - uVar19;
          uVar6 = (uint)(uVar13 >> 0x20);
          iVar2 = *(int *)(param_2 + (uVar12 >> 0x28 & 0xff) * 4);
          uVar13 = uVar22 & 0x3f;
          uVar22 = uVar22 - uVar20;
          puVar15 = (ulong *)((long)puVar15 + (uVar21 >> 3));
          puVar18 = (ulong *)((long)puVar18 - (uVar22 >> 3));
          piVar11 = piVar10 + 6;
          *piVar11 = *(int *)(param_2 + (uVar12 >> 0x20 & 0xff) * 4) -
                     ((int)((uVar14 << uVar16) >> (uVar19 & 0x3f)) << (ulong)(uVar6 & 0x1f));
          piVar10[7] = iVar2 - ((int)((uVar17 << uVar13) >> (uVar20 & 0x3f)) <<
                               (ulong)(uVar6 >> 8 & 0x1f));
          bVar7 = 0xfffffffffffffff9 < uVar8;
          uVar8 = uVar8 + 6;
          piVar10 = piVar11;
          if (bVar7 || puVar18 < puVar15) goto LAB_001c304c;
        }
        else {
          puVar15 = (ulong *)((long)puVar15 + (uVar21 >> 3));
          puVar18 = (ulong *)((long)puVar18 - (uVar22 >> 3));
          piVar10 = piVar10 + 4;
          bVar7 = 0xfffffffffffffffb < uVar8;
          uVar8 = uVar8 + 4;
          piVar11 = piVar10;
          if (bVar7 || puVar18 < puVar15) goto LAB_001c304c;
        }
      }
      puVar15 = (ulong *)((long)puVar15 + (uVar21 >> 3));
      puVar18 = (ulong *)((long)puVar18 - (uVar22 >> 3));
      piVar10 = piVar10 + 2;
      bVar7 = uVar8 < 0xfffffffffffffffe;
      uVar8 = uVar8 + 2;
      piVar11 = piVar10;
    } while (bVar7 && puVar15 <= puVar18);
LAB_001c304c:
    *param_1 = uVar8 + lVar9;
    param_1[2] = (long)(piVar11 + 2);
    param_1[3] = (long)puVar15;
    param_1[4] = (long)(puVar18 + 1);
    *(uint *)(param_1 + 5) = (uint)uVar21 & 7;
    *(uint *)((long)param_1 + 0x2c) = (uint)uVar22 & 7;
  }
  return 1;
}



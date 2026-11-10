/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c30a0; name: FUN_001c30a0
 */


undefined8 FUN_001c30a0(long *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  
  puVar13 = (ulong *)param_1[3];
  uVar17 = (ulong)*(uint *)(param_1 + 5);
  uVar20 = (ulong)*(uint *)((long)param_1 + 0x2c);
  if (7 < (ulong)(param_1[1] - *param_1) && 7 < (ulong)(param_1[4] - (long)puVar13)) {
    lVar7 = param_1[1] + -7;
    puVar19 = (ulong *)(param_1[4] + -8);
    uVar6 = *param_1 - lVar7;
    piVar8 = (int *)(param_1[2] + -8);
    do {
      while( true ) {
        while( true ) {
          uVar10 = *(ulong *)(lVar7 + uVar6);
          uVar14 = uVar17 & 7;
          uVar20 = uVar20 & 7;
          uVar18 = *puVar19;
          uVar23 = uVar10 >> 3 & 0x1f1f1f1f1f1f1f1f;
          Hint_Prefetch((long)puVar13 + 0x47,0,0,1);
          lVar4 = -uVar23;
          lVar11 = lVar4 + 0x808080808080;
          uVar17 = (*puVar13 & 0xff00ff00ff00ff00) >> 8 | (*puVar13 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar12 = uVar17 >> 0x20 | uVar17 << 0x20;
          Hint_Prefetch(puVar19 + -8,0,0,1);
          if ((uVar23 + 0x6d6d6d6d6d6d6d6d & 0x808080808080) != 0) break;
          uVar17 = (lVar4 << 0x39) >> 0x39;
          uVar23 = (lVar11 << 0x31) >> 0x39;
          bVar5 = 0xfffffffffffffff9 < uVar6;
          uVar6 = uVar6 + 6;
          iVar1 = *(int *)(param_2 + (uVar10 >> 8 & 0xff) * 4);
          uVar15 = uVar14 - uVar17;
          uVar2 = (lVar11 << 0x29) >> 0x39;
          uVar21 = uVar20 - uVar23;
          uVar3 = (lVar11 << 0x21) >> 0x39;
          piVar8[2] = *(int *)(param_2 + (uVar10 & 0xff) * 4) -
                      (int)(((uVar12 & (lVar4 << 0x39) >> 0x3f) << uVar14) >> (uVar17 & 0x3f));
          piVar8[3] = iVar1 - (int)(((uVar18 & (lVar11 << 0x31) >> 0x3f) << uVar20) >>
                                   (uVar23 & 0x3f));
          iVar1 = *(int *)(param_2 + (uVar10 >> 0x18 & 0xff) * 4);
          uVar16 = uVar15 - uVar2;
          uVar14 = lVar11 * 0x2000000 >> 0x39;
          uVar22 = uVar21 - uVar3;
          uVar23 = lVar11 * 0x20000 >> 0x39;
          piVar8[4] = *(int *)(param_2 + (uVar10 >> 0x10 & 0xff) * 4) -
                      (int)(((uVar12 & (lVar11 << 0x29) >> 0x3f) << (uVar15 & 0x3f)) >>
                           (uVar2 & 0x3f));
          piVar8[5] = iVar1 - (int)(((uVar18 & (lVar11 << 0x21) >> 0x3f) << (uVar21 & 0x3f)) >>
                                   (uVar3 & 0x3f));
          iVar1 = *(int *)(param_2 + (uVar10 >> 0x28 & 0xff) * 4);
          uVar17 = uVar16 - uVar14;
          uVar20 = uVar22 - uVar23;
          puVar13 = (ulong *)((long)puVar13 + (uVar17 >> 3));
          puVar19 = (ulong *)((long)puVar19 - (uVar20 >> 3));
          piVar9 = piVar8 + 6;
          *piVar9 = *(int *)(param_2 + (uVar10 >> 0x20 & 0xff) * 4) -
                    (int)(((uVar12 & lVar11 * 0x2000000 >> 0x3f) << (uVar16 & 0x3f)) >>
                         (uVar14 & 0x3f));
          piVar8[7] = iVar1 - (int)(((uVar18 & lVar11 * 0x20000 >> 0x3f) << (uVar22 & 0x3f)) >>
                                   (uVar23 & 0x3f));
          piVar8 = piVar9;
          if (bVar5 || puVar19 < puVar13) goto LAB_001c3358;
        }
        if ((uVar23 + 0x6565656565656565 & 0x808080808080) != 0) {
          return 0;
        }
        uVar23 = (lVar4 << 0x39) >> 0x39;
        uVar2 = (lVar11 << 0x31) >> 0x39;
        iVar1 = *(int *)(param_2 + (uVar10 >> 8 & 0xff) * 4);
        uVar17 = uVar14 - uVar23;
        piVar8[2] = *(int *)(param_2 + (uVar10 & 0xff) * 4) -
                    (int)(((uVar12 & (lVar4 << 0x39) >> 0x3f) << uVar14) >> (uVar23 & 0x3f));
        piVar8[3] = iVar1 - (int)(((uVar18 & (lVar11 << 0x31) >> 0x3f) << uVar20) >> (uVar2 & 0x3f))
        ;
        uVar20 = uVar20 - uVar2;
        if (0x26 < uVar17 || 0x26 < uVar20) break;
        uVar23 = (lVar11 << 0x29) >> 0x39;
        uVar2 = (lVar11 << 0x21) >> 0x39;
        iVar1 = *(int *)(param_2 + (uVar10 >> 0x18 & 0xff) * 4);
        uVar14 = uVar17 & 0x3f;
        uVar17 = uVar17 - uVar23;
        piVar8[4] = *(int *)(param_2 + (uVar10 >> 0x10 & 0xff) * 4) -
                    (int)(((uVar12 & (lVar11 << 0x29) >> 0x3f) << uVar14) >> (uVar23 & 0x3f));
        piVar8[5] = iVar1 - (int)(((uVar18 & (lVar11 << 0x21) >> 0x3f) << (uVar20 & 0x3f)) >>
                                 (uVar2 & 0x3f));
        uVar20 = uVar20 - uVar2;
        if (uVar17 < 0x27 && uVar20 < 0x27) {
          uVar2 = lVar11 * 0x2000000 >> 0x39;
          uVar3 = lVar11 * 0x20000 >> 0x39;
          bVar5 = 0xfffffffffffffff9 < uVar6;
          uVar6 = uVar6 + 6;
          uVar14 = uVar17 & 0x3f;
          iVar1 = *(int *)(param_2 + (uVar10 >> 0x28 & 0xff) * 4);
          uVar17 = uVar17 - uVar2;
          uVar23 = uVar20 & 0x3f;
          uVar20 = uVar20 - uVar3;
          puVar13 = (ulong *)((long)puVar13 + (uVar17 >> 3));
          puVar19 = (ulong *)((long)puVar19 - (uVar20 >> 3));
          piVar9 = piVar8 + 6;
          *piVar9 = *(int *)(param_2 + (uVar10 >> 0x20 & 0xff) * 4) -
                    (int)(((uVar12 & lVar11 * 0x2000000 >> 0x3f) << uVar14) >> (uVar2 & 0x3f));
          piVar8[7] = iVar1 - (int)(((uVar18 & lVar11 * 0x20000 >> 0x3f) << uVar23) >>
                                   (uVar3 & 0x3f));
          piVar8 = piVar9;
          if (bVar5 || puVar19 < puVar13) goto LAB_001c3358;
        }
        else {
          puVar13 = (ulong *)((long)puVar13 + (uVar17 >> 3));
          puVar19 = (ulong *)((long)puVar19 - (uVar20 >> 3));
          piVar8 = piVar8 + 4;
          bVar5 = 0xfffffffffffffffb < uVar6;
          uVar6 = uVar6 + 4;
          piVar9 = piVar8;
          if (bVar5 || puVar19 < puVar13) goto LAB_001c3358;
        }
      }
      puVar13 = (ulong *)((long)puVar13 + (uVar17 >> 3));
      puVar19 = (ulong *)((long)puVar19 - (uVar20 >> 3));
      piVar8 = piVar8 + 2;
      bVar5 = uVar6 < 0xfffffffffffffffe;
      uVar6 = uVar6 + 2;
      piVar9 = piVar8;
    } while (bVar5 && puVar13 <= puVar19);
LAB_001c3358:
    *param_1 = uVar6 + lVar7;
    param_1[2] = (long)(piVar9 + 2);
    param_1[3] = (long)puVar13;
    param_1[4] = (long)(puVar19 + 1);
    *(uint *)(param_1 + 5) = (uint)uVar17 & 7;
    *(uint *)((long)param_1 + 0x2c) = (uint)uVar20 & 7;
  }
  return 1;
}



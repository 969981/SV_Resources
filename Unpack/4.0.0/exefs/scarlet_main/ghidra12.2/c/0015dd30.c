/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0015dd30; name: FUN_0015dd30
 */


void FUN_0015dd30(long param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  ulong *puVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar16 = param_2[2];
  lVar17 = param_2[3];
  puVar15 = (ulong *)*param_2;
  lVar2 = param_2[1];
  uVar13 = lVar16 << (lVar17 + 1U & 0x3f);
  uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
  uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
  *puVar15 = uVar13 >> 0x20 | uVar13 << 0x20;
  puVar15 = (ulong *)((long)puVar15 + ((long)(0x3fU - lVar17) >> 3));
  uVar13 = (0x3fU - lVar17 & 0xfffffffffffffff8) + lVar17;
  uVar11 = lVar16 << 1;
  if (4 < *(int *)(param_1 + 0x288)) {
    if (*(uint *)(param_1 + 0x284) < 2) {
      iVar20 = 0;
    }
    else {
      iVar20 = (int)LZCOUNT(*(uint *)(param_1 + 0x284) - 1) * -4 + 0x80;
    }
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    iVar6 = *(int *)(param_1 + 0x294);
    if (-1 < iVar6) {
      pbVar12 = *(byte **)(param_1 + 0x2a0);
      iVar10 = 0;
      bVar4 = *pbVar12;
      iVar18 = iVar20;
      while( true ) {
        if (bVar4 != 0) {
          iVar5 = (uint)bVar4 - (iVar18 + 2 >> 2);
          uVar19 = iVar5 * 2 ^ iVar5 >> 0x1f;
          uVar14 = -(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2;
          iVar18 = (uint)bVar4 + (iVar18 * 3 + 2 >> 2);
          *(int *)((long)&local_f0 + uVar14) = *(int *)((long)&local_f0 + uVar14) + 1;
        }
        if (iVar6 < iVar10 + 1) break;
        iVar10 = iVar10 + 1;
        bVar4 = pbVar12[iVar10];
      }
    }
    uVar14 = (uVar11 | 1) << (uVar13 & 0x3f);
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    *puVar15 = uVar14 >> 0x20 | uVar14 << 0x20;
    puVar21 = (ulong *)((long)puVar15 + ((long)(0x40 - uVar13) >> 3));
    iVar6 = FUN_0015ec70(&local_f0,0x20,0);
    dVar24 = (double)iVar6;
    iVar6 = FUN_0015ec70(&local_f0,0x20,1);
    dVar22 = (double)iVar6;
    dVar25 = dVar22;
    if (dVar24 <= dVar22) {
      dVar25 = dVar24;
    }
    iVar6 = FUN_0015ec70(&local_f0,0x20,2);
    dVar23 = (double)iVar6;
    dVar26 = dVar23;
    if (dVar25 <= dVar23) {
      dVar26 = dVar25;
    }
    uVar19 = 2;
    if (dVar25 <= dVar23) {
      uVar19 = (uint)(dVar22 < dVar24);
    }
    iVar6 = FUN_0015ec70(&local_f0,0x20,3);
    cVar3 = **(char **)(param_1 + 0x2a0);
    lVar16 = uVar13 + (0x40 - uVar13 & 0xfffffffffffffff8) + -4;
    uVar1 = 3;
    if (dVar26 <= (double)iVar6) {
      uVar1 = uVar19;
    }
    uVar14 = (ulong)uVar1;
    uVar13 = (ulong)(cVar3 != '\0') | (uVar14 | (uVar11 & 0x1fffffffffffffff | 1) << 2) << 1;
    iVar6 = 0;
    if (cVar3 != '\0') goto LAB_0015dfdc;
    do {
      if (iVar6 < *(int *)(param_1 + 0x284)) {
        lVar17 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x2a0) + (long)iVar6 + lVar17) != '\0') break;
          lVar17 = lVar17 + 1;
        } while ((long)*(int *)(param_1 + 0x284) - (long)iVar6 != lVar17);
        iVar18 = (int)lVar17;
        iVar6 = iVar6 + iVar18;
      }
      else {
        iVar18 = 0;
      }
      iVar10 = (iVar18 - 1U >> 1) + 1;
      uVar8 = (uint)LZCOUNT(iVar10);
      uVar19 = uVar8 ^ 0x1f;
      if (uVar8 == 0) {
        uVar13 = uVar13 << 0x1f;
        uVar11 = uVar13 << (lVar16 - 0x1eU & 0x3f);
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        *puVar21 = uVar11 >> 0x20 | uVar11 << 0x20;
        puVar21 = (ulong *)((long)puVar21 + ((long)(0x5eU - lVar16) >> 3));
        uVar7 = 0;
        lVar16 = lVar16 + (0x5eU - lVar16 & 0xfffffffffffffff8) + -0x1f;
      }
      else {
        uVar7 = uVar19;
      }
      lVar16 = lVar16 - (ulong)(uVar7 + 1);
      uVar9 = uVar13 << ((ulong)(uVar7 + 1) & 0x3f) | 1;
      uVar13 = uVar9 << (lVar16 + 1U & 0x3f);
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      *puVar21 = uVar13 >> 0x20 | uVar13 << 0x20;
      puVar15 = (ulong *)((long)puVar21 + ((long)(0x3fU - lVar16) >> 3));
      uVar11 = (0x3fU - lVar16 & 0xfffffffffffffff8) + lVar16;
      if (uVar19 != 0) {
        uVar9 = uVar9 << (ulong)uVar19 | (ulong)(iVar10 - (0x80000000U >> (ulong)(uVar8 & 0x1f)));
        lVar16 = uVar11 - uVar19;
        uVar13 = uVar9 << (lVar16 + 1U & 0x3f);
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        *puVar15 = uVar13 >> 0x20 | uVar13 << 0x20;
        puVar15 = (ulong *)((long)puVar15 + ((long)(0x3fU - lVar16) >> 3));
        uVar11 = (0x3fU - lVar16 & 0xfffffffffffffff8) + lVar16;
      }
      uVar13 = (ulong)(iVar18 - 1U & 1) | uVar9 << 1;
      puVar21 = (ulong *)((long)puVar15 + ((long)(0x40 - uVar11) >> 3));
      uVar9 = uVar13 << (uVar11 & 0x3f);
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      *puVar15 = uVar9 >> 0x20 | uVar9 << 0x20;
      lVar16 = uVar11 + (0x40 - uVar11 & 0xfffffffffffffff8) + -1;
      do {
        iVar18 = *(int *)(param_1 + 0x284) - iVar6;
        if (iVar18 == 0 || *(int *)(param_1 + 0x284) < iVar6) goto LAB_0015e3ac;
        lVar17 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x2a0) + (long)iVar6 + lVar17) == '\0') {
            iVar18 = (int)lVar17;
            break;
          }
          lVar17 = lVar17 + 1;
        } while (iVar18 != (int)lVar17);
        iVar10 = (iVar18 - 1U >> 1) + 1;
        uVar8 = (uint)LZCOUNT(iVar10);
        uVar19 = uVar8 ^ 0x1f;
        if (uVar8 == 0) {
          uVar13 = uVar13 << 0x1f;
          uVar11 = uVar13 << (lVar16 - 0x1eU & 0x3f);
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          *puVar21 = uVar11 >> 0x20 | uVar11 << 0x20;
          puVar21 = (ulong *)((long)puVar21 + ((long)(0x5eU - lVar16) >> 3));
          uVar7 = 0;
          lVar16 = lVar16 + (0x5eU - lVar16 & 0xfffffffffffffff8) + -0x1f;
        }
        else {
          uVar7 = uVar19;
        }
        lVar16 = lVar16 - (ulong)(uVar7 + 1);
        uVar9 = uVar13 << ((ulong)(uVar7 + 1) & 0x3f) | 1;
        uVar13 = uVar9 << (lVar16 + 1U & 0x3f);
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        *puVar21 = uVar13 >> 0x20 | uVar13 << 0x20;
        puVar15 = (ulong *)((long)puVar21 + ((long)(0x3fU - lVar16) >> 3));
        uVar11 = (0x3fU - lVar16 & 0xfffffffffffffff8) + lVar16;
        if (uVar19 != 0) {
          uVar9 = uVar9 << (ulong)uVar19 | (ulong)(iVar10 - (0x80000000U >> (ulong)(uVar8 & 0x1f)));
          lVar16 = uVar11 - uVar19;
          uVar13 = uVar9 << (lVar16 + 1U & 0x3f);
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          *puVar15 = uVar13 >> 0x20 | uVar13 << 0x20;
          puVar15 = (ulong *)((long)puVar15 + ((long)(0x3fU - lVar16) >> 3));
          uVar11 = (0x3fU - lVar16 & 0xfffffffffffffff8) + lVar16;
        }
        uVar13 = (ulong)(iVar18 - 1U & 1) | uVar9 << 1;
        puVar21 = (ulong *)((long)puVar15 + ((long)(0x40 - uVar11) >> 3));
        uVar9 = uVar13 << (uVar11 & 0x3f);
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        *puVar15 = uVar9 >> 0x20 | uVar9 << 0x20;
        lVar16 = uVar11 + (0x40 - uVar11 & 0xfffffffffffffff8) + -1;
        if (0 < iVar18) {
          iVar10 = 0;
          do {
            uVar7 = (uint)*(byte *)(*(long *)(param_1 + 0x2a0) + (long)iVar6);
            iVar5 = uVar7 - (iVar20 + 2 >> 2);
            uVar19 = iVar5 * 2 ^ iVar5 >> 0x1f;
            for (uVar8 = uVar19 >> (ulong)uVar1; 0x1e < uVar8; uVar8 = uVar8 - 0x1f) {
              uVar13 = uVar13 << 0x1f;
              uVar11 = uVar13 << (lVar16 - 0x1eU & 0x3f);
              uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
              uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
              *puVar21 = uVar11 >> 0x20 | uVar11 << 0x20;
              puVar21 = (ulong *)((long)puVar21 + ((long)(0x5eU - lVar16) >> 3));
              lVar16 = lVar16 + (0x5eU - lVar16 & 0xfffffffffffffff8) + -0x1f;
            }
            lVar16 = lVar16 - (ulong)(uVar8 + 1);
            uVar13 = uVar13 << ((ulong)(uVar8 + 1) & 0x3f) | 1;
            iVar6 = iVar6 + 1;
            uVar11 = uVar13 << (lVar16 + 1U & 0x3f);
            uVar13 = uVar13 << uVar14 | (ulong)(uVar19 & ~(-1 << uVar14));
            puVar15 = (ulong *)((long)puVar21 + ((long)(0x3fU - lVar16) >> 3));
            uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            *puVar21 = uVar11 >> 0x20 | uVar11 << 0x20;
            lVar16 = (lVar16 - uVar14) + (0x3fU - lVar16 & 0xfffffffffffffff8);
            uVar11 = uVar13 << (lVar16 + 1U & 0x3f);
            puVar21 = (ulong *)((long)puVar15 + ((long)(0x3fU - lVar16) >> 3));
            uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            *puVar15 = uVar11 >> 0x20 | uVar11 << 0x20;
            lVar16 = (0x3fU - lVar16 & 0xfffffffffffffff8) + lVar16;
            iVar20 = uVar7 + (iVar20 * 3 + 2 >> 2);
            iVar10 = iVar10 + 1;
          } while (iVar10 != iVar18);
        }
        if (*(int *)(param_1 + 0x284) <= iVar6) goto LAB_0015e3ac;
        if (cVar3 == '\0') break;
LAB_0015dfdc:
      } while (iVar6 == 0);
    } while( true );
  }
  puVar21 = (ulong *)((long)puVar15 + ((long)(0x40 - uVar13) >> 3));
  uVar14 = uVar11 << (uVar13 & 0x3f);
  uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
  uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
  uVar19 = 0;
  if (1 < *(uint *)(param_1 + 0x284)) {
    uVar19 = 0x20 - (int)LZCOUNT(*(uint *)(param_1 + 0x284) - 1);
  }
  uVar9 = (ulong)uVar19;
  *puVar15 = uVar14 >> 0x20 | uVar14 << 0x20;
  iVar20 = *(int *)(param_1 + 0x288);
  lVar17 = (long)(int)-uVar19;
  lVar16 = (uVar13 - 1) + (0x40 - uVar13 & 0xfffffffffffffff8) + lVar17;
  uVar13 = uVar11 << (uVar9 & 0x3f) | (long)iVar20;
  if (iVar20 != 0) {
    if (iVar20 == 1) {
      uVar11 = uVar13 << (lVar16 + 1U & 0x3f);
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      *puVar21 = uVar11 >> 0x20 | uVar11 << 0x20;
      puVar21 = (ulong *)((long)puVar21 + ((long)(0x3fU - lVar16) >> 3));
      uVar13 = uVar13 << (uVar9 & 0x3f) | (long)*(int *)(param_1 + 0x290);
      lVar16 = lVar16 + lVar17 + (0x3fU - lVar16 & 0xfffffffffffffff8);
    }
    else {
      if (*(uint *)(param_1 + 0x29c) < 2) {
        uVar19 = 0;
      }
      else {
        uVar19 = 0x20 - (int)LZCOUNT(*(uint *)(param_1 + 0x29c) - 1);
      }
      iVar20 = *(int *)(param_1 + 0x284);
      uVar13 = (long)(int)uVar19 | uVar13 << 3;
      lVar16 = lVar16 + -3;
      if (0 < iVar20) {
        uVar11 = 0;
        bVar4 = **(byte **)(param_1 + 0x2a0);
        do {
          if ((ulong)bVar4 == 0) {
            if ((long)iVar20 <= (long)(uVar11 + 1)) break;
          }
          else {
            uVar14 = uVar13 << (lVar16 + 1U & 0x3f);
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            *puVar21 = uVar14 >> 0x20 | uVar14 << 0x20;
            uVar13 = (ulong)bVar4 - 1 |
                     (uVar11 | uVar13 << (uVar9 & 0x3f)) << ((ulong)uVar19 & 0x3f);
            iVar20 = *(int *)(param_1 + 0x284);
            puVar21 = (ulong *)((long)puVar21 + ((long)(0x3fU - lVar16) >> 3));
            lVar16 = (lVar17 - (int)uVar19) + lVar16 + (0x3fU - lVar16 & 0xfffffffffffffff8);
            if ((long)iVar20 <= (long)(uVar11 + 1)) break;
          }
          uVar11 = uVar11 + 1;
          bVar4 = *(byte *)(*(long *)(param_1 + 0x2a0) + uVar11);
        } while( true );
      }
    }
  }
LAB_0015e3ac:
  param_2[2] = uVar13;
  param_2[3] = lVar16;
  *param_2 = (long)puVar21;
  param_2[1] = lVar2;
  return;
}



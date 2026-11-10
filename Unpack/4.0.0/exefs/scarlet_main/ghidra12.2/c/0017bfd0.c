/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0017bfd0; name: FUN_0017bfd0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0017bfd0(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  ulong uVar22;
  uint *puVar23;
  int *piVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  ulong *local_60 [4];
  
  iVar20 = *param_1;
  uVar5 = param_1[1];
  local_60[0] = *(ulong **)(param_1 + 2);
  uVar22 = (ulong)*param_2;
  uVar25 = iVar20 - *param_2;
  uVar7 = uVar25 >> 2;
  uVar21 = uVar7;
  if ((uVar25 & 3) != 0) {
    uVar21 = uVar7 + 1;
  }
  uVar26 = uVar21 + uVar7;
  if (1 < (uVar25 & 3)) {
    uVar26 = uVar26 + 1;
  }
  uVar7 = uVar26 + uVar7;
  if ((uVar25 & 3) == 3) {
    uVar7 = uVar7 + 1;
  }
  local_60[1] = local_60[0] + uVar21;
  local_60[2] = local_60[0] + uVar26;
  local_60[3] = local_60[0] + uVar7;
  if (uVar22 != 0) {
    uVar27 = (ulong)~(uint)(0xffffffffL << ((ulong)uVar5 & 0x3f)) & 0xffff |
             (ulong)(uVar5 & 0xff) << 0x20;
    puVar17 = local_60[0] + uVar25;
    piVar24 = param_2 + 2;
    for (uVar16 = uVar22 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *puVar17 = uVar27;
      *(char *)((long)puVar17 + 5) = (char)*piVar24;
      puVar17 = puVar17 + 1;
      piVar24 = (int *)((long)piVar24 + 1);
    }
    if (2 < uVar22 - 1) {
      do {
        *puVar17 = uVar27;
        iVar10 = *piVar24;
        puVar17[1] = uVar27;
        *(char *)((long)puVar17 + 5) = (char)iVar10;
        uVar6 = *(undefined1 *)((long)piVar24 + 1);
        puVar17[2] = uVar27;
        *(undefined1 *)((long)puVar17 + 0xd) = uVar6;
        uVar6 = *(undefined1 *)((long)piVar24 + 2);
        puVar17[3] = uVar27;
        *(undefined1 *)((long)puVar17 + 0x15) = uVar6;
        puVar1 = (undefined1 *)((long)piVar24 + 3);
        piVar24 = piVar24 + 1;
        *(undefined1 *)((long)puVar17 + 0x1d) = *puVar1;
        puVar17 = puVar17 + 4;
      } while (piVar24 != (int *)((long)(param_2 + 2) + uVar22));
    }
  }
  if (((long)param_2[1] & 0x3fffffffffffffffU) == 0) {
    return;
  }
  puVar23 = (uint *)(param_2 + 0x42);
  uVar21 = 0;
  puVar2 = puVar23 + param_2[1];
  uVar7 = iVar20 + 0xffff;
  uVar26 = *puVar23;
  uVar25 = uVar26 & 0xffff;
  if (4 < uVar25) goto LAB_0017c1ac;
LAB_0017c12c:
  if (uVar25 != 0) {
    uVar12 = ~(-1 << (ulong)(uVar25 & 0x1f)) << (ulong)(uVar21 & 3);
    uVar12 = uVar12 | uVar12 >> 4;
    uVar28 = 0;
    do {
      uVar19 = (uVar12 & 0xaaaaaaaa) >> 1 | (uVar12 & 0x55555555) << 1;
      uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
      uVar19 = (uVar19 & 0xf0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f) << 4;
      uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
      lVar13 = LZCOUNT(uVar19 >> 0x10 | uVar19 << 0x10);
      puVar17 = local_60[lVar13];
      iVar20 = uVar25 + uVar28;
      uVar28 = uVar28 + 1;
      local_60[lVar13] = puVar17 + 1;
      uVar12 = uVar12 - 1 & uVar12;
      uVar19 = (uVar5 - 0x1f) + (int)LZCOUNT(iVar20);
      *(char *)((long)puVar17 + 5) = (char)(uVar26 >> 0x10);
      *(char *)((long)puVar17 + 4) = (char)uVar19;
      *(uint *)puVar17 = ~(-1 << (ulong)(uVar19 & 0x1f)) & 0xffff;
      *(ushort *)((long)puVar17 + 6) = (ushort)(iVar20 << (ulong)(uVar19 & 0x1f)) & (ushort)uVar7;
    } while (uVar25 != uVar28);
  }
  do {
    uVar21 = uVar25 + uVar21;
    while( true ) {
      puVar23 = puVar23 + 1;
      if (puVar23 == puVar2) {
        return;
      }
      uVar26 = *puVar23;
      uVar25 = uVar26 & 0xffff;
      if (uVar25 < 5) goto LAB_0017c12c;
LAB_0017c1ac:
      uVar16 = (ulong)(uVar26 >> 0x10 & 0xff);
      uVar26 = (uVar5 - 0x1f) + (int)LZCOUNT(uVar25);
      uVar12 = 1 << (ulong)(-(int)LZCOUNT(uVar25) & 0x1f);
      uVar19 = 1 << (ulong)(uVar26 & 0x1f);
      uVar8 = uVar12 - uVar25;
      uVar22 = uVar16 << 0x28 | (ulong)(uVar26 & 0xff) << 0x20 |
               (ulong)(uVar25 << (ulong)(uVar26 & 0x1f) & uVar7) << 0x30 |
               (ulong)(uVar19 - 1 & 0xffff);
      uVar16 = (ulong)(uVar19 - 1 >> 1 & 0xffff) | uVar16 << 0x28;
      uVar28 = uVar25 + (uVar21 - 1 & 3);
      uVar9 = uVar28 >> 2;
      uVar27 = (ulong)uVar19 << 0x30;
      uVar15 = uVar8 - uVar9;
      if ((int)uVar8 < (int)uVar9) {
        if (0 < (int)uVar8) {
          uVar28 = uVar8 & 7;
          puVar17 = (ulong *)(ulong)(uVar12 + ~uVar25);
          puVar18 = local_60[0];
          if (6 < uVar12 + ~uVar25) {
            iVar20 = (uVar28 + uVar25) - uVar12;
            do {
              uVar14 = uVar27 + uVar22 + uVar27;
              uVar3 = uVar14 + uVar27;
              *local_60[0] = uVar22;
              local_60[0][1] = uVar22 + uVar27;
              uVar22 = uVar27 + uVar3;
              local_60[0][2] = uVar14;
              local_60[0][3] = uVar3;
              uVar14 = uVar22 + uVar27;
              local_60[0][4] = uVar22;
              local_60[0][5] = uVar14;
              uVar14 = uVar27 + uVar14;
              puVar17 = local_60[0] + 8;
              uVar22 = uVar14 + uVar27;
              iVar20 = iVar20 + 8;
              local_60[0][6] = uVar14;
              local_60[0][7] = uVar22;
              uVar22 = uVar27 + uVar22;
              local_60[0] = puVar17;
              puVar18 = puVar17;
            } while (iVar20 != 0);
          }
          local_60[0] = puVar17;
          if (uVar28 != 0) {
            do {
              local_60[0] = puVar18 + 1;
              *puVar18 = uVar22;
              uVar22 = uVar22 + uVar27;
              uVar28 = uVar28 - 1;
              puVar18 = local_60[0];
            } while (uVar28 != 0);
          }
        }
        uVar26 = uVar26 - 1;
        uVar22 = uVar16 | (ulong)(uVar26 & 0xff) << 0x20;
        uVar27 = ((ulong)uVar19 & 0xffff) << 0x2f;
        if (0 < (int)(uVar9 - uVar8)) {
          uVar28 = uVar9 - uVar8 & 7;
          if (6 < ~uVar12 + uVar9 + uVar25) {
            iVar20 = ((uVar12 + uVar28) - uVar9) - uVar25;
            puVar17 = local_60[0];
            do {
              uVar14 = uVar27 + uVar22 + uVar27;
              uVar3 = uVar14 + uVar27;
              *puVar17 = uVar22;
              puVar17[1] = uVar22 + uVar27;
              uVar22 = uVar27 + uVar3;
              puVar17[2] = uVar14;
              puVar17[3] = uVar3;
              uVar14 = uVar22 + uVar27;
              puVar17[4] = uVar22;
              puVar17[5] = uVar14;
              uVar14 = uVar27 + uVar14;
              local_60[0] = puVar17 + 8;
              uVar22 = uVar14 + uVar27;
              iVar20 = iVar20 + 8;
              puVar17[6] = uVar14;
              puVar17[7] = uVar22;
              uVar22 = uVar27 + uVar22;
              puVar17 = local_60[0];
            } while (iVar20 != 0);
          }
          for (; uVar28 != 0; uVar28 = uVar28 - 1) {
            *local_60[0] = uVar22;
            uVar22 = uVar22 + uVar27;
            local_60[0] = local_60[0] + 1;
          }
        }
        uVar15 = uVar25;
      }
      else {
        uVar12 = uVar28 >> 2 & 7;
        puVar17 = (ulong *)(ulong)uVar28;
        puVar18 = local_60[0];
        if (6 < uVar9 - 1) {
          iVar20 = uVar12 - uVar9;
          do {
            uVar14 = uVar27 + uVar22 + uVar27;
            uVar3 = uVar14 + uVar27;
            *local_60[0] = uVar22;
            local_60[0][1] = uVar22 + uVar27;
            uVar22 = uVar27 + uVar3;
            local_60[0][2] = uVar14;
            local_60[0][3] = uVar3;
            uVar14 = uVar22 + uVar27;
            local_60[0][4] = uVar22;
            local_60[0][5] = uVar14;
            uVar14 = uVar27 + uVar14;
            puVar17 = local_60[0] + 8;
            uVar22 = uVar14 + uVar27;
            iVar20 = iVar20 + 8;
            local_60[0][6] = uVar14;
            local_60[0][7] = uVar22;
            uVar22 = uVar27 + uVar22;
            local_60[0] = puVar17;
            puVar18 = puVar17;
          } while (iVar20 != 0);
        }
        local_60[0] = puVar17;
        if (uVar12 != 0) {
          iVar20 = -uVar12;
          do {
            local_60[0] = puVar18 + 1;
            *puVar18 = uVar22;
            uVar22 = uVar22 + uVar27;
            bVar11 = iVar20 != -1;
            iVar20 = iVar20 + 1;
            puVar18 = local_60[0];
          } while (bVar11);
        }
      }
      uVar28 = uVar25 + (uVar21 & 3 ^ 2);
      uVar12 = (uVar21 + 2 & 3) + uVar25 >> 2;
      uVar8 = uVar28 >> 2;
      uVar19 = uVar15 - uVar12;
      if ((int)uVar15 < (int)uVar12) {
        if (0 < (int)uVar15) {
          uVar28 = uVar15 & 7;
          puVar17 = (ulong *)(ulong)(uVar15 - 1);
          puVar18 = local_60[1];
          if (6 < uVar15 - 1) {
            iVar20 = uVar28 - uVar15;
            do {
              uVar14 = uVar27 + uVar22 + uVar27;
              uVar3 = uVar14 + uVar27;
              *local_60[1] = uVar22;
              local_60[1][1] = uVar22 + uVar27;
              uVar22 = uVar27 + uVar3;
              local_60[1][2] = uVar14;
              local_60[1][3] = uVar3;
              uVar14 = uVar22 + uVar27;
              local_60[1][4] = uVar22;
              local_60[1][5] = uVar14;
              uVar14 = uVar27 + uVar14;
              puVar17 = local_60[1] + 8;
              uVar22 = uVar14 + uVar27;
              iVar20 = iVar20 + 8;
              local_60[1][6] = uVar14;
              local_60[1][7] = uVar22;
              uVar22 = uVar27 + uVar22;
              local_60[1] = puVar17;
              puVar18 = puVar17;
            } while (iVar20 != 0);
          }
          local_60[1] = puVar17;
          if (uVar28 != 0) {
            do {
              local_60[1] = puVar18 + 1;
              *puVar18 = uVar22;
              uVar22 = uVar22 + uVar27;
              uVar28 = uVar28 - 1;
              puVar18 = local_60[1];
            } while (uVar28 != 0);
          }
        }
        uVar26 = uVar26 - 1;
        uVar22 = uVar16 | (ulong)(uVar26 & 0xff) << 0x20;
        uVar27 = uVar27 >> 1;
        if (0 < (int)(uVar12 - uVar15)) {
          uVar28 = uVar8 - uVar15 & 7;
          if (6 < uVar8 + ~uVar15) {
            iVar20 = (uVar15 + uVar28) - uVar8;
            uVar14 = uVar22;
            puVar17 = local_60[1];
            do {
              uVar22 = uVar14 + uVar27 * 8;
              *puVar17 = uVar14;
              puVar17[1] = uVar27 + uVar14;
              puVar17[2] = uVar27 * 2 + uVar14;
              puVar17[3] = uVar27 * 3 + uVar14;
              puVar17[4] = uVar27 * 4 + uVar14;
              puVar17[5] = uVar27 * 5 + uVar14;
              local_60[1] = puVar17 + 8;
              puVar17[6] = uVar27 * 6 + uVar14;
              puVar17[7] = uVar27 * 7 + uVar14;
              iVar20 = iVar20 + 8;
              uVar14 = uVar22;
              puVar17 = local_60[1];
            } while (iVar20 != 0);
          }
          for (; uVar28 != 0; uVar28 = uVar28 - 1) {
            *local_60[1] = uVar22;
            uVar22 = uVar22 + uVar27;
            local_60[1] = local_60[1] + 1;
          }
        }
        uVar19 = uVar25;
      }
      else if (uVar12 != 0) {
        uVar12 = uVar28 >> 2 & 7;
        puVar17 = (ulong *)(ulong)uVar28;
        puVar18 = local_60[1];
        if (6 < uVar8 - 1) {
          iVar20 = uVar12 - uVar8;
          do {
            uVar14 = uVar27 + uVar22 + uVar27;
            uVar3 = uVar14 + uVar27;
            *local_60[1] = uVar22;
            local_60[1][1] = uVar22 + uVar27;
            uVar22 = uVar27 + uVar3;
            local_60[1][2] = uVar14;
            local_60[1][3] = uVar3;
            uVar14 = uVar22 + uVar27;
            local_60[1][4] = uVar22;
            local_60[1][5] = uVar14;
            uVar14 = uVar27 + uVar14;
            puVar17 = local_60[1] + 8;
            uVar22 = uVar14 + uVar27;
            iVar20 = iVar20 + 8;
            local_60[1][6] = uVar14;
            local_60[1][7] = uVar22;
            uVar22 = uVar27 + uVar22;
            local_60[1] = puVar17;
            puVar18 = puVar17;
          } while (iVar20 != 0);
        }
        local_60[1] = puVar17;
        if (uVar12 != 0) {
          iVar20 = -uVar12;
          do {
            local_60[1] = puVar18 + 1;
            *puVar18 = uVar22;
            uVar22 = uVar22 + uVar27;
            bVar11 = iVar20 != -1;
            iVar20 = iVar20 + 1;
            puVar18 = local_60[1];
          } while (bVar11);
        }
      }
      uVar28 = uVar25 + (uVar21 + 1 & 3);
      uVar8 = uVar28 >> 2;
      uVar12 = uVar19 - uVar8;
      if ((int)uVar19 < (int)uVar8) {
        if (0 < (int)uVar19) {
          uVar28 = uVar19 & 7;
          puVar17 = (ulong *)(ulong)(uVar19 - 1);
          puVar18 = local_60[2];
          if (6 < uVar19 - 1) {
            iVar20 = uVar28 - uVar19;
            do {
              uVar14 = uVar27 * 2 + uVar22;
              uVar3 = uVar22 + uVar27;
              iVar20 = iVar20 + 8;
              uVar4 = uVar27 + uVar14;
              *local_60[2] = uVar22;
              local_60[2][1] = uVar3;
              uVar22 = uVar27 + uVar4;
              local_60[2][2] = uVar14;
              local_60[2][3] = uVar4;
              uVar14 = uVar27 + uVar22;
              uVar4 = uVar27 + uVar14;
              local_60[2][4] = uVar22;
              local_60[2][5] = uVar14;
              puVar17 = local_60[2] + 8;
              uVar22 = uVar27 + uVar4;
              local_60[2][6] = uVar4;
              local_60[2][7] = uVar22;
              uVar22 = uVar27 + uVar22;
              local_60[2] = puVar17;
            } while (iVar20 != 0);
            uVar22 = uVar3 + uVar27 * 7;
            puVar18 = puVar17;
          }
          local_60[2] = puVar17;
          if (uVar28 != 0) {
            do {
              local_60[2] = puVar18 + 1;
              *puVar18 = uVar22;
              uVar22 = uVar22 + uVar27;
              uVar28 = uVar28 - 1;
              puVar18 = local_60[2];
            } while (uVar28 != 0);
          }
        }
        uVar26 = uVar26 - 1;
        uVar22 = uVar16 | (ulong)(uVar26 & 0xff) << 0x20;
        uVar27 = uVar27 >> 1;
        if (0 < (int)(uVar8 - uVar19)) {
          uVar28 = uVar8 - uVar19 & 7;
          if (6 < uVar8 + ~uVar19) {
            iVar20 = (uVar19 + uVar28) - uVar8;
            uVar14 = uVar22;
            puVar17 = local_60[2];
            do {
              *puVar17 = uVar14;
              puVar17[1] = uVar14 + uVar27;
              uVar22 = uVar14 + uVar27 + uVar27 * 7;
              puVar17[2] = uVar27 * 2 + uVar14;
              puVar17[3] = uVar27 * 3 + uVar14;
              local_60[2] = puVar17 + 8;
              puVar17[4] = uVar27 * 4 + uVar14;
              puVar17[5] = uVar27 * 5 + uVar14;
              iVar20 = iVar20 + 8;
              puVar17[6] = uVar27 * 6 + uVar14;
              puVar17[7] = uVar27 * 7 + uVar14;
              uVar14 = uVar22;
              puVar17 = local_60[2];
            } while (iVar20 != 0);
          }
          for (; uVar28 != 0; uVar28 = uVar28 - 1) {
            *local_60[2] = uVar22;
            uVar22 = uVar22 + uVar27;
            local_60[2] = local_60[2] + 1;
          }
        }
        uVar12 = uVar25;
      }
      else if (uVar8 != 0) {
        uVar19 = uVar28 >> 2 & 7;
        puVar17 = (ulong *)(ulong)uVar28;
        puVar18 = local_60[2];
        if (6 < uVar8 - 1) {
          iVar20 = uVar19 - uVar8;
          do {
            uVar14 = uVar27 * 2 + uVar22;
            uVar3 = uVar22 + uVar27;
            iVar20 = iVar20 + 8;
            uVar4 = uVar27 + uVar14;
            *local_60[2] = uVar22;
            local_60[2][1] = uVar3;
            uVar22 = uVar27 + uVar4;
            local_60[2][2] = uVar14;
            local_60[2][3] = uVar4;
            uVar14 = uVar27 + uVar22;
            uVar4 = uVar27 + uVar14;
            local_60[2][4] = uVar22;
            local_60[2][5] = uVar14;
            puVar17 = local_60[2] + 8;
            uVar22 = uVar27 + uVar4;
            local_60[2][6] = uVar4;
            local_60[2][7] = uVar22;
            uVar22 = uVar27 + uVar22;
            local_60[2] = puVar17;
          } while (iVar20 != 0);
          uVar22 = uVar3 + uVar27 * 7;
          puVar18 = puVar17;
        }
        local_60[2] = puVar17;
        if (uVar19 != 0) {
          iVar20 = -uVar19;
          do {
            local_60[2] = puVar18 + 1;
            *puVar18 = uVar22;
            uVar22 = uVar22 + uVar27;
            bVar11 = iVar20 != -1;
            iVar20 = iVar20 + 1;
            puVar18 = local_60[2];
          } while (bVar11);
        }
      }
      uVar28 = uVar25 + (uVar21 & 3);
      uVar8 = uVar28 >> 2;
      uVar19 = uVar8 - uVar12;
      if (uVar19 == 0 || (int)uVar8 < (int)uVar12) {
        if (uVar8 == 0) {
          goto joined_r0x0017c950;
        }
        puVar17 = (ulong *)(ulong)(uVar8 - 1);
        uVar26 = uVar28 >> 2 & 7;
        if (6 < uVar8 - 1) {
          iVar20 = uVar26 - uVar8;
          do {
            uVar16 = uVar27 * 2 + uVar22;
            uVar3 = uVar27 + uVar16;
            uVar14 = uVar22 + uVar27;
            local_60[3][2] = uVar16;
            local_60[3][3] = uVar3;
            uVar3 = uVar27 + uVar3;
            *local_60[3] = uVar22;
            local_60[3][1] = uVar14;
            uVar22 = uVar27 + uVar3;
            uVar16 = uVar27 + uVar22;
            local_60[3][4] = uVar3;
            local_60[3][5] = uVar22;
            puVar17 = local_60[3] + 8;
            uVar22 = uVar27 + uVar16;
            iVar20 = iVar20 + 8;
            local_60[3][6] = uVar16;
            local_60[3][7] = uVar22;
            uVar22 = uVar27 + uVar22;
            local_60[3] = puVar17;
          } while (iVar20 != 0);
          uVar22 = uVar14 + uVar27 * 7;
        }
        if (uVar26 != 0) {
          iVar20 = -uVar26;
          do {
            puVar17 = local_60[3] + 1;
            *local_60[3] = uVar22;
            uVar22 = uVar22 + uVar27;
            bVar11 = iVar20 != -1;
            iVar20 = iVar20 + 1;
            local_60[3] = puVar17;
          } while (bVar11);
        }
        goto LAB_0017c108;
      }
      puVar17 = (ulong *)(ulong)(uVar12 - 1);
      puVar18 = local_60[3];
      if (0 < (int)uVar12) {
        uVar28 = uVar12 & 7;
        if (6 < uVar12 - 1) {
          iVar20 = uVar28 - uVar12;
          do {
            uVar14 = uVar27 * 2 + uVar22;
            uVar3 = uVar22 + uVar27;
            iVar20 = iVar20 + 8;
            uVar4 = uVar27 + uVar14;
            *local_60[3] = uVar22;
            local_60[3][1] = uVar3;
            uVar22 = uVar27 + uVar4;
            local_60[3][2] = uVar14;
            local_60[3][3] = uVar4;
            uVar14 = uVar27 + uVar22;
            uVar4 = uVar27 + uVar14;
            local_60[3][4] = uVar22;
            local_60[3][5] = uVar14;
            puVar17 = local_60[3] + 8;
            uVar22 = uVar27 + uVar4;
            local_60[3][6] = uVar4;
            local_60[3][7] = uVar22;
            uVar22 = uVar27 + uVar22;
            local_60[3] = puVar17;
          } while (iVar20 != 0);
          uVar22 = uVar3 + uVar27 * 7;
        }
        puVar18 = puVar17;
        if (uVar28 != 0) {
          do {
            puVar18 = local_60[3] + 1;
            *local_60[3] = uVar22;
            uVar22 = uVar22 + uVar27;
            uVar28 = uVar28 - 1;
            local_60[3] = puVar18;
          } while (uVar28 != 0);
        }
      }
      if (0 < (int)uVar19) break;
      local_60[3] = puVar18;
joined_r0x0017c950:
      uVar21 = uVar25 + uVar21;
    }
    uVar16 = uVar16 | (ulong)(uVar26 - 1 & 0xff) << 0x20;
    puVar17 = (ulong *)(ulong)(uVar8 + ~uVar12);
    uVar27 = uVar27 >> 1;
    uVar19 = uVar19 & 7;
    if (6 < uVar8 + ~uVar12) {
      iVar20 = (uVar12 + uVar19) - uVar8;
      uVar22 = uVar16;
      do {
        *puVar18 = uVar22;
        puVar18[1] = uVar22 + uVar27;
        uVar16 = uVar22 + uVar27 + uVar27 * 7;
        puVar18[2] = uVar27 * 2 + uVar22;
        puVar18[3] = uVar27 * 3 + uVar22;
        puVar17 = puVar18 + 8;
        puVar18[4] = uVar27 * 4 + uVar22;
        puVar18[5] = uVar27 * 5 + uVar22;
        iVar20 = iVar20 + 8;
        puVar18[6] = uVar27 * 6 + uVar22;
        puVar18[7] = uVar27 * 7 + uVar22;
        uVar22 = uVar16;
        puVar18 = puVar17;
      } while (iVar20 != 0);
    }
    if (uVar19 != 0) {
      do {
        puVar17 = puVar18 + 1;
        *puVar18 = uVar16;
        uVar16 = uVar16 + uVar27;
        uVar19 = uVar19 - 1;
        puVar18 = puVar17;
      } while (uVar19 != 0);
    }
LAB_0017c108:
    local_60[3] = puVar17;
  } while( true );
}



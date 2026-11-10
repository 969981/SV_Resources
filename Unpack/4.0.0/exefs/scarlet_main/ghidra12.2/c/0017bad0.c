/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0017bad0; name: FUN_0017bad0
 */


void FUN_0017bad0(int *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  short sVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  long *plVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  short *psVar26;
  short *psVar27;
  short *psVar28;
  int local_40;
  
  lVar25 = (long)(int)param_3 << 0x20;
  uVar18 = (long)(int)param_3;
  do {
    uVar22 = param_3;
    uVar23 = uVar18;
    lVar25 = lVar25 + -0x100000000;
    if ((long)uVar23 < 1) break;
    uVar18 = uVar23 - 1;
    param_3 = uVar22 - 1;
  } while (param_2[uVar23 - 1] == 0);
  param_1[2] = uVar22;
  iVar6 = *param_1;
  uVar18 = (ulong)iVar6;
  sVar10 = (short)iVar6;
  if (*(int *)((long)param_2 + (lVar25 >> 0x1e)) == iVar6) {
    lVar25 = lVar25 >> 0x20;
    iVar7 = iVar6 * 2;
    *(undefined2 *)((long)param_1 + lVar25 * 0xc + 0x1a) = 0;
    *(short *)(param_1 + lVar25 * 3 + 6) = (short)iVar7;
    lVar24 = *(long *)(param_1 + 0x304) + uVar18 * -2;
    plVar21 = (long *)(param_1 + lVar25 * 3 + 4);
    *plVar21 = lVar24;
    if (iVar6 < iVar7) {
      *(short *)(lVar24 + uVar18 * 2) = sVar10;
      lVar24 = (long)iVar7;
      lVar25 = uVar18 + 1;
      if (lVar25 != lVar24) {
        if ((uVar18 & 1) == 0) {
          *(short *)(*plVar21 + lVar25 * 2) = (short)lVar25;
          lVar25 = uVar18 + 2;
        }
        if (lVar24 - 2U != uVar18) {
          lVar19 = lVar25 << 1;
          do {
            sVar10 = (short)lVar25;
            *(short *)(lVar19 + *plVar21) = sVar10;
            lVar25 = lVar25 + 2;
            lVar3 = lVar19 + *plVar21;
            lVar19 = lVar19 + 4;
            *(short *)(lVar3 + 2) = sVar10 + 1;
          } while (lVar24 != lVar25);
        }
      }
    }
  }
  else {
    iVar7 = param_1[1];
    if ((int)uVar22 < 1) {
      iVar20 = 0;
    }
    else {
      if ((int)uVar23 == 1) {
        lVar25 = 0;
        iVar20 = 0;
      }
      else {
        lVar25 = 0;
        iVar20 = 0;
        do {
          puVar4 = param_2 + lVar25;
          lVar25 = lVar25 + 2;
          if (*puVar4 == 1) {
            iVar20 = iVar20 + 1;
          }
          if (puVar4[1] == 1) {
            iVar20 = iVar20 + 1;
          }
        } while ((ulong)uVar22 - ((ulong)uVar22 & 1) != lVar25);
      }
      if (((uVar23 & 1) != 0) && (param_2[lVar25] == 1)) {
        iVar20 = iVar20 + 1;
      }
    }
    uVar11 = iVar6 - iVar20;
    uVar8 = uVar11 >> 2;
    uVar5 = uVar8;
    if ((uVar11 & 3) != 0) {
      uVar5 = uVar8 + 1;
    }
    local_40 = 0;
    iVar20 = uVar5 + uVar8;
    if (1 < (uVar11 & 3)) {
      iVar20 = iVar20 + 1;
    }
    iVar1 = iVar20 + uVar8;
    if ((uVar11 & 3) == 3) {
      iVar1 = iVar1 + 1;
    }
    if (0 < (int)uVar22) {
      lVar25 = 0;
      uVar22 = 0;
      uVar8 = *param_2;
      while( true ) {
        if (uVar8 == 1) {
          *(ushort *)((long)param_1 + lVar25 * 0xc + 0x1a) = (ushort)iVar7 & 0xff;
          *(short *)(param_1 + lVar25 * 3 + 6) = (short)(iVar6 << 1);
          psVar26 = (short *)(*(long *)(param_1 + 0x304) + (ulong)uVar11 * 2);
          sVar12 = (short)uVar11;
          uVar11 = uVar11 + 1;
          *(short **)(param_1 + lVar25 * 3 + 4) = psVar26 + -1;
          *psVar26 = sVar12 + sVar10;
        }
        else if (uVar8 == 0) {
          (param_1 + lVar25 * 3 + 4)[0] = 0;
          (param_1 + lVar25 * 3 + 4)[1] = 0;
        }
        else {
          uVar2 = iVar7 + -0x20 + (int)LZCOUNT(uVar8 - 1);
          *(ushort *)((long)param_1 + lVar25 * 0xc + 0x1a) = (ushort)uVar2 & 0xff;
          *(short *)(param_1 + lVar25 * 3 + 6) = (short)((uVar8 << 1) << (ulong)(uVar2 & 0x1f));
          psVar26 = (short *)(*(long *)(param_1 + 0x304) + (long)(int)uVar22 * 2);
          *(short **)(param_1 + lVar25 * 3 + 4) = psVar26 + -(ulong)uVar8;
          uVar2 = (uVar22 - 1 & 3) + uVar8;
          uVar17 = uVar2 >> 2;
          if (uVar17 != 0) {
            uVar2 = uVar2 >> 2 & 3;
            iVar14 = local_40;
            if (2 < uVar17 - 1) {
              lVar19 = 0;
              lVar24 = 0;
              do {
                psVar27 = psVar26 + lVar24;
                sVar12 = sVar10 + (short)local_40 + (short)lVar24;
                lVar24 = lVar24 + 4;
                *psVar27 = sVar12;
                psVar27[1] = sVar12 + 1;
                lVar19 = lVar19 + -8;
                psVar27[2] = sVar12 + 2;
                psVar27[3] = sVar12 + 3;
              } while (uVar17 - uVar2 != (int)lVar24);
              iVar14 = local_40 + (int)lVar24;
              psVar26 = (short *)((long)psVar26 - lVar19);
            }
            if (uVar2 != 0) {
              iVar14 = iVar6 + iVar14;
              iVar16 = -uVar2;
              psVar27 = psVar26;
              do {
                psVar26 = psVar27 + 1;
                *psVar27 = (short)iVar14;
                iVar14 = iVar14 + 1;
                bVar13 = iVar16 != -1;
                iVar16 = iVar16 + 1;
                psVar27 = psVar26;
              } while (bVar13);
            }
          }
          local_40 = local_40 + uVar17;
          uVar2 = (uVar22 + 2 & 3) + uVar8 >> 2;
          if (uVar2 != 0) {
            uVar17 = uVar8 + (uVar22 & 3 ^ 2);
            uVar9 = uVar17 >> 2;
            uVar15 = uVar17 >> 2 & 3;
            uVar17 = uVar5;
            if (2 < uVar9 - 1) {
              lVar24 = 0;
              psVar27 = psVar26;
              do {
                psVar28 = psVar27;
                psVar27 = psVar26 + lVar24;
                sVar12 = sVar10 + (short)uVar5 + (short)lVar24;
                lVar24 = lVar24 + 4;
                *psVar27 = sVar12;
                psVar27[1] = sVar12 + 1;
                psVar27[2] = sVar12 + 2;
                psVar27[3] = sVar12 + 3;
                psVar27 = psVar27 + 4;
              } while (uVar9 - uVar15 != (int)lVar24);
              psVar26 = psVar28 + 4;
              uVar17 = uVar5 + (int)lVar24;
            }
            if (uVar15 != 0) {
              iVar14 = iVar6 + uVar17;
              psVar27 = psVar26;
              do {
                psVar26 = psVar27 + 1;
                *psVar27 = (short)iVar14;
                uVar15 = uVar15 - 1;
                iVar14 = iVar14 + 1;
                psVar27 = psVar26;
              } while (uVar15 != 0);
            }
          }
          uVar5 = uVar5 + uVar2;
          uVar2 = uVar8 + (uVar22 + 1 & 3);
          uVar17 = uVar2 >> 2;
          if (uVar17 != 0) {
            uVar2 = uVar2 >> 2 & 3;
            iVar14 = iVar20;
            if (2 < uVar17 - 1) {
              lVar24 = 0;
              psVar27 = psVar26;
              do {
                psVar28 = psVar27;
                psVar27 = psVar26 + lVar24;
                sVar12 = sVar10 + (short)iVar20 + (short)lVar24;
                lVar24 = lVar24 + 4;
                *psVar27 = sVar12;
                psVar27[1] = sVar12 + 1;
                psVar27[2] = sVar12 + 2;
                psVar27[3] = sVar12 + 3;
                psVar27 = psVar27 + 4;
              } while (uVar17 - uVar2 != (int)lVar24);
              psVar26 = psVar28 + 4;
              iVar14 = iVar20 + (int)lVar24;
            }
            if (uVar2 != 0) {
              iVar14 = iVar6 + iVar14;
              iVar16 = -uVar2;
              psVar27 = psVar26;
              do {
                psVar26 = psVar27 + 1;
                *psVar27 = (short)iVar14;
                iVar14 = iVar14 + 1;
                bVar13 = iVar16 != -1;
                iVar16 = iVar16 + 1;
                psVar27 = psVar26;
              } while (bVar13);
            }
          }
          iVar20 = iVar20 + uVar17;
          uVar2 = uVar8 + (uVar22 & 3);
          uVar17 = uVar2 >> 2;
          if (uVar17 != 0) {
            uVar2 = uVar2 >> 2 & 3;
            iVar14 = iVar1;
            if (2 < uVar17 - 1) {
              lVar24 = 0;
              psVar27 = psVar26;
              do {
                psVar28 = psVar27;
                psVar27 = psVar26 + lVar24;
                sVar12 = sVar10 + (short)iVar1 + (short)lVar24;
                lVar24 = lVar24 + 4;
                *psVar27 = sVar12;
                psVar27[1] = sVar12 + 1;
                psVar27[2] = sVar12 + 2;
                psVar27[3] = sVar12 + 3;
                psVar27 = psVar27 + 4;
              } while (uVar17 - uVar2 != (int)lVar24);
              psVar26 = psVar28 + 4;
              iVar14 = iVar1 + (int)lVar24;
            }
            if (uVar2 != 0) {
              iVar14 = iVar6 + iVar14;
              iVar16 = -uVar2;
              do {
                *psVar26 = (short)iVar14;
                iVar14 = iVar14 + 1;
                bVar13 = iVar16 != -1;
                iVar16 = iVar16 + 1;
                psVar26 = psVar26 + 1;
              } while (bVar13);
            }
          }
          iVar1 = iVar1 + uVar17;
          uVar22 = uVar8 + uVar22;
        }
        if (lVar25 + 1U == (uVar23 & 0xffffffff)) break;
        lVar25 = lVar25 + 1;
        uVar8 = param_2[lVar25];
      }
    }
  }
  return;
}



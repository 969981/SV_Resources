/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fb9fc4; name: FUN_02fb9fc4
 */


int FUN_02fb9fc4(long param_1)

{
  float *pfVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  float *pfVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
  float fVar31;
  float fVar32;
  
  uVar4 = *(uint *)(param_1 + 0x38);
  if ((int)uVar4 < 1) {
    iVar18 = 0;
  }
  else {
    uVar19 = 0;
    iVar18 = 0;
    do {
      lVar24 = *(long *)(param_1 + 0x30);
      lVar25 = lVar24 + uVar19 * 8;
      bVar5 = *(byte *)(lVar25 + 6);
      uVar7 = *(ushort *)(lVar25 + 4);
      if (uVar19 != 0) {
        uVar23 = (ulong)*(ushort *)(lVar24 + uVar19 * 8);
        uVar21 = 0;
        while( true ) {
          lVar24 = lVar24 + uVar21 * 8;
          bVar6 = *(byte *)(lVar24 + 6);
          iVar22 = (int)uVar23;
          if (((*(float *)(*(long *)(param_1 + 0x18) + uVar23 * 4) != 0.0) && (bVar6 != 0)) &&
             (bVar5 != 0)) {
            uVar20 = 0;
            uVar8 = *(ushort *)(lVar24 + 4);
            uVar14 = uVar8 ^ 3;
            iVar13 = -(uint)uVar8;
            uVar9 = *(ushort *)
                     (*(long *)(param_1 + 0x40) +
                      ((ulong)*(byte *)(lVar24 + 7) +
                      (ulong)*(ushort *)(*(long *)(param_1 + 0x50) + uVar21 * 2)) * 8 + 4);
            do {
              iVar28 = *(int *)(param_1 + 0x2c);
              uVar15 = 0;
              lVar25 = (long)(int)((uint)uVar9 + (iVar28 + 1) * uVar20);
              while( true ) {
                lVar24 = *(long *)(param_1 + 0x18);
                iVar10 = uVar20 + iVar22 + uVar15 * iVar28;
                fVar31 = *(float *)(lVar24 + lVar25 * 4) * *(float *)(lVar24 + (long)iVar10 * 4);
                *(float *)(lVar24 + (long)iVar10 * 4) = fVar31;
                if ((fVar31 != 0.0) &&
                   (iVar10 = *(int *)(param_1 + 0x2c), 1 < (int)(iVar10 - (uVar20 + uVar8)))) {
                  lVar24 = *(long *)(param_1 + 0x18);
                  uVar12 = iVar13 + iVar10;
                  iVar28 = (int)uVar23 + iVar28 * uVar15;
                  if ((ulong)uVar12 - 2 < 3) {
                    lVar29 = 1;
                  }
                  else {
                    pfVar27 = (float *)(lVar24 + 8 + lVar25 * 4);
                    pfVar17 = (float *)(lVar24 + 8 + (long)iVar28 * 4);
                    uVar2 = 0;
                    do {
                      uVar30 = uVar2;
                      pfVar17[-1] = pfVar17[-1] - fVar31 * pfVar27[-1];
                      *pfVar17 = *pfVar17 - fVar31 * *pfVar27;
                      pfVar17[1] = pfVar17[1] - fVar31 * pfVar27[1];
                      pfVar1 = pfVar27 + 2;
                      pfVar27 = pfVar27 + 4;
                      uVar2 = uVar30 + 4;
                      pfVar17[2] = pfVar17[2] - fVar31 * *pfVar1;
                      pfVar17 = pfVar17 + 4;
                    } while (((ulong)uVar12 - 1 & 0xfffffffffffffffc) != uVar2);
                    lVar29 = uVar30 + 5;
                  }
                  if ((uVar12 - 1 & 3) != 0) {
                    lVar26 = -((ulong)(uVar14 + iVar10) & 3);
                    pfVar17 = (float *)(lVar24 + lVar25 * 4 + lVar29 * 4);
                    pfVar27 = (float *)(lVar24 + (lVar29 + iVar28) * 4);
                    do {
                      bVar11 = lVar26 != -1;
                      lVar26 = lVar26 + 1;
                      *pfVar27 = *pfVar27 - fVar31 * *pfVar17;
                      pfVar17 = pfVar17 + 1;
                      pfVar27 = pfVar27 + 1;
                    } while (bVar11);
                  }
                }
                uVar15 = uVar15 + 1;
                if (uVar15 == bVar5) break;
                iVar28 = *(int *)(param_1 + 0x2c);
              }
              uVar20 = uVar20 + 1;
              iVar13 = iVar13 + -1;
              uVar23 = (ulong)((int)uVar23 + 1);
              uVar14 = uVar14 + 3;
            } while (uVar20 != bVar6);
          }
          uVar21 = uVar21 + 1;
          if (uVar21 == uVar19) break;
          uVar23 = (ulong)(iVar22 + (uint)bVar6);
          lVar24 = *(long *)(param_1 + 0x30);
        }
        lVar24 = *(long *)(param_1 + 0x30);
      }
      uVar20 = (uint)bVar5;
      if (uVar20 != 0) {
        uVar14 = 0;
        iVar22 = -(uint)uVar7;
        uVar8 = *(ushort *)
                 (*(long *)(param_1 + 0x40) +
                  ((ulong)*(byte *)(lVar24 + uVar19 * 8 + 7) +
                  (ulong)*(ushort *)(*(long *)(param_1 + 0x50) + uVar19 * 2)) * 8 + 4);
        uVar15 = uVar7 ^ 3;
        uVar12 = uVar20;
        do {
          iVar13 = *(int *)(param_1 + 0x2c);
          lVar25 = (ulong)uVar8 + (long)(int)((iVar13 + 1) * uVar14);
          fVar31 = *(float *)(*(long *)(param_1 + 0x18) + lVar25 * 4);
          if (ABS(fVar31) <= 1e-07) {
            fVar31 = *(float *)(&DAT_03cb5570 + (ulong)(fVar31 < 0.0) * 4);
            iVar18 = iVar18 + 1;
          }
          else {
            fVar31 = 1.0 / fVar31;
          }
          *(float *)(*(long *)(param_1 + 0x18) + lVar25 * 4) = fVar31;
          if (1 < (int)(uVar20 - uVar14)) {
            lVar24 = *(long *)(param_1 + 0x18);
            iVar13 = (uint)uVar8 + uVar14 * (iVar13 + 1);
            fVar31 = *(float *)(lVar24 + lVar25 * 4);
            uVar16 = 1;
            while( true ) {
              iVar28 = *(int *)(param_1 + 0x2c);
              iVar10 = (int)lVar25 + iVar28 * uVar16;
              fVar32 = fVar31 * *(float *)(lVar24 + (long)iVar10 * 4);
              *(float *)(lVar24 + (long)iVar10 * 4) = fVar32;
              if ((fVar32 != 0.0) &&
                 (iVar10 = *(int *)(param_1 + 0x2c), 1 < (int)(iVar10 - (uVar14 + uVar7)))) {
                lVar24 = *(long *)(param_1 + 0x18);
                uVar3 = iVar22 + iVar10;
                if ((ulong)uVar3 - 2 < 3) {
                  lVar29 = 1;
                }
                else {
                  pfVar27 = (float *)(lVar24 + 8 + (long)iVar13 * 4);
                  pfVar17 = (float *)(lVar24 + 8 + (long)(int)(iVar13 + iVar28 * uVar16) * 4);
                  uVar21 = 0;
                  do {
                    uVar23 = uVar21;
                    pfVar17[-1] = pfVar17[-1] - fVar32 * pfVar27[-1];
                    *pfVar17 = *pfVar17 - fVar32 * *pfVar27;
                    pfVar17[1] = pfVar17[1] - fVar32 * pfVar27[1];
                    pfVar1 = pfVar27 + 2;
                    pfVar27 = pfVar27 + 4;
                    uVar21 = uVar23 + 4;
                    pfVar17[2] = pfVar17[2] - fVar32 * *pfVar1;
                    pfVar17 = pfVar17 + 4;
                  } while (((ulong)uVar3 - 1 & 0xfffffffffffffffc) != uVar21);
                  lVar29 = uVar23 + 5;
                }
                if ((uVar3 - 1 & 3) != 0) {
                  lVar26 = -((ulong)(uVar15 + iVar10) & 3);
                  pfVar17 = (float *)(lVar24 + (lVar29 + (int)(iVar13 + iVar28 * uVar16)) * 4);
                  pfVar27 = (float *)(lVar24 + (long)iVar13 * 4 + lVar29 * 4);
                  do {
                    bVar11 = lVar26 != -1;
                    lVar26 = lVar26 + 1;
                    *pfVar17 = *pfVar17 - fVar32 * *pfVar27;
                    pfVar17 = pfVar17 + 1;
                    pfVar27 = pfVar27 + 1;
                  } while (bVar11);
                }
              }
              uVar16 = uVar16 + 1;
              if (uVar16 == uVar12) break;
              lVar24 = *(long *)(param_1 + 0x18);
            }
          }
          uVar14 = uVar14 + 1;
          uVar12 = uVar12 - 1;
          iVar22 = iVar22 + -1;
          uVar15 = uVar15 + 3;
        } while (uVar14 != uVar20);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar4);
  }
  return iVar18;
}



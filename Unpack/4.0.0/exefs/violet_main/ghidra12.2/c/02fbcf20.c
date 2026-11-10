/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fbcf20; name: FUN_02fbcf20
 */


void FUN_02fbcf20(float param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  float *pfVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  ushort uVar12;
  short sVar13;
  short sVar14;
  ushort uVar15;
  ushort uVar16;
  bool bVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  undefined4 *puVar27;
  float *pfVar28;
  long lVar29;
  float *pfVar30;
  long lVar31;
  long lVar32;
  float *pfVar33;
  long lVar34;
  undefined8 *puVar35;
  long lVar36;
  undefined8 *puVar37;
  ulong uVar38;
  ulong uVar39;
  int iVar40;
  ulong uVar41;
  float fVar42;
  undefined8 *puVar43;
  float fVar44;
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  int iVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  float fVar53;
  float fVar54;
  
  uVar10 = *(uint *)(param_2 + 0x184);
  lVar19 = *(long *)(param_2 + 0xd8);
  if (0 < (int)*(uint *)(lVar19 + 0x28)) {
    memset(*(void **)(lVar19 + 0x18),0,(ulong)*(uint *)(lVar19 + 0x28) << 2);
    lVar19 = *(long *)(param_2 + 0xd8);
  }
  if (0 < (int)uVar10) {
    fVar44 = *(float *)(param_2 + 0x178);
    lVar29 = *(long *)(lVar19 + 0x18);
    uVar26 = 0;
    while( true ) {
      lVar21 = *(long *)(param_2 + 0x38);
      uVar20 = (ulong)*(ushort *)(*(long *)(param_2 + 200) + uVar26 * 2);
      lVar31 = lVar21 + uVar20 * 0x70;
      lVar25 = *(long *)(lVar19 + 0x50);
      lVar32 = *(long *)(lVar19 + 0x30) + uVar26 * 8;
      uVar38 = (ulong)*(ushort *)(lVar25 + uVar26 * 2);
      uVar39 = (ulong)*(byte *)(lVar32 + 7);
      lVar34 = *(long *)(param_2 + 0x28) + (long)*(short *)(lVar31 + 0xc) * 0xa0;
      lVar36 = *(long *)(param_2 + 0x28) + (long)*(short *)(lVar31 + 0xe) * 0xa0;
      uVar12 = *(ushort *)(*(long *)(lVar19 + 0x40) + (uVar39 + uVar38) * 8 + 4);
      puVar35 = (undefined8 *)(lVar34 + 0x50);
      uVar49 = *(undefined8 *)(lVar34 + 0x58);
      uVar45 = *puVar35;
      fVar48 = (float)((ulong)uVar49 >> 0x20);
      puVar37 = (undefined8 *)(lVar36 + 0x50);
      uVar52 = *(undefined8 *)(lVar36 + 0x58);
      uVar51 = *puVar37;
      bVar11 = *(byte *)(lVar31 + 0x19);
      fVar54 = (float)((ulong)uVar52 >> 0x20);
      uVar24 = (bVar11 + 1) * (uint)bVar11 >> 1;
      uVar18 = (uint)bVar11;
      if (uVar24 != 0) {
        iVar23 = 0;
        iVar50 = 0;
        while( true ) {
          lVar19 = (long)*(short *)(lVar21 + uVar20 * 0x70 + 0x14);
          puVar43 = (undefined8 *)(*(long *)(param_2 + 0x88) + (lVar19 + iVar50) * 0x40);
          puVar3 = (undefined8 *)(*(long *)(param_2 + 0x88) + (lVar19 + iVar23) * 0x40);
          uVar22 = (uint)uVar12;
          iVar40 = iVar23 + uVar22 + iVar50 * (uint)*(ushort *)(lVar32 + 2);
          uVar24 = uVar24 - 1;
          fVar46 = (float)uVar45 * (float)puVar43[2] * (float)puVar3[2] +
                   (fVar48 + fVar54) * (float)*puVar43 * (float)*puVar3 +
                   (float)uVar51 * (float)puVar43[4] * (float)puVar3[4] +
                   (float)((ulong)uVar45 >> 0x20) * (float)((ulong)puVar43[2] >> 0x20) *
                   (float)((ulong)puVar3[2] >> 0x20) +
                   (fVar48 + fVar54) * (float)((ulong)*puVar43 >> 0x20) *
                   (float)((ulong)*puVar3 >> 0x20) +
                   (float)((ulong)uVar51 >> 0x20) * (float)((ulong)puVar43[4] >> 0x20) *
                   (float)((ulong)puVar3[4] >> 0x20) +
                   (float)uVar49 * (float)puVar43[3] * (float)puVar3[3] +
                   (fVar48 + fVar54) * (float)puVar43[1] * (float)puVar3[1] +
                   (float)uVar52 * (float)puVar43[5] * (float)puVar3[5];
          if (iVar23 == iVar50) {
            fVar47 = fVar46 + fVar44 * param_1 * param_1 * fVar46;
          }
          else {
            fVar47 = fVar46 * (float)((uint)*(ushort *)((long)puVar3 + 0x32) << 0x10);
            *(float *)(lVar29 + (long)iVar40 * 4) =
                 fVar46 * (float)((uint)*(ushort *)((long)puVar43 + 0x32) << 0x10);
            iVar40 = iVar50 + uVar22 + iVar23 * (uint)*(ushort *)(lVar32 + 2);
          }
          *(float *)(lVar29 + (long)iVar40 * 4) = fVar47;
          if (uVar24 == 0) break;
          uVar49 = *(undefined8 *)(lVar34 + 0x58);
          uVar45 = *puVar35;
          iVar23 = iVar23 + 1;
          iVar40 = iVar50 + 1;
          uVar52 = *(undefined8 *)(lVar36 + 0x58);
          uVar51 = *puVar37;
          if ((int)uVar18 <= iVar23) {
            iVar50 = iVar40;
            iVar23 = iVar40;
          }
        }
        lVar19 = *(long *)(param_2 + 0xd8);
        lVar25 = *(long *)(lVar19 + 0x50);
        uVar39 = (ulong)*(byte *)(lVar32 + 7);
        uVar38 = (ulong)*(ushort *)(lVar25 + uVar26 * 2);
      }
      uVar26 = uVar26 + 1;
      uVar12 = *(ushort *)(lVar25 + uVar26 * 2);
      uVar24 = (int)uVar39 + (int)uVar38 + 1;
      uVar38 = (ulong)uVar24;
      if (uVar24 < uVar12) {
        while( true ) {
          lVar34 = *(long *)(lVar19 + 0x40);
          lVar36 = *(long *)(param_2 + 0x38);
          uVar39 = (ulong)*(ushort *)(lVar34 + uVar38 * 8);
          uVar41 = (ulong)*(ushort *)(*(long *)(param_2 + 200) + uVar39 * 2);
          sVar13 = *(short *)(lVar31 + 0xe);
          lVar25 = lVar36 + uVar41 * 0x70;
          sVar14 = *(short *)(lVar25 + 0xc);
          bVar17 = sVar14 == sVar13;
          if (bVar17 || *(short *)(lVar25 + 0xe) == sVar13) {
            lVar25 = 1;
            fVar46 = -1.0;
            if (sVar14 != sVar13) {
              fVar46 = 1.0;
            }
            puVar43 = puVar37;
            fVar47 = fVar54;
          }
          else {
            bVar17 = sVar14 == *(short *)(lVar31 + 0xc);
            lVar25 = 0;
            fVar46 = 1.0;
            if (!bVar17) {
              fVar46 = -1.0;
            }
            puVar43 = puVar35;
            fVar47 = fVar48;
          }
          bVar11 = *(byte *)(lVar36 + uVar41 * 0x70 + 0x19);
          if (bVar11 * uVar18 != 0) {
            uVar49 = puVar43[1];
            uVar45 = *puVar43;
            lVar4 = lVar34 + uVar38 * 8;
            lVar19 = *(long *)(lVar19 + 0x30);
            iVar23 = 0;
            uVar15 = *(ushort *)(lVar4 + 6);
            iVar50 = uVar18 * bVar11;
            iVar40 = 0;
            fVar42 = 1.4210855e-14;
            do {
              iVar1 = iVar40 + 1;
              uVar24 = (uint)bVar11;
              puVar43 = (undefined8 *)
                        (*(long *)(param_2 + 0x88) +
                        ((long)*(short *)(lVar36 + uVar41 * 0x70 + 0x14) + (long)iVar40) * 0x40);
              puVar3 = (undefined8 *)
                       (*(long *)(param_2 + 0x88) +
                       ((long)*(short *)(lVar21 + uVar20 * 0x70 + 0x14) + (long)iVar23) * 0x40);
              fVar8 = 0.0;
              if ((int)uVar24 <= iVar1) {
                fVar8 = 1.4210855e-14;
              }
              fVar53 = fVar47 * ((float)*puVar43 * (float)*puVar3 +
                                 (float)((ulong)*puVar43 >> 0x20) * (float)((ulong)*puVar3 >> 0x20)
                                + (float)puVar43[1] * (float)puVar3[1]) * fVar46 +
                       (float)puVar43[(ulong)(bVar17 ^ 1) * 2 + 2] *
                       (float)uVar45 * (float)puVar3[lVar25 * 2 + 2] +
                       (float)((ulong)puVar43[(ulong)(bVar17 ^ 1) * 2 + 2] >> 0x20) *
                       (float)((ulong)uVar45 >> 0x20) *
                       (float)((ulong)puVar3[lVar25 * 2 + 2] >> 0x20) +
                       (float)puVar43[(ulong)(bVar17 ^ 1) * 2 + 3] *
                       (float)uVar49 * (float)puVar3[lVar25 * 2 + 3];
              uVar16 = *(ushort *)((long)puVar43 + 0x32);
              *(float *)(lVar29 + (long)(int)(iVar40 + (uint)*(ushort *)(lVar4 + 4) +
                                             iVar23 * (uint)*(ushort *)(lVar32 + 2)) * 4) =
                   fVar53 * (float)((uint)*(ushort *)((long)puVar3 + 0x32) << 0x10) + fVar42;
              iVar2 = iVar23 + (uint)*(ushort *)(lVar34 + (ulong)uVar15 * 8 + 4);
              if ((int)uVar24 <= iVar1) {
                iVar23 = iVar23 + 1;
              }
              iVar9 = 0;
              if (iVar1 < (int)uVar24) {
                iVar9 = iVar40 + 1;
              }
              iVar50 = iVar50 + -1;
              *(float *)(lVar29 + (long)(int)(iVar2 + iVar40 * (uint)*(ushort *)
                                                                      (lVar19 + uVar39 * 8 + 2)) * 4
                        ) = fVar53 * (float)((uint)uVar16 << 0x10) + fVar42;
              iVar40 = iVar9;
              fVar42 = fVar8;
            } while (iVar50 != 0);
          }
          if (uVar38 == (ulong)uVar12 - 1) break;
          lVar19 = *(long *)(param_2 + 0xd8);
          uVar38 = uVar38 + 1;
        }
      }
      if (uVar26 == uVar10) break;
      lVar19 = *(long *)(param_2 + 0xd8);
    }
  }
  if (0 < (int)*(uint *)(param_2 + 0xa0)) {
    puVar27 = *(undefined4 **)(param_2 + 0x98);
    puVar5 = puVar27 + (ulong)*(uint *)(param_2 + 0xa0) * 8;
    lVar19 = *(long *)(*(long *)(param_2 + 0xd8) + 0x18);
    iVar23 = *(int *)(param_2 + 0x108);
    if (iVar23 < 1) {
      do {
        if (*(char *)((long)puVar27 + 0x1b) != '\0') {
          lVar32 = *(long *)(param_2 + 0xd8);
          lVar29 = *(long *)(lVar32 + 0x30) + (long)*(short *)(puVar27 + 5) * 8;
          puVar6 = (ushort *)(*(long *)(lVar32 + 0x50) + (long)*(short *)(puVar27 + 5) * 2);
          uVar26 = (ulong)*puVar6;
          lVar21 = *(long *)(lVar32 + 0x40);
          bVar11 = *(byte *)((long)puVar27 + 0x1a);
          lVar32 = (ulong)*(ushort *)(lVar29 + 2) * (ulong)bVar11;
          uVar12 = *(ushort *)(lVar21 + (*(byte *)(lVar29 + 7) + uVar26) * 8 + 4);
          sVar13 = *(short *)((long)puVar27 + 0x16);
          uVar26 = lVar32 + (ulong)*(ushort *)(lVar21 + uVar26 * 8 + 4);
          uVar20 = (lVar32 + (ulong)*(byte *)(lVar29 + 6) +
                   (ulong)*(ushort *)(lVar21 + (ulong)puVar6[1] * 8 + -4)) - 1;
          if ((int)uVar26 <= (int)uVar20) {
            if ((long)uVar20 <= (long)uVar26) {
              uVar20 = uVar26;
            }
            uVar10 = ((int)uVar20 - (int)uVar26) + 1;
            uVar38 = uVar20 - uVar26;
            if ((uVar10 & 7) != 0) {
              lVar29 = -((ulong)uVar10 & 7);
              do {
                *(undefined4 *)(lVar19 + uVar26 * 4) = 0x28800000;
                uVar26 = uVar26 + 1;
                bVar17 = lVar29 != -1;
                lVar29 = lVar29 + 1;
              } while (bVar17);
            }
            if (6 < uVar38) {
              lVar29 = ~uVar20 + uVar26;
              puVar35 = (undefined8 *)(lVar19 + 0x10 + uVar26 * 4);
              do {
                puVar35[-2] = 0x2880000028800000;
                puVar35[-1] = 0x2880000028800000;
                lVar29 = lVar29 + 8;
                *puVar35 = 0x2880000028800000;
                puVar35[1] = 0x2880000028800000;
                puVar35 = puVar35 + 4;
              } while (lVar29 != 0);
            }
          }
          *(undefined4 *)(lVar19 + ((ulong)uVar12 + (ulong)bVar11 + lVar32) * 4) = 0x3f800000;
          *(undefined4 *)(*(long *)(param_2 + 0xf0) + (long)sVar13 * 4) = *puVar27;
        }
        puVar27 = puVar27 + 8;
      } while (puVar27 != puVar5);
    }
    else {
      do {
        if (*(char *)((long)puVar27 + 0x1b) != '\0') {
          lVar32 = *(long *)(param_2 + 0xd8);
          lVar29 = *(long *)(lVar32 + 0x30) + (long)*(short *)(puVar27 + 5) * 8;
          puVar6 = (ushort *)(*(long *)(lVar32 + 0x50) + (long)*(short *)(puVar27 + 5) * 2);
          uVar26 = (ulong)*puVar6;
          lVar21 = *(long *)(lVar32 + 0x40);
          bVar11 = *(byte *)((long)puVar27 + 0x1a);
          lVar32 = (ulong)*(ushort *)(lVar29 + 2) * (ulong)bVar11;
          uVar12 = *(ushort *)(lVar21 + (*(byte *)(lVar29 + 7) + uVar26) * 8 + 4);
          sVar13 = *(short *)((long)puVar27 + 0x16);
          uVar26 = lVar32 + (ulong)*(ushort *)(lVar21 + uVar26 * 8 + 4);
          uVar20 = (lVar32 + (ulong)*(byte *)(lVar29 + 6) +
                   (ulong)*(ushort *)(lVar21 + (ulong)puVar6[1] * 8 + -4)) - 1;
          if ((int)uVar26 <= (int)uVar20) {
            if ((long)uVar20 <= (long)uVar26) {
              uVar20 = uVar26;
            }
            uVar10 = ((int)uVar20 - (int)uVar26) + 1;
            uVar38 = uVar20 - uVar26;
            if ((uVar10 & 7) != 0) {
              lVar29 = -((ulong)uVar10 & 7);
              do {
                *(undefined4 *)(lVar19 + uVar26 * 4) = 0x28800000;
                uVar26 = uVar26 + 1;
                bVar17 = lVar29 != -1;
                lVar29 = lVar29 + 1;
              } while (bVar17);
            }
            if (6 < uVar38) {
              lVar29 = ~uVar20 + uVar26;
              puVar35 = (undefined8 *)(lVar19 + 0x10 + uVar26 * 4);
              do {
                puVar35[-2] = 0x2880000028800000;
                puVar35[-1] = 0x2880000028800000;
                lVar29 = lVar29 + 8;
                *puVar35 = 0x2880000028800000;
                puVar35[1] = 0x2880000028800000;
                puVar35 = puVar35 + 4;
              } while (lVar29 != 0);
            }
          }
          *(undefined4 *)(lVar19 + ((ulong)uVar12 + (ulong)bVar11 + lVar32) * 4) = 0x3f800000;
          *(undefined4 *)(*(long *)(param_2 + 0xf0) + (long)sVar13 * 4) = *puVar27;
          *(undefined4 *)(*(long *)(param_2 + 0x100) + (long)*(short *)((long)puVar27 + 0x16) * 4) =
               *puVar27;
        }
        puVar27 = puVar27 + 8;
      } while (puVar27 != puVar5);
    }
    if (*(int *)(param_2 + 0xa0) != 0) {
      pfVar28 = *(float **)(param_2 + 0x98);
      uVar45 = NEON_fmov(0x3f800000,4);
      pfVar7 = pfVar28 + (long)*(int *)(param_2 + 0xa0) * 8;
      do {
        if ((((-1e+06 < pfVar28[1]) && (pfVar28[2] < 1e+06)) && (0 < iVar23)) &&
           (*(char *)((long)pfVar28 + 0x1b) == '\0')) {
          lVar25 = *(long *)(param_2 + 0xd8);
          lVar21 = (long)*(short *)(pfVar28 + 5);
          lVar29 = *(long *)(lVar25 + 0x30) + lVar21 * 8;
          uVar12 = *(ushort *)(*(long *)(lVar25 + 0x50) + lVar21 * 2);
          uVar26 = (ulong)uVar12;
          uVar15 = *(ushort *)(*(long *)(lVar25 + 0x50) + (lVar21 + 1) * 2);
          uVar20 = (ulong)*(byte *)((long)pfVar28 + 0x1a);
          lVar31 = *(long *)(param_2 + 0x100);
          lVar32 = (long)*(short *)((long)pfVar28 + 0x16);
          fVar48 = *(float *)(lVar19 + (*(ushort *)
                                         (*(long *)(lVar25 + 0x40) +
                                          (*(byte *)(lVar29 + 7) + uVar26) * 8 + 4) + uVar20 +
                                       *(ushort *)(lVar29 + 2) * uVar20) * 4);
          iVar50 = -(uint)(fVar48 == 0.0);
          fVar44 = 0.0;
          if (uVar12 < uVar15) {
            fVar44 = 0.0;
            do {
              lVar29 = *(long *)(lVar25 + 0x40) + uVar26 * 8;
              lVar34 = *(long *)(lVar25 + 0x30) + (ulong)*(ushort *)(lVar29 + 2) * 8;
              uVar38 = (ulong)*(byte *)(lVar34 + 6);
              if (uVar38 != 0) {
                lVar29 = (ulong)*(ushort *)(lVar29 + 4) + *(ushort *)(lVar34 + 2) * uVar20;
                uVar39 = uVar38 & 3;
                if (uVar38 - 1 < 3) {
                  uVar41 = 0;
                }
                else {
                  uVar41 = 0;
                  pfVar30 = (float *)(lVar31 + 8 + (ulong)*(ushort *)(lVar34 + 4) * 4);
                  pfVar33 = (float *)(lVar19 + 8 + lVar29 * 4);
                  do {
                    uVar41 = uVar41 + 4;
                    fVar44 = fVar44 + pfVar33[-2] * pfVar30[-2] + pfVar33[-1] * pfVar30[-1] +
                             *pfVar33 * *pfVar30 + pfVar33[1] * pfVar30[1];
                    pfVar30 = pfVar30 + 4;
                    pfVar33 = pfVar33 + 4;
                  } while ((uVar38 & 0xfc) != uVar41);
                }
                if ((*(byte *)(lVar34 + 6) & 3) != 0) {
                  pfVar30 = (float *)(lVar31 + (uVar41 + *(ushort *)(lVar34 + 4)) * 4);
                  pfVar33 = (float *)(lVar19 + (uVar41 + lVar29) * 4);
                  do {
                    uVar39 = uVar39 - 1;
                    fVar44 = fVar44 + *pfVar33 * *pfVar30;
                    pfVar30 = pfVar30 + 1;
                    pfVar33 = pfVar33 + 1;
                  } while (uVar39 != 0);
                }
              }
              uVar26 = uVar26 + 1;
            } while (uVar26 != uVar15);
          }
          fVar54 = *(float *)(*(long *)(param_2 + 0xf0) + lVar32 * 4);
          fVar48 = *pfVar28 +
                   (float)((uint)((float)uVar45 / fVar48) &
                          CONCAT13(~(byte)((uint)iVar50 >> 0x18),
                                   CONCAT12(~(byte)((uint)iVar50 >> 0x10),
                                            CONCAT11(~(byte)((uint)iVar50 >> 8),~(byte)iVar50)))) *
                   (fVar54 - (fVar44 - fVar48 * *(float *)(lVar31 + lVar32 * 4)));
          fVar44 = pfVar28[1] + pfVar28[3];
          if ((fVar48 < fVar44 * (float)(&DAT_03cb5660)[fVar44 < 0.0]) ||
             (fVar44 = pfVar28[2] + pfVar28[4],
             fVar44 * (float)(&DAT_03cb5660)[0.0 < fVar44] < fVar48)) {
            fVar44 = pfVar28[3];
            if ((*(byte *)((long)pfVar28 + 0x1d) | 2) != 3) {
              fVar44 = pfVar28[4];
            }
            fVar44 = fVar44 - *pfVar28;
            fVar48 = fVar44 * -0.1;
            if (0.0 <= fVar54 * fVar44) {
              fVar48 = fVar44;
            }
            *pfVar28 = fVar48;
            *(undefined1 *)((long)pfVar28 + 0x1b) = 1;
            lVar31 = *(long *)(param_2 + 0xd8);
            lVar34 = *(long *)(lVar31 + 0x40);
            lVar29 = *(long *)(lVar31 + 0x30) + lVar21 * 8;
            uVar26 = (ulong)*(ushort *)(*(long *)(lVar31 + 0x50) + lVar21 * 2);
            lVar25 = *(ushort *)(lVar29 + 2) * uVar20;
            uVar12 = *(ushort *)(lVar34 + (*(byte *)(lVar29 + 7) + uVar26) * 8 + 4);
            uVar26 = lVar25 + (ulong)*(ushort *)(lVar34 + uVar26 * 8 + 4);
            uVar38 = (lVar25 + (ulong)*(byte *)(lVar29 + 6) +
                     (ulong)*(ushort *)
                             (lVar34 + (ulong)*(ushort *)
                                               (*(long *)(lVar31 + 0x50) + (lVar21 + 1) * 2) * 8 +
                             -4)) - 1;
            if ((int)uVar26 <= (int)uVar38) {
              if ((long)uVar38 <= (long)uVar26) {
                uVar38 = uVar26;
              }
              uVar10 = ((int)uVar38 - (int)uVar26) + 1;
              uVar39 = uVar38 - uVar26;
              if ((uVar10 & 7) != 0) {
                lVar29 = -((ulong)uVar10 & 7);
                do {
                  *(undefined4 *)(lVar19 + uVar26 * 4) = 0x28800000;
                  uVar26 = uVar26 + 1;
                  bVar17 = lVar29 != -1;
                  lVar29 = lVar29 + 1;
                } while (bVar17);
              }
              if (6 < uVar39) {
                lVar29 = ~uVar38 + uVar26;
                puVar35 = (undefined8 *)(lVar19 + 0x10 + uVar26 * 4);
                do {
                  puVar35[-2] = 0x2880000028800000;
                  puVar35[-1] = 0x2880000028800000;
                  lVar29 = lVar29 + 8;
                  *puVar35 = 0x2880000028800000;
                  puVar35[1] = 0x2880000028800000;
                  puVar35 = puVar35 + 4;
                } while (lVar29 != 0);
              }
            }
            *(undefined4 *)(lVar19 + (uVar12 + uVar20 + lVar25) * 4) = 0x3f800000;
            *(float *)(*(long *)(param_2 + 0xf0) + lVar32 * 4) = *pfVar28;
          }
        }
        pfVar28 = pfVar28 + 8;
      } while (pfVar28 != pfVar7);
    }
  }
  if (0 < *(int *)(param_2 + 0x18c)) {
    uVar26 = *(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0);
    iVar23 = *(int *)(param_2 + 0x108);
    iVar50 = (int)(uVar26 >> 2);
    if (iVar23 != iVar50) {
      if ((int)(*(uint *)(param_2 + 0x10c) & 0x7fffffff) < iVar50) {
        FUN_00cb59d4(param_2 + 0x100,PTR_PTR_047d1a50,(long)(uVar26 * 0x40000000) >> 0x20);
        iVar23 = *(int *)(param_2 + 0x108);
      }
      if ((iVar23 < iVar50) || (iVar50 < iVar23)) {
        *(int *)(param_2 + 0x108) = iVar50;
      }
    }
  }
  return;
}



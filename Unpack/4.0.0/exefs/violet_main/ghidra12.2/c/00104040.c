/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00104040; name: FUN_00104040
 */


void FUN_00104040(float *param_1,uint param_2,uint param_3,long *param_4,long param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  ushort uVar4;
  byte bVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  int iVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  ulong uVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  float *pfVar35;
  uint uVar36;
  ushort uVar37;
  ushort uVar38;
  ushort uVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  ulong uVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float local_d0 [28];
  
  uVar30 = 0x40 - (int)param_4[2];
  uVar31 = (ulong)uVar30;
  lVar28 = *param_4 + -8;
  uVar29 = (ulong)(uint)((param_6 - (int)lVar28) * 8);
  if (uVar29 < (uVar31 + (param_3 * 8 + 0x3a) & 0x1fffffff8)) {
LAB_00104094:
    uVar29 = (ulong)(param_2 << 2) + 0x1f >> 5;
    do {
      uVar29 = uVar29 - 1;
      param_1[4] = 0.0;
      param_1[5] = 0.0;
      param_1[6] = 0.0;
      param_1[7] = 0.0;
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      param_1 = param_1 + 8;
    } while (uVar29 != 0);
  }
  else {
    uVar33 = *(ulong *)(lVar28 + (ulong)(uVar30 >> 3)) >> (uVar31 & 7);
    uVar32 = uVar31 + 0x3a;
    fVar45 = (float)((uint)uVar33 >> 5 & 0x7fffff);
    fVar46 = *(float *)(&DAT_03cac4d4 + (uVar33 & 0x1f) * 4) * fVar45;
    if ((uVar33 & 0x10000000) != 0) {
      fVar46 = -(*(float *)(&DAT_03cac4d4 + (uVar33 & 0x1f) * 4) * fVar45);
    }
    *param_1 = fVar46;
    uVar31 = *(ulong *)(lVar28 + (uVar31 + 0x1d >> 3)) >> (uVar31 + 0x1d & 7);
    fVar45 = (float)((uint)uVar31 >> 5 & 0x7fffff);
    fVar46 = *(float *)(&DAT_03cac4d4 + (uVar31 & 0x1f) * 4) * fVar45;
    if ((uVar31 & 0x10000000) != 0) {
      fVar46 = -(*(float *)(&DAT_03cac4d4 + (uVar31 & 0x1f) * 4) * fVar45);
    }
    param_1[1] = fVar46;
    local_d0[1] = 0.0;
    if (param_3 != 0) {
      uVar31 = (ulong)param_3;
      pfVar35 = local_d0 + 2;
      do {
        uVar33 = uVar32 >> 3;
        uVar30 = (uint)uVar32;
        uVar32 = uVar32 + 7;
        uVar30 = *(uint *)(lVar28 + uVar33) >> (ulong)(uVar30 & 7) & 0x7f;
        if (0x5e < uVar30) {
          uVar30 = 0x5f;
        }
        uVar31 = uVar31 - 1;
        *pfVar35 = *(float *)(&DAT_03cac354 + (ulong)uVar30 * 4);
        pfVar35 = pfVar35 + 1;
      } while (uVar31 != 0);
    }
    if (2 < param_2) {
      lVar34 = 0;
      uVar33 = (ulong)param_2;
      uVar31 = 2;
      do {
        if (uVar29 < (uVar32 + 9 & 0xfffffffffffffff8)) goto LAB_00104094;
        uVar30 = *(uint *)(lVar28 + (uVar32 >> 3)) >> (uVar32 & 7);
        if ((uVar30 & 1) == 0) {
          uVar24 = uVar30 >> 1;
          lVar40 = 8;
          uVar32 = uVar32 + 5;
        }
        else {
          uVar24 = uVar30 >> 5;
          lVar40 = (ulong)(byte)(&DAT_03cabc90)[(ulong)(uVar30 >> 1) & 0xf] << 3;
          uVar32 = uVar32 + 9;
        }
        uVar11 = uVar33;
        if (lVar40 + uVar31 <= uVar33) {
          uVar11 = lVar40 + uVar31;
        }
        uVar30 = uVar24 & 0xf;
        if ((uVar24 & 0xf) == 0) {
          uVar44 = (uVar11 - uVar31) * 4 + 0x1f >> 5;
          pfVar35 = param_1 + uVar31;
          do {
            uVar44 = uVar44 - 1;
            pfVar35[4] = 0.0;
            pfVar35[5] = 0.0;
            pfVar35[6] = 0.0;
            pfVar35[7] = 0.0;
            pfVar35[0] = 0.0;
            pfVar35[1] = 0.0;
            pfVar35[2] = 0.0;
            pfVar35[3] = 0.0;
            pfVar35 = pfVar35 + 8;
          } while (uVar44 != 0);
          uVar31 = uVar11;
        }
        else {
          uVar43 = uVar11 - uVar31;
          uVar44 = uVar32 + uVar43 * uVar30;
          if (uVar29 < (uVar44 + uVar43 & 0xfffffffffffffff8) ||
              uVar29 < (uVar44 + 8 & 0xfffffffffffffff8)) goto LAB_00104094;
          if (uVar30 - 1 < 0xf) {
            pfVar35 = param_1 + uVar31;
            switch(uVar30) {
            case 1:
              uVar41 = 0;
              if ((uVar43 & 0xfffffffffffffff8) != 0) {
                pfVar35 = param_1 + uVar31 + 4;
                do {
                  uVar42 = uVar32 + uVar41;
                  uVar41 = uVar41 + 8;
                  uVar36 = *(uint *)(lVar28 + (uVar44 >> 3)) >> (ulong)((uint)uVar44 & 7);
                  uVar26 = (uint)(*(ulong *)(lVar28 + (uVar42 >> 3)) >> (uVar32 & 7));
                  uVar30 = uVar26 & 1;
                  uVar27 = uVar26 >> 1 & 1;
                  uVar24 = -uVar30;
                  if ((uVar36 & 1) == 0) {
                    uVar24 = uVar30;
                  }
                  uVar17 = uVar26 >> 2 & 1;
                  uVar1 = uVar27 + uVar30 + uVar17;
                  uVar18 = uVar26 >> 3 & 1;
                  uVar8 = -uVar27;
                  if ((1 << (ulong)uVar30 & uVar36) == 0) {
                    uVar8 = uVar27;
                  }
                  uVar2 = uVar1 + uVar18;
                  uVar9 = -uVar17;
                  if ((1 << (ulong)(uVar27 + uVar30) & uVar36) == 0) {
                    uVar9 = uVar17;
                  }
                  uVar17 = uVar26 >> 4 & 1;
                  uVar30 = uVar2 + uVar17;
                  uVar27 = -uVar18;
                  if ((1 << (ulong)uVar1 & uVar36) == 0) {
                    uVar27 = uVar18;
                  }
                  uVar1 = -uVar17;
                  if ((1 << (ulong)uVar2 & uVar36) == 0) {
                    uVar1 = uVar17;
                  }
                  uVar17 = uVar26 >> 5 & 1;
                  sVar13 = (short)uVar17;
                  uVar17 = uVar30 + uVar17;
                  sVar6 = -sVar13;
                  if ((1 << (ulong)uVar30 & uVar36) == 0) {
                    sVar6 = sVar13;
                  }
                  uVar30 = uVar26 >> 6 & 1;
                  sVar14 = (short)uVar30;
                  uVar30 = uVar17 + uVar30;
                  sVar13 = -sVar14;
                  if ((1 << (ulong)(uVar17 & 0x1f) & uVar36) == 0) {
                    sVar13 = sVar14;
                  }
                  uVar26 = uVar26 >> 7 & 1;
                  sVar15 = (short)uVar26;
                  sVar14 = -sVar15;
                  if ((1 << (ulong)(uVar30 & 0x1f) & uVar36) == 0) {
                    sVar14 = sVar15;
                  }
                  uVar44 = uVar44 + (byte)((char)uVar30 + (char)uVar26);
                  auVar47._0_4_ = (int)(short)uVar24;
                  auVar47._4_4_ = (int)(short)uVar8;
                  auVar47._8_4_ = (int)(short)uVar9;
                  auVar47._12_4_ = (int)(short)uVar27;
                  auVar60._0_4_ = (int)(short)uVar1;
                  auVar60._4_4_ = (int)sVar6;
                  auVar60._8_4_ = (int)sVar13;
                  auVar60._12_4_ = (int)sVar14;
                  auVar58 = NEON_scvtf(auVar47,4);
                  auVar67 = NEON_scvtf(auVar60,4);
                  *(long *)(pfVar35 + -2) = auVar58._8_8_;
                  *(long *)(pfVar35 + -4) = auVar58._0_8_;
                  *(long *)(pfVar35 + 2) = auVar67._8_8_;
                  *(long *)pfVar35 = auVar67._0_8_;
                  pfVar35 = pfVar35 + 8;
                } while (uVar41 < (uVar43 & 0xfffffffffffffff8));
                uVar32 = uVar32 + uVar41;
              }
              if (uVar41 < uVar43) {
                lVar40 = (uVar11 - uVar41) - uVar31;
                pfVar35 = param_1 + uVar31 + uVar41;
                do {
                  uVar43 = uVar32 >> 3;
                  uVar41 = uVar44 >> 3;
                  uVar42 = uVar32 & 7;
                  uVar32 = uVar32 + 1;
                  uVar30 = (uint)uVar44;
                  uVar43 = (ulong)(*(uint *)(lVar28 + uVar43) >> uVar42) & 1;
                  uVar44 = uVar44 + uVar43;
                  iVar23 = (int)uVar43;
                  iVar10 = -iVar23;
                  if ((1 << (ulong)(uVar30 & 7) & *(uint *)(lVar28 + uVar41)) == 0) {
                    iVar10 = iVar23;
                  }
                  lVar40 = lVar40 + -1;
                  *pfVar35 = (float)iVar10;
                  pfVar35 = pfVar35 + 1;
                } while (lVar40 != 0);
              }
              break;
            case 2:
              uVar41 = 0;
              if ((uVar43 & 0xfffffffffffffff8) != 0) {
                pfVar35 = param_1 + uVar31 + 4;
                uVar42 = uVar32 & 7;
                do {
                  uVar25 = *(ulong *)(lVar28 + (uVar32 >> 3)) >> uVar42;
                  uVar30 = *(uint *)(lVar28 + (uVar44 >> 3)) >> (ulong)((uint)uVar44 & 7);
                  uVar24 = (uint)uVar25;
                  uVar4 = (ushort)uVar25 & 3;
                  uVar7 = -uVar4;
                  if ((uVar30 & 1) == 0) {
                    uVar7 = uVar4;
                  }
                  bVar19 = (uVar25 & 3) != 0;
                  uVar36 = 2;
                  if (!bVar19) {
                    uVar36 = 1;
                  }
                  uVar26 = (uint)bVar19;
                  uVar27 = uVar26;
                  if ((uVar24 >> 2 & 3) != 0) {
                    uVar27 = uVar36;
                  }
                  uVar21 = (ushort)(uVar24 >> 2) & 3;
                  uVar39 = (ushort)(uVar25 >> 8) & 3;
                  uVar4 = -uVar21;
                  if ((1 << (ulong)uVar26 & uVar30) == 0) {
                    uVar4 = uVar21;
                  }
                  uVar36 = uVar27;
                  if ((uVar24 >> 4 & 3) != 0) {
                    uVar36 = uVar27 + 1;
                  }
                  uVar22 = (ushort)(uVar24 >> 4) & 3;
                  uVar38 = (ushort)(uVar24 >> 6) & 3;
                  uVar21 = -uVar22;
                  if ((1 << (ulong)uVar27 & uVar30) == 0) {
                    uVar21 = uVar22;
                  }
                  uVar27 = uVar36;
                  if ((uVar24 >> 6 & 3) != 0) {
                    uVar27 = uVar36 + 1;
                  }
                  uVar25 = (ulong)uVar27;
                  uVar22 = -uVar38;
                  if ((1 << (ulong)uVar36 & uVar30) == 0) {
                    uVar22 = uVar38;
                  }
                  if ((uVar24 >> 8 & 3) != 0) {
                    uVar27 = uVar27 + 1;
                  }
                  uVar38 = -uVar39;
                  if ((1 << uVar25 & uVar30) == 0) {
                    uVar38 = uVar39;
                  }
                  uVar36 = uVar27;
                  if ((uVar24 >> 10 & 3) != 0) {
                    uVar36 = uVar27 + 1;
                  }
                  uVar16 = (ushort)(uVar24 >> 10) & 3;
                  uVar20 = (ushort)(uVar24 >> 0xc) & 3;
                  uVar39 = -uVar16;
                  if ((1 << (ulong)uVar27 & uVar30) == 0) {
                    uVar39 = uVar16;
                  }
                  uVar27 = uVar36;
                  if ((uVar24 >> 0xc & 3) != 0) {
                    uVar27 = uVar36 + 1;
                  }
                  bVar5 = (byte)uVar27;
                  uVar16 = -uVar20;
                  if ((1 << (ulong)(uVar36 & 0x1f) & uVar30) == 0) {
                    uVar16 = uVar20;
                  }
                  uVar20 = (ushort)(uVar24 >> 0xe) & 3;
                  if ((uVar24 >> 0xe & 3) != 0) {
                    bVar5 = bVar5 + 1;
                  }
                  uVar37 = -uVar20;
                  if ((1 << (ulong)(uVar27 & 0x1f) & uVar30) == 0) {
                    uVar37 = uVar20;
                  }
                  auVar48._0_4_ = (int)(short)uVar7;
                  auVar48._4_4_ = (int)(short)uVar4;
                  auVar48._8_4_ = (int)(short)uVar21;
                  auVar48._12_4_ = (int)(short)uVar22;
                  auVar58 = NEON_scvtf(auVar48,4);
                  uVar44 = uVar44 + bVar5;
                  auVar61._0_4_ = (int)(short)uVar38;
                  auVar61._4_4_ = (int)(short)uVar39;
                  auVar61._8_4_ = (int)(short)uVar16;
                  auVar61._12_4_ = (int)(short)uVar37;
                  auVar67 = NEON_scvtf(auVar61,4);
                  uVar41 = uVar41 + 8;
                  uVar32 = uVar32 + 0x10;
                  *(long *)(pfVar35 + -2) = auVar58._8_8_;
                  *(long *)(pfVar35 + -4) = auVar58._0_8_;
                  *(long *)(pfVar35 + 2) = auVar67._8_8_;
                  *(long *)pfVar35 = auVar67._0_8_;
                  pfVar35 = pfVar35 + 8;
                } while (uVar41 < (uVar43 & 0xfffffffffffffff8));
              }
              if (uVar41 < uVar43) {
                lVar40 = (uVar11 - uVar41) - uVar31;
                pfVar35 = param_1 + uVar31 + uVar41;
                do {
                  uVar36 = *(uint *)(lVar28 + (uVar32 >> 3)) >> (ulong)((uint)uVar32 & 7);
                  uVar30 = uVar36 & 3;
                  uVar24 = -uVar30;
                  if ((1 << (ulong)((uint)uVar44 & 7) & *(uint *)(lVar28 + (uVar44 >> 3))) == 0) {
                    uVar24 = uVar30;
                  }
                  uVar32 = uVar32 + 2;
                  if ((uVar36 & 3) != 0) {
                    uVar44 = uVar44 + 1;
                  }
                  *pfVar35 = (float)(int)uVar24;
                  lVar40 = lVar40 + -1;
                  pfVar35 = pfVar35 + 1;
                } while (lVar40 != 0);
              }
              break;
            case 3:
              uVar41 = 0;
              if ((uVar43 & 0xfffffffffffffff8) != 0) {
                pfVar35 = param_1 + uVar31 + 4;
                uVar42 = uVar32 & 7;
                do {
                  uVar25 = *(ulong *)(lVar28 + (uVar32 >> 3)) >> uVar42;
                  uVar30 = *(uint *)(lVar28 + (uVar44 >> 3)) >> (ulong)((uint)uVar44 & 7);
                  uVar24 = (uint)uVar25;
                  uVar4 = (ushort)uVar25 & 7;
                  uVar7 = -uVar4;
                  if ((uVar30 & 1) == 0) {
                    uVar7 = uVar4;
                  }
                  bVar19 = (uVar25 & 7) != 0;
                  uVar36 = 2;
                  if (!bVar19) {
                    uVar36 = 1;
                  }
                  uVar26 = (uint)bVar19;
                  uVar27 = uVar26;
                  if ((uVar24 >> 3 & 7) != 0) {
                    uVar27 = uVar36;
                  }
                  uVar21 = (ushort)(uVar24 >> 3) & 7;
                  uVar39 = (ushort)(uVar24 >> 0xc) & 7;
                  uVar4 = -uVar21;
                  if ((1 << (ulong)uVar26 & uVar30) == 0) {
                    uVar4 = uVar21;
                  }
                  uVar36 = uVar27;
                  if ((uVar24 >> 6 & 7) != 0) {
                    uVar36 = uVar27 + 1;
                  }
                  uVar22 = (ushort)(uVar24 >> 6) & 7;
                  uVar38 = (ushort)(uVar24 >> 9) & 7;
                  uVar21 = -uVar22;
                  if ((1 << (ulong)uVar27 & uVar30) == 0) {
                    uVar21 = uVar22;
                  }
                  uVar27 = uVar36;
                  if ((uVar24 >> 9 & 7) != 0) {
                    uVar27 = uVar36 + 1;
                  }
                  uVar12 = (ulong)uVar27;
                  uVar22 = -uVar38;
                  if ((1 << (ulong)uVar36 & uVar30) == 0) {
                    uVar22 = uVar38;
                  }
                  if ((uVar24 >> 0xc & 7) != 0) {
                    uVar27 = uVar27 + 1;
                  }
                  uVar38 = -uVar39;
                  if ((1 << uVar12 & uVar30) == 0) {
                    uVar38 = uVar39;
                  }
                  uVar36 = uVar27;
                  if ((uVar24 >> 0xf & 7) != 0) {
                    uVar36 = uVar27 + 1;
                  }
                  uVar16 = (ushort)(uVar24 >> 0xf) & 7;
                  uVar37 = (ushort)(uVar25 >> 0x10);
                  uVar20 = uVar37 >> 2 & 7;
                  uVar39 = -uVar16;
                  if ((1 << (ulong)uVar27 & uVar30) == 0) {
                    uVar39 = uVar16;
                  }
                  uVar27 = uVar36;
                  if ((uVar24 >> 0x12 & 7) != 0) {
                    uVar27 = uVar36 + 1;
                  }
                  bVar5 = (byte)uVar27;
                  uVar16 = -uVar20;
                  if ((1 << (ulong)(uVar36 & 0x1f) & uVar30) == 0) {
                    uVar16 = uVar20;
                  }
                  uVar20 = uVar37 >> 5 & 7;
                  if ((uVar24 >> 0x15 & 7) != 0) {
                    bVar5 = bVar5 + 1;
                  }
                  uVar37 = -uVar20;
                  if ((1 << (ulong)(uVar27 & 0x1f) & uVar30) == 0) {
                    uVar37 = uVar20;
                  }
                  auVar49._0_4_ = (int)(short)uVar7;
                  auVar49._4_4_ = (int)(short)uVar4;
                  auVar49._8_4_ = (int)(short)uVar21;
                  auVar49._12_4_ = (int)(short)uVar22;
                  auVar58 = NEON_scvtf(auVar49,4);
                  uVar44 = uVar44 + bVar5;
                  auVar62._0_4_ = (int)(short)uVar38;
                  auVar62._4_4_ = (int)(short)uVar39;
                  auVar62._8_4_ = (int)(short)uVar16;
                  auVar62._12_4_ = (int)(short)uVar37;
                  auVar67 = NEON_scvtf(auVar62,4);
                  uVar41 = uVar41 + 8;
                  uVar32 = uVar32 + 0x18;
                  *(long *)(pfVar35 + -2) = auVar58._8_8_;
                  *(long *)(pfVar35 + -4) = auVar58._0_8_;
                  *(long *)(pfVar35 + 2) = auVar67._8_8_;
                  *(long *)pfVar35 = auVar67._0_8_;
                  pfVar35 = pfVar35 + 8;
                } while (uVar41 < (uVar43 & 0xfffffffffffffff8));
              }
              if (uVar41 < uVar43) {
                lVar40 = (uVar11 - uVar41) - uVar31;
                pfVar35 = param_1 + uVar31 + uVar41;
                do {
                  uVar36 = *(uint *)(lVar28 + (uVar32 >> 3)) >> (ulong)((uint)uVar32 & 7);
                  uVar30 = uVar36 & 7;
                  uVar24 = -uVar30;
                  if ((1 << (ulong)((uint)uVar44 & 7) & *(uint *)(lVar28 + (uVar44 >> 3))) == 0) {
                    uVar24 = uVar30;
                  }
                  uVar32 = uVar32 + 3;
                  if ((uVar36 & 7) != 0) {
                    uVar44 = uVar44 + 1;
                  }
                  *pfVar35 = (float)(int)uVar24;
                  lVar40 = lVar40 + -1;
                  pfVar35 = pfVar35 + 1;
                } while (lVar40 != 0);
              }
              break;
            case 4:
              uVar41 = 0;
              if ((uVar43 & 0xfffffffffffffff8) != 0) {
                pfVar35 = param_1 + uVar31 + 4;
                uVar42 = uVar32 & 7;
                do {
                  uVar25 = *(ulong *)(lVar28 + (uVar32 >> 3)) >> uVar42;
                  uVar30 = *(uint *)(lVar28 + (uVar44 >> 3)) >> (ulong)((uint)uVar44 & 7);
                  uVar24 = (uint)uVar25;
                  uVar4 = (ushort)uVar25 & 0xf;
                  uVar7 = -uVar4;
                  if ((uVar30 & 1) == 0) {
                    uVar7 = uVar4;
                  }
                  bVar19 = (uVar25 & 0xf) != 0;
                  uVar36 = 2;
                  if (!bVar19) {
                    uVar36 = 1;
                  }
                  uVar26 = (uint)bVar19;
                  uVar27 = uVar26;
                  if ((uVar24 >> 4 & 0xf) != 0) {
                    uVar27 = uVar36;
                  }
                  uVar21 = (ushort)(uVar24 >> 4) & 0xf;
                  uVar22 = (ushort)(uVar25 >> 0x10);
                  uVar39 = uVar22 & 0xf;
                  uVar4 = -uVar21;
                  if ((1 << (ulong)uVar26 & uVar30) == 0) {
                    uVar4 = uVar21;
                  }
                  uVar36 = uVar27;
                  if ((uVar24 >> 8 & 0xf) != 0) {
                    uVar36 = uVar27 + 1;
                  }
                  uVar38 = (ushort)(uVar25 >> 8) & 0xf;
                  uVar16 = (ushort)(uVar24 >> 0xc) & 0xf;
                  uVar21 = -uVar38;
                  if ((1 << (ulong)uVar27 & uVar30) == 0) {
                    uVar21 = uVar38;
                  }
                  uVar27 = uVar36;
                  if ((uVar24 >> 0xc & 0xf) != 0) {
                    uVar27 = uVar36 + 1;
                  }
                  uVar12 = (ulong)uVar27;
                  uVar38 = -uVar16;
                  if ((1 << (ulong)uVar36 & uVar30) == 0) {
                    uVar38 = uVar16;
                  }
                  if ((uVar24 >> 0x10 & 0xf) != 0) {
                    uVar27 = uVar27 + 1;
                  }
                  uVar16 = -uVar39;
                  if ((1 << uVar12 & uVar30) == 0) {
                    uVar16 = uVar39;
                  }
                  uVar36 = uVar27;
                  if ((uVar24 >> 0x14 & 0xf) != 0) {
                    uVar36 = uVar27 + 1;
                  }
                  uVar22 = uVar22 >> 4 & 0xf;
                  uVar20 = (byte)(uVar25 >> 0x18) & 0xf;
                  uVar39 = -uVar22;
                  if ((1 << (ulong)uVar27 & uVar30) == 0) {
                    uVar39 = uVar22;
                  }
                  uVar27 = uVar36;
                  if ((uVar24 >> 0x18 & 0xf) != 0) {
                    uVar27 = uVar36 + 1;
                  }
                  bVar5 = (byte)uVar27;
                  uVar22 = -uVar20;
                  if ((1 << (ulong)(uVar36 & 0x1f) & uVar30) == 0) {
                    uVar22 = uVar20;
                  }
                  uVar20 = (ushort)(uVar25 >> 0x1c) & 0xf;
                  if ((uVar25 >> 0x1c & 0xf) != 0) {
                    bVar5 = bVar5 + 1;
                  }
                  uVar37 = -uVar20;
                  if ((1 << (ulong)(uVar27 & 0x1f) & uVar30) == 0) {
                    uVar37 = uVar20;
                  }
                  auVar50._0_4_ = (int)(short)uVar7;
                  auVar50._4_4_ = (int)(short)uVar4;
                  auVar50._8_4_ = (int)(short)uVar21;
                  auVar50._12_4_ = (int)(short)uVar38;
                  auVar58 = NEON_scvtf(auVar50,4);
                  uVar44 = uVar44 + bVar5;
                  auVar63._0_4_ = (int)(short)uVar16;
                  auVar63._4_4_ = (int)(short)uVar39;
                  auVar63._8_4_ = (int)(short)uVar22;
                  auVar63._12_4_ = (int)(short)uVar37;
                  auVar67 = NEON_scvtf(auVar63,4);
                  uVar41 = uVar41 + 8;
                  uVar32 = uVar32 + 0x20;
                  *(long *)(pfVar35 + -2) = auVar58._8_8_;
                  *(long *)(pfVar35 + -4) = auVar58._0_8_;
                  *(long *)(pfVar35 + 2) = auVar67._8_8_;
                  *(long *)pfVar35 = auVar67._0_8_;
                  pfVar35 = pfVar35 + 8;
                } while (uVar41 < (uVar43 & 0xfffffffffffffff8));
              }
              if (uVar41 < uVar43) {
                lVar40 = (uVar11 - uVar41) - uVar31;
                pfVar35 = param_1 + uVar31 + uVar41;
                do {
                  uVar36 = *(uint *)(lVar28 + (uVar32 >> 3)) >> (ulong)((uint)uVar32 & 7);
                  uVar30 = uVar36 & 0xf;
                  uVar24 = -uVar30;
                  if ((1 << (ulong)((uint)uVar44 & 7) & *(uint *)(lVar28 + (uVar44 >> 3))) == 0) {
                    uVar24 = uVar30;
                  }
                  uVar32 = uVar32 + 4;
                  if ((uVar36 & 0xf) != 0) {
                    uVar44 = uVar44 + 1;
                  }
                  *pfVar35 = (float)(int)uVar24;
                  lVar40 = lVar40 + -1;
                  pfVar35 = pfVar35 + 1;
                } while (lVar40 != 0);
              }
              break;
            case 5:
              uVar41 = 0;
              if ((uVar43 & 0xfffffffffffffff8) != 0) {
                pfVar35 = param_1 + uVar31 + 4;
                uVar42 = uVar32 & 7;
                do {
                  uVar41 = uVar41 + 8;
                  uVar25 = *(ulong *)(lVar28 + (uVar32 >> 3)) >> uVar42;
                  uVar30 = *(uint *)(lVar28 + (uVar44 >> 3)) >> (ulong)((uint)uVar44 & 7);
                  uVar24 = (uint)uVar25;
                  uVar4 = (ushort)uVar25 & 0x1f;
                  uVar7 = -uVar4;
                  if ((uVar30 & 1) == 0) {
                    uVar7 = uVar4;
                  }
                  bVar19 = (uVar25 & 0x1f) != 0;
                  uVar36 = 2;
                  if (!bVar19) {
                    uVar36 = 1;
                  }
                  uVar4 = (ushort)(uVar24 >> 5) & 0x1f;
                  uVar27 = (uint)bVar19;
                  if ((uVar24 >> 5 & 0x1f) != 0) {
                    uVar27 = uVar36;
                  }
                  uVar21 = -uVar4;
                  if ((1 << bVar19 & uVar30) == 0) {
                    uVar21 = uVar4;
                  }
                  uVar12 = (ulong)uVar27;
                  uVar4 = (ushort)(uVar24 >> 10) & 0x1f;
                  uVar39 = (ushort)(uVar25 >> 0x1e) & 0x1f;
                  if ((uVar24 >> 10 & 0x1f) != 0) {
                    uVar27 = uVar27 + 1;
                  }
                  uVar22 = -uVar4;
                  if ((1 << uVar12 & uVar30) == 0) {
                    uVar22 = uVar4;
                  }
                  uVar12 = (ulong)uVar27;
                  uVar4 = (ushort)(uVar24 >> 0xf) & 0x1f;
                  if ((uVar24 >> 0xf & 0x1f) != 0) {
                    uVar27 = uVar27 + 1;
                  }
                  uVar38 = -uVar4;
                  if ((1 << uVar12 & uVar30) == 0) {
                    uVar38 = uVar4;
                  }
                  uVar12 = (ulong)uVar27;
                  uVar16 = (ushort)(uVar25 >> 0x10);
                  uVar4 = uVar16 >> 4 & 0x1f;
                  if ((uVar24 >> 0x14 & 0x1f) != 0) {
                    uVar27 = uVar27 + 1;
                  }
                  uVar20 = uVar16 >> 9 & 0x1f;
                  uVar16 = -uVar4;
                  if ((1 << uVar12 & uVar30) == 0) {
                    uVar16 = uVar4;
                  }
                  uVar12 = (ulong)uVar27;
                  if ((uVar24 >> 0x19 & 0x1f) != 0) {
                    uVar27 = uVar27 + 1;
                  }
                  uVar4 = -uVar20;
                  if ((1 << uVar12 & uVar30) == 0) {
                    uVar4 = uVar20;
                  }
                  uVar24 = uVar27 & 0x1f;
                  if ((uVar25 >> 0x1e & 0x1f) != 0) {
                    uVar27 = uVar27 + 1;
                  }
                  bVar5 = (byte)uVar27;
                  uVar20 = -uVar39;
                  if ((1 << (ulong)uVar24 & uVar30) == 0) {
                    uVar20 = uVar39;
                  }
                  if ((uVar25 >> 0x23 & 0x1f) != 0) {
                    bVar5 = bVar5 + 1;
                  }
                  uVar37 = (ushort)(uVar25 >> 0x23) & 0x1f;
                  uVar39 = -uVar37;
                  if ((1 << (ulong)(uVar27 & 0x1f) & uVar30) == 0) {
                    uVar39 = uVar37;
                  }
                  auVar51._0_4_ = (int)(short)uVar7;
                  auVar51._4_4_ = (int)(short)uVar21;
                  auVar51._8_4_ = (int)(short)uVar22;
                  auVar51._12_4_ = (int)(short)uVar38;
                  auVar58 = NEON_scvtf(auVar51,4);
                  auVar64._0_4_ = (int)(short)uVar16;
                  auVar64._4_4_ = (int)(short)uVar4;
                  auVar64._8_4_ = (int)(short)uVar20;
                  auVar64._12_4_ = (int)(short)uVar39;
                  auVar67 = NEON_scvtf(auVar64,4);
                  uVar44 = uVar44 + bVar5;
                  uVar32 = uVar32 + 0x28;
                  *(long *)(pfVar35 + -2) = auVar58._8_8_;
                  *(long *)(pfVar35 + -4) = auVar58._0_8_;
                  *(long *)(pfVar35 + 2) = auVar67._8_8_;
                  *(long *)pfVar35 = auVar67._0_8_;
                  pfVar35 = pfVar35 + 8;
                } while (uVar41 < (uVar43 & 0xfffffffffffffff8));
              }
              if (uVar41 < uVar43) {
                lVar40 = (uVar11 - uVar41) - uVar31;
                pfVar35 = param_1 + uVar31 + uVar41;
                do {
                  uVar36 = *(uint *)(lVar28 + (uVar32 >> 3)) >> (ulong)((uint)uVar32 & 7);
                  uVar30 = uVar36 & 0x1f;
                  uVar24 = -uVar30;
                  if ((1 << (ulong)((uint)uVar44 & 7) & *(uint *)(lVar28 + (uVar44 >> 3))) == 0) {
                    uVar24 = uVar30;
                  }
                  uVar32 = uVar32 + 5;
                  if ((uVar36 & 0x1f) != 0) {
                    uVar44 = uVar44 + 1;
                  }
                  *pfVar35 = (float)(int)uVar24;
                  lVar40 = lVar40 + -1;
                  pfVar35 = pfVar35 + 1;
                } while (lVar40 != 0);
              }
              break;
            case 6:
              uVar41 = 0;
              if ((uVar43 & 0xfffffffffffffff8) != 0) {
                pfVar35 = param_1 + uVar31 + 4;
                uVar42 = uVar32 & 7;
                do {
                  uVar25 = *(ulong *)(lVar28 + (uVar32 >> 3)) >> uVar42;
                  uVar30 = *(uint *)(lVar28 + (uVar44 >> 3)) >> (ulong)((uint)uVar44 & 7);
                  uVar24 = (uint)uVar25;
                  uVar4 = (ushort)uVar25 & 0x3f;
                  uVar7 = -uVar4;
                  if ((uVar30 & 1) == 0) {
                    uVar7 = uVar4;
                  }
                  bVar19 = (uVar25 & 0x3f) != 0;
                  uVar36 = 2;
                  if (!bVar19) {
                    uVar36 = 1;
                  }
                  uVar26 = (uint)bVar19;
                  uVar27 = uVar26;
                  if ((uVar24 >> 6 & 0x3f) != 0) {
                    uVar27 = uVar36;
                  }
                  uVar21 = (ushort)(uVar24 >> 6) & 0x3f;
                  uVar4 = -uVar21;
                  if ((1 << (ulong)uVar26 & uVar30) == 0) {
                    uVar4 = uVar21;
                  }
                  uVar21 = (ushort)(uVar24 >> 0xc) & 0x3f;
                  uVar36 = uVar27;
                  if ((uVar24 >> 0xc & 0x3f) != 0) {
                    uVar36 = uVar27 + 1;
                  }
                  uVar22 = (ushort)(uVar25 >> 0x10) >> 2 & 0x3f;
                  uVar38 = (byte)(uVar25 >> 0x18) & 0x3f;
                  uVar39 = -uVar21;
                  if ((1 << (ulong)uVar27 & uVar30) == 0) {
                    uVar39 = uVar21;
                  }
                  uVar27 = uVar36;
                  if ((uVar24 >> 0x12 & 0x3f) != 0) {
                    uVar27 = uVar36 + 1;
                  }
                  uVar12 = (ulong)uVar27;
                  uVar21 = -uVar22;
                  if ((1 << (ulong)uVar36 & uVar30) == 0) {
                    uVar21 = uVar22;
                  }
                  if ((uVar24 >> 0x18 & 0x3f) != 0) {
                    uVar27 = uVar27 + 1;
                  }
                  uVar22 = -uVar38;
                  if ((1 << uVar12 & uVar30) == 0) {
                    uVar22 = uVar38;
                  }
                  uVar12 = (ulong)uVar27;
                  uVar38 = (ushort)(uVar25 >> 0x1e) & 0x3f;
                  if ((uVar25 >> 0x1e & 0x3f) != 0) {
                    uVar27 = uVar27 + 1;
                  }
                  uVar16 = -uVar38;
                  if ((1 << uVar12 & uVar30) == 0) {
                    uVar16 = uVar38;
                  }
                  uVar24 = uVar27 & 0x1f;
                  uVar36 = (uint)(uVar25 >> 0x20);
                  uVar38 = (ushort)(uVar36 >> 4) & 0x3f;
                  if ((uVar25 >> 0x24 & 0x3f) != 0) {
                    uVar27 = uVar27 + 1;
                  }
                  bVar5 = (byte)uVar27;
                  uVar20 = -uVar38;
                  if ((1 << (ulong)uVar24 & uVar30) == 0) {
                    uVar20 = uVar38;
                  }
                  uVar38 = (ushort)(uVar36 >> 10) & 0x3f;
                  if ((uVar25 >> 0x2a & 0x3f) != 0) {
                    bVar5 = bVar5 + 1;
                  }
                  uVar37 = -uVar38;
                  if ((1 << (ulong)(uVar27 & 0x1f) & uVar30) == 0) {
                    uVar37 = uVar38;
                  }
                  auVar52._0_4_ = (int)(short)uVar7;
                  auVar52._4_4_ = (int)(short)uVar4;
                  auVar52._8_4_ = (int)(short)uVar39;
                  auVar52._12_4_ = (int)(short)uVar21;
                  auVar58 = NEON_scvtf(auVar52,4);
                  auVar65._0_4_ = (int)(short)uVar22;
                  auVar65._4_4_ = (int)(short)uVar16;
                  auVar65._8_4_ = (int)(short)uVar20;
                  auVar65._12_4_ = (int)(short)uVar37;
                  auVar67 = NEON_scvtf(auVar65,4);
                  uVar44 = uVar44 + bVar5;
                  uVar41 = uVar41 + 8;
                  uVar32 = uVar32 + 0x30;
                  *(long *)(pfVar35 + -2) = auVar58._8_8_;
                  *(long *)(pfVar35 + -4) = auVar58._0_8_;
                  *(long *)(pfVar35 + 2) = auVar67._8_8_;
                  *(long *)pfVar35 = auVar67._0_8_;
                  pfVar35 = pfVar35 + 8;
                } while (uVar41 < (uVar43 & 0xfffffffffffffff8));
              }
              if (uVar41 < uVar43) {
                lVar40 = (uVar11 - uVar41) - uVar31;
                pfVar35 = param_1 + uVar31 + uVar41;
                do {
                  uVar36 = *(uint *)(lVar28 + (uVar32 >> 3)) >> (ulong)((uint)uVar32 & 7);
                  uVar30 = uVar36 & 0x3f;
                  uVar24 = -uVar30;
                  if ((1 << (ulong)((uint)uVar44 & 7) & *(uint *)(lVar28 + (uVar44 >> 3))) == 0) {
                    uVar24 = uVar30;
                  }
                  uVar32 = uVar32 + 6;
                  if ((uVar36 & 0x3f) != 0) {
                    uVar44 = uVar44 + 1;
                  }
                  *pfVar35 = (float)(int)uVar24;
                  lVar40 = lVar40 + -1;
                  pfVar35 = pfVar35 + 1;
                } while (lVar40 != 0);
              }
              break;
            case 7:
              uVar41 = 0;
              if ((uVar43 & 0xfffffffffffffff8) != 0) {
                pfVar35 = param_1 + uVar31 + 4;
                uVar42 = uVar32 & 7;
                do {
                  uVar41 = uVar41 + 8;
                  uVar25 = *(ulong *)(lVar28 + (uVar32 >> 3)) >> uVar42;
                  uVar30 = *(uint *)(lVar28 + (uVar44 >> 3)) >> (ulong)((uint)uVar44 & 7);
                  uVar24 = (uint)uVar25;
                  uVar4 = (ushort)uVar25 & 0x7f;
                  uVar21 = (ushort)(uVar24 >> 7) & 0x7f;
                  uVar7 = -uVar4;
                  if ((uVar30 & 1) == 0) {
                    uVar7 = uVar4;
                  }
                  bVar19 = (uVar25 & 0x7f) != 0;
                  uVar36 = 2;
                  if (!bVar19) {
                    uVar36 = 1;
                  }
                  uVar26 = (uint)bVar19;
                  uVar27 = uVar26;
                  if ((uVar24 >> 7 & 0x7f) != 0) {
                    uVar27 = uVar36;
                  }
                  uVar39 = (ushort)(uVar24 >> 0xe) & 0x7f;
                  uVar4 = -uVar21;
                  if ((1 << (ulong)uVar26 & uVar30) == 0) {
                    uVar4 = uVar21;
                  }
                  uVar36 = uVar27;
                  if ((uVar24 >> 0xe & 0x7f) != 0) {
                    uVar36 = uVar27 + 1;
                  }
                  uVar22 = (ushort)(uVar25 >> 0x10) >> 5 & 0x7f;
                  uVar21 = -uVar39;
                  if ((1 << (ulong)uVar27 & uVar30) == 0) {
                    uVar21 = uVar39;
                  }
                  uVar27 = uVar36;
                  if ((uVar24 >> 0x15 & 0x7f) != 0) {
                    uVar27 = uVar36 + 1;
                  }
                  uVar12 = (ulong)uVar27;
                  uVar39 = -uVar22;
                  if ((1 << (ulong)uVar36 & uVar30) == 0) {
                    uVar39 = uVar22;
                  }
                  uVar22 = (ushort)(uVar25 >> 0x1c) & 0x7f;
                  if ((uVar25 >> 0x1c & 0x7f) != 0) {
                    uVar27 = uVar27 + 1;
                  }
                  uVar38 = -uVar22;
                  if ((1 << uVar12 & uVar30) == 0) {
                    uVar38 = uVar22;
                  }
                  uVar12 = (ulong)uVar27;
                  uVar24 = (uint)(uVar25 >> 0x20);
                  uVar22 = (ushort)(uVar24 >> 3) & 0x7f;
                  if ((uVar25 >> 0x23 & 0x7f) != 0) {
                    uVar27 = uVar27 + 1;
                  }
                  uVar16 = -uVar22;
                  if ((1 << uVar12 & uVar30) == 0) {
                    uVar16 = uVar22;
                  }
                  uVar36 = uVar27 & 0x1f;
                  uVar22 = (ushort)(uVar24 >> 10) & 0x7f;
                  if ((uVar25 >> 0x2a & 0x7f) != 0) {
                    uVar27 = uVar27 + 1;
                  }
                  bVar5 = (byte)uVar27;
                  uVar20 = -uVar22;
                  if ((1 << (ulong)uVar36 & uVar30) == 0) {
                    uVar20 = uVar22;
                  }
                  if ((uVar25 >> 0x31 & 0x7f) != 0) {
                    bVar5 = bVar5 + 1;
                  }
                  uVar37 = (ushort)(uVar25 >> 0x31) & 0x7f;
                  uVar22 = -uVar37;
                  if ((1 << (ulong)(uVar27 & 0x1f) & uVar30) == 0) {
                    uVar22 = uVar37;
                  }
                  uVar44 = uVar44 + bVar5;
                  auVar53._0_4_ = (int)(short)uVar7;
                  auVar53._4_4_ = (int)(short)uVar4;
                  auVar53._8_4_ = (int)(short)uVar21;
                  auVar53._12_4_ = (int)(short)uVar39;
                  auVar58 = NEON_scvtf(auVar53,4);
                  auVar66._0_4_ = (int)(short)uVar38;
                  auVar66._4_4_ = (int)(short)uVar16;
                  auVar66._8_4_ = (int)(short)uVar20;
                  auVar66._12_4_ = (int)(short)uVar22;
                  auVar67 = NEON_scvtf(auVar66,4);
                  uVar32 = uVar32 + 0x38;
                  *(long *)(pfVar35 + -2) = auVar58._8_8_;
                  *(long *)(pfVar35 + -4) = auVar58._0_8_;
                  *(long *)(pfVar35 + 2) = auVar67._8_8_;
                  *(long *)pfVar35 = auVar67._0_8_;
                  pfVar35 = pfVar35 + 8;
                } while (uVar41 < (uVar43 & 0xfffffffffffffff8));
              }
              if (uVar41 < uVar43) {
                lVar40 = (uVar11 - uVar41) - uVar31;
                pfVar35 = param_1 + uVar31 + uVar41;
                do {
                  uVar36 = *(uint *)(lVar28 + (uVar32 >> 3)) >> (ulong)((uint)uVar32 & 7);
                  uVar30 = uVar36 & 0x7f;
                  uVar24 = -uVar30;
                  if ((1 << (ulong)((uint)uVar44 & 7) & *(uint *)(lVar28 + (uVar44 >> 3))) == 0) {
                    uVar24 = uVar30;
                  }
                  uVar32 = uVar32 + 7;
                  if ((uVar36 & 0x7f) != 0) {
                    uVar44 = uVar44 + 1;
                  }
                  *pfVar35 = (float)(int)uVar24;
                  lVar40 = lVar40 + -1;
                  pfVar35 = pfVar35 + 1;
                } while (lVar40 != 0);
              }
              break;
            case 8:
              uVar41 = 0;
              if ((uVar43 & 0xfffffffffffffffc) != 0) {
                uVar42 = uVar32 & 7;
                do {
                  uVar25 = *(ulong *)(lVar28 + (uVar32 >> 3)) >> uVar42;
                  uVar30 = *(uint *)(lVar28 + (uVar44 >> 3)) >> (ulong)((uint)uVar44 & 7);
                  uVar4 = (ushort)uVar25 & 0xff;
                  uVar7 = -uVar4;
                  if ((uVar30 & 1) == 0) {
                    uVar7 = uVar4;
                  }
                  bVar19 = (uVar25 & 0xff) != 0;
                  uVar24 = 2;
                  if (!bVar19) {
                    uVar24 = 1;
                  }
                  uVar27 = (uint)bVar19;
                  uVar36 = uVar27;
                  if (((uint)uVar25 >> 8 & 0xff) != 0) {
                    uVar36 = uVar24;
                  }
                  uVar21 = (ushort)(uVar25 >> 8) & 0xff;
                  uVar4 = -uVar21;
                  if ((1 << (ulong)uVar27 & uVar30) == 0) {
                    uVar4 = uVar21;
                  }
                  uVar21 = (ushort)(uVar25 >> 0x10) & 0xff;
                  uVar24 = uVar36;
                  if (((uint)uVar25 >> 0x10 & 0xff) != 0) {
                    uVar24 = uVar36 + 1;
                  }
                  uVar12 = (ulong)uVar24;
                  uVar39 = -uVar21;
                  if ((1 << (ulong)uVar36 & uVar30) == 0) {
                    uVar39 = uVar21;
                  }
                  uVar21 = (ushort)(uVar25 >> 0x18) & 0xff;
                  if ((uVar25 & 0xff000000) != 0) {
                    uVar24 = uVar24 + 1;
                  }
                  uVar22 = -uVar21;
                  if ((1 << uVar12 & uVar30) == 0) {
                    uVar22 = uVar21;
                  }
                  uVar41 = uVar41 + 4;
                  auVar54._0_4_ = (int)(short)uVar7;
                  auVar54._4_4_ = (int)(short)uVar4;
                  auVar54._8_4_ = (int)(short)uVar39;
                  auVar54._12_4_ = (int)(short)uVar22;
                  auVar58 = NEON_scvtf(auVar54,4);
                  uVar32 = uVar32 + 0x20;
                  uVar44 = uVar44 + uVar24;
                  *(long *)(pfVar35 + 2) = auVar58._8_8_;
                  *(long *)pfVar35 = auVar58._0_8_;
                  pfVar35 = pfVar35 + 4;
                } while (uVar41 < (uVar43 & 0xfffffffffffffffc));
              }
              if (uVar41 < uVar43) {
                lVar40 = (uVar11 - uVar41) - uVar31;
                pfVar35 = param_1 + uVar31 + uVar41;
                do {
                  uVar36 = *(uint *)(lVar28 + (uVar32 >> 3)) >> (ulong)((uint)uVar32 & 7);
                  uVar30 = uVar36 & 0xff;
                  uVar24 = -uVar30;
                  if ((1 << (ulong)((uint)uVar44 & 7) & *(uint *)(lVar28 + (uVar44 >> 3))) == 0) {
                    uVar24 = uVar30;
                  }
                  uVar32 = uVar32 + 8;
                  if ((uVar36 & 0xff) != 0) {
                    uVar44 = uVar44 + 1;
                  }
                  *pfVar35 = (float)(int)uVar24;
                  lVar40 = lVar40 + -1;
                  pfVar35 = pfVar35 + 1;
                } while (lVar40 != 0);
              }
              break;
            case 9:
              uVar41 = 0;
              if ((uVar43 & 0xfffffffffffffffc) != 0) {
                do {
                  uVar42 = *(ulong *)(lVar28 + (uVar32 >> 3)) >> (uVar32 & 7);
                  uVar30 = *(uint *)(lVar28 + (uVar44 >> 3)) >> (ulong)((uint)uVar44 & 7);
                  uVar24 = (uint)uVar42;
                  uVar4 = (ushort)uVar42 & 0x1ff;
                  uVar7 = -uVar4;
                  if ((uVar30 & 1) == 0) {
                    uVar7 = uVar4;
                  }
                  bVar19 = (uVar42 & 0x1ff) != 0;
                  uVar36 = 2;
                  if (!bVar19) {
                    uVar36 = 1;
                  }
                  uVar26 = (uint)bVar19;
                  uVar27 = uVar26;
                  if ((uVar24 >> 9 & 0x1ff) != 0) {
                    uVar27 = uVar36;
                  }
                  uVar21 = (ushort)(uVar24 >> 9) & 0x1ff;
                  uVar39 = (ushort)(uVar42 >> 0x10) >> 2 & 0x1ff;
                  uVar4 = -uVar21;
                  if ((1 << (ulong)uVar26 & uVar30) == 0) {
                    uVar4 = uVar21;
                  }
                  uVar36 = uVar27;
                  if ((uVar24 >> 0x12 & 0x1ff) != 0) {
                    uVar36 = uVar27 + 1;
                  }
                  uVar22 = (ushort)(uVar42 >> 0x1b) & 0x1ff;
                  uVar21 = -uVar39;
                  if ((1 << (ulong)uVar27 & uVar30) == 0) {
                    uVar21 = uVar39;
                  }
                  uVar25 = (ulong)uVar36;
                  if ((uVar42 >> 0x1b & 0x1ff) != 0) {
                    uVar36 = uVar36 + 1;
                  }
                  uVar39 = -uVar22;
                  if ((1 << uVar25 & uVar30) == 0) {
                    uVar39 = uVar22;
                  }
                  auVar59._0_4_ = (int)(short)uVar7;
                  auVar59._4_4_ = (int)(short)uVar4;
                  auVar59._8_4_ = (int)(short)uVar21;
                  auVar59._12_4_ = (int)(short)uVar39;
                  auVar58 = NEON_scvtf(auVar59,4);
                  uVar41 = uVar41 + 4;
                  uVar32 = uVar32 + 0x24;
                  uVar44 = uVar44 + uVar36;
                  *(long *)(pfVar35 + 2) = auVar58._8_8_;
                  *(long *)pfVar35 = auVar58._0_8_;
                  pfVar35 = pfVar35 + 4;
                } while (uVar41 < (uVar43 & 0xfffffffffffffffc));
              }
              if (uVar41 < uVar43) {
                lVar40 = (uVar11 - uVar41) - uVar31;
                pfVar35 = param_1 + uVar31 + uVar41;
                do {
                  uVar36 = *(uint *)(lVar28 + (uVar32 >> 3)) >> (ulong)((uint)uVar32 & 7);
                  uVar30 = uVar36 & 0x1ff;
                  uVar24 = -uVar30;
                  if ((1 << (ulong)((uint)uVar44 & 7) & *(uint *)(lVar28 + (uVar44 >> 3))) == 0) {
                    uVar24 = uVar30;
                  }
                  uVar32 = uVar32 + 9;
                  if ((uVar36 & 0x1ff) != 0) {
                    uVar44 = uVar44 + 1;
                  }
                  *pfVar35 = (float)(int)uVar24;
                  lVar40 = lVar40 + -1;
                  pfVar35 = pfVar35 + 1;
                } while (lVar40 != 0);
              }
              break;
            case 10:
              uVar41 = 0;
              if ((uVar43 & 0xfffffffffffffffc) != 0) {
                uVar42 = uVar32 & 7;
                do {
                  uVar25 = *(ulong *)(lVar28 + (uVar32 >> 3)) >> uVar42;
                  uVar30 = *(uint *)(lVar28 + (uVar44 >> 3)) >> (ulong)((uint)uVar44 & 7);
                  uVar24 = (uint)uVar25;
                  uVar4 = (ushort)uVar25 & 0x3ff;
                  uVar7 = -uVar4;
                  if ((uVar30 & 1) == 0) {
                    uVar7 = uVar4;
                  }
                  bVar19 = (uVar25 & 0x3ff) != 0;
                  uVar36 = 2;
                  if (!bVar19) {
                    uVar36 = 1;
                  }
                  uVar26 = (uint)bVar19;
                  uVar27 = uVar26;
                  if ((uVar24 >> 10 & 0x3ff) != 0) {
                    uVar27 = uVar36;
                  }
                  uVar21 = (ushort)(uVar24 >> 10) & 0x3ff;
                  uVar39 = (ushort)(uVar25 >> 0x10) >> 4 & 0x3ff;
                  uVar4 = -uVar21;
                  if ((1 << (ulong)uVar26 & uVar30) == 0) {
                    uVar4 = uVar21;
                  }
                  uVar36 = uVar27;
                  if ((uVar24 >> 0x14 & 0x3ff) != 0) {
                    uVar36 = uVar27 + 1;
                  }
                  uVar22 = (ushort)(uVar25 >> 0x1e) & 0x3ff;
                  uVar21 = -uVar39;
                  if ((1 << (ulong)uVar27 & uVar30) == 0) {
                    uVar21 = uVar39;
                  }
                  uVar12 = (ulong)uVar36;
                  if ((uVar25 >> 0x1e & 0x3ff) != 0) {
                    uVar36 = uVar36 + 1;
                  }
                  uVar39 = -uVar22;
                  if ((1 << uVar12 & uVar30) == 0) {
                    uVar39 = uVar22;
                  }
                  auVar55._0_4_ = (int)(short)uVar7;
                  auVar55._4_4_ = (int)(short)uVar4;
                  auVar55._8_4_ = (int)(short)uVar21;
                  auVar55._12_4_ = (int)(short)uVar39;
                  auVar58 = NEON_scvtf(auVar55,4);
                  uVar41 = uVar41 + 4;
                  uVar32 = uVar32 + 0x28;
                  uVar44 = uVar44 + uVar36;
                  *(long *)(pfVar35 + 2) = auVar58._8_8_;
                  *(long *)pfVar35 = auVar58._0_8_;
                  pfVar35 = pfVar35 + 4;
                } while (uVar41 < (uVar43 & 0xfffffffffffffffc));
              }
              if (uVar41 < uVar43) {
                lVar40 = (uVar11 - uVar41) - uVar31;
                pfVar35 = param_1 + uVar31 + uVar41;
                do {
                  uVar36 = *(uint *)(lVar28 + (uVar32 >> 3)) >> (ulong)((uint)uVar32 & 7);
                  uVar30 = uVar36 & 0x3ff;
                  uVar24 = -uVar30;
                  if ((1 << (ulong)((uint)uVar44 & 7) & *(uint *)(lVar28 + (uVar44 >> 3))) == 0) {
                    uVar24 = uVar30;
                  }
                  uVar32 = uVar32 + 10;
                  if ((uVar36 & 0x3ff) != 0) {
                    uVar44 = uVar44 + 1;
                  }
                  *pfVar35 = (float)(int)uVar24;
                  lVar40 = lVar40 + -1;
                  pfVar35 = pfVar35 + 1;
                } while (lVar40 != 0);
              }
              break;
            case 0xb:
              uVar41 = 0;
              if ((uVar43 & 0xfffffffffffffffc) != 0) {
                do {
                  uVar42 = *(ulong *)(lVar28 + (uVar32 >> 3)) >> (uVar32 & 7);
                  uVar30 = *(uint *)(lVar28 + (uVar44 >> 3)) >> (ulong)((uint)uVar44 & 7);
                  uVar4 = (ushort)uVar42 & 0x7ff;
                  uVar7 = -uVar4;
                  if ((uVar30 & 1) == 0) {
                    uVar7 = uVar4;
                  }
                  bVar19 = (uVar42 & 0x7ff) != 0;
                  uVar24 = 2;
                  if (!bVar19) {
                    uVar24 = 1;
                  }
                  uVar4 = (ushort)((uint)uVar42 >> 0xb) & 0x7ff;
                  uVar36 = (uint)bVar19;
                  if (((uint)uVar42 >> 0xb & 0x7ff) != 0) {
                    uVar36 = uVar24;
                  }
                  uVar39 = (ushort)(uVar42 >> 0x16) & 0x7ff;
                  uVar21 = -uVar4;
                  if ((1 << (ulong)bVar19 & uVar30) == 0) {
                    uVar21 = uVar4;
                  }
                  uVar24 = uVar36;
                  if ((uVar42 >> 0x16 & 0x7ff) != 0) {
                    uVar24 = uVar36 + 1;
                  }
                  uVar4 = -uVar39;
                  if ((1 << (ulong)uVar36 & uVar30) == 0) {
                    uVar4 = uVar39;
                  }
                  uVar25 = (ulong)uVar24;
                  uVar39 = (ushort)(uVar42 >> 0x21) & 0x7ff;
                  if ((uVar42 >> 0x21 & 0x7ff) != 0) {
                    uVar24 = uVar24 + 1;
                  }
                  uVar22 = -uVar39;
                  if ((1 << uVar25 & uVar30) == 0) {
                    uVar22 = uVar39;
                  }
                  uVar41 = uVar41 + 4;
                  auVar56._0_4_ = (int)(short)uVar7;
                  auVar56._4_4_ = (int)(short)uVar21;
                  auVar56._8_4_ = (int)(short)uVar4;
                  auVar56._12_4_ = (int)(short)uVar22;
                  auVar58 = NEON_scvtf(auVar56,4);
                  uVar32 = uVar32 + 0x2c;
                  uVar44 = uVar44 + uVar24;
                  *(long *)(pfVar35 + 2) = auVar58._8_8_;
                  *(long *)pfVar35 = auVar58._0_8_;
                  pfVar35 = pfVar35 + 4;
                } while (uVar41 < (uVar43 & 0xfffffffffffffffc));
              }
              if (uVar41 < uVar43) {
                lVar40 = (uVar11 - uVar41) - uVar31;
                pfVar35 = param_1 + uVar31 + uVar41;
                do {
                  uVar36 = *(uint *)(lVar28 + (uVar32 >> 3)) >> (ulong)((uint)uVar32 & 7);
                  uVar30 = uVar36 & 0x7ff;
                  uVar24 = -uVar30;
                  if ((1 << (ulong)((uint)uVar44 & 7) & *(uint *)(lVar28 + (uVar44 >> 3))) == 0) {
                    uVar24 = uVar30;
                  }
                  uVar32 = uVar32 + 0xb;
                  if ((uVar36 & 0x7ff) != 0) {
                    uVar44 = uVar44 + 1;
                  }
                  *pfVar35 = (float)(int)uVar24;
                  lVar40 = lVar40 + -1;
                  pfVar35 = pfVar35 + 1;
                } while (lVar40 != 0);
              }
              break;
            case 0xc:
              uVar41 = 0;
              if ((uVar43 & 0xfffffffffffffffc) != 0) {
                uVar42 = uVar32 & 7;
                do {
                  uVar25 = *(ulong *)(lVar28 + (uVar32 >> 3)) >> uVar42;
                  uVar30 = *(uint *)(lVar28 + (uVar44 >> 3)) >> (ulong)((uint)uVar44 & 7);
                  uVar4 = (ushort)uVar25 & 0xfff;
                  uVar7 = -uVar4;
                  if ((uVar30 & 1) == 0) {
                    uVar7 = uVar4;
                  }
                  bVar19 = (uVar25 & 0xfff) != 0;
                  uVar24 = 2;
                  if (!bVar19) {
                    uVar24 = 1;
                  }
                  uVar4 = (ushort)((uint)uVar25 >> 0xc) & 0xfff;
                  uVar36 = (uint)bVar19;
                  if (((uint)uVar25 >> 0xc & 0xfff) != 0) {
                    uVar36 = uVar24;
                  }
                  uVar39 = (ushort)(uVar25 >> 0x18) & 0xfff;
                  uVar21 = -uVar4;
                  if ((1 << (ulong)bVar19 & uVar30) == 0) {
                    uVar21 = uVar4;
                  }
                  uVar24 = uVar36;
                  if ((uVar25 >> 0x18 & 0xfff) != 0) {
                    uVar24 = uVar36 + 1;
                  }
                  uVar4 = -uVar39;
                  if ((1 << (ulong)uVar36 & uVar30) == 0) {
                    uVar4 = uVar39;
                  }
                  uVar12 = (ulong)uVar24;
                  uVar39 = (ushort)(uVar25 >> 0x24) & 0xfff;
                  if ((uVar25 >> 0x24 & 0xfff) != 0) {
                    uVar24 = uVar24 + 1;
                  }
                  uVar22 = -uVar39;
                  if ((1 << uVar12 & uVar30) == 0) {
                    uVar22 = uVar39;
                  }
                  auVar57._0_4_ = (int)(short)uVar7;
                  auVar57._4_4_ = (int)(short)uVar21;
                  auVar57._8_4_ = (int)(short)uVar4;
                  auVar57._12_4_ = (int)(short)uVar22;
                  auVar58 = NEON_scvtf(auVar57,4);
                  uVar41 = uVar41 + 4;
                  uVar32 = uVar32 + 0x30;
                  uVar44 = uVar44 + uVar24;
                  *(long *)(pfVar35 + 2) = auVar58._8_8_;
                  *(long *)pfVar35 = auVar58._0_8_;
                  pfVar35 = pfVar35 + 4;
                } while (uVar41 < (uVar43 & 0xfffffffffffffffc));
              }
              if (uVar41 < uVar43) {
                lVar40 = (uVar11 - uVar41) - uVar31;
                pfVar35 = param_1 + uVar31 + uVar41;
                do {
                  uVar36 = *(uint *)(lVar28 + (uVar32 >> 3)) >> (ulong)((uint)uVar32 & 7);
                  uVar30 = uVar36 & 0xfff;
                  uVar24 = -uVar30;
                  if ((1 << (ulong)((uint)uVar44 & 7) & *(uint *)(lVar28 + (uVar44 >> 3))) == 0) {
                    uVar24 = uVar30;
                  }
                  uVar32 = uVar32 + 0xc;
                  if ((uVar36 & 0xfff) != 0) {
                    uVar44 = uVar44 + 1;
                  }
                  *pfVar35 = (float)(int)uVar24;
                  lVar40 = lVar40 + -1;
                  pfVar35 = pfVar35 + 1;
                } while (lVar40 != 0);
              }
              break;
            case 0xd:
              uVar41 = 0;
              if ((uVar43 & 0xfffffffffffffffc) != 0) {
                do {
                  uVar42 = *(ulong *)(lVar28 + (uVar32 >> 3)) >> (uVar32 & 7);
                  uVar30 = *(uint *)(lVar28 + (uVar44 >> 3)) >> (ulong)((uint)uVar44 & 7);
                  uVar4 = (ushort)uVar42 & 0x1fff;
                  uVar7 = -uVar4;
                  if ((uVar30 & 1) == 0) {
                    uVar7 = uVar4;
                  }
                  bVar19 = (uVar42 & 0x1fff) != 0;
                  uVar24 = 2;
                  if (!bVar19) {
                    uVar24 = 1;
                  }
                  uVar4 = (ushort)((uint)uVar42 >> 0xd) & 0x1fff;
                  uVar36 = (uint)bVar19;
                  if (((uint)uVar42 >> 0xd & 0x1fff) != 0) {
                    uVar36 = uVar24;
                  }
                  uVar39 = (ushort)(uVar42 >> 0x1a) & 0x1fff;
                  uVar21 = -uVar4;
                  if ((1 << (ulong)bVar19 & uVar30) == 0) {
                    uVar21 = uVar4;
                  }
                  uVar24 = uVar36;
                  if ((uVar42 >> 0x1a & 0x1fff) != 0) {
                    uVar24 = uVar36 + 1;
                  }
                  uVar4 = -uVar39;
                  if ((1 << (ulong)uVar36 & uVar30) == 0) {
                    uVar4 = uVar39;
                  }
                  uVar25 = (ulong)uVar24;
                  uVar39 = (ushort)(uVar42 >> 0x27) & 0x1fff;
                  if ((uVar42 >> 0x27 & 0x1fff) != 0) {
                    uVar24 = uVar24 + 1;
                  }
                  uVar22 = -uVar39;
                  if ((1 << uVar25 & uVar30) == 0) {
                    uVar22 = uVar39;
                  }
                  uVar41 = uVar41 + 4;
                  auVar67._0_4_ = (int)(short)uVar7;
                  auVar67._4_4_ = (int)(short)uVar21;
                  auVar67._8_4_ = (int)(short)uVar4;
                  auVar67._12_4_ = (int)(short)uVar22;
                  auVar58 = NEON_scvtf(auVar67,4);
                  uVar32 = uVar32 + 0x34;
                  uVar44 = uVar44 + uVar24;
                  *(long *)(pfVar35 + 2) = auVar58._8_8_;
                  *(long *)pfVar35 = auVar58._0_8_;
                  pfVar35 = pfVar35 + 4;
                } while (uVar41 < (uVar43 & 0xfffffffffffffffc));
              }
              if (uVar41 < uVar43) {
                lVar40 = (uVar11 - uVar41) - uVar31;
                pfVar35 = param_1 + uVar31 + uVar41;
                do {
                  uVar36 = *(uint *)(lVar28 + (uVar32 >> 3)) >> (ulong)((uint)uVar32 & 7);
                  uVar30 = uVar36 & 0x1fff;
                  uVar24 = -uVar30;
                  if ((1 << (ulong)((uint)uVar44 & 7) & *(uint *)(lVar28 + (uVar44 >> 3))) == 0) {
                    uVar24 = uVar30;
                  }
                  uVar32 = uVar32 + 0xd;
                  if ((uVar36 & 0x1fff) != 0) {
                    uVar44 = uVar44 + 1;
                  }
                  *pfVar35 = (float)(int)uVar24;
                  lVar40 = lVar40 + -1;
                  pfVar35 = pfVar35 + 1;
                } while (lVar40 != 0);
              }
              break;
            case 0xe:
              uVar41 = 0;
              if ((uVar43 & 0xfffffffffffffffc) != 0) {
                uVar42 = uVar32 & 7;
                do {
                  uVar25 = *(ulong *)(lVar28 + (uVar32 >> 3)) >> uVar42;
                  uVar30 = *(uint *)(lVar28 + (uVar44 >> 3)) >> (ulong)((uint)uVar44 & 7);
                  uVar4 = (ushort)uVar25 & 0x3fff;
                  uVar7 = -uVar4;
                  if ((uVar30 & 1) == 0) {
                    uVar7 = uVar4;
                  }
                  bVar19 = (uVar25 & 0x3fff) != 0;
                  uVar24 = 2;
                  if (!bVar19) {
                    uVar24 = 1;
                  }
                  uVar4 = (ushort)((uint)uVar25 >> 0xe) & 0x3fff;
                  uVar36 = (uint)bVar19;
                  if (((uint)uVar25 >> 0xe & 0x3fff) != 0) {
                    uVar36 = uVar24;
                  }
                  uVar39 = (ushort)(uVar25 >> 0x1c) & 0x3fff;
                  uVar21 = -uVar4;
                  if ((1 << (ulong)bVar19 & uVar30) == 0) {
                    uVar21 = uVar4;
                  }
                  uVar24 = uVar36;
                  if ((uVar25 >> 0x1c & 0x3fff) != 0) {
                    uVar24 = uVar36 + 1;
                  }
                  uVar4 = -uVar39;
                  if ((1 << (ulong)uVar36 & uVar30) == 0) {
                    uVar4 = uVar39;
                  }
                  uVar12 = (ulong)uVar24;
                  uVar39 = (ushort)(uVar25 >> 0x2a) & 0x3fff;
                  if ((uVar25 >> 0x2a & 0x3fff) != 0) {
                    uVar24 = uVar24 + 1;
                  }
                  uVar22 = -uVar39;
                  if ((1 << uVar12 & uVar30) == 0) {
                    uVar22 = uVar39;
                  }
                  auVar58._0_4_ = (int)(short)uVar7;
                  auVar58._4_4_ = (int)(short)uVar21;
                  auVar58._8_4_ = (int)(short)uVar4;
                  auVar58._12_4_ = (int)(short)uVar22;
                  auVar58 = NEON_scvtf(auVar58,4);
                  uVar41 = uVar41 + 4;
                  uVar32 = uVar32 + 0x38;
                  uVar44 = uVar44 + uVar24;
                  *(long *)(pfVar35 + 2) = auVar58._8_8_;
                  *(long *)pfVar35 = auVar58._0_8_;
                  pfVar35 = pfVar35 + 4;
                } while (uVar41 < (uVar43 & 0xfffffffffffffffc));
              }
              if (uVar41 < uVar43) {
                lVar40 = (uVar11 - uVar41) - uVar31;
                pfVar35 = param_1 + uVar31 + uVar41;
                do {
                  uVar36 = *(uint *)(lVar28 + (uVar32 >> 3)) >> (ulong)((uint)uVar32 & 7);
                  uVar30 = uVar36 & 0x3fff;
                  uVar24 = -uVar30;
                  if ((1 << (ulong)((uint)uVar44 & 7) & *(uint *)(lVar28 + (uVar44 >> 3))) == 0) {
                    uVar24 = uVar30;
                  }
                  uVar32 = uVar32 + 0xe;
                  if ((uVar36 & 0x3fff) != 0) {
                    uVar44 = uVar44 + 1;
                  }
                  *pfVar35 = (float)(int)uVar24;
                  lVar40 = lVar40 + -1;
                  pfVar35 = pfVar35 + 1;
                } while (lVar40 != 0);
              }
              break;
            case 0xf:
              for (; uVar43 != 0; uVar43 = uVar43 - 1) {
                uVar36 = *(uint *)(lVar28 + (uVar32 >> 3)) >> (ulong)((uint)uVar32 & 7);
                uVar30 = uVar36 & 0x7fff;
                uVar24 = -uVar30;
                if ((1 << (ulong)((uint)uVar44 & 7) & *(uint *)(lVar28 + (uVar44 >> 3))) == 0) {
                  uVar24 = uVar30;
                }
                uVar32 = uVar32 + 0xf;
                if ((uVar36 & 0x7fff) != 0) {
                  uVar44 = uVar44 + 1;
                }
                *pfVar35 = (float)(int)uVar24;
                pfVar35 = pfVar35 + 1;
              }
            }
          }
          uVar32 = uVar44 & 0xffffffff;
          uVar44 = uVar31;
          while (uVar43 = uVar44, bVar19 = uVar31 < uVar11, lVar40 = lVar34, uVar31 = uVar43, bVar19
                ) {
            do {
              lVar34 = lVar40;
              uVar31 = (ulong)(uint)(*(int *)(param_5 + lVar34 * 4) << 1);
              lVar40 = lVar34 + 1;
            } while (uVar31 <= uVar43);
            fVar46 = local_d0[lVar34 + 1];
            uVar44 = uVar11;
            if (uVar31 <= uVar11) {
              uVar44 = uVar31;
            }
            uVar42 = uVar44 - uVar43 & 0xfffffffffffffff8;
            uVar41 = 0;
            if (uVar42 != 0) {
              pfVar35 = param_1 + uVar43 + 4;
              do {
                uVar41 = uVar41 + 8;
                *(ulong *)(pfVar35 + -2) =
                     CONCAT44(fVar46 * (float)((ulong)*(undefined8 *)(pfVar35 + -2) >> 0x20),
                              fVar46 * (float)*(undefined8 *)(pfVar35 + -2));
                *(ulong *)(pfVar35 + -4) =
                     CONCAT44(fVar46 * (float)((ulong)*(undefined8 *)(pfVar35 + -4) >> 0x20),
                              fVar46 * (float)*(undefined8 *)(pfVar35 + -4));
                *(ulong *)(pfVar35 + 2) =
                     CONCAT44(fVar46 * (float)((ulong)*(undefined8 *)(pfVar35 + 2) >> 0x20),
                              fVar46 * (float)*(undefined8 *)(pfVar35 + 2));
                *(ulong *)pfVar35 =
                     CONCAT44(fVar46 * (float)((ulong)*(undefined8 *)pfVar35 >> 0x20),
                              fVar46 * (float)*(undefined8 *)pfVar35);
                pfVar35 = pfVar35 + 8;
              } while (uVar41 < uVar42);
            }
            for (; uVar41 < uVar44 - uVar43; uVar41 = uVar41 + 1) {
              param_1[uVar43 + uVar41] = fVar46 * param_1[uVar43 + uVar41];
            }
          }
        }
      } while (uVar31 < uVar33);
    }
    puVar3 = (ulong *)(lVar28 + (uVar32 >> 3 & 0x1ffffffffffffff8));
    uVar29 = *puVar3;
    *(uint *)(param_4 + 2) = 0x40 - ((uint)uVar32 & 0x3f);
    *param_4 = (long)(puVar3 + 1);
    param_4[1] = uVar29 >> (uVar32 & 0x3f);
  }
  return;
}



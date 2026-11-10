/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0325d920; name: FUN_0325d920
 */


void FUN_0325d920(long param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [12],float *param_4,
                 float *param_5)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar21;
  int iVar22;
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  long lVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  float fVar68;
  float fVar69;
  undefined8 uVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined8 uVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  undefined1 auVar92 [16];
  
  uVar70 = *(undefined8 *)(*param_2 + 8);
  uVar52 = (undefined1)((ulong)uVar70 >> 8);
  uVar53 = (undefined1)((ulong)uVar70 >> 0x10);
  uVar54 = (undefined1)((ulong)uVar70 >> 0x18);
  uVar55 = (undefined1)((ulong)uVar70 >> 0x20);
  uVar56 = (undefined1)((ulong)uVar70 >> 0x28);
  uVar57 = (undefined1)((ulong)uVar70 >> 0x30);
  uVar58 = (undefined1)((ulong)uVar70 >> 0x38);
  uVar8 = *(undefined8 *)*param_2;
  auVar15[9] = uVar52;
  auVar15._0_9_ = *(unkbyte9 *)*param_2;
  auVar15[10] = uVar53;
  auVar15[0xb] = uVar54;
  auVar15[0xc] = uVar55;
  auVar15[0xd] = uVar56;
  auVar15[0xe] = uVar57;
  auVar15[0xf] = uVar58;
  auVar16[9] = uVar52;
  auVar16._0_9_ = *(unkbyte9 *)*param_2;
  auVar16[10] = uVar53;
  auVar16[0xb] = uVar54;
  auVar16[0xc] = uVar55;
  auVar16[0xd] = uVar56;
  auVar16[0xe] = uVar57;
  auVar16[0xf] = uVar58;
  auVar33 = NEON_ext(auVar15,auVar16,8,1);
  fVar73 = (float)*(undefined8 *)(*param_3 + 8);
  fVar38 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  uVar76 = *(undefined8 *)*param_3;
  fVar71 = (float)uVar76;
  fVar72 = (float)((ulong)uVar76 >> 0x20);
  uVar28 = NEON_ext(uVar8,auVar33._0_8_,4,1);
  auVar90._12_4_ = fVar38;
  auVar90._0_12_ = *param_3;
  auVar92._12_4_ = fVar38;
  auVar92._0_12_ = *param_3;
  auVar33 = NEON_ext(auVar90,auVar92,8,1);
  uVar76 = NEON_ext(uVar76,auVar33._0_8_,4,1);
  fVar49 = (float)uVar8;
  fVar46 = (float)((ulong)uVar8 >> 0x20);
  fVar80 = (float)((ulong)uVar28 >> 0x20);
  fVar69 = (float)((ulong)uVar76 >> 0x20);
  fVar68 = (float)uVar70;
  fVar47 = (float)((ulong)uVar70 >> 0x20);
  fVar36 = fVar49 * (float)uVar76 - fVar71 * (float)uVar28;
  fVar39 = fVar46 * fVar69 - fVar72 * fVar80;
  fVar41 = fVar68 * fVar71 - fVar73 * fVar49;
  fVar43 = fVar47 * fVar72 - fVar38 * fVar46;
  auVar33._4_4_ = fVar39;
  auVar33._0_4_ = fVar36;
  auVar33._8_4_ = fVar41;
  auVar33._12_4_ = fVar43;
  auVar86._4_4_ = fVar39;
  auVar86._0_4_ = fVar36;
  auVar86._8_4_ = fVar41;
  auVar86._12_4_ = fVar43;
  auVar33 = NEON_ext(auVar33,auVar86,4,1);
  fVar41 = auVar33._0_4_;
  fVar43 = auVar33._4_4_;
  fVar39 = fVar41 * fVar41 + fVar43 * fVar43 + fVar36 * fVar36;
  if (fVar39 <= 1.1920929e-07) {
    lVar32 = *(long *)(param_1 + 0x68);
  }
  else {
    uVar8 = NEON_fmov(0x3f800000,4);
    fVar85 = (float)uVar8;
    fVar91 = (float)((ulong)uVar8 >> 0x20);
    lVar32 = *(long *)(param_1 + 0x68);
    fVar74 = fVar85 / SQRT(fVar39);
    fVar75 = fVar91 / SQRT(fVar41 * fVar41 + fVar43 * fVar43 + fVar36 * fVar36);
    fVar37 = fVar41 * fVar74;
    fVar40 = fVar43 * fVar75;
    fVar42 = fVar36 * fVar74;
    fVar44 = fVar75 * 0.0;
    auVar2._4_4_ = fVar40;
    auVar2._0_4_ = fVar37;
    auVar2._8_4_ = fVar42;
    auVar2._12_4_ = fVar44;
    auVar3._4_4_ = fVar40;
    auVar3._0_4_ = fVar37;
    auVar3._8_4_ = fVar42;
    auVar3._12_4_ = fVar44;
    auVar33 = NEON_ext(auVar2,auVar3,4,1);
    fVar45 = fVar71 * *(float *)(param_3[1] + 4);
    fVar48 = fVar72 * *(float *)(param_3[1] + 8);
    fVar50 = fVar73 * *(float *)param_3[2];
    fVar51 = fVar38 * *(float *)(param_3[2] + 4);
    auVar77._0_4_ = fVar71 * auVar33._0_4_ - (float)uVar76 * fVar37;
    auVar77._4_4_ = fVar72 * auVar33._4_4_ - fVar69 * fVar40;
    auVar77._8_4_ = fVar73 * fVar37 - fVar71 * fVar42;
    auVar77._12_4_ = fVar38 * fVar40 - fVar72 * fVar44;
    auVar86 = NEON_ext(auVar77,auVar77,4,1);
    fVar39 = (float)uVar28 * fVar37 - fVar49 * auVar33._0_4_;
    fVar80 = fVar80 * fVar40 - fVar46 * auVar33._4_4_;
    uVar52 = (undefined1)((uint)fVar80 >> 8);
    uVar53 = (undefined1)((uint)fVar80 >> 0x10);
    uVar54 = (undefined1)((uint)fVar80 >> 0x18);
    fVar71 = fVar49 * fVar42 - fVar68 * fVar37;
    fVar72 = fVar46 * fVar44 - fVar47 * fVar40;
    auVar24[4] = SUB41(fVar80,0);
    auVar24._0_4_ = fVar39;
    auVar24[5] = uVar52;
    auVar24[6] = uVar53;
    auVar24[7] = uVar54;
    auVar24._8_4_ = fVar71;
    auVar24._12_4_ = fVar72;
    auVar25[4] = SUB41(fVar80,0);
    auVar25._0_4_ = fVar39;
    auVar25[5] = uVar52;
    auVar25[6] = uVar53;
    auVar25[7] = uVar54;
    auVar25._8_4_ = fVar71;
    auVar25._12_4_ = fVar72;
    auVar33 = NEON_ext(auVar24,auVar25,4,1);
    fVar49 = fVar49 * *(float *)(param_2[1] + 4);
    fVar46 = fVar46 * *(float *)(param_2[1] + 8);
    uVar52 = (undefined1)((uint)fVar46 >> 8);
    uVar53 = (undefined1)((uint)fVar46 >> 0x10);
    uVar54 = (undefined1)((uint)fVar46 >> 0x18);
    fVar68 = fVar68 * *(float *)param_2[2];
    uVar55 = (undefined1)((uint)fVar68 >> 8);
    uVar56 = (undefined1)((uint)fVar68 >> 0x10);
    uVar57 = (undefined1)((uint)fVar68 >> 0x18);
    fVar47 = fVar47 * *(float *)(param_2[2] + 4);
    uVar58 = (undefined1)((uint)fVar47 >> 8);
    uVar59 = (undefined1)((uint)fVar47 >> 0x10);
    uVar60 = (undefined1)((uint)fVar47 >> 0x18);
    auVar9._4_4_ = fVar48;
    auVar9._0_4_ = fVar45;
    auVar9._8_4_ = fVar50;
    auVar9._12_4_ = fVar51;
    auVar10._4_4_ = fVar48;
    auVar10._0_4_ = fVar45;
    auVar10._8_4_ = fVar50;
    auVar10._12_4_ = fVar51;
    auVar90 = NEON_ext(auVar9,auVar10,8,1);
    fVar80 = fVar37 * (*(float *)(param_2[1] + 4) + *(float *)(param_3[1] + 4));
    fVar71 = fVar40 * (*(float *)(param_2[1] + 8) + *(float *)(param_3[1] + 8));
    uVar61 = (undefined1)((uint)fVar71 >> 8);
    uVar62 = (undefined1)((uint)fVar71 >> 0x10);
    uVar63 = (undefined1)((uint)fVar71 >> 0x18);
    fVar72 = fVar42 * (*(float *)param_2[2] + *(float *)param_3[2]);
    fVar73 = fVar44 * (*(float *)(param_2[2] + 4) + *(float *)(param_3[2] + 4));
    auVar26[4] = SUB41(fVar71,0);
    auVar26._0_4_ = fVar80;
    auVar26[5] = uVar61;
    auVar26[6] = uVar62;
    auVar26[7] = uVar63;
    auVar26._8_4_ = fVar72;
    auVar26._12_4_ = fVar73;
    auVar27[4] = SUB41(fVar71,0);
    auVar27._0_4_ = fVar80;
    auVar27[5] = uVar61;
    auVar27[6] = uVar62;
    auVar27[7] = uVar63;
    auVar27._8_4_ = fVar72;
    auVar27._12_4_ = fVar73;
    auVar92 = NEON_ext(auVar26,auVar27,8,1);
    fVar80 = (fVar80 + fVar71 + auVar92._0_4_) * 0.5;
    auVar17[4] = SUB41(fVar46,0);
    auVar17._0_4_ = fVar49;
    auVar17[5] = uVar52;
    auVar17[6] = uVar53;
    auVar17[7] = uVar54;
    auVar17[8] = SUB41(fVar68,0);
    auVar17[9] = uVar55;
    auVar17[10] = uVar56;
    auVar17[0xb] = uVar57;
    auVar17[0xc] = SUB41(fVar47,0);
    auVar17[0xd] = uVar58;
    auVar17[0xe] = uVar59;
    auVar17[0xf] = uVar60;
    auVar18[4] = SUB41(fVar46,0);
    auVar18._0_4_ = fVar49;
    auVar18[5] = uVar52;
    auVar18[6] = uVar53;
    auVar18[7] = uVar54;
    auVar18[8] = SUB41(fVar68,0);
    auVar18[9] = uVar55;
    auVar18[10] = uVar56;
    auVar18[0xb] = uVar57;
    auVar18[0xc] = SUB41(fVar47,0);
    auVar18[0xd] = uVar58;
    auVar18[0xe] = uVar59;
    auVar18[0xf] = uVar60;
    auVar92 = NEON_ext(auVar17,auVar18,8,1);
    fVar68 = auVar92._0_4_ + fVar49 + fVar46;
    fVar46 = auVar90._0_4_ + fVar45 + fVar48;
    fVar47 = fVar74 * (auVar33._0_4_ * fVar46 + auVar86._0_4_ * fVar68 + fVar41 * fVar80);
    fVar49 = fVar75 * (auVar33._4_4_ * fVar46 + auVar86._4_4_ * fVar68 + fVar43 * fVar80);
    fVar74 = fVar74 * (fVar39 * fVar46 + auVar77._0_4_ * fVar68 + fVar36 * fVar80);
    fVar75 = fVar75 * (fVar46 * 0.0 + fVar68 * 0.0 + fVar80 * 0.0);
    iVar21 = -(uint)(*(float *)(lVar32 + 0x20) < ABS(fVar47));
    iVar22 = -(uint)(*(float *)(lVar32 + 0x24) < ABS(fVar49));
    iVar23 = -(uint)(*(float *)(lVar32 + 0x28) < ABS(fVar74));
    if (CONCAT13((byte)((uint)iVar22 >> 0x18) | (byte)((uint)iVar21 >> 0x18) |
                 (byte)((uint)iVar23 >> 0x18),
                 CONCAT12((byte)((uint)iVar22 >> 0x10) | (byte)((uint)iVar21 >> 0x10) |
                          (byte)((uint)iVar23 >> 0x10),
                          CONCAT11((byte)((uint)iVar22 >> 8) | (byte)((uint)iVar21 >> 8) |
                                   (byte)((uint)iVar23 >> 8),
                                   (byte)iVar22 | (byte)iVar21 | (byte)iVar23))) == 0) {
      fVar46 = *param_4 - fVar47;
      fVar36 = param_4[1] - fVar49;
      fVar41 = param_4[2] - fVar74;
      fVar68 = fVar46 * fVar46 + fVar36 * fVar36 + fVar41 * fVar41;
      fVar43 = fVar37 * (float)*(undefined8 *)(lVar32 + 0x30) +
               fVar40 * (float)((ulong)*(undefined8 *)(lVar32 + 0x30) >> 0x20) +
               fVar42 * (float)*(undefined8 *)(lVar32 + 0x38);
      fVar80 = fVar42 * fVar41 + fVar37 * fVar46 + fVar40 * fVar36;
      fVar39 = fVar42 * fVar41 + fVar37 * fVar46 + fVar40 * fVar36;
      if (0.0 < fVar43 * fVar80) {
        fVar71 = *(float *)(param_2[4] + 4);
        fVar72 = *(float *)(param_3[4] + 4);
      }
      else {
        fVar71 = *(float *)(param_2[4] + 8);
        fVar72 = *(float *)(param_3[4] + 8);
      }
      fVar43 = (*(float *)param_2[4] + *(float *)param_3[4] + fVar43 * (fVar71 + fVar72)) * 0.5;
      fVar71 = fVar80 * fVar80;
      if (!(bool)(~(fVar71 <= (fVar68 - fVar71) * fVar43 * fVar43) & 1)) goto LAB_0325e340;
      fVar43 = (*(float *)param_2[5] + *(float *)param_3[5]) * 0.5;
      if ((fVar43 < 1.0) && (fVar68 * 0.001 < fVar71)) {
        fVar80 = fVar80 * (fVar43 + SQRT(fVar68) * ABS(fVar85 / fVar80) * (fVar85 - fVar43));
        fVar39 = fVar39 * (fVar43 + SQRT(fVar46 * fVar46 + fVar36 * fVar36 + fVar41 * fVar41) *
                                    ABS(fVar91 / fVar39) * (fVar91 - fVar43));
      }
      fVar47 = fVar47 + fVar37 * fVar80;
      fVar49 = fVar49 + fVar40 * fVar39;
      fVar74 = fVar74 + fVar42 * fVar80;
      fVar75 = fVar75 + fVar44 * fVar39;
      goto LAB_0325e338;
    }
  }
  *(undefined4 *)
   (*(long *)(*(long *)(param_1 + 0x70) + 0x28) +
    ((ulong)((long)param_2 - *(long *)(lVar32 + 0x48)) >> 4) * -0x3333333333333330 + 0xc) = 2;
  *(undefined4 *)
   (*(long *)(*(long *)(param_1 + 0x70) + 0x28) +
    ((ulong)((long)param_3 - *(long *)(*(long *)(param_1 + 0x68) + 0x48)) >> 4) *
    -0x3333333333333330 + 0xc) = 2;
  fVar68 = (float)*(undefined8 *)param_4;
  fVar47 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
  fVar49 = (float)*(undefined8 *)(param_4 + 2);
  fVar46 = (float)((ulong)*(undefined8 *)(param_4 + 2) >> 0x20);
  if (*(int *)(param_2[5] + 4) <= *(int *)(param_3[5] + 4)) {
    fVar74 = (float)*(undefined8 *)(*param_2 + 8);
    fVar75 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    fVar38 = (float)*(undefined8 *)*param_2;
    fVar69 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
    fVar72 = (float)*(undefined8 *)param_2[2];
    fVar73 = (float)((ulong)*(undefined8 *)param_2[2] >> 0x20);
    fVar43 = (float)*(undefined8 *)(param_2[1] + 4);
    fVar71 = (float)((ulong)*(undefined8 *)(param_2[1] + 4) >> 0x20);
    fVar68 = fVar68 - fVar43;
    fVar47 = fVar47 - fVar71;
    fVar49 = fVar49 - fVar72;
    auVar33 = *(undefined1 (*) [16])(*(long *)(param_1 + 0x68) + 0x30);
    fVar80 = fVar68 * fVar38 + fVar47 * fVar69 + fVar49 * fVar74;
    fVar36 = fVar68 * fVar38 + fVar47 * fVar69 + fVar49 * fVar74;
    fVar85 = fVar80 * fVar80;
    fVar37 = fVar68 - fVar38 * fVar80;
    fVar40 = fVar47 - fVar69 * fVar36;
    fVar42 = fVar49 - fVar74 * fVar80;
    fVar44 = (fVar46 - fVar73) - fVar75 * fVar36;
    fVar46 = fVar68 * fVar68 + fVar47 * fVar47 + fVar49 * fVar49;
    fVar91 = auVar33._0_4_;
    fVar80 = fVar91 * fVar37;
    fVar45 = auVar33._4_4_;
    fVar36 = fVar45 * fVar40;
    fVar39 = auVar33._8_4_ * fVar42;
    fVar41 = auVar33._12_4_ * fVar44;
    auVar4._4_4_ = fVar36;
    auVar4._0_4_ = fVar80;
    auVar4._8_4_ = fVar39;
    auVar4._12_4_ = fVar41;
    auVar5._4_4_ = fVar36;
    auVar5._0_4_ = fVar80;
    auVar5._8_4_ = fVar39;
    auVar5._12_4_ = fVar41;
    auVar86 = NEON_ext(auVar4,auVar5,8,1);
    pfVar1 = (float *)(param_2[4] + 8);
    if (0.0 < fVar80 + fVar36 + auVar86._0_4_) {
      pfVar1 = (float *)(param_2[4] + 4);
    }
    fVar36 = *(float *)param_2[4];
    fVar80 = *(float *)param_2[5];
    if (0.0 < *pfVar1) {
      auVar86 = NEON_ext(auVar33,auVar33,4,1);
      auVar13._12_4_ = fVar75;
      auVar13._0_12_ = *param_2;
      auVar14._12_4_ = fVar75;
      auVar14._0_12_ = *param_2;
      auVar90 = NEON_ext(auVar13,auVar14,4,1);
      auVar87._0_4_ = auVar90._0_4_ * fVar91 - fVar38 * auVar86._0_4_;
      auVar87._4_4_ = auVar90._4_4_ * fVar45 - fVar69 * auVar86._4_4_;
      auVar87._8_4_ = fVar38 * auVar33._8_4_ - fVar74 * fVar91;
      auVar87._12_4_ = fVar69 * auVar33._12_4_ - fVar75 * fVar45;
      auVar33 = NEON_ext(auVar87,auVar87,4,1);
      fVar91 = auVar33._0_4_;
      fVar45 = auVar33._4_4_;
      auVar88._8_4_ = auVar87._0_4_;
      auVar88._0_8_ = auVar33._0_8_;
      auVar88._12_4_ = 0.0;
      fVar48 = auVar87._0_4_ * auVar87._0_4_ + fVar91 * fVar91 + fVar45 * fVar45;
      fVar39 = 0.0;
      fVar41 = 0.0;
      if (1.1920929e-07 < fVar48) {
        fVar48 = SQRT(fVar48);
        fVar50 = SQRT(auVar87._0_4_ * auVar87._0_4_ + fVar91 * fVar91 + fVar45 * fVar45);
        auVar88._0_4_ = fVar91 / fVar48;
        auVar88._4_4_ = fVar45 / fVar50;
        auVar88._8_4_ = auVar87._0_4_ / fVar48;
        auVar88._12_4_ = 0.0 / fVar50;
        fVar91 = fVar42 * auVar88._8_4_ + fVar37 * auVar88._0_4_ + fVar40 * auVar88._4_4_;
        fVar45 = fVar42 * auVar88._8_4_ + fVar37 * auVar88._0_4_ + fVar40 * auVar88._4_4_;
        if (fVar91 * fVar91 <= fVar36 * fVar36 * fVar85) {
          fVar37 = fVar37 - auVar88._0_4_ * fVar91;
          fVar40 = fVar40 - auVar88._4_4_ * fVar45;
          fVar42 = fVar42 - auVar88._8_4_ * fVar91;
          fVar44 = fVar44 - auVar88._12_4_ * fVar45;
        }
        else {
          fVar39 = fVar91;
          fVar41 = fVar45;
        }
      }
      fVar36 = fVar36 + *pfVar1;
      if ((fVar46 - fVar39 * fVar39) - fVar85 <= fVar36 * fVar36 * fVar85) {
        if (fVar39 == 0.0) goto LAB_0325e090;
        fVar37 = auVar88._0_4_ * fVar39;
        fVar40 = auVar88._4_4_ * fVar41;
        fVar42 = auVar88._8_4_ * fVar39;
        fVar44 = auVar88._12_4_ * fVar41;
      }
LAB_0325e010:
      if (fVar80 < 1.0) {
        fVar36 = fVar42 * fVar42 + fVar37 * fVar37 + fVar40 * fVar40;
        fVar39 = fVar46 * 0.001;
        bVar29 = false;
        bVar30 = true;
        bVar31 = false;
        if (1.1920929e-07 <= fVar36) {
          bVar29 = false;
          bVar30 = false;
          bVar31 = true;
          if (!NAN(fVar36) && !NAN(fVar39)) {
            bVar29 = fVar36 < fVar39;
            bVar30 = fVar36 == fVar39;
            bVar31 = false;
          }
        }
        if (!bVar30 && bVar29 == bVar31) {
          uVar76 = NEON_fmov(0x3f800000,4);
          fVar46 = fVar80 + ((float)uVar76 - fVar80) * SQRT(fVar46 / fVar36);
          fVar80 = fVar80 + ((float)((ulong)uVar76 >> 0x20) - fVar80) *
                            SQRT((fVar68 * fVar68 + fVar47 * fVar47 + fVar49 * fVar49) /
                                 (fVar42 * fVar42 + fVar37 * fVar37 + fVar40 * fVar40));
          fVar68 = fVar38 * fVar37 * fVar46;
          fVar49 = fVar69 * fVar40 * fVar80;
          fVar36 = fVar74 * fVar42 * fVar46;
          fVar47 = fVar36 + fVar68 + fVar49;
          fVar36 = fVar36 + fVar68 + fVar49;
          fVar37 = fVar37 * fVar46 - fVar38 * fVar47;
          fVar40 = fVar40 * fVar80 - fVar69 * fVar36;
          fVar42 = fVar42 * fVar46 - fVar74 * fVar47;
          fVar44 = fVar44 * (float)CONCAT13((char)((uint)fVar80 >> 0x18),
                                            CONCAT12((char)((uint)fVar80 >> 0x10),
                                                     (short)(CONCAT15((char)((uint)fVar80 >> 8),
                                                                      CONCAT14(SUB41(fVar80,0),
                                                                               fVar46)) >> 0x20))) -
                   fVar75 * fVar36;
        }
      }
      fVar43 = fVar43 + fVar37;
      fVar71 = fVar71 + fVar40;
      fVar72 = fVar72 + fVar42;
      fVar73 = fVar73 + fVar44;
    }
    else if ((fVar36 * fVar36 + 1.0) * fVar85 < fVar46) goto LAB_0325e010;
LAB_0325e090:
    *(ulong *)(param_5 + 2) = CONCAT44(fVar73,fVar72);
    *(ulong *)param_5 = CONCAT44(fVar71,fVar43);
    uVar76 = *(undefined8 *)(*param_3 + 8);
    uVar52 = (undefined1)((ulong)uVar76 >> 8);
    uVar53 = (undefined1)((ulong)uVar76 >> 0x10);
    uVar54 = (undefined1)((ulong)uVar76 >> 0x18);
    uVar55 = (undefined1)((ulong)uVar76 >> 0x20);
    uVar56 = (undefined1)((ulong)uVar76 >> 0x28);
    uVar57 = (undefined1)((ulong)uVar76 >> 0x30);
    uVar58 = (undefined1)((ulong)uVar76 >> 0x38);
    fVar74 = (float)*(undefined8 *)param_3[2];
    fVar75 = (float)((ulong)*(undefined8 *)param_3[2] >> 0x20);
    fVar47 = (float)*(undefined8 *)(param_3[1] + 4);
    fVar49 = (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20);
    fVar43 = fVar43 - fVar47;
    fVar71 = fVar71 - fVar49;
    fVar72 = fVar72 - fVar74;
    fVar68 = (float)*(undefined8 *)*param_3;
    fVar46 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
    fVar80 = (float)uVar76;
    fVar39 = fVar43 * fVar68 + fVar71 * fVar46 + fVar72 * fVar80;
    fVar38 = fVar43 * fVar68 + fVar71 * fVar46 + fVar72 * fVar80;
    fVar42 = fVar39 * fVar39;
    fVar36 = (float)((ulong)uVar76 >> 0x20);
    fVar41 = fVar43 * fVar43 + fVar71 * fVar71 + fVar72 * fVar72;
    auVar33 = *(undefined1 (*) [16])(*(long *)(param_1 + 0x68) + 0x30);
    fVar69 = fVar43 - fVar68 * fVar39;
    fVar37 = fVar71 - fVar46 * fVar38;
    fVar40 = fVar72 - fVar80 * fVar39;
    fVar39 = (fVar73 - fVar75) -
             fVar36 * (float)(CONCAT17((char)((uint)fVar38 >> 0x18),
                                       CONCAT16((char)((uint)fVar38 >> 0x10),
                                                CONCAT15((char)((uint)fVar38 >> 8),
                                                         CONCAT14(SUB41(fVar38,0),fVar39)))) >> 0x20
                             );
    fVar73 = *(float *)param_3[4];
    fVar38 = auVar33._0_4_;
    auVar84._0_4_ = fVar38 * fVar69;
    fVar44 = auVar33._4_4_;
    auVar84._4_4_ = fVar44 * fVar37;
    auVar84._8_4_ = auVar33._8_4_ * fVar40;
    auVar84._12_4_ = auVar33._12_4_ * fVar39;
    auVar86 = NEON_ext(auVar84,auVar84,8,1);
    pfVar1 = (float *)(param_3[4] + 8);
    if (0.0 < auVar84._0_4_ + auVar84._4_4_ + auVar86._0_4_) {
      pfVar1 = (float *)(param_3[4] + 4);
    }
    fVar85 = *(float *)param_3[5];
    if (0.0 < *pfVar1) {
      auVar86 = NEON_ext(auVar33,auVar33,4,1);
      auVar19[9] = uVar52;
      auVar19._0_9_ = *(unkbyte9 *)*param_3;
      auVar19[10] = uVar53;
      auVar19[0xb] = uVar54;
      auVar19[0xc] = uVar55;
      auVar19[0xd] = uVar56;
      auVar19[0xe] = uVar57;
      auVar19[0xf] = uVar58;
      auVar20[9] = uVar52;
      auVar20._0_9_ = *(unkbyte9 *)*param_3;
      auVar20[10] = uVar53;
      auVar20[0xb] = uVar54;
      auVar20[0xc] = uVar55;
      auVar20[0xd] = uVar56;
      auVar20[0xe] = uVar57;
      auVar20[0xf] = uVar58;
      auVar90 = NEON_ext(auVar19,auVar20,4,1);
      auVar89._0_4_ = auVar90._0_4_ * fVar38 - fVar68 * auVar86._0_4_;
      auVar89._4_4_ = auVar90._4_4_ * fVar44 - fVar46 * auVar86._4_4_;
      auVar89._8_4_ = fVar68 * auVar33._8_4_ - fVar80 * fVar38;
      auVar89._12_4_ = fVar46 * auVar33._12_4_ - fVar36 * fVar44;
      auVar33 = NEON_ext(auVar89,auVar89,4,1);
      fVar91 = auVar33._0_4_;
      fVar48 = auVar33._4_4_;
      fVar45 = auVar89._0_4_ * auVar89._0_4_ + fVar91 * fVar91 + fVar48 * fVar48;
      auVar35._8_4_ = auVar89._0_4_;
      auVar35._0_8_ = auVar33._0_8_;
      auVar35._12_4_ = 0.0;
      fVar38 = 0.0;
      fVar44 = 0.0;
      if (1.1920929e-07 < fVar45) {
        fVar45 = SQRT(fVar45);
        fVar38 = SQRT(auVar89._0_4_ * auVar89._0_4_ + fVar91 * fVar91 + fVar48 * fVar48);
        auVar35._0_4_ = fVar91 / fVar45;
        auVar35._4_4_ = fVar48 / fVar38;
        auVar35._8_4_ = auVar89._0_4_ / fVar45;
        auVar35._12_4_ = 0.0 / fVar38;
        fVar38 = fVar40 * auVar35._8_4_ + fVar69 * auVar35._0_4_ + fVar37 * auVar35._4_4_;
        fVar44 = fVar40 * auVar35._8_4_ + fVar69 * auVar35._0_4_ + fVar37 * auVar35._4_4_;
        if (fVar38 * fVar38 <= fVar73 * fVar73 * fVar42) {
          fVar69 = fVar69 - auVar35._0_4_ * fVar38;
          fVar37 = fVar37 - auVar35._4_4_ * fVar44;
          fVar40 = fVar40 - auVar35._8_4_ * fVar38;
          fVar39 = fVar39 - auVar35._12_4_ * fVar44;
          fVar38 = 0.0;
          fVar44 = 0.0;
        }
      }
      fVar73 = fVar73 + *pfVar1;
      if ((fVar41 - fVar38 * fVar38) - fVar42 <= fVar73 * fVar73 * fVar42) {
        if (fVar38 == 0.0) goto LAB_0325e340;
        fVar69 = auVar35._0_4_ * fVar38;
        fVar37 = auVar35._4_4_ * fVar44;
        fVar40 = auVar35._8_4_ * fVar38;
        fVar39 = auVar35._12_4_ * fVar44;
      }
    }
    else if (fVar41 <= (fVar73 * fVar73 + 1.0) * fVar42) {
LAB_0325e340:
      *(ulong *)(param_5 + 2) = CONCAT44(fVar75,fVar74);
      *(ulong *)param_5 = CONCAT44(fVar49,fVar47);
      return;
    }
    if (fVar85 < 1.0) {
      fVar73 = fVar40 * fVar40 + fVar69 * fVar69 + fVar37 * fVar37;
      fVar38 = fVar41 * 0.001;
      bVar29 = false;
      bVar30 = true;
      bVar31 = false;
      if (1.1920929e-07 <= fVar73) {
        bVar29 = false;
        bVar30 = false;
        bVar31 = true;
        if (!NAN(fVar73) && !NAN(fVar38)) {
          bVar29 = fVar73 < fVar38;
          bVar30 = fVar73 == fVar38;
          bVar31 = false;
        }
      }
      if (!bVar30 && bVar29 == bVar31) {
        uVar76 = NEON_fmov(0x3f800000,4);
        fVar41 = fVar85 + ((float)uVar76 - fVar85) * SQRT(fVar41 / fVar73);
        fVar85 = fVar85 + ((float)((ulong)uVar76 >> 0x20) - fVar85) *
                          SQRT((fVar43 * fVar43 + fVar71 * fVar71 + fVar72 * fVar72) /
                               (fVar40 * fVar40 + fVar69 * fVar69 + fVar37 * fVar37));
        fVar69 = fVar69 * fVar41;
        fVar37 = fVar37 * fVar85;
        fVar40 = fVar40 * fVar41;
        fVar41 = fVar68 * fVar69;
        fVar71 = fVar46 * fVar37;
        fVar72 = fVar80 * fVar40;
        fVar43 = fVar72 + fVar41 + fVar71;
        fVar72 = fVar72 + fVar41 + fVar71;
        fVar69 = fVar69 - fVar68 * fVar43;
        fVar37 = fVar37 - fVar46 * fVar72;
        fVar40 = fVar40 - fVar80 * fVar43;
        fVar39 = fVar39 * fVar85 - fVar36 * fVar72;
      }
    }
    fVar47 = fVar47 + fVar69;
    fVar49 = fVar49 + fVar37;
    fVar74 = fVar74 + fVar40;
    fVar75 = fVar75 + fVar39;
    goto LAB_0325e338;
  }
  fVar74 = (float)*(undefined8 *)(*param_3 + 8);
  fVar75 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  fVar38 = (float)*(undefined8 *)*param_3;
  fVar69 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
  fVar72 = (float)*(undefined8 *)param_3[2];
  fVar73 = (float)((ulong)*(undefined8 *)param_3[2] >> 0x20);
  fVar43 = (float)*(undefined8 *)(param_3[1] + 4);
  fVar71 = (float)((ulong)*(undefined8 *)(param_3[1] + 4) >> 0x20);
  fVar68 = fVar68 - fVar43;
  fVar47 = fVar47 - fVar71;
  fVar49 = fVar49 - fVar72;
  fVar39 = fVar68 * fVar38 + fVar47 * fVar69 + fVar49 * fVar74;
  fVar37 = fVar68 * fVar38 + fVar47 * fVar69 + fVar49 * fVar74;
  fVar42 = fVar39 * fVar39;
  fVar41 = *(float *)param_3[4];
  fVar40 = fVar68 * fVar68 + fVar47 * fVar47 + fVar49 * fVar49;
  auVar33 = *(undefined1 (*) [16])(*(long *)(param_1 + 0x68) + 0x30);
  fVar80 = fVar68 - fVar38 * fVar39;
  uVar52 = SUB41(fVar80,0);
  uVar53 = (undefined1)((uint)fVar80 >> 8);
  uVar54 = (undefined1)((uint)fVar80 >> 0x10);
  uVar55 = (undefined1)((uint)fVar80 >> 0x18);
  fVar36 = fVar47 - fVar69 * fVar37;
  uVar56 = SUB41(fVar36,0);
  uVar57 = (undefined1)((uint)fVar36 >> 8);
  uVar58 = (undefined1)((uint)fVar36 >> 0x10);
  uVar59 = (undefined1)((uint)fVar36 >> 0x18);
  fVar39 = fVar49 - fVar74 * fVar39;
  uVar60 = SUB41(fVar39,0);
  uVar61 = (undefined1)((uint)fVar39 >> 8);
  uVar62 = (undefined1)((uint)fVar39 >> 0x10);
  uVar63 = (undefined1)((uint)fVar39 >> 0x18);
  fVar46 = (fVar46 - fVar73) - fVar75 * fVar37;
  uVar64 = SUB41(fVar46,0);
  uVar65 = (undefined1)((uint)fVar46 >> 8);
  uVar66 = (undefined1)((uint)fVar46 >> 0x10);
  uVar67 = (undefined1)((uint)fVar46 >> 0x18);
  fVar37 = *(float *)param_3[5];
  fVar44 = auVar33._0_4_;
  auVar78._0_4_ = fVar44 * fVar80;
  fVar85 = auVar33._4_4_;
  auVar78._4_4_ = fVar85 * fVar36;
  auVar78._8_4_ = auVar33._8_4_ * fVar39;
  auVar78._12_4_ = auVar33._12_4_ * fVar46;
  auVar86 = NEON_ext(auVar78,auVar78,8,1);
  pfVar1 = (float *)(param_3[4] + 8);
  if (0.0 < auVar78._0_4_ + auVar78._4_4_ + auVar86._0_4_) {
    pfVar1 = (float *)(param_3[4] + 4);
  }
  if (0.0 < *pfVar1) {
    auVar86 = NEON_ext(auVar33,auVar33,4,1);
    auVar6._12_4_ = fVar75;
    auVar6._0_12_ = *param_3;
    auVar7._12_4_ = fVar75;
    auVar7._0_12_ = *param_3;
    auVar90 = NEON_ext(auVar6,auVar7,4,1);
    auVar81._0_4_ = auVar90._0_4_ * fVar44 - fVar38 * auVar86._0_4_;
    auVar81._4_4_ = auVar90._4_4_ * fVar85 - fVar69 * auVar86._4_4_;
    auVar81._8_4_ = fVar38 * auVar33._8_4_ - fVar74 * fVar44;
    auVar81._12_4_ = fVar69 * auVar33._12_4_ - fVar75 * fVar85;
    auVar33 = NEON_ext(auVar81,auVar81,4,1);
    fVar91 = auVar33._0_4_;
    fVar45 = auVar33._4_4_;
    auVar82._8_4_ = auVar81._0_4_;
    auVar82._0_8_ = auVar33._0_8_;
    auVar82._12_4_ = 0.0;
    fVar48 = auVar81._0_4_ * auVar81._0_4_ + fVar91 * fVar91 + fVar45 * fVar45;
    fVar44 = 0.0;
    fVar85 = 0.0;
    if (1.1920929e-07 < fVar48) {
      fVar48 = SQRT(fVar48);
      fVar44 = SQRT(auVar81._0_4_ * auVar81._0_4_ + fVar91 * fVar91 + fVar45 * fVar45);
      auVar82._0_4_ = fVar91 / fVar48;
      auVar82._4_4_ = fVar45 / fVar44;
      auVar82._8_4_ = auVar81._0_4_ / fVar48;
      auVar82._12_4_ = 0.0 / fVar44;
      fVar44 = fVar39 * auVar82._8_4_ + fVar80 * auVar82._0_4_ + fVar36 * auVar82._4_4_;
      fVar85 = fVar39 * auVar82._8_4_ + fVar80 * auVar82._0_4_ + fVar36 * auVar82._4_4_;
      if (fVar44 * fVar44 <= fVar41 * fVar41 * fVar42) {
        fVar80 = fVar80 - auVar82._0_4_ * fVar44;
        uVar52 = SUB41(fVar80,0);
        uVar53 = (undefined1)((uint)fVar80 >> 8);
        uVar54 = (undefined1)((uint)fVar80 >> 0x10);
        uVar55 = (undefined1)((uint)fVar80 >> 0x18);
        fVar36 = fVar36 - auVar82._4_4_ * fVar85;
        uVar56 = SUB41(fVar36,0);
        uVar57 = (undefined1)((uint)fVar36 >> 8);
        uVar58 = (undefined1)((uint)fVar36 >> 0x10);
        uVar59 = (undefined1)((uint)fVar36 >> 0x18);
        fVar39 = fVar39 - auVar82._8_4_ * fVar44;
        uVar60 = SUB41(fVar39,0);
        uVar61 = (undefined1)((uint)fVar39 >> 8);
        uVar62 = (undefined1)((uint)fVar39 >> 0x10);
        uVar63 = (undefined1)((uint)fVar39 >> 0x18);
        fVar46 = fVar46 - auVar82._12_4_ * fVar85;
        uVar64 = SUB41(fVar46,0);
        uVar65 = (undefined1)((uint)fVar46 >> 8);
        uVar66 = (undefined1)((uint)fVar46 >> 0x10);
        uVar67 = (undefined1)((uint)fVar46 >> 0x18);
        fVar44 = 0.0;
        fVar85 = 0.0;
      }
    }
    fVar41 = fVar41 + *pfVar1;
    if ((fVar40 - fVar44 * fVar44) - fVar42 <= fVar41 * fVar41 * fVar42) {
      if (fVar44 == 0.0) goto LAB_0325deb0;
      fVar46 = auVar82._0_4_ * fVar44;
      uVar52 = SUB41(fVar46,0);
      uVar53 = (undefined1)((uint)fVar46 >> 8);
      uVar54 = (undefined1)((uint)fVar46 >> 0x10);
      uVar55 = (undefined1)((uint)fVar46 >> 0x18);
      fVar46 = auVar82._4_4_ * fVar85;
      uVar56 = SUB41(fVar46,0);
      uVar57 = (undefined1)((uint)fVar46 >> 8);
      uVar58 = (undefined1)((uint)fVar46 >> 0x10);
      uVar59 = (undefined1)((uint)fVar46 >> 0x18);
      fVar44 = auVar82._8_4_ * fVar44;
      uVar60 = SUB41(fVar44,0);
      uVar61 = (undefined1)((uint)fVar44 >> 8);
      uVar62 = (undefined1)((uint)fVar44 >> 0x10);
      uVar63 = (undefined1)((uint)fVar44 >> 0x18);
      fVar85 = auVar82._12_4_ * fVar85;
      uVar64 = SUB41(fVar85,0);
      uVar65 = (undefined1)((uint)fVar85 >> 8);
      uVar66 = (undefined1)((uint)fVar85 >> 0x10);
      uVar67 = (undefined1)((uint)fVar85 >> 0x18);
    }
LAB_0325de2c:
    if (fVar37 < 1.0) {
      fVar46 = (float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52))) *
               (float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52)));
      fVar36 = (float)CONCAT13(uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar56))) *
               (float)CONCAT13(uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar56)));
      fVar39 = (float)CONCAT13(uVar63,CONCAT12(uVar62,CONCAT11(uVar61,uVar60))) *
               (float)CONCAT13(uVar63,CONCAT12(uVar62,CONCAT11(uVar61,uVar60)));
      fVar80 = fVar39 + fVar46 + fVar36;
      fVar41 = fVar40 * 0.001;
      bVar29 = false;
      bVar30 = true;
      bVar31 = false;
      if (1.1920929e-07 <= fVar80) {
        bVar29 = false;
        bVar30 = false;
        bVar31 = true;
        if (!NAN(fVar80) && !NAN(fVar41)) {
          bVar29 = fVar80 < fVar41;
          bVar30 = fVar80 == fVar41;
          bVar31 = false;
        }
      }
      if (!bVar30 && bVar29 == bVar31) {
        uVar76 = NEON_fmov(0x3f800000,4);
        fVar41 = fVar37 + ((float)uVar76 - fVar37) * SQRT(fVar40 / fVar80);
        fVar37 = fVar37 + ((float)((ulong)uVar76 >> 0x20) - fVar37) *
                          SQRT((fVar68 * fVar68 + fVar47 * fVar47 + fVar49 * fVar49) /
                               (fVar39 + fVar46 + fVar36));
        fVar49 = (float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52))) * fVar41;
        fVar36 = (float)CONCAT13(uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar56))) * fVar37;
        fVar41 = (float)CONCAT13(uVar63,CONCAT12(uVar62,CONCAT11(uVar61,uVar60))) * fVar41;
        fVar68 = fVar38 * fVar49;
        fVar46 = fVar69 * fVar36;
        fVar80 = fVar74 * fVar41;
        fVar47 = fVar80 + fVar68 + fVar46;
        fVar80 = fVar80 + fVar68 + fVar46;
        fVar49 = fVar49 - fVar38 * fVar47;
        uVar52 = SUB41(fVar49,0);
        uVar53 = (undefined1)((uint)fVar49 >> 8);
        uVar54 = (undefined1)((uint)fVar49 >> 0x10);
        uVar55 = (undefined1)((uint)fVar49 >> 0x18);
        fVar36 = fVar36 - fVar69 * fVar80;
        uVar56 = SUB41(fVar36,0);
        uVar57 = (undefined1)((uint)fVar36 >> 8);
        uVar58 = (undefined1)((uint)fVar36 >> 0x10);
        uVar59 = (undefined1)((uint)fVar36 >> 0x18);
        fVar41 = fVar41 - fVar74 * fVar47;
        uVar60 = SUB41(fVar41,0);
        uVar61 = (undefined1)((uint)fVar41 >> 8);
        uVar62 = (undefined1)((uint)fVar41 >> 0x10);
        uVar63 = (undefined1)((uint)fVar41 >> 0x18);
        fVar68 = (float)CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,uVar64))) * fVar37 -
                 fVar75 * (float)CONCAT13((char)((uint)fVar80 >> 0x18),
                                          CONCAT12((char)((uint)fVar80 >> 0x10),
                                                   (short)(CONCAT15((char)((uint)fVar80 >> 8),
                                                                    CONCAT14(SUB41(fVar80,0),fVar47)
                                                                   ) >> 0x20)));
        uVar64 = SUB41(fVar68,0);
        uVar65 = (undefined1)((uint)fVar68 >> 8);
        uVar66 = (undefined1)((uint)fVar68 >> 0x10);
        uVar67 = (undefined1)((uint)fVar68 >> 0x18);
      }
    }
    fVar43 = fVar43 + (float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52)));
    fVar71 = fVar71 + (float)CONCAT13(uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar56)));
    fVar72 = fVar72 + (float)CONCAT13(uVar63,CONCAT12(uVar62,CONCAT11(uVar61,uVar60)));
    fVar73 = fVar73 + (float)CONCAT13(uVar67,CONCAT12(uVar66,CONCAT11(uVar65,uVar64)));
  }
  else if ((fVar41 * fVar41 + 1.0) * fVar42 < fVar40) goto LAB_0325de2c;
LAB_0325deb0:
  *(ulong *)(param_5 + 2) = CONCAT44(fVar73,fVar72);
  *(ulong *)param_5 = CONCAT44(fVar71,fVar43);
  fVar41 = (float)*(undefined8 *)(*param_2 + 8);
  fVar38 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  fVar36 = (float)*(undefined8 *)*param_2;
  fVar39 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
  uVar8 = *(undefined8 *)param_2[2];
  fVar75 = (float)((ulong)uVar8 >> 0x20);
  uVar76 = *(undefined8 *)(param_2[1] + 4);
  fVar49 = (float)((ulong)uVar76 >> 0x20);
  fVar43 = fVar43 - (float)uVar76;
  fVar71 = fVar71 - fVar49;
  fVar72 = fVar72 - (float)uVar8;
  fVar68 = fVar43 * fVar36 + fVar71 * fVar39 + fVar72 * fVar41;
  fVar80 = fVar43 * fVar36 + fVar71 * fVar39 + fVar72 * fVar41;
  fVar37 = fVar68 * fVar68;
  fVar69 = fVar43 * fVar43 + fVar71 * fVar71 + fVar72 * fVar72;
  auVar33 = *(undefined1 (*) [16])(*(long *)(param_1 + 0x68) + 0x30);
  fVar47 = fVar43 - fVar36 * fVar68;
  fVar46 = fVar71 - fVar39 * fVar80;
  fVar74 = fVar72 - fVar41 * fVar68;
  fVar80 = (fVar73 - fVar75) - fVar38 * fVar80;
  fVar68 = *(float *)param_2[4];
  fVar73 = auVar33._0_4_;
  auVar79._0_4_ = fVar73 * fVar47;
  fVar40 = auVar33._4_4_;
  auVar79._4_4_ = fVar40 * fVar46;
  auVar79._8_4_ = auVar33._8_4_ * fVar74;
  auVar79._12_4_ = auVar33._12_4_ * fVar80;
  auVar86 = NEON_ext(auVar79,auVar79,8,1);
  pfVar1 = (float *)(param_2[4] + 8);
  if (0.0 < auVar79._0_4_ + auVar79._4_4_ + auVar86._0_4_) {
    pfVar1 = (float *)(param_2[4] + 4);
  }
  fVar42 = *(float *)param_2[5];
  if (0.0 < *pfVar1) {
    auVar86 = NEON_ext(auVar33,auVar33,4,1);
    auVar11._12_4_ = fVar38;
    auVar11._0_12_ = *param_2;
    auVar12._12_4_ = fVar38;
    auVar12._0_12_ = *param_2;
    auVar90 = NEON_ext(auVar11,auVar12,4,1);
    auVar83._0_4_ = auVar90._0_4_ * fVar73 - fVar36 * auVar86._0_4_;
    auVar83._4_4_ = auVar90._4_4_ * fVar40 - fVar39 * auVar86._4_4_;
    auVar83._8_4_ = fVar36 * auVar33._8_4_ - fVar41 * fVar73;
    auVar83._12_4_ = fVar39 * auVar33._12_4_ - fVar38 * fVar40;
    auVar33 = NEON_ext(auVar83,auVar83,4,1);
    fVar44 = auVar33._0_4_;
    fVar91 = auVar33._4_4_;
    fVar85 = auVar83._0_4_ * auVar83._0_4_ + fVar44 * fVar44 + fVar91 * fVar91;
    auVar34._8_4_ = auVar83._0_4_;
    auVar34._0_8_ = auVar33._0_8_;
    auVar34._12_4_ = 0.0;
    fVar73 = 0.0;
    fVar40 = 0.0;
    if (1.1920929e-07 < fVar85) {
      fVar85 = SQRT(fVar85);
      fVar73 = SQRT(auVar83._0_4_ * auVar83._0_4_ + fVar44 * fVar44 + fVar91 * fVar91);
      auVar34._0_4_ = fVar44 / fVar85;
      auVar34._4_4_ = fVar91 / fVar73;
      auVar34._8_4_ = auVar83._0_4_ / fVar85;
      auVar34._12_4_ = 0.0 / fVar73;
      fVar73 = fVar74 * auVar34._8_4_ + fVar47 * auVar34._0_4_ + fVar46 * auVar34._4_4_;
      fVar40 = fVar74 * auVar34._8_4_ + fVar47 * auVar34._0_4_ + fVar46 * auVar34._4_4_;
      if (fVar73 * fVar73 <= fVar68 * fVar68 * fVar37) {
        fVar47 = fVar47 - auVar34._0_4_ * fVar73;
        fVar46 = fVar46 - auVar34._4_4_ * fVar40;
        fVar74 = fVar74 - auVar34._8_4_ * fVar73;
        fVar80 = fVar80 - auVar34._12_4_ * fVar40;
        fVar73 = 0.0;
        fVar40 = 0.0;
      }
    }
    fVar68 = fVar68 + *pfVar1;
    if ((fVar69 - fVar73 * fVar73) - fVar37 <= fVar68 * fVar68 * fVar37) {
      if (fVar73 == 0.0) goto LAB_0325e274;
      fVar47 = auVar34._0_4_ * fVar73;
      fVar46 = auVar34._4_4_ * fVar40;
      fVar74 = auVar34._8_4_ * fVar73;
      fVar80 = auVar34._12_4_ * fVar40;
    }
  }
  else if (fVar69 <= (fVar68 * fVar68 + 1.0) * fVar37) {
LAB_0325e274:
    *(undefined8 *)(param_5 + 2) = uVar8;
    *(undefined8 *)param_5 = uVar76;
    return;
  }
  if (fVar42 < 1.0) {
    fVar73 = fVar74 * fVar74 + fVar47 * fVar47 + fVar46 * fVar46;
    fVar68 = fVar69 * 0.001;
    bVar29 = false;
    bVar30 = true;
    bVar31 = false;
    if (1.1920929e-07 <= fVar73) {
      bVar29 = false;
      bVar30 = false;
      bVar31 = true;
      if (!NAN(fVar73) && !NAN(fVar68)) {
        bVar29 = fVar73 < fVar68;
        bVar30 = fVar73 == fVar68;
        bVar31 = false;
      }
    }
    if (!bVar30 && bVar29 == bVar31) {
      uVar70 = NEON_fmov(0x3f800000,4);
      fVar68 = fVar42 + ((float)uVar70 - fVar42) * SQRT(fVar69 / fVar73);
      fVar42 = fVar42 + ((float)((ulong)uVar70 >> 0x20) - fVar42) *
                        SQRT((fVar43 * fVar43 + fVar71 * fVar71 + fVar72 * fVar72) /
                             (fVar74 * fVar74 + fVar47 * fVar47 + fVar46 * fVar46));
      fVar47 = fVar47 * fVar68;
      fVar46 = fVar46 * fVar42;
      fVar74 = fVar74 * fVar68;
      fVar68 = fVar36 * fVar47;
      fVar71 = fVar39 * fVar46;
      fVar72 = fVar41 * fVar74;
      fVar43 = fVar72 + fVar68 + fVar71;
      fVar72 = fVar72 + fVar68 + fVar71;
      fVar47 = fVar47 - fVar36 * fVar43;
      fVar46 = fVar46 - fVar39 * fVar72;
      fVar74 = fVar74 - fVar41 * fVar43;
      fVar80 = fVar80 * fVar42 - fVar38 * fVar72;
    }
  }
  fVar47 = (float)uVar76 + fVar47;
  fVar49 = fVar49 + fVar46;
  fVar74 = (float)uVar8 + fVar74;
  fVar75 = fVar75 + fVar80;
LAB_0325e338:
  param_5[2] = fVar74;
  param_5[3] = fVar75;
  *param_5 = fVar47;
  param_5[1] = fVar49;
  return;
}



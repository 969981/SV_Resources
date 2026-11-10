/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0325e350; name: FUN_0325e350
 */


void FUN_0325e350(undefined8 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined1 (*param_4) [12],int param_5,undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  int iVar25;
  int iVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined8 uVar42;
  float fVar45;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uVar46;
  undefined1 auVar47 [16];
  float fVar49;
  undefined1 auVar48 [16];
  
  auVar41 = *param_3;
  auVar27 = NEON_ext(auVar41,auVar41,8,1);
  fVar19 = (float)*(undefined8 *)(*param_4 + 8);
  fVar20 = (float)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20);
  uVar46 = *(undefined8 *)*param_4;
  auVar2 = *param_2;
  uVar36 = NEON_ext(auVar41._0_8_,auVar27._0_8_,4,1);
  auVar27._12_4_ = fVar20;
  auVar27._0_12_ = *param_4;
  auVar47._12_4_ = fVar20;
  auVar47._0_12_ = *param_4;
  auVar27 = NEON_ext(auVar27,auVar47,8,1);
  uVar42 = NEON_ext(uVar46,auVar27._0_8_,4,1);
  fVar5 = (float)uVar46;
  fVar6 = (float)((ulong)uVar46 >> 0x20);
  fVar38 = (float)((ulong)uVar36 >> 0x20);
  fVar39 = auVar41._0_4_;
  fVar40 = auVar41._4_4_;
  fVar45 = (float)((ulong)uVar42 >> 0x20);
  fVar21 = auVar41._8_4_;
  fVar33 = auVar41._12_4_;
  fVar28 = fVar39 * (float)uVar42 - fVar5 * (float)uVar36;
  fVar29 = fVar40 * fVar45 - fVar6 * fVar38;
  fVar30 = fVar21 * fVar5 - fVar19 * fVar39;
  fVar31 = fVar33 * fVar6 - fVar20 * fVar40;
  auVar41._4_4_ = fVar29;
  auVar41._0_4_ = fVar28;
  auVar41._8_4_ = fVar30;
  auVar41._12_4_ = fVar31;
  auVar44._4_4_ = fVar29;
  auVar44._0_4_ = fVar28;
  auVar44._8_4_ = fVar30;
  auVar44._12_4_ = fVar31;
  auVar27 = NEON_ext(auVar41,auVar44,4,1);
  fVar32 = auVar2._0_4_;
  fVar30 = fVar32 * auVar27._0_4_;
  fVar34 = auVar2._4_4_;
  fVar31 = fVar34 * auVar27._4_4_;
  fVar35 = auVar2._8_4_;
  fVar29 = fVar30 + fVar31 + fVar35 * fVar28;
  fVar30 = fVar30 + fVar31 + fVar35 * fVar28;
  if (1.1920929e-07 <= ABS(fVar29)) {
    auVar47 = NEON_ext(auVar2,auVar2,8,1);
    uVar46 = NEON_ext(auVar2._0_8_,auVar47._0_8_,4,1);
    lVar9 = param_1[0xd];
    fVar31 = auVar2._12_4_;
    fVar49 = (float)((ulong)uVar46 >> 0x20);
    auVar37._0_4_ = fVar32 * (float)uVar36 - fVar39 * (float)uVar46;
    auVar37._4_4_ = fVar34 * fVar38 - fVar40 * fVar49;
    auVar37._8_4_ = fVar35 * fVar39 - fVar21 * fVar32;
    auVar37._12_4_ = fVar31 * fVar40 - fVar33 * fVar34;
    auVar48 = NEON_ext(auVar37,auVar37,4,1);
    auVar43._0_4_ = fVar5 * (float)uVar46 - fVar32 * (float)uVar42;
    auVar43._4_4_ = fVar6 * fVar49 - fVar34 * fVar45;
    auVar43._8_4_ = fVar19 * fVar32 - fVar35 * fVar5;
    auVar43._12_4_ = fVar20 * fVar34 - fVar31 * fVar6;
    auVar47 = NEON_ext(auVar43,auVar43,4,1);
    fVar32 = fVar32 * (float)*(undefined8 *)param_2[1];
    fVar34 = fVar34 * (float)((ulong)*(undefined8 *)param_2[1] >> 0x20);
    fVar35 = fVar35 * (float)*(undefined8 *)(param_2[1] + 8);
    fVar31 = fVar31 * (float)((ulong)*(undefined8 *)(param_2[1] + 8) >> 0x20);
    auVar7._4_4_ = fVar34;
    auVar7._0_4_ = fVar32;
    auVar7._8_4_ = fVar35;
    auVar7._12_4_ = fVar31;
    auVar8._4_4_ = fVar34;
    auVar8._0_4_ = fVar32;
    auVar8._8_4_ = fVar35;
    auVar8._12_4_ = fVar31;
    auVar44 = NEON_ext(auVar7,auVar8,8,1);
    auVar23._0_4_ = fVar39 * *(float *)param_3[1];
    auVar23._4_4_ = fVar40 * *(float *)(param_3[1] + 4);
    auVar23._8_4_ = fVar21 * *(float *)(param_3[1] + 8);
    auVar23._12_4_ = fVar33 * *(float *)(param_3[1] + 0xc);
    auVar41 = NEON_ext(auVar23,auVar23,8,1);
    fVar21 = auVar23._0_4_ + auVar23._4_4_ + auVar41._0_4_;
    fVar33 = fVar32 + fVar34 + auVar44._0_4_;
    fVar5 = fVar5 * *(float *)(param_4[1] + 4);
    fVar6 = fVar6 * *(float *)(param_4[1] + 8);
    uVar16 = (undefined1)((uint)fVar6 >> 8);
    uVar17 = (undefined1)((uint)fVar6 >> 0x10);
    uVar18 = (undefined1)((uint)fVar6 >> 0x18);
    fVar19 = fVar19 * *(float *)param_4[2];
    fVar20 = fVar20 * *(float *)(param_4[2] + 4);
    auVar2[4] = SUB41(fVar6,0);
    auVar2._0_4_ = fVar5;
    auVar2[5] = uVar16;
    auVar2[6] = uVar17;
    auVar2[7] = uVar18;
    auVar2._8_4_ = fVar19;
    auVar2._12_4_ = fVar20;
    auVar3[4] = SUB41(fVar6,0);
    auVar3._0_4_ = fVar5;
    auVar3[5] = uVar16;
    auVar3[6] = uVar17;
    auVar3[7] = uVar18;
    auVar3._8_4_ = fVar19;
    auVar3._12_4_ = fVar20;
    auVar41 = NEON_ext(auVar2,auVar3,8,1);
    fVar5 = fVar5 + fVar6 + auVar41._0_4_;
    fVar6 = (auVar27._0_4_ * fVar33 + auVar47._0_4_ * fVar21 + auVar48._0_4_ * fVar5) / fVar29;
    fVar19 = (auVar27._4_4_ * fVar33 + auVar47._4_4_ * fVar21 + auVar48._4_4_ * fVar5) / fVar30;
    fVar29 = (fVar28 * fVar33 + auVar43._0_4_ * fVar21 + auVar37._0_4_ * fVar5) / fVar29;
    iVar22 = -(uint)(*(float *)(lVar9 + 0x20) < ABS(fVar6));
    iVar25 = -(uint)(*(float *)(lVar9 + 0x24) < ABS(fVar19));
    iVar26 = -(uint)(*(float *)(lVar9 + 0x28) < ABS(fVar29));
    if (CONCAT13((byte)((uint)iVar25 >> 0x18) | (byte)((uint)iVar22 >> 0x18) |
                 (byte)((uint)iVar26 >> 0x18),
                 CONCAT12((byte)((uint)iVar25 >> 0x10) | (byte)((uint)iVar22 >> 0x10) |
                          (byte)((uint)iVar26 >> 0x10),
                          CONCAT11((byte)((uint)iVar25 >> 8) | (byte)((uint)iVar22 >> 8) |
                                   (byte)((uint)iVar26 >> 8),
                                   (byte)iVar25 | (byte)iVar22 | (byte)iVar26))) == 0) {
      param_7[1] = CONCAT44((fVar33 * 0.0 + fVar21 * 0.0 + fVar5 * 0.0) / fVar30,fVar29);
      *param_7 = CONCAT17((char)((uint)fVar19 >> 0x18),
                          CONCAT16((char)((uint)fVar19 >> 0x10),
                                   CONCAT15((char)((uint)fVar19 >> 8),
                                            CONCAT14(SUB41(fVar19,0),fVar6))));
      return;
    }
  }
  if (param_5 != 0) {
    iVar22 = *(int *)(param_1 + 0xc);
    if (1 < iVar22) {
      iVar25 = 1;
      lVar9 = 0;
      puVar10 = param_1;
      do {
        puVar10 = puVar10 + 3;
        lVar1 = lVar9 + 1;
        if (lVar1 < iVar22) {
          puVar11 = param_1 + lVar9 * 3;
          puVar12 = puVar10;
          iVar26 = iVar25;
          do {
            lVar14 = puVar11[1];
            lVar9 = puVar12[1];
            if (*(int *)(lVar9 + 0x40) <= *(int *)(lVar14 + 0x40)) {
              if (*(int *)(lVar14 + 0x40) == *(int *)(lVar9 + 0x40)) {
                fVar19 = (float)*(undefined8 *)(lVar14 + 0x18);
                fVar29 = (float)((ulong)*(undefined8 *)(lVar14 + 0x18) >> 0x20);
                fVar5 = (float)*(undefined8 *)(lVar14 + 0x10);
                fVar5 = fVar5 * fVar5;
                fVar6 = (float)((ulong)*(undefined8 *)(lVar14 + 0x10) >> 0x20);
                fVar6 = fVar6 * fVar6;
                uVar16 = (undefined1)((uint)fVar6 >> 8);
                uVar17 = (undefined1)((uint)fVar6 >> 0x10);
                uVar18 = (undefined1)((uint)fVar6 >> 0x18);
                fVar19 = fVar19 * fVar19;
                fVar29 = fVar29 * fVar29;
                auVar48[4] = SUB41(fVar6,0);
                auVar48._0_4_ = fVar5;
                auVar48[5] = uVar16;
                auVar48[6] = uVar17;
                auVar48[7] = uVar18;
                auVar48._8_4_ = fVar19;
                auVar48._12_4_ = fVar29;
                auVar4[4] = SUB41(fVar6,0);
                auVar4._0_4_ = fVar5;
                auVar4[5] = uVar16;
                auVar4[6] = uVar17;
                auVar4[7] = uVar18;
                auVar4._8_4_ = fVar19;
                auVar4._12_4_ = fVar29;
                auVar27 = NEON_ext(auVar48,auVar4,8,1);
                auVar24._0_4_ = *(float *)(lVar9 + 0x10) * *(float *)(lVar9 + 0x10);
                auVar24._4_4_ = *(float *)(lVar9 + 0x14) * *(float *)(lVar9 + 0x14);
                auVar24._8_4_ = *(float *)(lVar9 + 0x18) * *(float *)(lVar9 + 0x18);
                auVar24._12_4_ = *(float *)(lVar9 + 0x1c) * *(float *)(lVar9 + 0x1c);
                auVar47 = NEON_ext(auVar24,auVar24,8,1);
                if (!(bool)(~(fVar5 + fVar6 + auVar27._0_4_ <
                             auVar24._0_4_ + auVar24._4_4_ + auVar47._0_4_) & 1)) goto LAB_0325e560;
              }
              uVar46 = *puVar11;
              uVar36 = puVar11[1];
              uVar15 = puVar11[2];
              uVar42 = puVar12[2];
              uVar13 = *puVar12;
              puVar11[1] = puVar12[1];
              puVar11[2] = uVar42;
              *puVar11 = uVar13;
              puVar12[1] = uVar36;
              puVar12[2] = uVar15;
              *puVar12 = uVar46;
              iVar22 = *(int *)(param_1 + 0xc);
            }
LAB_0325e560:
            iVar26 = iVar26 + 1;
            puVar12 = puVar12 + 3;
          } while (iVar26 < iVar22);
        }
        iVar25 = iVar25 + 1;
        lVar9 = lVar1;
      } while (lVar1 < iVar22 + -1);
    }
    param_2 = (undefined1 (*) [16])param_1[1];
    param_3 = (undefined1 (*) [16])param_1[4];
    param_4 = (undefined1 (*) [12])param_1[7];
  }
  *(undefined4 *)
   (*(long *)(param_1[0xe] + 0x28) +
    ((ulong)((long)param_2 - *(long *)(param_1[0xd] + 0x48)) >> 4) * -0x3333333333333330 + 0xc) = 1;
  *(undefined4 *)
   (*(long *)(param_1[0xe] + 0x28) +
    ((ulong)((long)param_3 - *(long *)(param_1[0xd] + 0x48)) >> 4) * -0x3333333333333330 + 0xc) = 1;
  *(undefined4 *)
   (*(long *)(param_1[0xe] + 0x28) +
    ((ulong)((long)param_4 - *(long *)(param_1[0xd] + 0x48)) >> 4) * -0x3333333333333330 + 0xc) = 1;
  iVar22 = *(int *)(param_1 + 0xc);
  FUN_0325d920(param_1,param_2,param_3,param_6,param_7);
  iVar25 = *(int *)(param_1 + 0xc);
  if (iVar22 == iVar25) {
    FUN_0325d920(param_1,param_2,param_4,param_7,param_7);
    iVar25 = *(int *)(param_1 + 0xc);
  }
  if (iVar22 == iVar25) {
    FUN_0325d920(param_1,param_3,param_4,param_7,param_7);
    return;
  }
  return;
}



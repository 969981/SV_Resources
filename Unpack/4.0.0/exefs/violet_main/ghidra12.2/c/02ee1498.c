/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02ee1498; name: FUN_02ee1498
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ee1498(float param_1,long *param_2,undefined1 (*param_3) [16],long param_4)

{
  uint uVar1;
  float *pfVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  undefined8 uVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  bool bVar21;
  int iVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar46;
  undefined1 auVar42 [16];
  float fVar44;
  float fVar45;
  float fVar47;
  float fVar48;
  undefined1 auVar43 [16];
  float fVar49;
  undefined8 uVar50;
  ulong uVar51;
  ulong uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined8 uVar61;
  float fVar62;
  undefined1 auStack_80 [64];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  cVar3 = *(char *)(param_4 + 0x4d);
  param_2[2] = 1;
  *(undefined4 *)(param_2 + 3) = 0x30205;
  *(undefined2 *)(param_2 + 0xe) = 0x7f7f;
  bVar21 = cVar3 != '\0';
  *(undefined1 *)((long)param_2 + 0x1c) = 0;
  param_2[9] = 0x6000000d8;
  param_2[10] = 0x600000130;
  iVar22 = 0;
  if (bVar21) {
    iVar22 = 0x18;
  }
  param_2[0xb] = 0x1800000140;
  param_2[7] = 0;
  param_2[8] = 0x800000080;
  *(undefined4 *)(param_2 + 0xc) = 0x150;
  *(int *)((long)param_2 + 100) = iVar22;
  param_2[5] = 0;
  param_2[6] = 0;
  uVar61 = CONCAT44(param_1,param_1);
  *(float *)(param_2 + 4) = param_1;
  *(int *)(param_2 + 0xd) = iVar22 * 4 + 0x148;
  *(uint *)((long)param_2 + 0x6c) = (uint)bVar21 << 3;
  *param_2 = (long)(PTR_DAT_047e34d0 + 0x10);
  param_2[1] = 0xffffffff;
  local_28 = *(undefined8 *)(param_3[1] + 8);
  uStack_38 = *(undefined8 *)(*param_3 + 8);
  local_40 = *(undefined8 *)*param_3;
  uStack_30 = *(undefined8 *)param_3[1];
  if ((param_1 <= 0.0) || (*(char *)(param_4 + 4) == '\0')) {
    uVar31 = (undefined1)uStack_38;
    uVar32 = (undefined1)((ulong)uStack_38 >> 8);
    uVar33 = (undefined1)((ulong)uStack_38 >> 0x10);
    uVar34 = (undefined1)((ulong)uStack_38 >> 0x18);
    uVar35 = (undefined1)((ulong)uStack_38 >> 0x20);
    uVar36 = (undefined1)((ulong)uStack_38 >> 0x28);
    uVar37 = (undefined1)((ulong)uStack_38 >> 0x30);
    uVar38 = (undefined1)((ulong)uStack_38 >> 0x38);
    uVar23 = (undefined1)local_40;
    uVar24 = (undefined1)((ulong)local_40 >> 8);
    uVar25 = (undefined1)((ulong)local_40 >> 0x10);
    uVar26 = (undefined1)((ulong)local_40 >> 0x18);
    uVar27 = (undefined1)((ulong)local_40 >> 0x20);
    uVar28 = (undefined1)((ulong)local_40 >> 0x28);
    uVar29 = (undefined1)((ulong)local_40 >> 0x30);
    uVar30 = (undefined1)((ulong)local_40 >> 0x38);
    uStack_30._4_4_ = (float)((ulong)uStack_30 >> 0x20);
    local_28._4_4_ = (float)((ulong)local_28 >> 0x20);
    fVar39 = (float)uStack_30;
    fVar44 = uStack_30._4_4_;
    fVar46 = (float)local_28;
    fVar48 = local_28._4_4_;
  }
  else {
    auVar55 = *param_3;
    uVar41 = *(undefined8 *)(param_3[1] + 8);
    fVar39 = (float)*(undefined8 *)param_3[1] - auVar55._0_4_;
    fVar44 = (float)((ulong)*(undefined8 *)param_3[1] >> 0x20) - auVar55._4_4_;
    uVar23 = (undefined1)((uint)fVar44 >> 8);
    uVar24 = (undefined1)((uint)fVar44 >> 0x10);
    uVar25 = (undefined1)((uint)fVar44 >> 0x18);
    fVar46 = (float)uVar41 - auVar55._8_4_;
    if (((DAT_0486b230 & 1) == 0) && (iVar22 = __cxa_guard_acquire(&DAT_0486b230), iVar22 != 0)) {
      DAT_0486b228 = 0xbed8658cbed8658c;
      __cxa_guard_release(&DAT_0486b230);
    }
    uVar8 = NEON_fminp(CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(SUB41(fVar44,0),
                                                                                fVar39)))),
                       CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(SUB41(fVar44,0),
                                                                                fVar39)))),4);
    uVar8 = NEON_fmin(CONCAT44(fVar46,fVar46),uVar8,4);
    fVar48 = (float)((ulong)uVar8 >> 0x20) * 0.5;
    uVar50 = NEON_fmov(0x3f800000,4);
    uVar61 = NEON_fmin(uVar61,CONCAT17((char)((uint)fVar48 >> 0x18),
                                       CONCAT16((char)((uint)fVar48 >> 0x10),
                                                CONCAT15((char)((uint)fVar48 >> 8),
                                                         CONCAT14(SUB41(fVar48,0),(float)uVar8 * 0.5
                                                                 )))),4);
    fVar60 = (float)uVar61 * ((float)DAT_0486b228 * *(float *)(param_4 + 8) + (float)uVar50);
    fVar62 = (float)((ulong)uVar61 >> 0x20) *
             ((float)((ulong)DAT_0486b228 >> 0x20) * *(float *)(param_4 + 8) +
             (float)((ulong)uVar50 >> 0x20));
    uVar61 = CONCAT44(fVar62,fVar60);
    auVar42._0_4_ = *(float *)*param_3 + fVar60;
    auVar42._4_4_ = *(float *)(*param_3 + 4) + fVar62;
    auVar42._8_4_ = *(float *)(*param_3 + 8) + fVar60;
    auVar42._12_4_ = *(float *)(*param_3 + 0xc) + fVar62;
    fVar48 = (float)((ulong)*(undefined8 *)param_3[1] >> 0x20) - fVar62;
    fVar49 = (float)*(undefined8 *)(param_3[1] + 8) - fVar60;
    fVar62 = (float)((ulong)*(undefined8 *)(param_3[1] + 8) >> 0x20) - fVar62;
    auVar53[4] = SUB41(fVar48,0);
    auVar53._0_4_ = (float)*(undefined8 *)param_3[1] - fVar60;
    auVar53[5] = (char)((uint)fVar48 >> 8);
    auVar53[6] = (char)((uint)fVar48 >> 0x10);
    auVar53[7] = (char)((uint)fVar48 >> 0x18);
    auVar53[8] = SUB41(fVar49,0);
    auVar53[9] = (char)((uint)fVar49 >> 8);
    auVar53[10] = (char)((uint)fVar49 >> 0x10);
    auVar53[0xb] = (char)((uint)fVar49 >> 0x18);
    auVar53[0xc] = SUB41(fVar62,0);
    auVar53[0xd] = (char)((uint)fVar62 >> 8);
    auVar53[0xe] = (char)((uint)fVar62 >> 0x10);
    auVar53[0xf] = (char)((uint)fVar62 >> 0x18);
    auVar53 = NEON_fmax(auVar42,auVar53,4);
    uVar52 = CONCAT44(-(uint)(fVar44 == 0.0),-(uint)(fVar39 == 0.0)) >> 0x18 & 0xffffffff34;
    uVar51 = CONCAT17((char)(uVar52 >> 0x20),(uint7)(uint)(uVar52 << 0x18)) & 0x34ffffffffffffff;
    uVar52 = CONCAT44(-(uint)((float)((ulong)uVar41 >> 0x20) - auVar55._12_4_ == 0.0),
                      -(uint)(fVar46 == 0.0)) >> 0x18 & 0xffffffff34;
    uVar52 = CONCAT17((char)(uVar52 >> 0x20),(uint7)(uint)(uVar52 << 0x18)) & 0x34ffffffffffffff;
    fVar39 = (float)uVar51;
    fVar49 = auVar42._0_4_ - fVar39;
    uVar23 = SUB41(fVar49,0);
    uVar24 = (undefined1)((uint)fVar49 >> 8);
    uVar25 = (undefined1)((uint)fVar49 >> 0x10);
    uVar26 = (undefined1)((uint)fVar49 >> 0x18);
    fVar44 = (float)(uVar51 >> 0x20);
    fVar46 = auVar42._4_4_ - fVar44;
    uVar27 = SUB41(fVar46,0);
    uVar28 = (undefined1)((uint)fVar46 >> 8);
    uVar29 = (undefined1)((uint)fVar46 >> 0x10);
    uVar30 = (undefined1)((uint)fVar46 >> 0x18);
    fVar46 = (float)uVar52;
    fVar62 = auVar42._8_4_ - fVar46;
    uVar31 = SUB41(fVar62,0);
    uVar32 = (undefined1)((uint)fVar62 >> 8);
    uVar33 = (undefined1)((uint)fVar62 >> 0x10);
    uVar34 = (undefined1)((uint)fVar62 >> 0x18);
    fVar48 = (float)(uVar52 >> 0x20);
    fVar60 = auVar42._12_4_ - fVar48;
    uVar35 = SUB41(fVar60,0);
    uVar36 = (undefined1)((uint)fVar60 >> 8);
    uVar37 = (undefined1)((uint)fVar60 >> 0x10);
    uVar38 = (undefined1)((uint)fVar60 >> 0x18);
    fVar39 = fVar39 + auVar53._0_4_;
    fVar44 = fVar44 + auVar53._4_4_;
    fVar46 = fVar46 + auVar53._8_4_;
    fVar48 = fVar48 + auVar53._12_4_;
    uStack_38 = CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,fVar62))));
    local_40 = CONCAT17(uVar30,CONCAT16(uVar29,CONCAT15(uVar28,CONCAT14(uVar27,fVar49))));
    local_28 = CONCAT44(fVar48,fVar46);
    uStack_30 = CONCAT44(fVar44,fVar39);
  }
  fVar49 = (fVar39 + (float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23)))) * 0.5;
  fVar62 = (fVar44 + (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)))) * 0.5;
  fVar60 = (fVar46 + (float)CONCAT13(uVar34,CONCAT12(uVar33,CONCAT11(uVar32,uVar31)))) * 0.5;
  pfVar2 = (float *)(PTR_DAT_047d19b0 + 0x200);
  if (*(float **)(param_4 + 0x40) != (float *)0x0) {
    pfVar2 = *(float **)(param_4 + 0x40);
  }
  fVar15 = *pfVar2;
  fVar16 = pfVar2[1];
  fVar17 = pfVar2[2];
  uVar8 = *(undefined8 *)(pfVar2 + 6);
  uVar41 = *(undefined8 *)(pfVar2 + 4);
  fVar18 = pfVar2[8];
  fVar19 = pfVar2[9];
  fVar20 = pfVar2[10];
  uVar56 = *(undefined8 *)(pfVar2 + 0xe);
  uVar50 = *(undefined8 *)(pfVar2 + 0xc);
  *(float *)(param_2 + 4) = (float)uVar61;
  fVar45 = (float)uVar41;
  fVar47 = (float)((ulong)uVar41 >> 0x20);
  fVar14 = (float)uVar8;
  fVar39 = (fVar39 - (float)CONCAT13(uVar26,CONCAT12(uVar25,CONCAT11(uVar24,uVar23)))) * 0.5;
  fVar9 = (fVar44 - (float)CONCAT13(uVar30,CONCAT12(uVar29,CONCAT11(uVar28,uVar27)))) * 0.5;
  uVar23 = SUB41(fVar9,0);
  uVar24 = (undefined1)((uint)fVar9 >> 8);
  uVar25 = (undefined1)((uint)fVar9 >> 0x10);
  uVar26 = (undefined1)((uint)fVar9 >> 0x18);
  fVar11 = (fVar46 - (float)CONCAT13(uVar34,CONCAT12(uVar33,CONCAT11(uVar32,uVar31)))) * 0.5;
  uVar27 = (undefined1)((uint)fVar11 >> 8);
  uVar28 = (undefined1)((uint)fVar11 >> 0x10);
  uVar29 = (undefined1)((uint)fVar11 >> 0x18);
  fVar40 = (fVar48 - (float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35)))) * 0.5;
  uVar30 = (undefined1)((uint)fVar40 >> 8);
  uVar31 = (undefined1)((uint)fVar40 >> 0x10);
  uVar32 = (undefined1)((uint)fVar40 >> 0x18);
  fVar44 = (float)uVar50 + fVar18 * fVar60 + fVar15 * fVar49 + fVar45 * fVar62;
  fVar46 = (float)((ulong)uVar50 >> 0x20) + fVar19 * fVar60 + fVar16 * fVar49 + fVar47 * fVar62;
  fVar48 = (float)uVar56 + fVar20 * fVar60 + fVar17 * fVar49 + fVar14 * fVar62;
  fVar49 = fVar15 * 0.0 + fVar45 + fVar18 * 0.0;
  fVar62 = fVar16 * 0.0 + fVar47 + fVar19 * 0.0;
  fVar60 = fVar17 * 0.0 + fVar14 + fVar20 * 0.0;
  fVar57 = fVar18 + fVar15 * 0.0 + fVar45 * 0.0;
  fVar58 = fVar19 + fVar16 * 0.0 + fVar47 * 0.0;
  fVar59 = fVar20 + fVar17 * 0.0 + fVar14 * 0.0;
  auVar55[4] = uVar23;
  auVar55._0_4_ = fVar39;
  auVar55[5] = uVar24;
  auVar55[6] = uVar25;
  auVar55[7] = uVar26;
  auVar55[8] = SUB41(fVar11,0);
  auVar55[9] = uVar27;
  auVar55[10] = uVar28;
  auVar55[0xb] = uVar29;
  auVar55[0xc] = SUB41(fVar40,0);
  auVar55[0xd] = uVar30;
  auVar55[0xe] = uVar31;
  auVar55[0xf] = uVar32;
  auVar4[4] = uVar23;
  auVar4._0_4_ = fVar39;
  auVar4[5] = uVar24;
  auVar4[6] = uVar25;
  auVar4[7] = uVar26;
  auVar4[8] = SUB41(fVar11,0);
  auVar4[9] = uVar27;
  auVar4[10] = uVar28;
  auVar4[0xb] = uVar29;
  auVar4[0xc] = SUB41(fVar40,0);
  auVar4[0xd] = uVar30;
  auVar4[0xe] = uVar31;
  auVar4[0xf] = uVar32;
  auVar55 = NEON_ext(auVar55,auVar4,8,1);
  fVar40 = fVar18 * 0.0 + fVar15 + fVar45 * 0.0;
  fVar45 = fVar19 * 0.0 + fVar16 + fVar47 * 0.0;
  fVar47 = fVar20 * 0.0 + fVar17 + fVar14 * 0.0;
  *(float *)(param_2 + 0x11) = fVar47;
  *(float *)((long)param_2 + 0x8c) = fVar39;
  *(float *)(param_2 + 0x10) = fVar40;
  *(float *)((long)param_2 + 0x84) = fVar45;
  param_2[0x13] = CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,fVar60))));
  param_2[0x12] =
       CONCAT17((char)((uint)fVar62 >> 0x18),
                CONCAT16((char)((uint)fVar62 >> 0x10),
                         CONCAT15((char)((uint)fVar62 >> 8),CONCAT14(SUB41(fVar62,0),fVar49))));
  param_2[0x15] = CONCAT44(fVar11,fVar59);
  param_2[0x14] = CONCAT44(fVar58,fVar57);
  param_2[0x17] = (ulong)(uint)fVar48;
  param_2[0x16] = CONCAT44(fVar46,fVar44);
  uVar7 = (uint)(byte)(-(fVar39 <= 1.1920929e-07) & (byte)_DAT_03cab270) +
          (uint)(byte)(-(fVar9 <= 1.1920929e-07) & (byte)((ulong)_DAT_03cab270 >> 0x20)) +
          (uint)(byte)(-(auVar55._0_4_ <= 1.1920929e-07) & (byte)_UNK_03cab278) +
          (int)((ulong)_UNK_03cab278 >> 0x20);
  auVar43._0_4_ = ABS((float)DAT_03cab620 - fVar40);
  auVar43._4_4_ = ABS((float)((ulong)DAT_03cab620 >> 0x20) - fVar45);
  auVar43._8_4_ = ABS((float)DAT_03cab628 - fVar47);
  auVar43._12_4_ = ABS((float)((ulong)DAT_03cab628 >> 0x20) - fVar39);
  fVar39 = ABS((float)((ulong)_DAT_03cabe60 >> 0x20) - fVar62);
  fVar62 = ABS((float)_UNK_03cabe68 - fVar60);
  fVar60 = ABS((float)((ulong)_UNK_03cabe68 >> 0x20) - fVar9);
  auVar54._0_4_ = ABS((float)_DAT_03caa5b0 - fVar57);
  auVar54._4_4_ = ABS((float)((ulong)_DAT_03caa5b0 >> 0x20) - fVar58);
  auVar54._8_4_ = ABS((float)_UNK_03caa5b8 - fVar59);
  auVar54._12_4_ = ABS((float)((ulong)_UNK_03caa5b8 >> 0x20) - fVar11);
  auVar13[4] = SUB41(fVar39,0);
  auVar13._0_4_ = ABS((float)_DAT_03cabe60 - fVar49);
  auVar13[5] = (char)((uint)fVar39 >> 8);
  auVar13[6] = (char)((uint)fVar39 >> 0x10);
  auVar13[7] = (char)((uint)fVar39 >> 0x18);
  auVar13[8] = SUB41(fVar62,0);
  auVar13[9] = (char)((uint)fVar62 >> 8);
  auVar13[10] = (char)((uint)fVar62 >> 0x10);
  auVar13[0xb] = (char)((uint)fVar62 >> 0x18);
  auVar13[0xc] = SUB41(fVar60,0);
  auVar13[0xd] = (char)((uint)fVar60 >> 8);
  auVar13[0xe] = (char)((uint)fVar60 >> 0x10);
  auVar13[0xf] = (char)((uint)fVar60 >> 0x18);
  auVar55 = NEON_fmax(auVar43,auVar13,4);
  auVar55 = NEON_fmax(auVar55,auVar54,4);
  iVar22 = -(uint)(auVar55._0_4_ <= 0.001);
  iVar10 = -(uint)(auVar55._4_4_ <= 0.001);
  iVar12 = -(uint)(auVar55._8_4_ <= 0.001);
  fVar44 = fVar44 * fVar44;
  fVar46 = fVar46 * fVar46;
  uVar23 = (undefined1)((uint)fVar46 >> 8);
  uVar24 = (undefined1)((uint)fVar46 >> 0x10);
  uVar25 = (undefined1)((uint)fVar46 >> 0x18);
  fVar48 = fVar48 * fVar48;
  uVar26 = (undefined1)((uint)fVar48 >> 8);
  uVar27 = (undefined1)((uint)fVar48 >> 0x10);
  uVar28 = (undefined1)((uint)fVar48 >> 0x18);
  auVar5[4] = SUB41(fVar46,0);
  auVar5._0_4_ = fVar44;
  auVar5[5] = uVar23;
  auVar5[6] = uVar24;
  auVar5[7] = uVar25;
  auVar5[8] = SUB41(fVar48,0);
  auVar5[9] = uVar26;
  auVar5[10] = uVar27;
  auVar5[0xb] = uVar28;
  auVar5._12_4_ = 0;
  auVar6[4] = SUB41(fVar46,0);
  auVar6._0_4_ = fVar44;
  auVar6[5] = uVar23;
  auVar6[6] = uVar24;
  auVar6[7] = uVar25;
  auVar6[8] = SUB41(fVar48,0);
  auVar6[9] = uVar26;
  auVar6[10] = uVar27;
  auVar6[0xb] = uVar28;
  auVar6._12_4_ = 0;
  auVar55 = NEON_ext(auVar5,auVar6,8,1);
  uVar1 = uVar7 & 7;
  if (CONCAT13((byte)((uint)iVar10 >> 0x18) & (byte)((uint)iVar22 >> 0x18) &
               (byte)((uint)iVar12 >> 0x18),
               CONCAT12((byte)((uint)iVar10 >> 0x10) & (byte)((uint)iVar22 >> 0x10) &
                        (byte)((uint)iVar12 >> 0x10),
                        CONCAT11((byte)((uint)iVar10 >> 8) & (byte)((uint)iVar22 >> 8) &
                                 (byte)((uint)iVar12 >> 8),
                                 (byte)iVar10 & (byte)iVar22 & (byte)iVar12))) != 0) {
    uVar1 = uVar7 & 7 | 8;
  }
  uVar7 = uVar1 | 0x10;
  if (1.1920929e-07 <= auVar55._0_4_ + fVar44 + fVar46) {
    uVar7 = uVar1;
  }
  *(uint *)((long)param_2 + 0xbc) = uVar7 | 0x3f000000;
  FUN_02ee9378(param_2,&local_40,*(undefined8 *)(param_4 + 0x40));
  fVar39 = ((float)uStack_30 - (float)local_40) * 0.5;
  fVar44 = ((float)((ulong)uStack_30 >> 0x20) - local_40._4_4_) * 0.5;
  uVar23 = (undefined1)((uint)fVar44 >> 8);
  uVar24 = (undefined1)((uint)fVar44 >> 0x10);
  uVar25 = (undefined1)((uint)fVar44 >> 0x18);
  fVar46 = ((float)local_28 - (float)uStack_38) * 0.5;
  uVar41 = NEON_fminp(CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(SUB41(fVar44,0),
                                                                               fVar39)))),
                      CONCAT17(uVar25,CONCAT16(uVar24,CONCAT15(uVar23,CONCAT14(SUB41(fVar44,0),
                                                                               fVar39)))),4);
  uVar41 = NEON_fmin(CONCAT17((char)((uint)fVar46 >> 0x18),
                              CONCAT16((char)((uint)fVar46 >> 0x10),
                                       CONCAT15((char)((uint)fVar46 >> 8),
                                                CONCAT14(SUB41(fVar46,0),fVar46)))),uVar41,4);
  *(short *)(param_2 + 0xe) =
       (short)((uint)(*(float *)PTR_DAT_047e3398 * ((float)uVar61 + (float)uVar41) * 1.0039062) >>
              0x10);
  if (*(char *)(param_4 + 0x11) != '\0') {
    (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_2 + 3) * 0x200 + 0x38))
              (param_2,param_4 + 0x18,auStack_80);
    FUN_02ef67b0(param_2,auStack_80);
  }
  if (*(char *)(param_4 + 0x4d) != '\0') {
    FUN_02ee9a2c(param_2);
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dcf570; name: FUN_00dcf570
 */


/* WARNING: Removing unreachable block (ram,0x00dcfa5c) */

void FUN_00dcf570(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  byte bVar12;
  undefined *puVar13;
  char *pcVar14;
  long lVar15;
  float fVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  float fVar35;
  float fVar36;
  float fVar38;
  undefined1 auVar37 [16];
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined1 *local_d0;
  long *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  undefined1 local_40;
  long *local_18;
  
  puVar13 = PTR_DAT_047e49c8;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[7] = -1;
  *param_1 = (long)(puVar13 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[4] = -0x8000000000000000;
  param_1[5] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = -0x8000000000000000;
  param_1[0x21] = 0;
  param_1[0x22] = -0x8000000000000000;
  param_1[9] = *(long *)(param_2 + 0x80);
  param_1[10] = *(long *)(param_2 + 0x88);
  param_1[6] = *(long *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x90);
  fVar24 = (float)*(undefined8 *)(param_2 + 0x30);
  fVar36 = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
  fVar23 = fVar36 + fVar36;
  fVar21 = (float)*(undefined8 *)(param_2 + 0x38);
  fVar25 = fVar21 + fVar21;
  fVar38 = (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
  fVar26 = (fVar24 + fVar24) * fVar24;
  fVar16 = (fVar24 + fVar24) * fVar38;
  fVar35 = 1.0 - fVar21 * fVar25;
  fVar39 = fVar25 * fVar36 - fVar16;
  fVar21 = fVar25 * fVar24 + fVar23 * fVar38;
  lVar17 = 0;
  lVar20 = 0;
  param_1[0xd] = CONCAT44(fVar39,fVar25 * fVar24 - fVar23 * fVar38);
  param_1[0xc] = CONCAT44(fVar23 * fVar24 + fVar25 * fVar38,fVar35 - fVar23 * fVar36);
  param_1[0xf] = CONCAT44(fVar21,fVar25 * fVar36 + fVar16);
  param_1[0xe] = CONCAT44(fVar35 - fVar26,fVar23 * fVar24 - fVar25 * fVar38);
  param_1[0x11] = (ulong)(uint)((1.0 - fVar26) - fVar23 * fVar36);
  param_1[0x10] = CONCAT44(fVar39,fVar21);
  lVar15 = *(long *)(param_2 + 0x20);
  param_1[0x13] = *(long *)(param_2 + 0x28);
  param_1[0x12] = lVar15;
  lVar15 = *(long *)(param_2 + 0x40);
  param_1[0x19] = *(long *)(param_2 + 0x48);
  param_1[0x18] = lVar15;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)((long)param_1 + 0x124) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)((long)param_1 + 0x144) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)((long)param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)((long)param_1 + 0x154) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0xa8);
  fVar26 = *(float *)(param_2 + 0xac);
  iVar4 = (int)(ABS(fVar26) * 1.2732395) + 1;
  bVar12 = (byte)iVar4 & 0xfe;
  uVar5 = (int)(ABS(fVar26) * 1.2732395) + 1U & 0xfffffffe;
  uVar6 = (int)(ABS(fVar26) * 1.2732395) + 1U & 0xfffffffe;
  uVar7 = (int)(ABS(fVar26) * 1.2732395) + 1U & 0xfffffffe;
  auVar37[8] = (char)uVar6;
  auVar37._0_8_ =
       CONCAT17((char)(uVar5 >> 0x18),
                CONCAT16((char)(uVar5 >> 0x10),
                         CONCAT15((char)(uVar5 >> 8),CONCAT14((char)uVar5,iVar4)))) &
       0xfffffffffffffffe;
  auVar37[9] = (char)(uVar6 >> 8);
  auVar37[10] = (char)(uVar6 >> 0x10);
  auVar37[0xb] = (char)(uVar6 >> 0x18);
  auVar37[0xc] = (char)uVar7;
  auVar37[0xd] = (char)(uVar7 >> 8);
  auVar37[0xe] = (char)(uVar7 >> 0x10);
  auVar37[0xf] = (char)(uVar7 >> 0x18);
  auVar37 = NEON_scvtf(auVar37,4);
  fVar21 = auVar37._0_4_;
  fVar24 = auVar37._4_4_;
  fVar16 = auVar37._8_4_;
  fVar36 = auVar37._12_4_;
  fVar21 = ABS(fVar26) + fVar21 * -0.78515625 + fVar21 * -0.00024187565 + fVar21 * -3.774895e-08;
  fVar24 = ABS(fVar26) + fVar24 * -0.78515625 + fVar24 * -0.00024187565 + fVar24 * -3.774895e-08;
  fVar16 = ABS(fVar26) + fVar16 * -0.78515625 + fVar16 * -0.00024187565 + fVar16 * -3.774895e-08;
  fVar26 = ABS(fVar26) + fVar36 * -0.78515625 + fVar36 * -0.00024187565 + fVar36 * -3.774895e-08;
  fVar36 = fVar21 * fVar21;
  fVar38 = fVar24 * fVar24;
  fVar23 = fVar16 * fVar16;
  fVar25 = fVar26 * fVar26;
  auVar37 = NEON_fmov(0x3f800000,4);
  auVar22._0_4_ =
       fVar21 + fVar21 * fVar36 * (fVar36 * (fVar36 * -0.00019515296 + 0.008332161) + -0.16666655);
  auVar22._4_4_ =
       fVar24 + fVar24 * fVar38 * (fVar38 * (fVar38 * -0.00019515296 + 0.008332161) + -0.16666655);
  auVar22._8_4_ =
       fVar16 + fVar16 * fVar23 * (fVar23 * (fVar23 * -0.00019515296 + 0.008332161) + -0.16666655);
  auVar22._12_4_ =
       fVar26 + fVar26 * fVar25 * (fVar25 * (fVar25 * -0.00019515296 + 0.008332161) + -0.16666655);
  iVar4 = -(uint)(((char)uVar5 + 2U & 2) == 0);
  iVar9 = -(uint)(((char)uVar6 + 2U & 2) == 0);
  iVar10 = -(uint)(((char)uVar7 + 2U & 2) == 0);
  auVar11._4_4_ =
       fVar38 * fVar38 * (fVar38 * (fVar38 * 2.4433157e-05 + -0.0013887316) + 0.041666646) +
       fVar38 * -0.5 + auVar37._4_4_;
  auVar11._0_4_ =
       fVar36 * fVar36 * (fVar36 * (fVar36 * 2.4433157e-05 + -0.0013887316) + 0.041666646) +
       fVar36 * -0.5 + auVar37._0_4_;
  auVar11._8_4_ =
       fVar23 * fVar23 * (fVar23 * (fVar23 * 2.4433157e-05 + -0.0013887316) + 0.041666646) +
       fVar23 * -0.5 + auVar37._8_4_;
  auVar11._12_4_ =
       fVar25 * fVar25 * (fVar25 * (fVar25 * 2.4433157e-05 + -0.0013887316) + 0.041666646) +
       fVar25 * -0.5 + auVar37._12_4_;
  auVar8[4] = (char)iVar4;
  auVar8._0_4_ = -(uint)((bVar12 + 2 & 2) == 0);
  auVar8[5] = (char)((uint)iVar4 >> 8);
  auVar8[6] = (char)((uint)iVar4 >> 0x10);
  auVar8[7] = (char)((uint)iVar4 >> 0x18);
  auVar8[8] = (char)iVar9;
  auVar8[9] = (char)((uint)iVar9 >> 8);
  auVar8[10] = (char)((uint)iVar9 >> 0x10);
  auVar8[0xb] = (char)((uint)iVar9 >> 0x18);
  auVar8[0xc] = (char)iVar10;
  auVar8[0xd] = (char)((uint)iVar10 >> 8);
  auVar8[0xe] = (char)((uint)iVar10 >> 0x10);
  auVar8[0xf] = (char)((uint)iVar10 >> 0x18);
  auVar37 = NEON_fmin(auVar22 ^ (auVar22 ^ auVar11) & ~auVar8,auVar37,4);
  *(uint *)(param_1 + 0x23) =
       CONCAT13((byte)(((uint)(1 - bVar12 & 4) << 0x1d) >> 0x18) ^ auVar37[3],auVar37._0_3_);
  *(undefined4 *)((long)param_1 + 0x15c) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined1 *)((long)param_1 + 0x164) = *(undefined1 *)(param_2 + 0xb8);
  auVar37 = *(undefined1 (*) [16])(param_2 + 0x60);
  fVar21 = auVar37._0_4_;
  fVar24 = auVar37._4_4_;
  fVar16 = auVar37._8_4_;
  fVar26 = fVar21 * fVar21 + fVar24 * fVar24 + fVar16 * fVar16;
  param_1[0x27] = auVar37._8_8_;
  param_1[0x26] = auVar37._0_8_;
  if (fVar26 != 0.0) {
    fVar26 = SQRT(fVar26);
    fVar36 = SQRT(fVar21 * fVar21 + fVar24 * fVar24 + fVar16 * fVar16);
    lVar17 = CONCAT44(fVar24 / fVar36,fVar21 / fVar26);
    lVar20 = CONCAT44(auVar37._12_4_ / fVar36,fVar16 / fVar26);
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x27] = lVar20;
  param_1[0x26] = lVar17;
  *(undefined1 *)((long)param_1 + 0x11c) = *(undefined1 *)(param_2 + 0xba);
  FUN_00dcf2e8(param_1,*(undefined8 *)(param_2 + 0x70));
  if (*(char *)(param_2 + 0xb9) != '\0') {
    local_d4 = 0;
    local_d0 = (undefined1 *)CONCAT17(local_d0._7_1_,0xff000000000000);
    local_c8 = (long *)0x0;
    uStack_c0 = 0;
    local_4c = 0;
    local_48 = 0;
    local_40 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_70 = 0xbf800000;
    local_58 = 0xffff;
    local_54 = 0x7fffffff00ffffff;
    local_d8 = 0x20;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_d0 = (undefined1 *)CONCAT44(local_d0._4_4_,(int)param_1[8]);
    lVar15 = param_1[5];
    if ((lVar15 != 0) && (*(long *)(lVar15 + 8) != 0)) {
      plVar1 = (long *)(lVar15 + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_e0 = (undefined4)lVar15;
    uStack_dc = (undefined4)((ulong)lVar15 >> 0x20);
    uVar40 = NEON_fmov(0x3f800000,4);
    lStack_a8 = param_1[0x13];
    local_b0 = param_1[0x12];
    fVar16 = *(float *)((long)param_1 + 0x74);
    fVar21 = (float)param_1[0x11];
    fVar25 = fVar21 + (float)uVar40;
    fVar36 = (float)param_1[0xc];
    fVar23 = (float)((ulong)param_1[0xc] >> 0x20);
    fVar35 = fVar23 - *(float *)(param_1 + 0xe);
    fVar23 = fVar23 + *(float *)(param_1 + 0xe);
    fVar38 = (float)uVar40 - fVar21;
    fVar26 = (float)((ulong)param_1[0x10] >> 0x20);
    fVar39 = *(float *)(param_1 + 0xf) - fVar26;
    fVar24 = (float)param_1[0x10];
    fVar41 = fVar24 - (float)param_1[0xd];
    fVar24 = (float)param_1[0xd] + fVar24;
    fVar26 = *(float *)(param_1 + 0xf) + fVar26;
    uVar40 = CONCAT44(fVar36 + fVar16 + fVar25,fVar35);
    if (fVar36 < -fVar16) {
      uVar40 = CONCAT44(fVar35,fVar25 - (fVar36 + fVar16));
    }
    uVar19 = CONCAT44(fVar41,fVar39);
    if (fVar36 < -fVar16) {
      uVar19 = CONCAT44(fVar26,fVar24);
    }
    uVar27 = SUB41(fVar26,0);
    uVar28 = (undefined1)((uint)fVar26 >> 8);
    uVar29 = (undefined1)((uint)fVar26 >> 0x10);
    uVar30 = (undefined1)((uint)fVar26 >> 0x18);
    uVar31 = SUB41(fVar41,0);
    uVar32 = (char)((uint)fVar41 >> 8);
    uVar33 = (char)((uint)fVar41 >> 0x10);
    uVar34 = (char)((uint)fVar41 >> 0x18);
    if (fVar16 < fVar36) {
      uVar27 = SUB41(fVar24,0);
      uVar28 = (undefined1)((uint)fVar24 >> 8);
      uVar29 = (undefined1)((uint)fVar24 >> 0x10);
      uVar30 = (undefined1)((uint)fVar24 >> 0x18);
      uVar31 = SUB41(fVar39,0);
      uVar32 = (char)((uint)fVar39 >> 8);
      uVar33 = (char)((uint)fVar39 >> 0x10);
      uVar34 = (char)((uint)fVar39 >> 0x18);
    }
    uVar18 = CONCAT44(fVar38 - (fVar36 - fVar16),fVar23);
    if (fVar16 < fVar36) {
      uVar18 = CONCAT44(fVar23,(fVar36 - fVar16) + fVar38);
    }
    if (fVar21 < 0.0) {
      uVar19 = uVar18;
      uVar40 = CONCAT17(uVar34,CONCAT16(uVar33,CONCAT15(uVar32,CONCAT14(uVar31,CONCAT13(uVar30,
                                                  CONCAT12(uVar29,CONCAT11(uVar28,uVar27)))))));
    }
    fVar16 = (float)uVar19;
    fVar36 = (float)((ulong)uVar19 >> 0x20);
    fVar38 = (float)uVar40;
    fVar23 = (float)((ulong)uVar40 >> 0x20);
    fVar26 = fVar16 * fVar16 + fVar36 * fVar36;
    fVar24 = fVar38 * fVar38 + fVar23 * fVar23;
    fVar21 = fVar26 + fVar24;
    if (fVar21 == 0.0) {
      local_a0 = 0;
      uStack_98 = 0;
    }
    else {
      fVar21 = SQRT(fVar21);
      fVar26 = SQRT(fVar26 + fVar24);
      local_a0 = CONCAT44(fVar36 / fVar26,fVar16 / fVar21);
      uStack_98 = CONCAT44(fVar23 / fVar26,fVar38 / fVar21);
    }
    local_b8 = 1;
    pcVar14 = (char *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,0x13);
    pcVar14[0xf] = 'o';
    uVar40 = s_hknpCharacterProxy_03bf70b2._8_8_;
    pcVar14[0x10] = 'x';
    pcVar14[0x11] = 'y';
    pcVar14[0x12] = '\0';
    *(undefined8 *)pcVar14 = s_hknpCharacterProxy_03bf70b2._0_8_;
    *(undefined8 *)(pcVar14 + 8) = uVar40;
    local_c8 = (long *)((ulong)pcVar14 | 1);
    lVar15 = (**(code **)(*(long *)param_1[10] + 0x60))
                       ((long *)param_1[10],&local_e0,0xffffffffffffffff);
    param_1[7] = lVar15;
    (**(code **)(*(long *)param_1[10] + 0x70))((long *)param_1[10],lVar15,1,0);
    local_18 = param_1;
    (**(code **)(*(long *)param_1[10] + 0x168))((long *)param_1[10],param_1[7],0xf001,&local_18,8);
    FUN_00cb081c(&local_e0);
  }
  local_e0 = 0x2000020;
  uStack_dc = 0x4d;
  local_d8 = 0xffffffff;
  local_d0 = &LAB_02ffb764;
  local_c8 = param_1;
  (**(code **)(*(long *)param_1[10] + 0x270))((long *)param_1[10],&local_e0);
  return;
}



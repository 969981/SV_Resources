/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c68838; name: FUN_00c68838
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_00c68838(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                   undefined1 param_4 [16],long *param_5)

{
  undefined1 (*pauVar1) [12];
  byte bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  undefined1 auVar8 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  undefined8 uVar15;
  float fVar17;
  float fVar19;
  undefined8 uVar18;
  float fVar20;
  float fVar21;
  float fVar27;
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar60 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  
  auVar8._8_8_ = DAT_03cab628;
  auVar8._0_8_ = DAT_03cab620;
  fVar20 = param_4._12_4_;
  fVar29 = param_4._8_4_;
  fVar13 = param_4._4_4_;
  fVar12 = param_4._0_4_;
  uVar18 = param_3._8_8_;
  uVar15 = param_3._0_8_;
  fVar31 = param_2._12_4_;
  fVar11 = param_2._8_4_;
  fVar9 = param_2._4_4_;
  fVar7 = param_2._0_4_;
  if (*(char *)(param_5[0x73] + 0x22d) != '\0') {
    lVar4 = *(long *)(param_5[0x73] + 0x1a8);
    plVar5 = (long *)0x0;
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0x10);
      plVar5 = (long *)0x0;
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + -0x28);
      }
    }
    if (plVar5 == param_5) {
      bVar2 = FUN_00c68be8();
      *(byte *)((long)param_5 + 0x503) = bVar2 & 1 | *(char *)((long)param_5 + 0x503) != '\0';
      if (*(char *)((long)param_5 + 0xf4) != '\0') {
        lVar4 = param_5[0x18];
        if (ABS((float)lVar4) < 1e-12) {
          lVar4 = CONCAT44((int)((ulong)lVar4 >> 0x20),0x2b8cbccc);
        }
        if (ABS((float)((ulong)lVar4 >> 0x20)) < 1e-12) {
          lVar4 = CONCAT44(0x2b8cbccc,(int)lVar4);
        }
        fVar7 = (float)param_5[0x19];
        if (ABS((float)param_5[0x19]) < 1e-12) {
          fVar7 = 1e-12;
        }
        pauVar1 = (undefined1 (*) [12])(param_5 + 0x1a);
        fVar13 = (float)param_5[0x1b];
        fVar29 = (float)((ulong)param_5[0x1b] >> 0x20);
        fVar9 = (float)*(undefined8 *)*pauVar1;
        fVar31 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
        fVar20 = fVar31 * fVar31 + fVar31 * fVar31;
        fVar21 = fVar13 * fVar13 + fVar13 * fVar13;
        auVar8 = NEON_fmov(0x3f800000,4);
        auVar57._12_4_ = fVar29;
        auVar57._0_12_ = *pauVar1;
        auVar48._12_4_ = fVar29;
        auVar48._0_12_ = *pauVar1;
        auVar57 = NEON_ext(auVar57,auVar48,0xc,1);
        auVar22._0_4_ = auVar8._0_4_ - (fVar9 * fVar9 + fVar9 * fVar9);
        auVar22._4_4_ = auVar8._4_4_ - fVar20;
        auVar22._8_4_ = auVar8._8_4_ - fVar21;
        auVar22._12_4_ = auVar8._12_4_ - (fVar29 * fVar29 + fVar29 * fVar29);
        *(undefined1 *)((long)param_5 + 0xf4) = 0;
        uVar6 = SUB124(*pauVar1,0);
        auVar35._4_12_ = auVar57._4_12_;
        auVar35._0_4_ = uVar6;
        auVar37._12_4_ = auVar57._12_4_;
        auVar37._0_8_ = auVar35._0_8_;
        auVar37._8_4_ = SUB124(*pauVar1,4);
        auVar36._8_8_ = auVar37._8_8_;
        auVar36._4_4_ = auVar57._0_4_;
        auVar36._0_4_ = uVar6;
        auVar38._0_12_ = auVar36._0_12_;
        auVar38._12_4_ = auVar57._4_4_;
        auVar57 = NEON_ext(auVar38,auVar38,8,1);
        auVar23._4_12_ = auVar22._4_12_;
        auVar23._0_4_ = auVar22._0_4_;
        auVar25._0_8_ = auVar23._0_8_;
        auVar25._8_4_ = auVar22._4_4_;
        auVar25._12_4_ = auVar22._12_4_;
        auVar24._8_8_ = auVar25._8_8_;
        auVar24._4_4_ = auVar22._0_4_;
        auVar24._0_4_ = auVar22._0_4_;
        auVar26._0_12_ = auVar24._0_12_;
        auVar26._12_4_ = auVar22._4_4_;
        auVar8 = NEON_ext(auVar26,auVar26,0xc,1);
        fVar11 = fVar9 * fVar29 + fVar9 * fVar29;
        fVar12 = fVar31 * fVar29 + fVar31 * fVar29;
        fVar13 = fVar13 * fVar29 + fVar13 * fVar29;
        fVar29 = auVar57._0_4_ * SUB124(*pauVar1,8);
        fVar30 = auVar57._4_4_ * SUB124(*pauVar1,8);
        fVar31 = auVar57._8_4_ * fVar31;
        fVar29 = fVar29 + fVar29;
        fVar30 = fVar30 + fVar30;
        fVar31 = fVar31 + fVar31;
        param_5[0x15] = CONCAT44(fVar7 * 0.0,(auVar8._8_4_ - fVar20) * fVar7);
        param_5[0x14] = CONCAT44((fVar29 - fVar11) * fVar7,(fVar30 + fVar12) * fVar7);
        param_5[0x17] = CONCAT44(0x3f800000,(int)param_5[0x1d]);
        param_5[0x16] = param_5[0x1c];
        fVar7 = (float)lVar4;
        fVar9 = (float)((ulong)lVar4 >> 0x20);
        param_5[0xe] = param_5[0x16];
        param_5[0xf] = param_5[0x17];
        param_5[0x11] = CONCAT44(fVar7 * 0.0,(fVar30 - fVar12) * fVar7);
        param_5[0x10] = CONCAT44((fVar31 + fVar13) * fVar7,(auVar8._0_4_ - fVar21) * fVar7);
        param_5[0x13] = CONCAT44(fVar9 * 0.0,(fVar29 + fVar11) * fVar9);
        param_5[0x12] = CONCAT44((auVar8._4_4_ - fVar21) * fVar9,(fVar31 - fVar13) * fVar9);
        param_5[0xc] = param_5[0x14];
        param_5[0xd] = param_5[0x15];
        param_5[8] = param_5[0x10];
        param_5[9] = param_5[0x11];
        param_5[10] = param_5[0x12];
        param_5[0xb] = param_5[0x13];
        *(int *)(param_5 + 0x1e) = (int)param_5[0x1e] + 1;
      }
      goto LAB_00c68870;
    }
  }
  bVar2 = 0;
  if (*(char *)((long)param_5 + 0xf4) != '\0') {
    if (param_5[0x74] == param_5[0x75]) {
      fVar11 = (float)_UNK_03cabe68;
      fVar31 = (float)((ulong)_UNK_03cabe68 >> 0x20);
      fVar7 = (float)_DAT_03cabe60;
      fVar9 = (float)((ulong)_DAT_03cabe60 >> 0x20);
      fVar29 = (float)_UNK_03cabe58;
      fVar20 = (float)((ulong)_UNK_03cabe58 >> 0x20);
      fVar12 = (float)_DAT_03cabe50;
      fVar13 = (float)((ulong)_DAT_03cabe50 >> 0x20);
      uVar15 = _DAT_03caa5b0;
      uVar18 = _UNK_03caa5b8;
LAB_00c68a14:
      fVar47 = (float)param_5[0x18];
      fVar32 = (float)((ulong)param_5[0x18] >> 0x20);
      if (ABS(fVar47) < 1e-12) {
        fVar47 = 1e-12;
      }
      if (ABS(fVar32) < 1e-12) {
        fVar32 = 1e-12;
      }
      fVar42 = (float)param_5[0x19];
      if (ABS((float)param_5[0x19]) < 1e-12) {
        fVar42 = 1e-12;
      }
      auVar57 = *(undefined1 (*) [16])(param_5 + 0x1a);
      fVar21 = *(float *)(param_5 + 0x1c);
      fVar30 = *(float *)((long)param_5 + 0xe4);
      fVar27 = *(float *)(param_5 + 0x1d);
      fVar34 = auVar57._0_4_;
      fVar56 = auVar57._4_4_;
      fVar55 = auVar57._8_4_;
      fVar40 = auVar57._12_4_;
      fVar44 = fVar56 * fVar56 + fVar56 * fVar56;
      fVar46 = fVar55 * fVar55 + fVar55 * fVar55;
      auVar48 = NEON_fmov(0x3f800000,4);
      fVar28 = 1.0;
      auVar57 = NEON_ext(auVar57,auVar57,0xc,1);
      auVar49._0_4_ = auVar48._0_4_ - (fVar34 * fVar34 + fVar34 * fVar34);
      auVar49._4_4_ = auVar48._4_4_ - fVar44;
      auVar49._8_4_ = auVar48._8_4_ - fVar46;
      auVar49._12_4_ = auVar48._12_4_ - (fVar40 * fVar40 + fVar40 * fVar40);
      *(undefined1 *)((long)param_5 + 0xf4) = 0;
      auVar58._4_12_ = auVar57._4_12_;
      auVar58._0_4_ = fVar34;
      auVar60._12_4_ = auVar57._12_4_;
      auVar60._0_8_ = auVar58._0_8_;
      auVar60._8_4_ = fVar56;
      auVar59._8_8_ = auVar60._8_8_;
      auVar59._4_4_ = auVar57._0_4_;
      auVar59._0_4_ = fVar34;
      auVar61._0_12_ = auVar59._0_12_;
      auVar61._12_4_ = auVar57._4_4_;
      auVar48 = NEON_ext(auVar61,auVar61,8,1);
      auVar50._4_12_ = auVar49._4_12_;
      auVar50._0_4_ = auVar49._0_4_;
      auVar52._0_8_ = auVar50._0_8_;
      auVar52._8_4_ = auVar49._4_4_;
      auVar52._12_4_ = auVar49._12_4_;
      auVar51._8_8_ = auVar52._8_8_;
      auVar51._4_4_ = auVar49._0_4_;
      auVar51._0_4_ = auVar49._0_4_;
      auVar53._0_12_ = auVar51._0_12_;
      auVar53._12_4_ = auVar49._4_4_;
      auVar57 = NEON_ext(auVar53,auVar53,0xc,1);
      fVar33 = fVar34 * fVar40 + fVar34 * fVar40;
      fVar39 = fVar56 * fVar40 + fVar56 * fVar40;
      fVar41 = fVar55 * fVar40 + fVar55 * fVar40;
      fVar54 = auVar48._0_4_ * fVar55;
      fVar55 = auVar48._4_4_ * fVar55;
      fVar56 = auVar48._8_4_ * fVar56;
      fVar54 = fVar54 + fVar54;
      fVar55 = fVar55 + fVar55;
      fVar56 = fVar56 + fVar56;
      fVar34 = (fVar55 + fVar39) * fVar42;
      fVar40 = (fVar54 - fVar33) * fVar42;
      fVar44 = (auVar57._8_4_ - fVar44) * fVar42;
      fVar42 = fVar42 * 0.0;
      fVar43 = (auVar57._0_4_ - fVar46) * fVar47;
      fVar45 = (fVar56 + fVar41) * fVar47;
      fVar55 = (fVar55 - fVar39) * fVar47;
      fVar47 = fVar47 * 0.0;
      *(float *)(param_5 + 0x15) = fVar44;
      *(float *)((long)param_5 + 0xac) = fVar42;
      *(float *)(param_5 + 0x14) = fVar34;
      *(float *)((long)param_5 + 0xa4) = fVar40;
      *(float *)(param_5 + 0x17) = fVar27;
      *(undefined4 *)((long)param_5 + 0xbc) = 0x3f800000;
      *(float *)(param_5 + 0x16) = fVar21;
      *(float *)((long)param_5 + 0xb4) = fVar30;
      fVar56 = (fVar56 - fVar41) * fVar32;
      fVar39 = (auVar57._4_4_ - fVar46) * fVar32;
      fVar33 = (fVar54 + fVar33) * fVar32;
      fVar32 = fVar32 * 0.0;
      param_5[0x11] = CONCAT44(fVar47,fVar55);
      param_5[0x10] = CONCAT44(fVar45,fVar43);
      param_5[0x13] = CONCAT44(fVar32,fVar33);
      param_5[0x12] = CONCAT44(fVar39,fVar56);
      param_5[0xe] = param_5[0x16];
      param_5[0xf] = param_5[0x17];
      param_5[0xc] = param_5[0x14];
      param_5[0xd] = param_5[0x15];
      param_5[8] = param_5[0x10];
      param_5[9] = param_5[0x11];
      param_5[10] = param_5[0x12];
      param_5[0xb] = param_5[0x13];
      iVar3 = (int)param_5[0x1e] + 1;
      *(int *)(param_5 + 0x1e) = iVar3;
    }
    else {
      auVar8 = (**(code **)(*param_5 + 0xb8))(param_5,param_5[0x75] + -0xc0);
      if (*(char *)((long)param_5 + 0xf4) != '\0') goto LAB_00c68a14;
      fVar55 = (float)param_5[0x11];
      fVar47 = (float)((ulong)param_5[0x11] >> 0x20);
      fVar43 = (float)param_5[0x10];
      fVar45 = (float)((ulong)param_5[0x10] >> 0x20);
      fVar33 = (float)param_5[0x13];
      fVar32 = (float)((ulong)param_5[0x13] >> 0x20);
      fVar56 = (float)param_5[0x12];
      fVar39 = (float)((ulong)param_5[0x12] >> 0x20);
      iVar3 = (int)param_5[0x1e];
      fVar34 = *(float *)(param_5 + 0x14);
      fVar40 = *(float *)((long)param_5 + 0xa4);
      fVar44 = *(float *)(param_5 + 0x15);
      fVar42 = *(float *)((long)param_5 + 0xac);
      fVar21 = *(float *)(param_5 + 0x16);
      fVar30 = *(float *)((long)param_5 + 0xb4);
      fVar27 = *(float *)(param_5 + 0x17);
      fVar28 = *(float *)((long)param_5 + 0xbc);
    }
    fVar41 = auVar8._0_4_;
    *(int *)(param_5 + 0x1e) = iVar3 + 1;
    fVar14 = (float)uVar15;
    bVar2 = 1;
    *(undefined1 *)((long)param_5 + 0xf4) = 0;
    fVar46 = auVar8._4_4_;
    fVar16 = (float)((ulong)uVar15 >> 0x20);
    fVar54 = auVar8._8_4_;
    fVar17 = (float)uVar18;
    fVar10 = auVar8._12_4_;
    fVar19 = (float)((ulong)uVar18 >> 0x20);
    *(float *)(param_5 + 9) = fVar55 * fVar41 + fVar33 * fVar46 + fVar44 * fVar54 + fVar27 * fVar10;
    *(float *)((long)param_5 + 0x4c) =
         fVar47 * fVar41 + fVar32 * fVar46 + fVar42 * fVar54 + fVar28 * fVar10;
    *(float *)(param_5 + 8) = fVar43 * fVar41 + fVar56 * fVar46 + fVar34 * fVar54 + fVar21 * fVar10;
    *(float *)((long)param_5 + 0x44) =
         fVar45 * fVar41 + fVar39 * fVar46 + fVar40 * fVar54 + fVar30 * fVar10;
    param_5[0xb] = CONCAT44(fVar47 * fVar7 + fVar32 * fVar9 + fVar42 * fVar11 + fVar28 * fVar31,
                            fVar55 * fVar7 + fVar33 * fVar9 + fVar44 * fVar11 + fVar27 * fVar31);
    param_5[10] = CONCAT44(fVar45 * fVar7 + fVar39 * fVar9 + fVar40 * fVar11 + fVar30 * fVar31,
                           fVar43 * fVar7 + fVar56 * fVar9 + fVar34 * fVar11 + fVar21 * fVar31);
    *(float *)(param_5 + 0xd) =
         fVar55 * fVar14 + fVar33 * fVar16 + fVar44 * fVar17 + fVar27 * fVar19;
    *(float *)((long)param_5 + 0x6c) =
         fVar47 * fVar14 + fVar32 * fVar16 + fVar42 * fVar17 + fVar28 * fVar19;
    *(float *)(param_5 + 0xc) =
         fVar43 * fVar14 + fVar56 * fVar16 + fVar34 * fVar17 + fVar21 * fVar19;
    *(float *)((long)param_5 + 100) =
         fVar45 * fVar14 + fVar39 * fVar16 + fVar40 * fVar17 + fVar30 * fVar19;
    param_5[0xf] = CONCAT44(fVar47 * fVar12 + fVar32 * fVar13 + fVar42 * fVar29 + fVar28 * fVar20,
                            fVar55 * fVar12 + fVar33 * fVar13 + fVar44 * fVar29 + fVar27 * fVar20);
    param_5[0xe] = CONCAT44(fVar45 * fVar12 + fVar39 * fVar13 + fVar40 * fVar29 + fVar30 * fVar20,
                            fVar43 * fVar12 + fVar56 * fVar13 + fVar34 * fVar29 + fVar21 * fVar20);
  }
  *(byte *)((long)param_5 + 0x503) = bVar2 | *(char *)((long)param_5 + 0x503) != '\0';
LAB_00c68870:
  return param_5 + 8;
}



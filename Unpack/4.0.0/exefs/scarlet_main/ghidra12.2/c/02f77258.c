/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f77258; name: FUN_02f77258
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f77258(float *param_1,long param_2,float *param_3,float *param_4)

{
  undefined1 (*pauVar1) [12];
  uint uVar2;
  float *pfVar3;
  byte bVar4;
  ushort uVar5;
  undefined2 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined8 uVar21;
  float *pfVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  uint uVar26;
  long lVar27;
  long *plVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  ulong uVar32;
  ulong uVar33;
  float *pfVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  int iVar53;
  int iVar55;
  int iVar56;
  undefined1 auVar54 [16];
  undefined8 uVar57;
  undefined8 uVar60;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar61 [16];
  float local_78;
  undefined4 local_74;
  undefined8 local_70;
  float local_68 [2];
  
  if (*(float **)(param_1 + 0x6fe) != param_4) {
    pfVar34 = *(float **)(param_1 + 0xe6);
    auVar61 = NEON_fmov(0x3f800000,4);
    *(float **)(param_1 + 0x6fe) = param_4;
    uVar39 = auVar61._0_8_;
    uVar29 = auVar61._8_8_;
    if (pfVar34 != param_3) {
      if ((pfVar34 == (float *)0x0) ||
         (*(char *)((long)pfVar34 + 0x89) != *(char *)((long)param_3 + 0x89))) {
        *(undefined1 *)(param_1 + 0xd1d) = 1;
      }
      *(float **)(param_1 + 0xe6) = param_3;
      uVar11 = DAT_03cab628;
      uVar31 = DAT_03cab620;
      fVar49 = *param_3;
      fVar35 = param_3[1];
      fVar36 = param_3[2];
      fVar7 = param_3[3];
      param_1[0x16] = fVar36;
      param_1[0x17] = fVar7;
      param_1[0x14] = fVar49;
      param_1[0x15] = fVar35;
      uVar24 = _UNK_03cabe68;
      uVar23 = _DAT_03cabe60;
      uVar60 = _UNK_03caa5b8;
      uVar57 = _DAT_03caa5b0;
      uVar17 = *(undefined8 *)(param_3 + 6);
      uVar16 = *(undefined8 *)(param_3 + 4);
      fVar8 = ABS((float)((ulong)uVar31 >> 0x20) - fVar35);
      fVar51 = ABS((float)uVar11 - fVar36);
      fVar12 = ABS((float)((ulong)uVar11 >> 0x20) - fVar7);
      *(undefined8 *)(param_1 + 0x1a) = uVar17;
      *(undefined8 *)(param_1 + 0x18) = uVar16;
      uVar21 = *(undefined8 *)(param_3 + 10);
      uVar20 = *(undefined8 *)(param_3 + 8);
      auVar54._0_4_ = ABS((float)uVar23 - (float)uVar16);
      auVar54._4_4_ = ABS((float)((ulong)uVar23 >> 0x20) - (float)((ulong)uVar16 >> 0x20));
      auVar54._8_4_ = ABS((float)uVar24 - (float)uVar17);
      auVar54._12_4_ = ABS((float)((ulong)uVar24 >> 0x20) - (float)((ulong)uVar17 >> 0x20));
      auVar61[4] = SUB41(fVar8,0);
      auVar61._0_4_ = ABS((float)uVar31 - fVar49);
      auVar61[5] = (char)((uint)fVar8 >> 8);
      auVar61[6] = (char)((uint)fVar8 >> 0x10);
      auVar61[7] = (char)((uint)fVar8 >> 0x18);
      auVar61[8] = SUB41(fVar51,0);
      auVar61[9] = (char)((uint)fVar51 >> 8);
      auVar61[10] = (char)((uint)fVar51 >> 0x10);
      auVar61[0xb] = (char)((uint)fVar51 >> 0x18);
      auVar61[0xc] = SUB41(fVar12,0);
      auVar61[0xd] = (char)((uint)fVar12 >> 8);
      auVar61[0xe] = (char)((uint)fVar12 >> 0x10);
      auVar61[0xf] = (char)((uint)fVar12 >> 0x18);
      auVar61 = NEON_fmax(auVar61,auVar54,4);
      *(undefined8 *)(param_1 + 0x1e) = uVar21;
      *(undefined8 *)(param_1 + 0x1c) = uVar20;
      uVar11 = *(undefined8 *)(param_3 + 0xe);
      uVar31 = *(undefined8 *)(param_3 + 0xc);
      auVar58._0_4_ = ABS((float)uVar57 - (float)uVar20);
      auVar58._4_4_ = ABS((float)((ulong)uVar57 >> 0x20) - (float)((ulong)uVar20 >> 0x20));
      auVar58._8_4_ = ABS((float)uVar60 - (float)uVar21);
      auVar58._12_4_ = ABS((float)((ulong)uVar60 >> 0x20) - (float)((ulong)uVar21 >> 0x20));
      auVar54 = NEON_fmax(auVar61,auVar58,4);
      *(undefined8 *)(param_1 + 0x22) = uVar11;
      *(undefined8 *)(param_1 + 0x20) = uVar31;
      auVar61 = *(undefined1 (*) [16])(param_3 + 0x10);
      *(float **)(param_1 + 0xf2) = param_1 + 0x3f8;
      iVar53 = -(uint)(auVar54._0_4_ <= 1.1920929e-07);
      iVar55 = -(uint)(auVar54._4_4_ <= 1.1920929e-07);
      iVar56 = -(uint)(auVar54._8_4_ <= 1.1920929e-07);
      uVar60 = auVar61._8_8_;
      *(undefined8 *)(param_1 + 0x26) = uVar60;
      uVar57 = auVar61._0_8_;
      *(undefined8 *)(param_1 + 0x24) = uVar57;
      *(ulong *)(param_1 + 0xe8) =
           *(long *)(*(long *)(param_2 + 8) + 0x150) + (ulong)(uint)param_3[0x20] * 0x80;
      uVar5 = *(ushort *)((long)param_3 + 0x8a);
      lVar27 = *(long *)(param_2 + 0x20);
      param_1[0x450] = 1.12104e-44;
      param_1[0x451] = 0.0;
      param_1[0x3fa] = fVar36;
      param_1[0x3fb] = fVar7;
      param_1[0x3f8] = fVar49;
      param_1[0x3f9] = fVar35;
      *(undefined8 *)(param_1 + 0x3fe) = uVar17;
      *(undefined8 *)(param_1 + 0x3fc) = uVar16;
      *(ulong *)(param_1 + 0xea) = lVar27 + (ulong)uVar5 * 0x50;
      param_1[0x458] = 0.0;
      param_1[0x459] = 0.0;
      param_1[0x40c] = 0.0;
      param_1[0x40d] = 0.0;
      *(undefined8 *)(param_1 + 0x402) = uVar21;
      *(undefined8 *)(param_1 + 0x400) = uVar20;
      *(undefined8 *)(param_1 + 0x406) = uVar11;
      *(undefined8 *)(param_1 + 0x404) = uVar31;
      *(undefined8 *)(param_1 + 0x40a) = uVar60;
      *(undefined8 *)(param_1 + 0x408) = uVar57;
      *(undefined8 *)(param_1 + 0x456) = uVar29;
      *(undefined8 *)(param_1 + 0x454) = uVar39;
      param_1[0x44e] = 0.0;
      if (CONCAT13((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar53 >> 0x18) &
                   (byte)((uint)iVar56 >> 0x18),
                   CONCAT12((byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar53 >> 0x10) &
                            (byte)((uint)iVar56 >> 0x10),
                            CONCAT11((byte)((uint)iVar55 >> 8) & (byte)((uint)iVar53 >> 8) &
                                     (byte)((uint)iVar56 >> 8),
                                     (byte)iVar55 & (byte)iVar53 & (byte)iVar56))) != 0) {
        iVar53 = -(uint)(ABS((float)uVar31) <= 1.1920929e-07);
        iVar55 = -(uint)(ABS((float)((ulong)uVar31 >> 0x20)) <= 1.1920929e-07);
        iVar56 = -(uint)(ABS((float)uVar11) <= 1.1920929e-07);
        param_1[0x450] = 1.68156e-44;
        if (CONCAT13((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar53 >> 0x18) &
                     (byte)((uint)iVar56 >> 0x18),
                     CONCAT12((byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar53 >> 0x10) &
                              (byte)((uint)iVar56 >> 0x10),
                              CONCAT11((byte)((uint)iVar55 >> 8) & (byte)((uint)iVar53 >> 8) &
                                       (byte)((uint)iVar56 >> 8),
                                       (byte)iVar55 & (byte)iVar53 & (byte)iVar56))) != 0) {
          param_1[0x450] = 1.82169e-44;
        }
      }
      *(undefined2 *)(param_1 + 0x6f6) = 0xffff;
    }
    if (*(char *)(param_1 + 0xd1d) == '\0') {
      lVar27 = *(long *)(param_1 + 0xd8);
    }
    else {
      lVar27 = *(long *)(param_1 + 0xd8);
      lVar30 = *(long *)(param_2 + 0x10);
      uVar32 = (ulong)*(byte *)((long)param_3 + 0x89);
      if (*(int *)(lVar30 + (ulong)*(byte *)((long)param_3 + 0x89) * 0x50 + 0x18) <=
          *(int *)(lVar30 + (ulong)*(byte *)(lVar27 + 0x89) * 0x50 + 0x18)) {
        uVar32 = (ulong)*(byte *)(lVar27 + 0x89);
      }
      lVar30 = lVar30 + uVar32 * 0x50;
      fVar8 = *(float *)(lVar30 + 0x44);
      fVar51 = *(float *)(lVar30 + 0x48);
      pfVar3 = (float *)(lVar30 + 0x30);
      pfVar22 = (float *)(lVar30 + 0x34);
      if (((uint)param_3[0x15] & 2) != 0) {
        pfVar3 = (float *)(lVar30 + 0x38);
        pfVar22 = (float *)(lVar30 + 0x3c);
      }
      fVar12 = *pfVar3;
      param_1[0x70e] = *pfVar22;
      param_1[0x70d] = fVar12;
      if (0.0 < fVar51) {
        param_1[0x70e] = fVar12;
      }
      param_1[0x70f] = fVar8;
      param_1[0x710] = fVar51;
      *(char *)(param_1 + 0xd1d) = '\0';
    }
    if (*(char *)(*(long *)(lVar27 + 0x78) + 0x18) == '\x15') {
      bVar4 = *(byte *)((long)param_4 + 0xe);
      *(long *)(param_1 + 0xd8) = lVar27;
      lVar27 = *(long *)(lVar27 + 0x78);
      if ((lVar27 == 0) || (*(char *)(lVar27 + 0x18) != '\x15')) {
        param_1[0xde] = -NAN;
        *(long *)(param_1 + 0xe0) = lVar27;
      }
      else {
        bVar4 = bVar4 >> 5;
        plVar28 = (long *)(lVar27 + (ulong)bVar4 * 8 + 0x48);
        lVar30 = *plVar28;
        lVar27 = 0;
        if (lVar30 != 0) {
          lVar27 = lVar30 + (long)plVar28;
        }
        *(long *)(param_1 + 0xe0) = lVar27;
        param_1[0xde] = (float)((uint)bVar4 << 0x1d | 0x1fffffff);
      }
      if (*(char *)(lVar27 + 0x19) == '\x02') {
        *(long *)(param_1 + 0xe2) = lVar27;
        (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar27 + 0x18) * 0x200 + 0xa8))
                  (lVar27,param_1 + 0x714,param_1 + 0x734,param_1 + 0xa28);
      }
    }
    if ((*(char *)(*(long *)(param_3 + 0x1e) + 0x18) == '\x15') || (pfVar34 != param_3)) {
      if (*(char *)(*(long *)(param_3 + 0x1e) + 0x18) == '\x15') {
        uVar26 = *(byte *)((long)param_4 + 0xe) >> 2 & 7;
      }
      else {
        uVar26 = 1;
      }
      *(float **)(param_1 + 0xe6) = param_3;
      lVar27 = *(long *)(param_3 + 0x1e);
      if ((lVar27 == 0) || (*(char *)(lVar27 + 0x18) != '\x15')) {
        param_1[0xec] = -NAN;
        *(long *)(param_1 + 0xee) = lVar27;
      }
      else {
        plVar28 = (long *)(lVar27 + (ulong)uVar26 * 8 + 0x48);
        lVar30 = *plVar28;
        lVar27 = 0;
        if (lVar30 != 0) {
          lVar27 = lVar30 + (long)plVar28;
        }
        *(long *)(param_1 + 0xee) = lVar27;
        param_1[0xec] = (float)(uVar26 << 0x1d | 0x1fffffff);
      }
      if (*(char *)(lVar27 + 0x19) == '\x02') {
        *(long *)(param_1 + 0xf0) = lVar27;
        (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar27 + 0x18) * 0x200 + 0xa8))
                  (lVar27,param_1 + 0x724,param_1 + 0xa28,param_1 + 0xd1c);
      }
    }
    if (*(char *)(*(long *)(param_1 + 0xee) + 0x19) != '\x02') {
      local_78 = *param_4;
      lVar27 = *(long *)(*(long *)(param_1 + 0xe6) + 0x78);
      param_1[0xec] = local_78;
      if (*(char *)(lVar27 + 0x18) == '\x15') {
        plVar28 = (long *)(lVar27 + ((ulong)((uint)local_78 >> 0x1a) & 0x38) + 0x48);
        lVar30 = *plVar28;
        lVar27 = 0;
        if (lVar30 != 0) {
          lVar27 = lVar30 + (long)plVar28;
        }
      }
      *(long *)(param_1 + 0xee) = lVar27;
      param_1[0x3fe] = param_1[0x1a];
      param_1[0x3ff] = param_1[0x1b];
      param_1[0x3fc] = param_1[0x18];
      param_1[0x3fd] = param_1[0x19];
      param_1[0x3fa] = param_1[0x16];
      param_1[0x3fb] = param_1[0x17];
      param_1[0x3f8] = param_1[0x14];
      param_1[0x3f9] = param_1[0x15];
      *(undefined8 *)(param_1 + 0x40a) = *(undefined8 *)(param_1 + 0x26);
      *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(param_1 + 0x24);
      auVar37._0_4_ = ABS((float)DAT_03cab620 - param_1[0x14]);
      auVar37._4_4_ = ABS((float)((ulong)DAT_03cab620 >> 0x20) - param_1[0x15]);
      auVar37._8_4_ = ABS((float)DAT_03cab628 - param_1[0x16]);
      auVar37._12_4_ = ABS((float)((ulong)DAT_03cab628 >> 0x20) - param_1[0x17]);
      auVar40._0_4_ = ABS((float)_DAT_03cabe60 - param_1[0x18]);
      auVar40._4_4_ = ABS((float)((ulong)_DAT_03cabe60 >> 0x20) - param_1[0x19]);
      auVar40._8_4_ = ABS((float)_UNK_03cabe68 - param_1[0x1a]);
      auVar40._12_4_ = ABS((float)((ulong)_UNK_03cabe68 >> 0x20) - param_1[0x1b]);
      uVar16 = *(undefined8 *)(param_1 + 0x1e);
      uVar11 = *(undefined8 *)(param_1 + 0x1c);
      uVar31 = *(undefined8 *)(param_1 + 0x20);
      fVar51 = (float)_UNK_03caa5b8;
      uVar33 = (ulong)_UNK_03caa5b8 >> 0x20;
      fVar49 = (float)_DAT_03caa5b0;
      uVar32 = (ulong)_DAT_03caa5b0 >> 0x20;
      auVar61 = NEON_fmax(auVar37,auVar40,4);
      *(undefined8 *)(param_1 + 0x402) = uVar16;
      *(undefined8 *)(param_1 + 0x400) = uVar11;
      fVar8 = ABS((float)uVar32 - (float)((ulong)uVar11 >> 0x20));
      fVar51 = ABS(fVar51 - (float)uVar16);
      fVar12 = ABS((float)uVar33 - (float)((ulong)uVar16 >> 0x20));
      param_1[0x450] = 1.12104e-44;
      param_1[0x451] = 0.0;
      *(undefined8 *)(param_1 + 0x406) = *(undefined8 *)(param_1 + 0x22);
      *(undefined8 *)(param_1 + 0x404) = uVar31;
      *(undefined8 *)(param_1 + 0x456) = uVar29;
      *(undefined8 *)(param_1 + 0x454) = uVar39;
      auVar59[4] = SUB41(fVar8,0);
      auVar59._0_4_ = ABS(fVar49 - (float)uVar11);
      auVar59[5] = (char)((uint)fVar8 >> 8);
      auVar59[6] = (char)((uint)fVar8 >> 0x10);
      auVar59[7] = (char)((uint)fVar8 >> 0x18);
      auVar59[8] = SUB41(fVar51,0);
      auVar59[9] = (char)((uint)fVar51 >> 8);
      auVar59[10] = (char)((uint)fVar51 >> 0x10);
      auVar59[0xb] = (char)((uint)fVar51 >> 0x18);
      auVar59[0xc] = SUB41(fVar12,0);
      auVar59[0xd] = (char)((uint)fVar12 >> 8);
      auVar59[0xe] = (char)((uint)fVar12 >> 0x10);
      auVar59[0xf] = (char)((uint)fVar12 >> 0x18);
      auVar61 = NEON_fmax(auVar61,auVar59,4);
      iVar53 = -(uint)(auVar61._0_4_ <= 1.1920929e-07);
      iVar55 = -(uint)(auVar61._4_4_ <= 1.1920929e-07);
      iVar56 = -(uint)(auVar61._8_4_ <= 1.1920929e-07);
      param_1[0x458] = 0.0;
      param_1[0x459] = 0.0;
      param_1[0x40c] = 0.0;
      param_1[0x40d] = 0.0;
      param_1[0x44e] = 0.0;
      if (CONCAT13((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar53 >> 0x18) &
                   (byte)((uint)iVar56 >> 0x18),
                   CONCAT12((byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar53 >> 0x10) &
                            (byte)((uint)iVar56 >> 0x10),
                            CONCAT11((byte)((uint)iVar55 >> 8) & (byte)((uint)iVar53 >> 8) &
                                     (byte)((uint)iVar56 >> 8),
                                     (byte)iVar55 & (byte)iVar53 & (byte)iVar56))) != 0) {
        iVar53 = -(uint)(ABS((float)uVar31) <= 1.1920929e-07);
        iVar55 = -(uint)(ABS((float)((ulong)uVar31 >> 0x20)) <= 1.1920929e-07);
        iVar56 = -(uint)(ABS((float)*(undefined8 *)(param_1 + 0x22)) <= 1.1920929e-07);
        param_1[0x450] = 1.68156e-44;
        if (CONCAT13((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar53 >> 0x18) &
                     (byte)((uint)iVar56 >> 0x18),
                     CONCAT12((byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar53 >> 0x10) &
                              (byte)((uint)iVar56 >> 0x10),
                              CONCAT11((byte)((uint)iVar55 >> 8) & (byte)((uint)iVar53 >> 8) &
                                       (byte)((uint)iVar56 >> 8),
                                       (byte)iVar55 & (byte)iVar53 & (byte)iVar56))) != 0) {
          param_1[0x450] = 1.82169e-44;
        }
      }
      *(undefined2 *)(param_1 + 0x6f6) = 0xffff;
      puVar25 = PTR_DAT_047d19f0;
      lVar27 = *(long *)(*(long *)(param_1 + 0xe6) + 0x78);
      (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar27 + 0x18) * 0x200 + 0xb8))
                (lVar27,&local_78,1,param_1 + 0x3f8);
      if ((*(byte *)(param_1 + 0x450) >> 4 & 1) == 0) {
        lVar27 = *(long *)(param_1 + 0x458);
      }
      else {
        lVar27 = FUN_02ef6ac4(param_1 + 0x3f8,0,param_1 + 0x94);
      }
      *(long *)(param_1 + 0xf0) = lVar27;
      *(ulong *)(param_1 + 0xea) =
           *(long *)(param_2 + 0x20) + (ulong)*(ushort *)((long)param_4 + 0x16) * 0x50;
      (**(code **)(*(long *)puVar25 + (ulong)*(byte *)(lVar27 + 0x18) * 0x200 + 0xa8))
                (lVar27,param_1 + 0x724,param_1 + 0xa28,param_1 + 0xd1c);
    }
    if ((*(char *)(*(long *)(param_1 + 0xe0) + 0x19) != '\x02') &&
       (local_68[0] = param_4[1], local_68[0] != param_1[0xde])) {
      lVar27 = *(long *)(*(long *)(param_1 + 0xd8) + 0x78);
      param_1[0xde] = local_68[0];
      if (*(char *)(lVar27 + 0x18) == '\x15') {
        plVar28 = (long *)(lVar27 + ((ulong)((uint)local_68[0] >> 0x1a) & 0x38) + 0x48);
        lVar30 = *plVar28;
        lVar27 = 0;
        if (lVar30 != 0) {
          lVar27 = lVar30 + (long)plVar28;
        }
      }
      *(long *)(param_1 + 0xe0) = lVar27;
      param_1[0xf6] = param_1[2];
      param_1[0xf7] = param_1[3];
      param_1[0xf4] = *param_1;
      param_1[0xf5] = param_1[1];
      param_1[0xfa] = param_1[6];
      param_1[0xfb] = param_1[7];
      param_1[0xf8] = param_1[4];
      param_1[0xf9] = param_1[5];
      param_1[0x14c] = 1.12104e-44;
      param_1[0x14d] = 0.0;
      *(undefined8 *)(param_1 + 0x106) = *(undefined8 *)(param_1 + 0x12);
      *(undefined8 *)(param_1 + 0x104) = *(undefined8 *)(param_1 + 0x10);
      auVar38._0_4_ = ABS((float)DAT_03cab620 - *param_1);
      auVar38._4_4_ = ABS((float)((ulong)DAT_03cab620 >> 0x20) - param_1[1]);
      auVar38._8_4_ = ABS((float)DAT_03cab628 - param_1[2]);
      auVar38._12_4_ = ABS((float)((ulong)DAT_03cab628 >> 0x20) - param_1[3]);
      auVar41._0_4_ = ABS((float)_DAT_03cabe60 - param_1[4]);
      auVar41._4_4_ = ABS((float)((ulong)_DAT_03cabe60 >> 0x20) - param_1[5]);
      auVar41._8_4_ = ABS((float)_UNK_03cabe68 - param_1[6]);
      auVar41._12_4_ = ABS((float)((ulong)_UNK_03cabe68 >> 0x20) - param_1[7]);
      uVar16 = *(undefined8 *)(param_1 + 10);
      uVar11 = *(undefined8 *)(param_1 + 8);
      uVar31 = *(undefined8 *)(param_1 + 0xc);
      fVar51 = (float)_UNK_03caa5b8;
      uVar33 = (ulong)_UNK_03caa5b8 >> 0x20;
      fVar49 = (float)_DAT_03caa5b0;
      uVar32 = (ulong)_DAT_03caa5b0 >> 0x20;
      auVar61 = NEON_fmax(auVar38,auVar41,4);
      *(undefined8 *)(param_1 + 0xfe) = uVar16;
      *(undefined8 *)(param_1 + 0xfc) = uVar11;
      *(undefined8 *)(param_1 + 0x102) = *(undefined8 *)(param_1 + 0xe);
      *(undefined8 *)(param_1 + 0x100) = uVar31;
      param_1[0x154] = 0.0;
      param_1[0x155] = 0.0;
      fVar8 = ABS((float)uVar32 - (float)((ulong)uVar11 >> 0x20));
      fVar51 = ABS(fVar51 - (float)uVar16);
      fVar12 = ABS((float)uVar33 - (float)((ulong)uVar16 >> 0x20));
      param_1[0x108] = 0.0;
      param_1[0x109] = 0.0;
      *(undefined8 *)(param_1 + 0x152) = uVar29;
      *(undefined8 *)(param_1 + 0x150) = uVar39;
      auVar13[4] = SUB41(fVar8,0);
      auVar13._0_4_ = ABS(fVar49 - (float)uVar11);
      auVar13[5] = (char)((uint)fVar8 >> 8);
      auVar13[6] = (char)((uint)fVar8 >> 0x10);
      auVar13[7] = (char)((uint)fVar8 >> 0x18);
      auVar13[8] = SUB41(fVar51,0);
      auVar13[9] = (char)((uint)fVar51 >> 8);
      auVar13[10] = (char)((uint)fVar51 >> 0x10);
      auVar13[0xb] = (char)((uint)fVar51 >> 0x18);
      auVar13[0xc] = SUB41(fVar12,0);
      auVar13[0xd] = (char)((uint)fVar12 >> 8);
      auVar13[0xe] = (char)((uint)fVar12 >> 0x10);
      auVar13[0xf] = (char)((uint)fVar12 >> 0x18);
      auVar61 = NEON_fmax(auVar61,auVar13,4);
      iVar53 = -(uint)(auVar61._0_4_ <= 1.1920929e-07);
      iVar55 = -(uint)(auVar61._4_4_ <= 1.1920929e-07);
      iVar56 = -(uint)(auVar61._8_4_ <= 1.1920929e-07);
      param_1[0x14a] = 0.0;
      if (CONCAT13((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar53 >> 0x18) &
                   (byte)((uint)iVar56 >> 0x18),
                   CONCAT12((byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar53 >> 0x10) &
                            (byte)((uint)iVar56 >> 0x10),
                            CONCAT11((byte)((uint)iVar55 >> 8) & (byte)((uint)iVar53 >> 8) &
                                     (byte)((uint)iVar56 >> 8),
                                     (byte)iVar55 & (byte)iVar53 & (byte)iVar56))) != 0) {
        iVar53 = -(uint)(ABS((float)uVar31) <= 1.1920929e-07);
        iVar55 = -(uint)(ABS((float)((ulong)uVar31 >> 0x20)) <= 1.1920929e-07);
        iVar56 = -(uint)(ABS((float)*(undefined8 *)(param_1 + 0xe)) <= 1.1920929e-07);
        param_1[0x14c] = 1.68156e-44;
        if (CONCAT13((byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar53 >> 0x18) &
                     (byte)((uint)iVar56 >> 0x18),
                     CONCAT12((byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar53 >> 0x10) &
                              (byte)((uint)iVar56 >> 0x10),
                              CONCAT11((byte)((uint)iVar55 >> 8) & (byte)((uint)iVar53 >> 8) &
                                       (byte)((uint)iVar56 >> 8),
                                       (byte)iVar55 & (byte)iVar53 & (byte)iVar56))) != 0) {
          param_1[0x14c] = 1.82169e-44;
        }
      }
      *(undefined2 *)(param_1 + 0x3f2) = 0xffff;
      puVar25 = PTR_DAT_047d19f0;
      lVar27 = *(long *)(*(long *)(param_1 + 0xd8) + 0x78);
      (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(lVar27 + 0x18) * 0x200 + 0xb8))
                (lVar27,local_68,1,param_1 + 0xf4);
      if ((*(byte *)(param_1 + 0x14c) >> 4 & 1) == 0) {
        lVar27 = *(long *)(param_1 + 0x154);
      }
      else {
        lVar27 = FUN_02ef6ac4(param_1 + 0xf4,0,param_1 + 0x50);
      }
      *(long *)(param_1 + 0xe2) = lVar27;
      (**(code **)(*(long *)puVar25 + (ulong)*(byte *)(lVar27 + 0x18) * 0x200 + 0xa8))
                (lVar27,param_1 + 0x714,param_1 + 0x734,param_1 + 0xa28);
      fVar49 = local_68[0];
      fVar8 = (float)*(undefined8 *)(param_1 + 0x700);
      fVar51 = (float)((ulong)*(undefined8 *)(param_1 + 0x700) >> 0x20);
      fVar12 = (float)*(undefined8 *)(param_1 + 0x702);
      fVar35 = fVar8 * fVar8 + fVar51 * fVar51 + fVar12 * fVar12;
      if (fVar35 == 0.0) {
        fVar36 = 0.0;
        fVar35 = 0.0;
      }
      else {
        uVar39 = NEON_fmov(0x3f800000,4);
        fVar36 = (float)uVar39 / SQRT(fVar35);
        fVar35 = (float)((ulong)uVar39 >> 0x20) /
                 SQRT(fVar8 * fVar8 + fVar51 * fVar51 + fVar12 * fVar12);
      }
      auVar61 = *(undefined1 (*) [16])(param_1 + 0xf4);
      pfVar34 = param_1 + 0xf8;
      uVar39 = *(undefined8 *)(param_1 + 0xfa);
      uVar42 = (undefined1)((ulong)uVar39 >> 8);
      uVar43 = (undefined1)((ulong)uVar39 >> 0x10);
      uVar44 = (undefined1)((ulong)uVar39 >> 0x18);
      uVar45 = (undefined1)((ulong)uVar39 >> 0x20);
      uVar46 = (undefined1)((ulong)uVar39 >> 0x28);
      uVar47 = (undefined1)((ulong)uVar39 >> 0x30);
      uVar48 = (undefined1)((ulong)uVar39 >> 0x38);
      auVar14[9] = uVar42;
      auVar14._0_9_ = *(unkbyte9 *)pfVar34;
      auVar14[10] = uVar43;
      auVar14[0xb] = uVar44;
      auVar14[0xc] = uVar45;
      auVar14[0xd] = uVar46;
      auVar14[0xe] = uVar47;
      auVar14[0xf] = uVar48;
      auVar15[9] = uVar42;
      auVar15._0_9_ = *(unkbyte9 *)pfVar34;
      auVar15[10] = uVar43;
      auVar15[0xb] = uVar44;
      auVar15[0xc] = uVar45;
      auVar15[0xd] = uVar46;
      auVar15[0xe] = uVar47;
      auVar15[0xf] = uVar48;
      auVar58 = NEON_ext(auVar14,auVar15,8,1);
      pauVar1 = (undefined1 (*) [12])(param_1 + 0xfc);
      uVar52 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xfe) >> 0x20);
      fVar50 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      auVar54 = NEON_ext(auVar61,auVar61,8,1);
      auVar18._12_4_ = uVar52;
      auVar18._0_12_ = *pauVar1;
      auVar19._12_4_ = uVar52;
      auVar19._0_12_ = *pauVar1;
      auVar59 = NEON_ext(auVar18,auVar19,8,1);
      lVar27 = *(long *)(param_1 + 0xd8);
      fVar7 = auVar54._0_4_ * fVar12 + auVar61._0_4_ * fVar8 + auVar61._4_4_ * fVar51;
      fVar9 = auVar58._0_4_ * fVar12 +
              (float)*(undefined8 *)pfVar34 * fVar8 +
              (float)((ulong)*(undefined8 *)pfVar34 >> 0x20) * fVar51;
      fVar10 = auVar59._0_4_ * fVar12 + (float)*(undefined8 *)*pauVar1 * fVar8 + fVar50 * fVar51;
      fVar8 = auVar59._4_4_ * fVar12 + fVar50 * fVar8 + auVar59._4_4_ * fVar51;
      *(ulong *)(param_1 + 0x706) =
           CONCAT17((char)((uint)fVar8 >> 0x18),
                    CONCAT16((char)((uint)fVar8 >> 0x10),
                             CONCAT15((char)((uint)fVar8 >> 8),CONCAT14(SUB41(fVar8,0),fVar10))));
      *(ulong *)(param_1 + 0x704) =
           CONCAT17((char)((uint)fVar9 >> 0x18),
                    CONCAT16((char)((uint)fVar9 >> 0x10),
                             CONCAT15((char)((uint)fVar9 >> 8),CONCAT14(SUB41(fVar9,0),fVar7))));
      fVar9 = fVar35 * fVar9;
      fVar35 = fVar35 * fVar8;
      *(ulong *)(param_1 + 0x70a) =
           CONCAT17((char)((uint)fVar35 >> 0x18),
                    CONCAT16((char)((uint)fVar35 >> 0x10),
                             CONCAT15((char)((uint)fVar35 >> 8),
                                      CONCAT14(SUB41(fVar35,0),fVar36 * fVar10))));
      *(ulong *)(param_1 + 0x708) =
           CONCAT17((char)((uint)fVar9 >> 0x18),
                    CONCAT16((char)((uint)fVar9 >> 0x10),
                             CONCAT15((char)((uint)fVar9 >> 8),
                                      CONCAT14(SUB41(fVar9,0),fVar36 * fVar7))));
      puVar25 = PTR_DAT_047d1a60;
      local_78 = (float)CONCAT22(local_78._2_2_,*(undefined2 *)(lVar27 + 0x8a));
      local_74 = *(undefined4 *)(lVar27 + 0x8c);
      local_70 = *(undefined8 *)(lVar27 + 0x98);
      uVar6 = *(undefined2 *)(param_1 + 0x3f2);
      uVar29 = *(undefined8 *)(param_1 + 0x108);
      uVar32 = (ulong)(uint)param_1[0x14a];
      uVar31 = *(undefined8 *)(lVar27 + 0x78);
      plVar28 = *(long **)(param_2 + 0x48);
      uVar39 = *(undefined8 *)(param_1 + 0xe2);
      if (0 < (int)param_1[0x14a]) {
        uVar33 = 0;
        pfVar34 = param_1 + 0x110;
        uVar26 = 0xffffffff;
        do {
          lVar30 = uVar33 * 4;
          uVar2 = (int)uVar33 + (uint)*(byte *)(*(long *)(pfVar34 + -4) + 0x1c);
          uVar33 = (ulong)uVar2;
          uVar26 = ((int)pfVar34[-2] + 1 << (ulong)(-uVar2 & 0x1f)) - 1U |
                   *(uint *)(puVar25 + lVar30) & uVar26;
          (**(code **)(*plVar28 + 0x40))
                    (plVar28,*(undefined2 *)(pfVar34 + -6),6,lVar27,uVar31,*(long *)(pfVar34 + -4),
                     uVar26,*(undefined8 *)pfVar34,&local_78);
          uVar32 = uVar32 - 1;
          pfVar34 = pfVar34 + 8;
        } while (uVar32 != 0);
      }
      (**(code **)(*plVar28 + 0x40))(plVar28,uVar6,6,lVar27,uVar31,uVar29,fVar49,uVar39,&local_78);
      *(ulong *)(param_1 + 0xdc) = *(long *)(param_2 + 0x20) + (ulong)local_78._0_2_ * 0x50;
    }
    FUN_031cc744(param_1 + 0x28,*(undefined8 *)(param_1 + 0xf2),*(undefined8 *)(param_1 + 0xe4));
    param_1[0x70c] =
         *(float *)(*(long *)(param_1 + 0xe2) + 0x20) + *(float *)(*(long *)(param_1 + 0xf0) + 0x20)
    ;
  }
  return;
}



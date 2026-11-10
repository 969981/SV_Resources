/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030eae80; name: FUN_030eae80
 */


void FUN_030eae80(undefined8 param_1,long param_2,long param_3,undefined8 *param_4,
                 undefined8 *param_5,long param_6,long param_7,undefined8 param_8,long param_9,
                 long param_10,char *param_11)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  int *piVar19;
  long *plVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 *local_1c8;
  ulong local_1c0;
  undefined1 auStack_1b8 [64];
  undefined1 *local_178;
  undefined8 local_170;
  undefined1 auStack_168 [64];
  undefined1 *local_128;
  undefined8 local_120;
  undefined1 auStack_118 [64];
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [64];
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  
  local_78 = 0;
  local_70._0_4_ = 0;
  local_70._4_4_ = 0x80000000;
  local_88 = 0;
  local_80._0_4_ = 0;
  local_80._4_4_ = 0x80000000;
  uVar5 = param_4[1];
  fVar32 = (float)*param_4;
  fVar26 = (float)((ulong)*param_4 >> 0x20);
  uVar30 = param_4[3];
  uVar27 = param_4[2];
  if (0 < (int)((ulong)(param_7 - param_6) >> 3)) {
    FUN_030ed938(&local_78,(param_7 - param_6) * 0x20000000 >> 0x20);
  }
  if (param_6 != param_7) {
    fVar25 = (float)uVar27 - fVar32;
    fVar28 = (float)((ulong)uVar27 >> 0x20) - fVar26;
    fVar29 = (float)uVar30 - (float)uVar5;
    fVar31 = fVar25 * fVar25 + fVar28 * fVar28 + fVar29 * fVar29;
    fVar33 = fVar25 * fVar25 + fVar28 * fVar28 + fVar29 * fVar29;
    fVar25 = fVar25 / fVar31;
    fVar28 = fVar28 / fVar33;
    fVar29 = fVar29 / fVar31;
    iVar18 = -(uint)(fVar31 == 0.0);
    iVar21 = -(uint)(fVar33 == 0.0);
    iVar6 = -(uint)(fVar31 == 0.0);
    fVar25 = (float)CONCAT13((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                             CONCAT12((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                                      CONCAT11((byte)((uint)fVar25 >> 8) &
                                               ~(byte)((uint)iVar18 >> 8),
                                               SUB41(fVar25,0) & ~(byte)iVar18)));
    fVar29 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                             CONCAT12((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                                      CONCAT11((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar6 >> 8)
                                               ,SUB41(fVar29,0) & ~(byte)iVar6)));
    fVar28 = (float)(CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                              CONCAT16((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                                       CONCAT15((byte)((uint)fVar28 >> 8) &
                                                ~(byte)((uint)iVar21 >> 8),
                                                CONCAT14(SUB41(fVar28,0) & ~(byte)iVar21,fVar25))))
                    >> 0x20);
    fVar32 = -(fVar32 * fVar25 + fVar26 * fVar28 + (float)uVar5 * fVar29);
    lVar15 = param_6;
    do {
      lVar16 = *(long *)(param_2 + 0x20);
      iVar18 = *(int *)(lVar15 + 4);
      if (iVar18 < *(int *)(lVar16 + 0x30)) {
        lVar22 = *(long *)(lVar16 + 0x28);
        iVar21 = iVar18;
        if (*(int *)(lVar16 + 0x78) != 0) {
          iVar21 = *(int *)(*(long *)(lVar16 + 0x70) + (long)iVar18 * 4);
        }
        if (iVar21 != -1) {
          plVar20 = (long *)(lVar16 + 0xc0);
          iVar18 = iVar21;
          goto LAB_030eaf94;
        }
      }
      else {
        plVar20 = (long *)(lVar16 + 0xe0);
        iVar18 = iVar18 - *(int *)(lVar16 + 0x30);
LAB_030eaf94:
        lVar22 = *plVar20;
      }
      piVar19 = (int *)(lVar22 + (long)iVar18 * 0x14);
      iVar6 = *(int *)(lVar16 + 0x40);
      lVar15 = lVar15 + 8;
      iVar18 = *piVar19;
      iVar21 = piVar19[1];
      lVar22 = 0x38;
      if (iVar6 <= iVar18) {
        lVar22 = 0xf0;
      }
      iVar1 = 0;
      if (iVar6 <= iVar18) {
        iVar1 = iVar6;
      }
      puVar2 = (undefined8 *)(*(long *)(lVar16 + lVar22) + (long)(iVar18 - iVar1) * 0x10);
      uVar27 = puVar2[1];
      uVar5 = *puVar2;
      lVar22 = 0x38;
      if (iVar6 <= iVar21) {
        lVar22 = 0xf0;
      }
      iVar18 = 0;
      if (iVar6 <= iVar21) {
        iVar18 = iVar6;
      }
      puVar2 = (undefined8 *)(*(long *)(lVar16 + lVar22) + (long)(iVar21 - iVar18) * 0x10);
      uVar11 = puVar2[1];
      uVar30 = *puVar2;
      lVar16 = (long)(int)local_70;
      local_70._0_4_ = (int)local_70 + 1;
      fVar26 = fVar25 * (float)uVar5;
      fVar31 = fVar28 * (float)((ulong)uVar5 >> 0x20);
      uVar37 = (undefined1)((uint)fVar31 >> 8);
      uVar38 = (undefined1)((uint)fVar31 >> 0x10);
      uVar39 = (undefined1)((uint)fVar31 >> 0x18);
      fVar33 = fVar29 * (float)uVar27;
      uVar40 = (undefined1)((uint)fVar33 >> 8);
      uVar41 = (undefined1)((uint)fVar33 >> 0x10);
      uVar42 = (undefined1)((uint)fVar33 >> 0x18);
      fVar46 = fVar32 * (float)((ulong)uVar27 >> 0x20);
      uVar43 = (undefined1)((uint)fVar46 >> 8);
      uVar44 = (undefined1)((uint)fVar46 >> 0x10);
      uVar45 = (undefined1)((uint)fVar46 >> 0x18);
      auVar49[4] = SUB41(fVar31,0);
      auVar49._0_4_ = fVar26;
      auVar49[5] = uVar37;
      auVar49[6] = uVar38;
      auVar49[7] = uVar39;
      auVar49[8] = SUB41(fVar33,0);
      auVar49[9] = uVar40;
      auVar49[10] = uVar41;
      auVar49[0xb] = uVar42;
      auVar49[0xc] = SUB41(fVar46,0);
      auVar49[0xd] = uVar43;
      auVar49[0xe] = uVar44;
      auVar49[0xf] = uVar45;
      auVar50[4] = SUB41(fVar31,0);
      auVar50._0_4_ = fVar26;
      auVar50[5] = uVar37;
      auVar50[6] = uVar38;
      auVar50[7] = uVar39;
      auVar50[8] = SUB41(fVar33,0);
      auVar50[9] = uVar40;
      auVar50[10] = uVar41;
      auVar50[0xb] = uVar42;
      auVar50[0xc] = SUB41(fVar46,0);
      auVar50[0xd] = uVar43;
      auVar50[0xe] = uVar44;
      auVar50[0xf] = uVar45;
      auVar49 = NEON_ext(auVar49,auVar50,8,1);
      fVar33 = fVar25 * (float)uVar30;
      fVar46 = fVar28 * (float)((ulong)uVar30 >> 0x20);
      fVar47 = fVar29 * (float)uVar11;
      fVar48 = fVar32 * (float)((ulong)uVar11 >> 0x20);
      auVar7._4_4_ = fVar46;
      auVar7._0_4_ = fVar33;
      auVar7._8_4_ = fVar47;
      auVar7._12_4_ = fVar48;
      auVar8._4_4_ = fVar46;
      auVar8._0_4_ = fVar33;
      auVar8._8_4_ = fVar47;
      auVar8._12_4_ = fVar48;
      auVar50 = NEON_ext(auVar7,auVar8,8,1);
      fVar33 = fVar33 + fVar46 + auVar50._0_4_ + fVar32;
      *(ulong *)(local_78 + lVar16 * 8) =
           CONCAT17((char)((uint)fVar33 >> 0x18),
                    CONCAT16((char)((uint)fVar33 >> 0x10),
                             CONCAT15((char)((uint)fVar33 >> 8),
                                      CONCAT14(SUB41(fVar33,0),
                                               fVar26 + fVar31 + auVar49._0_4_ + fVar32))));
    } while (param_7 != lVar15);
  }
  uVar5 = param_5[1];
  fVar32 = (float)*param_5;
  fVar26 = (float)((ulong)*param_5 >> 0x20);
  uVar30 = param_5[3];
  uVar27 = param_5[2];
  if (0 < (int)((ulong)(param_10 - param_9) >> 3)) {
    FUN_030ed938(&local_88,(param_10 - param_9) * 0x20000000 >> 0x20);
  }
  lVar16 = local_78;
  lVar15 = local_88;
  if (param_9 != param_10) {
    fVar25 = (float)uVar27 - fVar32;
    fVar28 = (float)((ulong)uVar27 >> 0x20) - fVar26;
    fVar29 = (float)uVar30 - (float)uVar5;
    fVar31 = fVar25 * fVar25 + fVar28 * fVar28 + fVar29 * fVar29;
    fVar33 = fVar25 * fVar25 + fVar28 * fVar28 + fVar29 * fVar29;
    fVar25 = fVar25 / fVar31;
    fVar28 = fVar28 / fVar33;
    fVar29 = fVar29 / fVar31;
    iVar18 = -(uint)(fVar31 == 0.0);
    iVar21 = -(uint)(fVar33 == 0.0);
    iVar6 = -(uint)(fVar31 == 0.0);
    fVar25 = (float)CONCAT13((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                             CONCAT12((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                                      CONCAT11((byte)((uint)fVar25 >> 8) &
                                               ~(byte)((uint)iVar18 >> 8),
                                               SUB41(fVar25,0) & ~(byte)iVar18)));
    fVar29 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                             CONCAT12((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                                      CONCAT11((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar6 >> 8)
                                               ,SUB41(fVar29,0) & ~(byte)iVar6)));
    fVar28 = (float)(CONCAT17((byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                              CONCAT16((byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                                       CONCAT15((byte)((uint)fVar28 >> 8) &
                                                ~(byte)((uint)iVar21 >> 8),
                                                CONCAT14(SUB41(fVar28,0) & ~(byte)iVar21,fVar25))))
                    >> 0x20);
    fVar32 = -(fVar32 * fVar25 + fVar26 * fVar28 + (float)uVar5 * fVar29);
    lVar22 = param_9;
    do {
      lVar17 = *(long *)(param_3 + 0x20);
      iVar18 = *(int *)(lVar22 + 4);
      if (iVar18 < *(int *)(lVar17 + 0x30)) {
        lVar23 = *(long *)(lVar17 + 0x28);
        iVar21 = iVar18;
        if (*(int *)(lVar17 + 0x78) != 0) {
          iVar21 = *(int *)(*(long *)(lVar17 + 0x70) + (long)iVar18 * 4);
        }
        if (iVar21 != -1) {
          plVar20 = (long *)(lVar17 + 0xc0);
          iVar18 = iVar21;
          goto LAB_030eb0ec;
        }
      }
      else {
        plVar20 = (long *)(lVar17 + 0xe0);
        iVar18 = iVar18 - *(int *)(lVar17 + 0x30);
LAB_030eb0ec:
        lVar23 = *plVar20;
      }
      piVar19 = (int *)(lVar23 + (long)iVar18 * 0x14);
      iVar6 = *(int *)(lVar17 + 0x40);
      lVar22 = lVar22 + 8;
      iVar18 = *piVar19;
      iVar21 = piVar19[1];
      lVar23 = 0x38;
      if (iVar6 <= iVar18) {
        lVar23 = 0xf0;
      }
      iVar1 = 0;
      if (iVar6 <= iVar18) {
        iVar1 = iVar6;
      }
      puVar2 = (undefined8 *)(*(long *)(lVar17 + lVar23) + (long)(iVar18 - iVar1) * 0x10);
      uVar27 = puVar2[1];
      uVar5 = *puVar2;
      lVar23 = 0x38;
      if (iVar6 <= iVar21) {
        lVar23 = 0xf0;
      }
      iVar18 = 0;
      if (iVar6 <= iVar21) {
        iVar18 = iVar6;
      }
      puVar2 = (undefined8 *)(*(long *)(lVar17 + lVar23) + (long)(iVar21 - iVar18) * 0x10);
      uVar11 = puVar2[1];
      uVar30 = *puVar2;
      lVar17 = (long)(int)local_80;
      local_80._0_4_ = (int)local_80 + 1;
      fVar26 = fVar25 * (float)uVar5;
      fVar31 = fVar28 * (float)((ulong)uVar5 >> 0x20);
      uVar37 = (undefined1)((uint)fVar31 >> 8);
      uVar38 = (undefined1)((uint)fVar31 >> 0x10);
      uVar39 = (undefined1)((uint)fVar31 >> 0x18);
      fVar33 = fVar29 * (float)uVar27;
      uVar40 = (undefined1)((uint)fVar33 >> 8);
      uVar41 = (undefined1)((uint)fVar33 >> 0x10);
      uVar42 = (undefined1)((uint)fVar33 >> 0x18);
      fVar46 = fVar32 * (float)((ulong)uVar27 >> 0x20);
      uVar43 = (undefined1)((uint)fVar46 >> 8);
      uVar44 = (undefined1)((uint)fVar46 >> 0x10);
      uVar45 = (undefined1)((uint)fVar46 >> 0x18);
      auVar3[4] = SUB41(fVar31,0);
      auVar3._0_4_ = fVar26;
      auVar3[5] = uVar37;
      auVar3[6] = uVar38;
      auVar3[7] = uVar39;
      auVar3[8] = SUB41(fVar33,0);
      auVar3[9] = uVar40;
      auVar3[10] = uVar41;
      auVar3[0xb] = uVar42;
      auVar3[0xc] = SUB41(fVar46,0);
      auVar3[0xd] = uVar43;
      auVar3[0xe] = uVar44;
      auVar3[0xf] = uVar45;
      auVar4[4] = SUB41(fVar31,0);
      auVar4._0_4_ = fVar26;
      auVar4[5] = uVar37;
      auVar4[6] = uVar38;
      auVar4[7] = uVar39;
      auVar4[8] = SUB41(fVar33,0);
      auVar4[9] = uVar40;
      auVar4[10] = uVar41;
      auVar4[0xb] = uVar42;
      auVar4[0xc] = SUB41(fVar46,0);
      auVar4[0xd] = uVar43;
      auVar4[0xe] = uVar44;
      auVar4[0xf] = uVar45;
      auVar49 = NEON_ext(auVar3,auVar4,8,1);
      fVar33 = fVar25 * (float)uVar30;
      fVar46 = fVar28 * (float)((ulong)uVar30 >> 0x20);
      fVar47 = fVar29 * (float)uVar11;
      fVar48 = fVar32 * (float)((ulong)uVar11 >> 0x20);
      auVar9._4_4_ = fVar46;
      auVar9._0_4_ = fVar33;
      auVar9._8_4_ = fVar47;
      auVar9._12_4_ = fVar48;
      auVar10._4_4_ = fVar46;
      auVar10._0_4_ = fVar33;
      auVar10._8_4_ = fVar47;
      auVar10._12_4_ = fVar48;
      auVar50 = NEON_ext(auVar9,auVar10,8,1);
      fVar33 = fVar33 + fVar46 + auVar50._0_4_ + fVar32;
      *(ulong *)(local_88 + lVar17 * 8) =
           CONCAT17((char)((uint)fVar33 >> 0x18),
                    CONCAT16((char)((uint)fVar33 >> 0x10),
                             CONCAT15((char)((uint)fVar33 >> 8),
                                      CONCAT14(SUB41(fVar33,0),
                                               fVar26 + fVar31 + auVar49._0_4_ + fVar32))));
    } while (param_10 != lVar22);
  }
  fVar32 = (float)*param_4 - (float)param_4[2];
  fVar25 = (float)((ulong)*param_4 >> 0x20) - (float)((ulong)param_4[2] >> 0x20);
  fVar28 = (float)param_4[1] - (float)param_4[3];
  fVar32 = fVar32 * fVar32;
  fVar25 = fVar25 * fVar25;
  fVar28 = fVar28 * fVar28;
  fVar29 = *(float *)(param_11 + 4);
  fVar26 = SQRT(fVar32 + fVar25 + fVar28);
  iVar18 = -(uint)(fVar26 == 0.0);
  bVar34 = ~(byte)((uint)iVar18 >> 8);
  bVar35 = ~(byte)((uint)iVar18 >> 0x10);
  bVar36 = ~(byte)((uint)iVar18 >> 0x18);
  if (*param_11 == '\0') {
    local_d8 = auStack_c8;
    local_d0 = -0x7ffffff800000000;
    local_128 = auStack_118;
    local_120 = -0x7ffffff800000000;
    local_178 = auStack_168;
    local_170 = -0x7ffffff800000000;
    local_1c8 = auStack_1b8;
    local_1c0 = 0x8000000800000000;
    FUN_030ebad0(param_6,param_7,local_78,local_78 + (long)(int)local_70 * 8,&local_d8,&local_178);
    lVar15 = local_88;
    FUN_030ebad0(param_9,param_10,local_88,local_88 + (long)(int)local_80 * 8,&local_128,&local_1c8)
    ;
    FUN_030ebe00(CONCAT44(0.0 / SQRT(fVar32 + fVar25 + fVar28),fVar29 / fVar26) &
                 CONCAT17(bVar36,CONCAT16(bVar35,CONCAT15(bVar34,CONCAT14(~(byte)iVar18,
                                                                          CONCAT13(bVar36,CONCAT12(
                                                  bVar35,CONCAT11(bVar34,~(byte)iVar18))))))),
                 param_1,param_2,param_3,param_4,param_5,local_d8,local_d8 + (long)(int)local_d0 * 8
                 ,param_8,local_128,local_128 + (long)(int)local_120 * 8,local_178,
                 local_178 + (long)(int)local_170 * 8,local_1c8,local_1c8 + (long)(int)local_1c0 * 8
                 ,param_11[1]);
    uVar12 = local_1c0;
    puVar24 = PTR_PTR_047d1a50;
    uVar14 = local_1c0 >> 0x20;
    local_1c0 = uVar14 << 0x20;
    if ((-1 < (long)uVar12) && (local_1c8 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,local_1c8,uVar14 << 3);
    }
    lVar22 = local_170;
    uVar14 = (ulong)local_170._4_4_;
    local_170 = (ulong)local_170._4_4_ << 0x20;
    if ((-1 < lVar22) && (local_178 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(puVar24 + 0x20) + 0x20))(puVar24 + 0x20,local_178,uVar14 << 3);
    }
    lVar22 = local_120;
    uVar14 = (ulong)local_120._4_4_;
    local_120 = (ulong)local_120._4_4_ << 0x20;
    if ((-1 < lVar22) && (local_128 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(puVar24 + 0x20) + 0x20))(puVar24 + 0x20,local_128,uVar14 << 3);
    }
    lVar22 = local_d0;
    uVar14 = (ulong)local_d0._4_4_;
    local_d0 = (ulong)local_d0._4_4_ << 0x20;
    if ((-1 < lVar22) && (local_d8 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(puVar24 + 0x20) + 0x20))(puVar24 + 0x20,local_d8,uVar14 << 3);
    }
  }
  else {
    FUN_030ebe00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 local_78,local_78 + (long)(int)local_70 * 8,local_88,
                 local_88 + (long)(int)local_80 * 8,param_11[1]);
    puVar24 = PTR_PTR_047d1a50;
  }
  uVar13 = local_80._4_4_;
  uVar14 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < (int)uVar13) && (lVar15 != 0)) {
    (**(code **)(*(long *)(puVar24 + 0x20) + 0x20))(puVar24 + 0x20,lVar15,uVar14 << 3);
  }
  uVar13 = local_70._4_4_;
  uVar14 = (ulong)local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < (int)uVar13) && (lVar16 != 0)) {
    (**(code **)(*(long *)(puVar24 + 0x20) + 0x20))(puVar24 + 0x20,lVar16,uVar14 << 3);
  }
  return;
}



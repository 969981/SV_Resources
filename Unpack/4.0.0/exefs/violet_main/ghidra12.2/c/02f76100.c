/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f76100; name: FUN_02f76100
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_02f76100(long param_1,undefined8 param_2,long *param_3,long *param_4,ulong *param_5,
            undefined8 *param_6,ulong param_7,long param_8,undefined4 *param_9)

{
  undefined1 (*pauVar1) [12];
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  char cVar6;
  unkbyte9 *pVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  bool bVar21;
  float *pfVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  int iVar26;
  ulong uVar27;
  long *plVar28;
  undefined8 uVar29;
  long lVar30;
  unkbyte9 *pVar31;
  undefined8 *puVar32;
  uint uVar33;
  float *pfVar34;
  long lVar35;
  ulong uVar36;
  undefined8 *puVar37;
  ulong uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  float fVar62;
  float fVar64;
  undefined1 auVar63 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fStack_1b3c;
  float fStack_1b34;
  undefined8 local_1b30;
  undefined8 uStack_1b28;
  undefined4 local_1b18;
  undefined1 local_1b14;
  ulong *local_1ae8;
  undefined1 auStack_1ae0 [24];
  float fStack_1ac8;
  undefined8 *local_1ab0;
  undefined **local_1aa0;
  ulong uStack_1a98;
  ulong local_1a90;
  ulong uStack_1a88;
  undefined8 local_1a80;
  undefined8 uStack_1a78;
  undefined8 local_1a70;
  undefined8 uStack_1a68;
  undefined8 uStack_1a60;
  undefined8 uStack_1a58;
  ulong local_1a50;
  ulong uStack_1a48;
  undefined8 local_1a40;
  ulong uStack_1a38;
  undefined8 local_1a30;
  undefined8 uStack_1a28;
  ulong local_1a20;
  ulong uStack_1a18;
  undefined8 local_1a10;
  undefined8 uStack_1a08;
  undefined8 local_1a00;
  undefined8 uStack_19f8;
  ulong uStack_19f0;
  ulong uStack_19e8;
  ulong local_19e0;
  ulong uStack_19d8;
  ulong local_19d0;
  ulong uStack_19c8;
  ulong local_19c0;
  ulong uStack_19b8;
  undefined8 local_19b0;
  undefined8 uStack_19a8;
  undefined8 local_19a0;
  undefined8 local_1998;
  undefined8 local_1900;
  ulong uStack_18f8;
  undefined8 local_18f0;
  float local_18e8;
  float fStack_18e4;
  float fStack_18e0;
  float local_18dc;
  float local_18d8;
  undefined1 auStack_18d0 [3024];
  undefined8 local_d00;
  undefined8 uStack_cf8;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined8 local_ce0;
  float local_cd8;
  undefined4 local_130 [2];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  uVar33 = *(uint *)(*param_4 + 0x54);
  if ((*(byte *)(*param_3 + 0x54) & 9) == 0) {
    if ((uVar33 & 1) != 0) {
      return 0;
    }
    if ((uVar33 & 9) == 0) {
      return 0;
    }
  }
  uVar5 = *(ushort *)(param_4[5] + 0x1a);
  uVar33 = (uint)((uVar33 & 5) != 0) & (uVar5 & 0x200) >> 9;
  uVar3 = uVar33 ^ 1;
  *(short *)(param_8 + 0x9a) = -(short)uVar3;
  puVar25 = PTR_DAT_047d19f0;
  uVar4 = *(uint *)(*param_4 + 0x54);
  if ((uVar4 & 1) == 0) {
    lVar35 = *(long *)(param_1 + 0x10);
    uVar36 = (ulong)*(byte *)(*param_4 + 0x89);
    if (*(int *)(lVar35 + uVar36 * 0x50 + 0x18) <=
        *(int *)(lVar35 + (ulong)*(byte *)(*param_3 + 0x89) * 0x50 + 0x18)) {
      uVar36 = (ulong)*(byte *)(*param_3 + 0x89);
    }
    fVar10 = *(float *)(param_6 + 3);
    if (((uVar5 >> 9 & 1) == 0) || ((uVar4 >> 2 & 1) == 0)) {
      if (*(float *)(lVar35 + uVar36 * 0x50 + 0x40) <= fVar10) {
        if (*(float *)(lVar35 + uVar36 * 0x50 + 0x38) <= fVar10 &&
            (*(ushort *)(param_8 + 10) & 0x4000) != 0) goto LAB_02f768a8;
        goto LAB_02f761fc;
      }
    }
    else {
      if ((*(byte *)(param_8 + 0xb) >> 6 & 1) != 0) goto LAB_02f768a8;
LAB_02f761fc:
      lVar35 = param_3[1];
      uVar29 = *(undefined8 *)(lVar35 + 0x60);
      uVar14 = *(undefined8 *)(lVar35 + 0x68);
      lVar30 = param_4[1];
      uVar23 = *(undefined8 *)(lVar30 + 0x60);
      uVar24 = *(undefined8 *)(lVar30 + 0x68);
      uVar36 = *(ulong *)(*(long *)(param_1 + 8) + 0x540);
      fVar67 = *(float *)(lVar35 + 0x60) - *(float *)(lVar30 + 0x60);
      fVar68 = *(float *)(lVar35 + 100) - *(float *)(lVar30 + 100);
      fVar69 = *(float *)(lVar35 + 0x68) - *(float *)(lVar30 + 0x68);
      fVar59 = fVar69 * fVar69 + fVar67 * fVar67 + fVar68 * fVar68;
      fVar53 = (float)uVar36;
      if (fVar10 * fVar10 <= fVar59 * fVar53 * fVar53) {
        pVar31 = (unkbyte9 *)param_3[6];
        uVar13 = *(undefined8 *)((long)pVar31 + 8);
        uVar39 = (undefined1)((ulong)uVar13 >> 8);
        uVar40 = (undefined1)((ulong)uVar13 >> 0x10);
        uVar41 = (undefined1)((ulong)uVar13 >> 0x18);
        uVar42 = (undefined1)((ulong)uVar13 >> 0x20);
        uVar43 = (undefined1)((ulong)uVar13 >> 0x28);
        uVar44 = (undefined1)((ulong)uVar13 >> 0x30);
        uVar45 = (undefined1)((ulong)uVar13 >> 0x38);
        pVar7 = pVar31 + 1;
        uVar13 = *(undefined8 *)((long)pVar31 + 0x18);
        uVar46 = (undefined1)((ulong)uVar13 >> 8);
        uVar47 = (undefined1)((ulong)uVar13 >> 0x10);
        uVar48 = (undefined1)((ulong)uVar13 >> 0x18);
        uVar49 = (undefined1)((ulong)uVar13 >> 0x20);
        uVar50 = (undefined1)((ulong)uVar13 >> 0x28);
        uVar51 = (undefined1)((ulong)uVar13 >> 0x30);
        uVar52 = (undefined1)((ulong)uVar13 >> 0x38);
        pauVar1 = (undefined1 (*) [12])(pVar31 + 2);
        uVar57 = (undefined4)((ulong)*(undefined8 *)((long)pVar31 + 0x28) >> 0x20);
        fVar54 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
        auVar65[9] = uVar46;
        auVar65._0_9_ = *pVar7;
        auVar65[10] = uVar47;
        auVar65[0xb] = uVar48;
        auVar65[0xc] = uVar49;
        auVar65[0xd] = uVar50;
        auVar65[0xe] = uVar51;
        auVar65[0xf] = uVar52;
        auVar16[9] = uVar46;
        auVar16._0_9_ = *pVar7;
        auVar16[10] = uVar47;
        auVar16[0xb] = uVar48;
        auVar16[0xc] = uVar49;
        auVar16[0xd] = uVar50;
        auVar16[0xe] = uVar51;
        auVar16[0xf] = uVar52;
        auVar65 = NEON_ext(auVar65,auVar16,8,1);
        local_e8 = 0;
        local_e0 = 0;
        auVar63[9] = uVar39;
        auVar63._0_9_ = *pVar31;
        auVar63[10] = uVar40;
        auVar63[0xb] = uVar41;
        auVar63[0xc] = uVar42;
        auVar63[0xd] = uVar43;
        auVar63[0xe] = uVar44;
        auVar63[0xf] = uVar45;
        auVar66[9] = uVar39;
        auVar66._0_9_ = *pVar31;
        auVar66[10] = uVar40;
        auVar66[0xb] = uVar41;
        auVar66[0xc] = uVar42;
        auVar66[0xd] = uVar43;
        auVar66[0xe] = uVar44;
        auVar66[0xf] = uVar45;
        auVar63 = NEON_ext(auVar63,auVar66,8,1);
        local_d8 = 0;
        uStack_d0 = 0;
        auVar19._12_4_ = uVar57;
        auVar19._0_12_ = *pauVar1;
        auVar20._12_4_ = uVar57;
        auVar20._0_12_ = *pauVar1;
        auVar66 = NEON_ext(auVar19,auVar20,8,1);
        local_f0[0] = 7;
        local_130[0] = 7;
        local_128 = 0;
        local_120 = 0;
        local_118 = 0;
        uStack_110 = 0;
        fVar10 = auVar63._0_4_ * fVar69 +
                 (float)*(undefined8 *)pVar31 * fVar67 +
                 (float)((ulong)*(undefined8 *)pVar31 >> 0x20) * fVar68;
        fVar60 = auVar65._0_4_ * fVar69 +
                 (float)*(undefined8 *)pVar7 * fVar67 +
                 (float)((ulong)*(undefined8 *)pVar7 >> 0x20) * fVar68;
        fVar58 = auVar66._0_4_ * fVar69 + (float)*(undefined8 *)*pauVar1 * fVar67 + fVar54 * fVar68;
        fVar54 = auVar66._4_4_ * fVar69 + fVar54 * fVar67 + auVar66._4_4_ * fVar68;
        uVar9 = CONCAT17((char)((uint)fVar54 >> 0x18),
                         CONCAT16((char)((uint)fVar54 >> 0x10),
                                  CONCAT15((char)((uint)fVar54 >> 8),
                                           CONCAT14(SUB41(fVar54,0),fVar58))));
        uVar13 = CONCAT17((char)((uint)fVar60 >> 0x18),
                          CONCAT16((char)((uint)fVar60 >> 0x10),
                                   CONCAT15((char)((uint)fVar60 >> 8),
                                            CONCAT14(SUB41(fVar60,0),fVar10))));
        (**(code **)(*(long *)PTR_DAT_047d19f0 + (ulong)*(byte *)(param_3[5] + 0x18) * 0x200 + 0xa8)
        )(param_3[5],local_f0,&local_d00,local_130);
        (**(code **)(*(long *)puVar25 + (ulong)*(byte *)(param_4[5] + 0x18) * 0x200 + 0xa8))
                  (param_4[5],local_130,auStack_18d0,&local_d00);
        fVar60 = local_e0._4_4_ + 0.0 + local_120._4_4_;
        local_19a0 = CONCAT17((char)((uint)fVar60 >> 0x18),
                              CONCAT16((char)((uint)fVar60 >> 0x10),
                                       CONCAT15((char)((uint)fVar60 >> 8),
                                                CONCAT14(SUB41(fVar60,0),fVar60))));
        uStack_19e8 = param_5[1];
        uStack_19f0 = *param_5;
        uStack_19d8 = param_5[3];
        local_19e0 = param_5[2];
        uStack_19c8 = param_5[5];
        local_19d0 = param_5[4];
        uStack_19b8 = param_5[7];
        local_19c0 = param_5[6];
        local_19b0 = 0x3727c5ac3727c5ac;
        uStack_19a8 = 0;
        local_1998 = 0x300000014;
        local_1a50 = uVar36;
        local_1a00 = uVar13;
        uStack_19f8 = uVar9;
        uVar27 = FUN_00867290(local_e8,local_e0 & 0xffffffff,local_128,local_120 & 0xffffffff,
                              &local_1a00,&local_1a50,0,(undefined4 *)(param_8 + 0x10));
        uVar38 = local_1a50;
        fStack_18e4 = (float)local_1a30;
        fStack_18e0 = (float)((ulong)local_1a30 >> 0x20);
        local_18dc = (float)uStack_1a28;
        local_18d8 = (float)uStack_1a48 + 0.0;
        local_18e8 = (float)uStack_1a38 - local_18dc * local_e0._4_4_;
        local_18f0 = CONCAT44(local_1a40._4_4_ - fStack_18e0 * local_e0._4_4_,
                              (float)local_1a40 - fStack_18e4 * local_e0._4_4_);
        uStack_18f8 = 0;
        local_1900 = 0;
        fStack_1b3c = (float)((ulong)uVar13 >> 0x20);
        if (((uVar27 & 1) != 0) || ((float)local_1a50 <= 0.0)) {
LAB_02f764ec:
          bVar21 = false;
LAB_02f764f0:
        }
        else {
          fStack_1b34 = (float)((ulong)uVar9 >> 0x20);
          fVar60 = fVar10 * fStack_18e4;
          fVar54 = fStack_1b3c * fStack_18e0;
          uVar39 = (undefined1)((uint)fVar54 >> 8);
          uVar40 = (undefined1)((uint)fVar54 >> 0x10);
          uVar41 = (undefined1)((uint)fVar54 >> 0x18);
          fVar55 = fVar58 * local_18dc;
          uVar42 = (undefined1)((uint)fVar55 >> 8);
          uVar43 = (undefined1)((uint)fVar55 >> 0x10);
          uVar44 = (undefined1)((uint)fVar55 >> 0x18);
          fStack_1b34 = fStack_1b34 * local_18dc;
          uVar45 = (undefined1)((uint)fStack_1b34 >> 8);
          uVar46 = (undefined1)((uint)fStack_1b34 >> 0x10);
          uVar47 = (undefined1)((uint)fStack_1b34 >> 0x18);
          auVar17[4] = SUB41(fVar54,0);
          auVar17._0_4_ = fVar60;
          auVar17[5] = uVar39;
          auVar17[6] = uVar40;
          auVar17[7] = uVar41;
          auVar17[8] = SUB41(fVar55,0);
          auVar17[9] = uVar42;
          auVar17[10] = uVar43;
          auVar17[0xb] = uVar44;
          auVar17[0xc] = SUB41(fStack_1b34,0);
          auVar17[0xd] = uVar45;
          auVar17[0xe] = uVar46;
          auVar17[0xf] = uVar47;
          auVar18[4] = SUB41(fVar54,0);
          auVar18._0_4_ = fVar60;
          auVar18[5] = uVar39;
          auVar18[6] = uVar40;
          auVar18[7] = uVar41;
          auVar18[8] = SUB41(fVar55,0);
          auVar18[9] = uVar42;
          auVar18[10] = uVar43;
          auVar18[0xb] = uVar44;
          auVar18[0xc] = SUB41(fStack_1b34,0);
          auVar18[0xd] = uVar45;
          auVar18[0xe] = uVar46;
          auVar18[0xf] = uVar47;
          auVar63 = NEON_ext(auVar17,auVar18,8,1);
          if (local_18d8 - (auVar63._0_4_ + fVar60 + fVar54) * (float)local_1a50 < 0.0) {
            fVar60 = fVar58 * fVar58 + fVar10 * fVar10 + fStack_1b3c * fStack_1b3c;
            if (fVar60 == 0.0) {
              uVar39 = 0;
              uVar40 = 0;
              uVar41 = 0;
              uVar42 = 0;
              uVar43 = 0;
              uVar44 = 0;
              uVar45 = 0;
              uVar46 = 0;
              uVar47 = 0;
              uVar48 = 0;
              uVar49 = 0;
              uVar50 = 0;
            }
            else {
              fVar60 = SQRT(fVar60);
              fVar54 = fVar10 / fVar60;
              uVar39 = SUB41(fVar54,0);
              uVar40 = (undefined1)((uint)fVar54 >> 8);
              uVar41 = (undefined1)((uint)fVar54 >> 0x10);
              uVar42 = (undefined1)((uint)fVar54 >> 0x18);
              fVar54 = fStack_1b3c /
                       SQRT(fVar58 * fVar58 + fVar10 * fVar10 + fStack_1b3c * fStack_1b3c);
              uVar43 = SUB41(fVar54,0);
              uVar44 = (undefined1)((uint)fVar54 >> 8);
              uVar45 = (undefined1)((uint)fVar54 >> 0x10);
              uVar46 = (undefined1)((uint)fVar54 >> 0x18);
              fVar60 = fVar58 / fVar60;
              uVar47 = SUB41(fVar60,0);
              uVar48 = (undefined1)((uint)fVar60 >> 8);
              uVar49 = (undefined1)((uint)fVar60 >> 0x10);
              uVar50 = (undefined1)((uint)fVar60 >> 0x18);
            }
            local_1aa0 = &PTR_FUN_04610370;
            uStack_1a88 = (ulong)CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47)));
            local_1a90 = CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,CONCAT13(
                                                  uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39)))))
                                                 ));
            uStack_1a48 = param_5[1];
            local_1a50 = *param_5;
            uStack_1a38 = param_5[3];
            local_1a40 = param_5[2];
            auVar63 = *(undefined1 (*) [16])(param_5 + 4);
            uStack_1a18 = param_5[7];
            local_1a20 = param_5[6];
            fVar54 = (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)));
            fVar60 = (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39)));
            fVar55 = (float)CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47)));
            uStack_1a28 = auVar63._8_8_;
            local_1a30 = auVar63._0_8_;
            local_1a10 = 0x5f7ffff05f7ffff0;
            uStack_1a08 = 0x3fb3333300000001;
            fVar56 = auVar63._0_4_ * fVar55 +
                     (float)local_1a50 * fVar60 + (float)local_1a40 * fVar54;
            fVar62 = auVar63._4_4_ * fVar55 +
                     (float)(local_1a50 >> 0x20) * fVar60 + (float)(local_1a40 >> 0x20) * fVar54;
            fVar64 = auVar63._8_4_ * fVar55 +
                     (float)uStack_1a48 * fVar60 + (float)uStack_1a38 * fVar54;
            auVar61._0_4_ = (float)local_1a20 * fVar56;
            auVar61._4_4_ = (float)(local_1a20 >> 0x20) * fVar62;
            auVar61._8_4_ = (float)uStack_1a18 * fVar64;
            auVar61._12_4_ =
                 (float)(uStack_1a18 >> 0x20) *
                 (auVar63._12_4_ * fVar55 +
                 (float)(uStack_1a48 >> 0x20) * fVar60 + (float)(uStack_1a38 >> 0x20) * fVar54);
            auVar63 = NEON_ext(auVar61,auVar61,8,1);
            fVar60 = 0.0 - (auVar61._0_4_ + auVar61._4_4_ + auVar63._0_4_);
            uStack_1a78 = CONCAT17((char)((uint)fVar60 >> 0x18),
                                   CONCAT16((char)((uint)fVar60 >> 0x10),
                                            CONCAT15((char)((uint)fVar60 >> 8),
                                                     CONCAT14(SUB41(fVar60,0),fVar64))));
            local_1a80 = CONCAT17((char)((uint)fVar62 >> 0x18),
                                  CONCAT16((char)((uint)fVar62 >> 0x10),
                                           CONCAT15((char)((uint)fVar62 >> 8),
                                                    CONCAT14(SUB41(fVar62,0),fVar56))));
            local_1b18 = *(undefined4 *)(param_8 + 0x10);
            local_1b14 = *(undefined1 *)(param_8 + 0x14);
            iVar26 = FUN_008291b0(&local_1a00,&local_1aa0,local_f0,local_130,&local_1a50,&local_1b18
                                  ,auStack_1ae0);
            if (iVar26 != 0) goto LAB_02f764ec;
            local_18f0 = *param_6;
            uVar38 = 0;
            bVar21 = true;
            local_18d8 = *(float *)(param_6 + 3);
            fStack_18e0 = (float)param_6[2];
            local_18dc = (float)((ulong)param_6[2] >> 0x20);
            local_18e8 = (float)param_6[1];
            fStack_18e4 = (float)((ulong)param_6[1] >> 0x20);
            puVar32 = (undefined8 *)param_3[6];
            fVar54 = auStack_1ae0._20_4_;
            fVar60 = auStack_1ae0._16_4_;
            fVar55 = (float)((ulong)*puVar32 >> 0x20) * fVar60 +
                     (float)((ulong)puVar32[2] >> 0x20) * fVar54 +
                     *(float *)((long)puVar32 + 0x24) * fStack_1ac8;
            uStack_18f8 = (ulong)(uint)((float)puVar32[1] * fVar60 + (float)puVar32[3] * fVar54 +
                                       *(float *)(puVar32 + 5) * fStack_1ac8);
            local_1900 = CONCAT17((char)((uint)fVar55 >> 0x18),
                                  CONCAT16((char)((uint)fVar55 >> 0x10),
                                           CONCAT15((char)((uint)fVar55 >> 8),
                                                    CONCAT14(SUB41(fVar55,0),
                                                             (float)*puVar32 * fVar60 +
                                                             (float)puVar32[2] * fVar54 +
                                                             *(float *)(puVar32 + 4) * fStack_1ac8))
                                          ));
            goto LAB_02f764f0;
          }
          bVar21 = false;
        }
        uStack_1a98 = param_5[1];
        local_1aa0 = (undefined **)*param_5;
        uStack_1a88 = param_5[3];
        local_1a90 = param_5[2];
        local_1a80 = param_5[4];
        uStack_1a78 = param_5[5];
        fVar62 = (float)uVar38;
        fVar54 = fVar62 * (SUB84(local_1aa0,0) * fVar10 + (float)local_1a90 * fStack_1b3c +
                          *(float *)(param_5 + 4) * fVar58);
        fVar64 = (float)(uVar38 >> 0x20);
        fVar55 = fVar64 * ((float)((ulong)local_1aa0 >> 0x20) * fVar10 +
                           (float)(local_1a90 >> 0x20) * fStack_1b3c +
                          *(float *)((long)param_5 + 0x24) * fVar58);
        fVar56 = fVar62 * ((float)uStack_1a98 * fVar10 + (float)uStack_1a88 * fStack_1b3c +
                          *(float *)(param_5 + 5) * fVar58);
        fVar58 = fVar64 * ((float)(uStack_1a98 >> 0x20) * fVar10 +
                           (float)(uStack_1a88 >> 0x20) * fStack_1b3c +
                          *(float *)((long)param_5 + 0x2c) * fVar58);
        fVar10 = *(float *)((long)param_5 + 0x34) + fVar55;
        fVar60 = *(float *)((long)param_5 + 0x3c) + fVar58;
        uStack_1a68 = CONCAT17((char)((uint)fVar60 >> 0x18),
                               CONCAT16((char)((uint)fVar60 >> 0x10),
                                        CONCAT15((char)((uint)fVar60 >> 8),
                                                 CONCAT14(SUB41(fVar60,0),
                                                          *(float *)(param_5 + 7) + fVar56))));
        local_1a70 = CONCAT17((char)((uint)fVar10 >> 0x18),
                              CONCAT16((char)((uint)fVar10 >> 0x10),
                                       CONCAT15((char)((uint)fVar10 >> 8),
                                                CONCAT14(SUB41(fVar10,0),
                                                         *(float *)(param_5 + 6) + fVar54))));
        uStack_1a58 = CONCAT44(fVar58,fVar56);
        uStack_1a60 = CONCAT44(fVar55,fVar54);
        memcpy(auStack_1ae0,param_3,0x38);
        memcpy(&local_1b18,param_4,0x38);
        memcpy(&local_1a00,(void *)param_3[6],0x50);
        memcpy(&local_1a50,(void *)param_4[6],0x50);
        fVar60 = (float)local_19d0 + (float)local_19c0 + (float)uVar29 * fVar62;
        fVar58 = (float)(local_19d0 >> 0x20) + (float)(local_19c0 >> 0x20) +
                 (float)((ulong)uVar29 >> 0x20) * fVar64;
        fVar54 = (float)uStack_19c8 + (float)uStack_19b8 + (float)uVar14 * fVar62;
        local_19d0 = CONCAT44(fVar58,fVar60);
        fVar58 = fVar58 - fVar58;
        fVar10 = (float)(uStack_19c8 >> 0x20) + (float)(uStack_19b8 >> 0x20) +
                 (float)((ulong)uVar14 >> 0x20) * fVar64;
        uStack_19c8 = CONCAT44(fVar10,fVar54);
        fVar10 = fVar10 - fVar10;
        uStack_19b8 = CONCAT17((char)((uint)fVar10 >> 0x18),
                               CONCAT16((char)((uint)fVar10 >> 0x10),
                                        CONCAT15((char)((uint)fVar10 >> 8),
                                                 CONCAT14(SUB41(fVar10,0),fVar54 - fVar54))));
        local_19c0 = CONCAT17((char)((uint)fVar58 >> 0x18),
                              CONCAT16((char)((uint)fVar58 >> 0x10),
                                       CONCAT15((char)((uint)fVar58 >> 8),
                                                CONCAT14(SUB41(fVar58,0),fVar60 - fVar60))));
        local_1ab0 = &local_1a00;
        fVar58 = (float)local_1a20 + (float)local_1a10 + (float)uVar23 * fVar62;
        fVar60 = (float)(local_1a20 >> 0x20) + (float)((ulong)local_1a10 >> 0x20) +
                 (float)((ulong)uVar23 >> 0x20) * fVar64;
        fVar54 = (float)uStack_1a18 + (float)uStack_1a08 + (float)uVar24 * fVar62;
        local_1a20 = CONCAT44(fVar60,fVar58);
        fVar60 = fVar60 - fVar60;
        fVar10 = (float)(uStack_1a18 >> 0x20) + (float)((ulong)uStack_1a08 >> 0x20) +
                 (float)((ulong)uVar24 >> 0x20) * fVar64;
        uStack_1a18 = CONCAT44(fVar10,fVar54);
        fVar10 = fVar10 - fVar10;
        local_1ae8 = &local_1a50;
        uStack_1a08 = CONCAT17((char)((uint)fVar10 >> 0x18),
                               CONCAT16((char)((uint)fVar10 >> 0x10),
                                        CONCAT15((char)((uint)fVar10 >> 8),
                                                 CONCAT14(SUB41(fVar10,0),fVar54 - fVar54))));
        local_1a10 = CONCAT17((char)((uint)fVar60 >> 0x18),
                              CONCAT16((char)((uint)fVar60 >> 0x10),
                                       CONCAT15((char)((uint)fVar60 >> 8),
                                                CONCAT14(SUB41(fVar60,0),fVar58 - fVar58))));
        puVar32 = (undefined8 *)param_3[6];
        fVar10 = (float)((ulong)*puVar32 >> 0x20) * fStack_18e4 +
                 (float)((ulong)puVar32[2] >> 0x20) * fStack_18e0 +
                 (float)((ulong)puVar32[4] >> 0x20) * local_18dc;
        fVar60 = (float)((ulong)puVar32[1] >> 0x20) * fStack_18e4 +
                 (float)((ulong)puVar32[3] >> 0x20) * fStack_18e0 +
                 (float)((ulong)puVar32[5] >> 0x20) * local_18dc;
        uStack_1b28 = CONCAT17((char)((uint)fVar60 >> 0x18),
                               CONCAT16((char)((uint)fVar60 >> 0x10),
                                        CONCAT15((char)((uint)fVar60 >> 8),
                                                 CONCAT14(SUB41(fVar60,0),
                                                          (float)puVar32[1] * fStack_18e4 +
                                                          (float)puVar32[3] * fStack_18e0 +
                                                          (float)puVar32[5] * local_18dc))));
        local_1b30 = CONCAT17((char)((uint)fVar10 >> 0x18),
                              CONCAT16((char)((uint)fVar10 >> 0x10),
                                       CONCAT15((char)((uint)fVar10 >> 8),
                                                CONCAT14(SUB41(fVar10,0),
                                                         (float)*puVar32 * fStack_18e4 +
                                                         (float)puVar32[2] * fStack_18e0 +
                                                         (float)puVar32[4] * local_18dc))));
        *(byte *)(param_8 + 0x99) = *(byte *)(param_8 + 0x99) & 0xfc | 0x40;
        FUN_02f755c0(param_1,auStack_1ae0,&local_1b18,&local_1aa0,&local_18f0,&local_1b30,0,
                     &uStack_1a60,param_8,param_9);
        uVar39 = (undefined1)uVar38;
        uVar40 = (undefined1)(uVar38 >> 8);
        uVar41 = (undefined1)(uVar38 >> 0x10);
        uVar42 = (undefined1)(uVar38 >> 0x18);
        if (bVar21) {
          uVar14 = *(undefined8 *)(param_9 + 0xe);
          uVar29 = *(undefined8 *)(param_9 + 0xc);
          auVar8[9] = (char)((ulong)uVar14 >> 8);
          auVar8._0_9_ = *(unkbyte9 *)(param_9 + 0xc);
          auVar8[10] = (char)((ulong)uVar14 >> 0x10);
          auVar8[0xb] = (char)((ulong)uVar14 >> 0x18);
          auVar8[0xc] = (char)((ulong)uVar14 >> 0x20);
          auVar8[0xd] = (char)((ulong)uVar14 >> 0x28);
          auVar8[0xe] = (char)((ulong)uVar14 >> 0x30);
          auVar8[0xf] = (char)((ulong)uVar14 >> 0x38);
          fVar10 = (float)NEON_fminnmv(auVar8,4);
          iVar26 = -(uint)((float)uVar29 <= fVar10);
          iVar11 = -(uint)((float)((ulong)uVar29 >> 0x20) <= fVar10);
          iVar12 = -(uint)((float)uVar14 <= fVar10);
          iVar15 = -(uint)((float)((ulong)uVar14 >> 0x20) <= fVar10);
          uVar14 = *(undefined8 *)(param_9 + 0x22);
          uVar29 = *(undefined8 *)(param_9 + 0x20);
          cVar6 = PTR_DAT_047d19d8
                  [(uint)(CONCAT13((byte)((uint)iVar26 >> 0x18) &
                                   (byte)((ulong)_DAT_03cab270 >> 0x18),
                                   CONCAT12((byte)((uint)iVar26 >> 0x10) &
                                            (byte)((ulong)_DAT_03cab270 >> 0x10),
                                            CONCAT11((byte)((uint)iVar26 >> 8) &
                                                     (byte)((ulong)_DAT_03cab270 >> 8),
                                                     (byte)iVar26 & (byte)_DAT_03cab270))) +
                          CONCAT13((byte)((uint)iVar11 >> 0x18) &
                                   (byte)((ulong)_DAT_03cab270 >> 0x38),
                                   CONCAT12((byte)((uint)iVar11 >> 0x10) &
                                            (byte)((ulong)_DAT_03cab270 >> 0x30),
                                            CONCAT11((byte)((uint)iVar11 >> 8) &
                                                     (byte)((ulong)_DAT_03cab270 >> 0x28),
                                                     (byte)iVar11 &
                                                     (byte)((ulong)_DAT_03cab270 >> 0x20)))) +
                         CONCAT13((byte)((uint)iVar12 >> 0x18) &
                                  (byte)((ulong)_UNK_03cab278 >> 0x18),
                                  CONCAT12((byte)((uint)iVar12 >> 0x10) &
                                           (byte)((ulong)_UNK_03cab278 >> 0x10),
                                           CONCAT11((byte)((uint)iVar12 >> 8) &
                                                    (byte)((ulong)_UNK_03cab278 >> 8),
                                                    (byte)iVar12 & (byte)_UNK_03cab278))) +
                         CONCAT13((byte)((uint)iVar15 >> 0x18) &
                                  (byte)((ulong)_UNK_03cab278 >> 0x38),
                                  CONCAT12((byte)((uint)iVar15 >> 0x10) &
                                           (byte)((ulong)_UNK_03cab278 >> 0x30),
                                           CONCAT11((byte)((uint)iVar15 >> 8) &
                                                    (byte)((ulong)_UNK_03cab278 >> 0x28),
                                                    (byte)iVar15 &
                                                    (byte)((ulong)_UNK_03cab278 >> 0x20)))))];
          uVar57 = *(undefined4 *)(param_3[5] + 0x20);
          local_1a00 = CONCAT17((char)((uint)uVar57 >> 0x18),
                                CONCAT16((char)((uint)uVar57 >> 0x10),
                                         CONCAT15((char)((uint)uVar57 >> 8),
                                                  CONCAT14((char)uVar57,uVar57))));
          uVar57 = *(undefined4 *)(param_4[5] + 0x20);
          local_1a50 = CONCAT17((char)((uint)uVar57 >> 0x18),
                                CONCAT16((char)((uint)uVar57 >> 0x10),
                                         CONCAT15((char)((uint)uVar57 >> 8),
                                                  CONCAT14((char)uVar57,uVar57))));
          FUN_02f8eef0(&local_1900,0,&local_1a00,&local_1a50,param_9);
          fVar10 = fVar67 * ((float)uVar29 -
                            (float)*(undefined8 *)(param_9 + (long)cVar6 * 4 + 0x10));
          fVar60 = fVar68 * ((float)((ulong)uVar29 >> 0x20) -
                            (float)((ulong)*(undefined8 *)(param_9 + (long)cVar6 * 4 + 0x10) >> 0x20
                                   ));
          fVar58 = fVar69 * ((float)uVar14 -
                            (float)*(undefined8 *)(param_9 + (long)cVar6 * 4 + 0x12));
          fVar59 = (fVar10 + fVar60 + fVar58) / fVar59;
          fVar10 = (fVar10 + fVar60 + fVar58) /
                   (fVar69 * fVar69 + fVar67 * fVar67 + fVar68 * fVar68);
          uVar39 = (undefined1)((uint)fVar10 >> 8);
          uVar40 = (undefined1)((uint)fVar10 >> 0x10);
          uVar41 = (undefined1)((uint)fVar10 >> 0x18);
          iVar26 = -(uint)(fVar10 < (float)(uVar36 >> 0x20));
          uVar29 = NEON_fmax(CONCAT17(uVar41,CONCAT16(uVar40,CONCAT15(uVar39,CONCAT14(SUB41(fVar10,0
                                                  ),fVar59)))) ^
                             (CONCAT17(uVar41,CONCAT16(uVar40,CONCAT15(uVar39,CONCAT14(SUB41(fVar10,
                                                  0),fVar59)))) ^ uVar36) &
                             ~CONCAT17((char)((uint)iVar26 >> 0x18),
                                       CONCAT16((char)((uint)iVar26 >> 0x10),
                                                CONCAT15((char)((uint)iVar26 >> 8),
                                                         CONCAT14((char)iVar26,
                                                                  -(uint)(fVar59 < fVar53))))),0,4);
          uVar39 = (undefined1)uVar29;
          uVar40 = (undefined1)((ulong)uVar29 >> 8);
          uVar41 = (undefined1)((ulong)uVar29 >> 0x10);
          uVar42 = (undefined1)((ulong)uVar29 >> 0x18);
        }
        param_9[0x2e] = CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39)));
        *(undefined1 *)((long)param_9 + 0x96) = 0x20;
        goto LAB_02f76b74;
      }
    }
    uVar29 = 0;
  }
  else {
LAB_02f768a8:
    if ((param_7 & 1) != 0) {
      *(char *)(param_8 + 9) = *(char *)(param_8 + 9) + '\x04';
      *(undefined8 *)(param_8 + 0x88) = 0xffffffffffffffff;
    }
    *param_9 = 0;
    uVar29 = *(undefined8 *)((long)param_6 + 0xc);
    uVar57 = *(undefined4 *)((long)param_6 + 0x14);
    *(ulong *)(param_9 + 6) =
         CONCAT17((char)((uint)uVar57 >> 0x18),
                  CONCAT16((char)((uint)uVar57 >> 0x10),
                           CONCAT15((char)((uint)uVar57 >> 8),CONCAT14((char)uVar57,uVar57))));
    *(undefined8 *)(param_9 + 4) = uVar29;
    uVar57 = *(undefined4 *)(param_6 + 1);
    uVar29 = *param_6;
    *(ulong *)(param_9 + 0x22) =
         CONCAT17((char)((uint)uVar57 >> 0x18),
                  CONCAT16((char)((uint)uVar57 >> 0x10),
                           CONCAT15((char)((uint)uVar57 >> 8),CONCAT14((char)uVar57,uVar57))));
    *(undefined8 *)(param_9 + 0x20) = uVar29;
    param_9[1] = *(undefined4 *)(param_6 + 3);
    *(long *)(param_9 + 0x26) = param_8;
    param_9[0x28] = (int)param_3[3];
    param_9[0x29] = (int)param_4[3];
    uVar39 = 0x50;
    if (uVar33 == 0) {
      uVar39 = 0x10;
    }
    *(undefined1 *)((long)param_9 + 0x96) = uVar39;
    *(undefined1 *)(param_9 + 0x24) = 0;
    *(long *)(param_9 + 0x2a) = param_3[2];
    *(long *)(param_9 + 0x2c) = param_4[2];
    *(byte *)(param_8 + 0x99) = *(byte *)(param_8 + 0x99) & 0xfc | 0x40;
    param_9[0x2f] = *(uint *)(param_4[2] + 0x14) | *(uint *)(param_3[2] + 0x14);
    if (*(int *)(param_8 + 0x1c) == 0xaaa00) {
      uVar33 = *(uint *)(*param_4 + 0x54) | *(uint *)(*param_3 + 0x54) |
               *(uint *)(param_3[2] + 0x14) | *(uint *)(param_4[2] + 0x14);
      bVar2 = *(byte *)(param_8 + 0xe) & 3;
      if (bVar2 == 1) {
        uVar33 = uVar33 & 0xffffff7f;
      }
      else if (bVar2 == 2) {
        uVar33 = uVar33 | 0x80;
      }
      if (*(long *)(param_1 + 8) != 0) {
        uVar33 = *(uint *)(*(long *)(param_1 + 8) + 0x81c) | uVar33;
      }
      *(uint *)(param_8 + 0x2c) =
           *(uint *)(*(long *)(param_1 + 0x30) + (ulong)*(ushort *)(param_4[1] + 0x58) * 0x70 + 4) |
           *(uint *)(*(long *)(param_1 + 0x30) + (ulong)*(ushort *)(param_3[1] + 0x58) * 0x70 + 4) |
           uVar33 | *(uint *)(param_8 + 0x2c);
    }
    lVar35 = *(long *)(param_1 + 0x10);
    uVar36 = (ulong)*(byte *)(*param_4 + 0x89);
    if (*(int *)(lVar35 + uVar36 * 0x50 + 0x18) <=
        *(int *)(lVar35 + (ulong)*(byte *)(*param_3 + 0x89) * 0x50 + 0x18)) {
      uVar36 = (ulong)*(byte *)(*param_3 + 0x89);
    }
    lVar35 = lVar35 + uVar36 * 0x50;
    pfVar34 = (float *)(lVar35 + 0x30);
    pfVar22 = (float *)(lVar35 + 0x34);
    if ((*(uint *)(*param_4 + 0x54) & 2) != 0) {
      pfVar34 = (float *)(lVar35 + 0x38);
      pfVar22 = (float *)(lVar35 + 0x3c);
    }
    fVar59 = (float)param_9[1] - *(float *)(lVar35 + 0x48);
    fVar10 = *pfVar34;
    if (*(float *)(lVar35 + 0x48) <= 0.0) {
      fVar10 = *pfVar22;
    }
    bVar21 = *pfVar34 <= fVar59 && fVar10 < fVar59;
    *(bool *)((long)param_9 + 0x97) = bVar21;
    if (((bVar21 | uVar3) == 1) &&
       (uVar33 = *(uint *)(param_8 + 0x2c), (**(uint **)(param_1 + 0x40) & uVar33) != 0)) {
      *(undefined2 *)(param_8 + 0x86) = 0;
      lVar35 = 1;
      *(undefined2 *)(param_8 + 0x94) = 0;
      local_cd8 = (float)param_9[1];
      local_ce0 = *(undefined8 *)(param_9 + 0x26);
      fVar10 = (float)*(undefined8 *)(param_9 + 4);
      fVar59 = (float)((ulong)*(undefined8 *)(param_9 + 4) >> 0x20);
      fVar53 = (float)*(undefined8 *)(param_9 + 6);
      pfVar34 = (float *)param_3[6];
      fVar67 = (float)param_9[0x20] - fVar10 * local_cd8;
      fVar68 = (float)param_9[0x21] - fVar59 * local_cd8;
      fVar69 = (float)param_9[0x22] - fVar53 * local_cd8;
      uStack_cf8 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar34 + 0xe) >> 0x20) +
                            pfVar34[0xb] * fVar69 + pfVar34[3] * fVar67 + pfVar34[7] * fVar68,
                            (float)*(undefined8 *)(pfVar34 + 0xe) +
                            pfVar34[10] * fVar69 + pfVar34[2] * fVar67 + pfVar34[6] * fVar68);
      local_d00 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar34 + 0xc) >> 0x20) +
                           pfVar34[9] * fVar69 + pfVar34[1] * fVar67 + pfVar34[5] * fVar68,
                           (float)*(undefined8 *)(pfVar34 + 0xc) +
                           pfVar34[8] * fVar69 + *pfVar34 * fVar67 + pfVar34[4] * fVar68);
      fVar67 = pfVar34[9] * fVar53 +
               pfVar34[5] * fVar59 + (float)((ulong)*(undefined8 *)pfVar34 >> 0x20) * fVar10;
      fVar68 = pfVar34[0xb] * fVar53 +
               pfVar34[7] * fVar59 + (float)((ulong)*(undefined8 *)(pfVar34 + 2) >> 0x20) * fVar10;
      uStack_ce8 = CONCAT17((char)((uint)fVar68 >> 0x18),
                            CONCAT16((char)((uint)fVar68 >> 0x10),
                                     CONCAT15((char)((uint)fVar68 >> 8),
                                              CONCAT14(SUB41(fVar68,0),
                                                       pfVar34[10] * fVar53 +
                                                       pfVar34[6] * fVar59 +
                                                       (float)*(undefined8 *)(pfVar34 + 2) * fVar10)
                                             )));
      local_cf0 = CONCAT17((char)((uint)fVar67 >> 0x18),
                           CONCAT16((char)((uint)fVar67 >> 0x10),
                                    CONCAT15((char)((uint)fVar67 >> 8),
                                             CONCAT14(SUB41(fVar67,0),
                                                      pfVar34[8] * fVar53 +
                                                      pfVar34[4] * fVar59 +
                                                      (float)*(undefined8 *)pfVar34 * fVar10))));
      puVar37 = *(undefined8 **)(param_1 + 0x40);
      puVar32 = puVar37;
      while( true ) {
        if ((*(uint *)(puVar32 + 1) & uVar33) != 0) {
          plVar28 = (long *)puVar32[2];
          (**(code **)(*plVar28 + 0x18))(plVar28,param_1,param_2,param_3,param_4,&local_d00);
        }
        if (*(int *)((long)puVar37 + 4) <= lVar35) break;
        uVar33 = *(uint *)(param_8 + 0x2c);
        lVar35 = lVar35 + 1;
        puVar32 = puVar32 + 2;
      }
    }
LAB_02f76b74:
    uVar29 = 1;
  }
  return uVar29;
}



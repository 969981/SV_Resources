/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00841604; name: FUN_00841604
 */


undefined8 FUN_00841604(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,long param_4)

{
  undefined1 **ppuVar1;
  ushort *puVar2;
  undefined1 (*pauVar3) [12];
  byte bVar4;
  ushort uVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  undefined2 uVar12;
  ushort uVar13;
  ushort uVar14;
  int iVar15;
  ushort uVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  bool bVar24;
  int iVar25;
  uint uVar26;
  long *plVar27;
  uint uVar28;
  byte *pbVar29;
  ulong uVar30;
  int iVar31;
  undefined2 *puVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  undefined8 *puVar36;
  byte *pbVar37;
  byte *pbVar38;
  int *piVar39;
  long lVar40;
  undefined8 *puVar41;
  undefined8 uVar42;
  ulong *puVar43;
  uint *puVar44;
  uint uVar45;
  uint uVar46;
  ulong uVar47;
  long lVar48;
  undefined1 **ppuVar49;
  float fVar50;
  undefined1 auVar51 [12];
  undefined1 auVar52 [12];
  float fVar57;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [12];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [12];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar74;
  undefined8 uVar73;
  float fVar75;
  float fVar79;
  undefined1 auVar76 [12];
  undefined1 auVar77 [12];
  undefined1 auVar78 [16];
  float fVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined1 auVar83 [12];
  undefined1 auVar84 [12];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  undefined *local_e80;
  undefined8 uStack_e78;
  undefined8 local_e70;
  undefined1 local_e68;
  long local_e60;
  undefined1 *local_e50;
  float fStack_e48;
  float fStack_e44;
  float fStack_e40;
  float local_e3c;
  undefined8 local_e38;
  float local_e30;
  float fStack_e2c;
  float fStack_e28;
  float fStack_e24;
  float local_e20;
  float fStack_e1c;
  float fStack_e18;
  float fStack_e14;
  undefined8 local_e10;
  undefined8 local_e08;
  undefined8 local_e00;
  undefined8 local_df8;
  undefined8 *local_df0;
  undefined8 uStack_de8;
  char local_de0;
  uint local_ddc;
  undefined4 local_dd8 [2];
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined8 local_dc0;
  undefined8 uStack_db8;
  undefined *local_db0;
  long *local_da8;
  undefined1 *puStack_da0;
  undefined4 local_d98;
  undefined1 auStack_d90 [2048];
  undefined8 local_590;
  undefined8 uStack_588;
  undefined1 local_580 [768];
  undefined1 *local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  
  puVar21 = PTR_DAT_047d19b0;
  lVar40 = *(long *)(param_3 + 0x68);
  bVar11 = *(byte *)(*(long *)(param_4 + 0x28) + 3) >> 1;
  uVar47 = (ulong)bVar11;
  lVar48 = lVar40 + uVar47 * 4;
  pbVar38 = (byte *)(lVar48 + 1);
  pbVar37 = (byte *)(lVar48 + 2);
  uVar26 = (uint)*pbVar37;
  pbVar29 = (byte *)(lVar48 + 3);
  if ((uint)*pbVar38 == (uint)*pbVar29) {
    if ((uVar26 != 4) && (uVar26 != 3)) {
      return 1;
    }
  }
  else {
    bVar24 = uVar26 != *pbVar29;
    uVar26 = 1;
    if (bVar24) {
      uVar26 = 2;
    }
  }
  local_da8 = (long *)0x0;
  puStack_da0 = auStack_d90;
  auVar54 = *(undefined1 (*) [16])(PTR_DAT_047d19b0 + 0x60);
  local_d98 = 0x800;
  local_db0 = PTR_DAT_047d1b40 + 0x10;
  puVar41 = *(undefined8 **)(param_3 + 0xe0);
  local_e10 = *puVar41;
  local_e08 = puVar41[1];
  local_e00 = puVar41[2];
  local_df8 = puVar41[3];
  lVar48 = uVar47 * 4;
  local_df0 = (undefined8 *)puVar41[4];
  uStack_de8 = 0;
  local_de0 = *(char *)(puVar41 + 6);
  local_ddc = *(uint *)((long)puVar41 + 0x34);
  auVar64 = *(undefined1 (*) [16])(puVar41 + 8);
  auVar70 = *(undefined1 (*) [16])(puVar41 + 10);
  uStack_dc8 = auVar64._8_8_;
  local_dd0 = auVar64._0_8_;
  uStack_db8 = auVar70._8_8_;
  local_dc0 = auVar70._0_8_;
  local_dd8[0] = *(undefined4 *)(puVar41 + 7);
  puVar41 = *(undefined8 **)(param_3 + 0xb8);
  uVar81 = puVar41[1];
  *(undefined8 *)(param_3 + 0xf0) = *puVar41;
  *(undefined8 *)(param_3 + 0xf8) = uVar81;
  *(undefined2 *)(param_3 + 0x100) = *(undefined2 *)(puVar41 + 2);
  uVar8 = *(undefined4 *)((long)puVar41 + 0x1c);
  *(undefined8 *)(param_3 + 0x104) = *(undefined8 *)((long)puVar41 + 0x14);
  *(undefined4 *)(param_3 + 0x10c) = uVar8;
  uVar81 = puVar41[4];
  uVar42 = puVar41[5];
  *(undefined4 *)(param_3 + 0x11f) = *(undefined4 *)((long)puVar41 + 0x2f);
  *(undefined8 *)(param_3 + 0x110) = uVar81;
  *(undefined8 *)(param_3 + 0x118) = uVar42;
  ppuVar1 = (undefined1 **)(param_3 + 0x180);
  uVar81 = puVar41[7];
  uVar42 = puVar41[9];
  *(undefined8 *)(param_3 + 0x130) = puVar41[8];
  *(undefined8 *)(param_3 + 0x138) = uVar42;
  *(undefined8 *)(param_3 + 0x128) = uVar81;
  uVar46 = (uint)bVar11;
  fVar80 = auVar54._0_4_;
  fVar88 = auVar54._4_4_;
  if (1 < uVar26 - 1) {
    if (uVar26 == 3) {
      uVar14 = *(ushort *)(*(long *)(param_3 + 0x80) + (ulong)*(byte *)(lVar40 + lVar48) * 2);
      if ((uVar14 & 0xc0) == 0) {
        fVar50 = *(float *)(*(long *)(param_3 + 0xd0) + 0x20);
        if ((uVar14 & 0x30) == 0) goto LAB_00841f00;
LAB_008417f4:
        if ((*pbVar37 == 4) || (bVar11 = *pbVar38, bVar11 != *pbVar29)) {
          plVar27 = *(long **)(param_3 + 0x60);
        }
        else {
          plVar27 = *(long **)(param_3 + 0x60);
          if (*pbVar37 == 3) {
            auVar70 = *(undefined1 (*) [16])(plVar27 + 2);
            auVar83 = auVar70._0_12_;
            param_2 = *(undefined1 (*) [16])(plVar27 + 4);
            auVar76 = param_2._0_12_;
            if (bVar11 != 0) {
              auVar64 = ZEXT816(0);
              lVar40 = 0;
              fVar57 = SUB164(*(undefined1 (*) [16])(puVar21 + 0x1e0),0);
              do {
                iVar31 = (int)lVar40;
                iVar25 = iVar31 + (*(byte *)((long)plVar27 + (long)iVar31 * 4 + *plVar27 + 3) & 0xfe
                                  );
                fVar72 = fVar57 * (param_2._0_4_ - auVar70._0_4_);
                fVar90 = SUB164(*(undefined1 (*) [16])(puVar21 + 0x1e0),4) *
                         (param_2._4_4_ - auVar70._4_4_);
                fVar89 = fVar57 * (param_2._8_4_ - auVar70._8_4_);
                local_590 = (undefined1 *)CONCAT44(iVar25,iVar31 + 1);
                uVar26 = *(uint *)((ulong)&local_590 | (ulong)(iVar25 <= (int)(uint)bVar11) << 2);
                lVar40 = (long)(int)uVar26;
                pbVar29 = (byte *)((long)plVar27 + lVar40 * 4 + *plVar27);
                bVar17 = *pbVar29 >> 4;
                bVar10 = *pbVar29 & 0xf;
                bVar18 = pbVar29[1] >> 4;
                bVar4 = pbVar29[1] & 0xf;
                bVar19 = pbVar29[2] >> 4;
                bVar20 = pbVar29[2] & 0xf;
                auVar83._4_4_ = auVar70._4_4_ + (float)(byte)(bVar18 * bVar18) * fVar90;
                auVar83._0_4_ = auVar70._0_4_ + (float)(byte)(bVar17 * bVar17) * fVar72;
                auVar83._8_4_ = auVar70._8_4_ + (float)(byte)(bVar19 * bVar19) * fVar89;
                auVar70._12_4_ = 0;
                auVar70._0_12_ = auVar83;
                auVar76._4_4_ = param_2._4_4_ - (float)(byte)(bVar4 * bVar4) * fVar90;
                auVar76._0_4_ = param_2._0_4_ - (float)(byte)(bVar10 * bVar10) * fVar72;
                auVar76._8_4_ = param_2._8_4_ - (float)(byte)(bVar20 * bVar20) * fVar89;
                param_2._12_4_ = 0;
                param_2._0_12_ = auVar76;
              } while (uVar26 != bVar11);
            }
            goto LAB_0084213c;
          }
        }
        lVar40 = *plVar27;
        if (0 < (int)*(uint *)(plVar27 + 1)) {
          uVar47 = 0;
          pbVar29 = (byte *)((long)plVar27 + lVar40 + 3);
          do {
            if (((*pbVar29 & 1) == 0) && (*pbVar29 >> 1 == uVar46)) {
              auVar68 = *(undefined1 (*) [16])(plVar27 + 2);
              auVar83 = auVar68._0_12_;
              auVar76 = SUB1612(*(undefined1 (*) [16])(plVar27 + 4),0);
              auVar70 = *(undefined1 (*) [16])(plVar27 + 4);
              if ((int)uVar47 != 0) goto LAB_00842024;
              goto LAB_0084213c;
            }
            uVar47 = uVar47 + 1;
            pbVar29 = pbVar29 + 4;
          } while (*(uint *)(plVar27 + 1) != uVar47);
        }
        auVar68 = *(undefined1 (*) [16])(plVar27 + 2);
        uVar47 = 0xffffffff;
        auVar70 = *(undefined1 (*) [16])(plVar27 + 4);
LAB_00842024:
        auVar64 = auVar70;
        param_2 = ZEXT816(0);
        fVar57 = SUB164(*(undefined1 (*) [16])(puVar21 + 0x1e0),0);
        lVar33 = 0;
        do {
          iVar31 = (int)lVar33;
          iVar25 = iVar31 + (*(byte *)((long)plVar27 + (long)iVar31 * 4 + lVar40 + 3) & 0xfe);
          fVar72 = fVar57 * (auVar64._0_4_ - auVar68._0_4_);
          fVar90 = SUB164(*(undefined1 (*) [16])(puVar21 + 0x1e0),4) *
                   (auVar64._4_4_ - auVar68._4_4_);
          fVar89 = fVar57 * (auVar64._8_4_ - auVar68._8_4_);
          local_590 = (undefined1 *)CONCAT44(iVar25,iVar31 + 1);
          iVar25 = *(int *)((ulong)&local_590 | (ulong)(iVar25 <= (int)uVar47) << 2);
          lVar33 = (long)iVar25;
          pbVar29 = (byte *)((long)plVar27 + lVar33 * 4 + lVar40);
          bVar20 = *pbVar29 >> 4;
          bVar11 = *pbVar29 & 0xf;
          bVar17 = pbVar29[1] >> 4;
          bVar10 = pbVar29[1] & 0xf;
          bVar18 = pbVar29[2] >> 4;
          bVar4 = pbVar29[2] & 0xf;
          auVar83._4_4_ = auVar68._4_4_ + (float)(byte)(bVar17 * bVar17) * fVar90;
          auVar83._0_4_ = auVar68._0_4_ + (float)(byte)(bVar20 * bVar20) * fVar72;
          auVar83._8_4_ = auVar68._8_4_ + (float)(byte)(bVar18 * bVar18) * fVar89;
          auVar68._12_4_ = 0;
          auVar68._0_12_ = auVar83;
          auVar76._4_4_ = auVar64._4_4_ - (float)(byte)(bVar10 * bVar10) * fVar90;
          auVar76._0_4_ = auVar64._0_4_ - (float)(byte)(bVar11 * bVar11) * fVar72;
          auVar76._8_4_ = auVar64._8_4_ - (float)(byte)(bVar4 * bVar4) * fVar89;
          auVar64._12_4_ = 0;
          auVar64._0_12_ = auVar76;
        } while (iVar25 != (int)uVar47);
      }
      else {
        fVar50 = (float)((uint)*(ushort *)
                                (*(long *)(param_3 + 0x80) + (ulong)*(byte *)(lVar40 + lVar48) * 2 +
                                4) << 0x10);
        if ((uVar14 & 0x30) != 0) goto LAB_008417f4;
LAB_00841f00:
        auVar70 = *(undefined1 (*) [16])(puVar21 + 0x240);
        auVar83 = auVar70._0_12_;
        auVar76._0_4_ = -auVar70._0_4_;
        auVar76._4_4_ = -auVar70._4_4_;
        auVar76._8_4_ = -auVar70._8_4_;
      }
LAB_0084213c:
      uVar16 = uVar14 >> 8;
      uVar47 = (ulong)uVar16;
      uVar5 = uVar14 & 0xf;
      uVar26 = uVar16 + 3 & 0x1fc;
      uVar30 = (ulong)uVar26;
      if (uVar5 == 2) {
        lVar40 = FUN_02ee8494(fVar50,param_2,auVar64,&local_db0,uVar30);
        iVar25 = *(int *)(lVar40 + 0x40);
        ppuVar49 = (undefined1 **)0x0;
        if (iVar25 != 0) {
          ppuVar49 = (undefined1 **)((long)iVar25 + lVar40 + 0x40);
        }
      }
      else {
        fVar50 = fVar50 * fVar80;
        lVar40 = 0;
        ppuVar49 = &local_e50;
      }
      local_590 = local_580;
      uStack_588 = -0x7fffffc000000000;
      if (uVar14 >> 8 < 0x41) {
        if (uVar16 != 0) goto LAB_008421f4;
      }
      else {
        FUN_02ec4c20(&local_590,PTR_PTR_047d1a50,uVar47);
        if ((uint)uStack_588 != uVar16) {
LAB_008421f4:
          uStack_588 = CONCAT44(uStack_588._4_4_,(uint)uVar16);
        }
      }
      puVar2 = (ushort *)
               (*(long *)(param_3 + 0x80) + (ulong)*(byte *)(*(long *)(param_3 + 0x68) + lVar48) * 2
               );
      uVar13 = *puVar2;
      uVar34 = (ulong)puVar2[1];
      uVar28 = (uint)(byte)(uVar13 >> 8);
      uVar13 = uVar13 >> 4 & 3;
      uVar45 = (uint)uVar16;
      if (uVar45 <= uVar28) {
        uVar28 = uVar45;
      }
      fVar72 = auVar83._0_4_;
      fVar90 = auVar83._4_4_;
      fVar57 = auVar83._8_4_;
      if (uVar13 == 2) {
        lVar48 = *(long *)(param_3 + 0x78) + uVar34 * 8;
        auVar52._0_4_ = (auVar76._0_4_ - fVar72) * *(float *)PTR_DAT_047d1a68;
        auVar52._4_4_ = (auVar76._4_4_ - fVar90) * *(float *)(PTR_DAT_047d1a68 + 4);
        auVar52._8_4_ = (auVar76._8_4_ - fVar57) * *(float *)(PTR_DAT_047d1a68 + 8);
        if (uVar28 < 2) {
          uVar35 = 0;
        }
        else {
          uVar35 = 0;
          puVar41 = (undefined8 *)(local_590 + 0xc);
          do {
            uVar13 = *(ushort *)(lVar48 + (uVar35 ^ 3) * 2);
            auVar61._0_8_ = (ulong)CONCAT24(uVar13 >> 5,(uint)uVar13) & 0x1f0000001f;
            uVar34 = uVar35 ^ 2;
            uVar35 = uVar35 + 2;
            auVar61._8_2_ = uVar13 >> 10;
            auVar61._10_6_ = 0;
            auVar64 = NEON_scvtf(auVar61,4);
            *(ulong *)((long)puVar41 + -0xc) =
                 CONCAT44(fVar90 + auVar52._4_4_ * auVar64._4_4_,
                          fVar72 + auVar52._0_4_ * auVar64._0_4_);
            *(float *)((long)puVar41 + -4) = fVar57 + auVar52._8_4_ * auVar64._8_4_;
            uVar13 = *(ushort *)(lVar48 + uVar34 * 2);
            auVar62._0_8_ = (ulong)CONCAT24(uVar13 >> 5,(uint)uVar13) & 0x1f0000001f;
            auVar62._8_2_ = uVar13 >> 10;
            auVar62._10_6_ = 0;
            auVar64 = NEON_scvtf(auVar62,4);
            *puVar41 = CONCAT44(fVar90 + auVar52._4_4_ * auVar64._4_4_,
                                fVar72 + auVar52._0_4_ * auVar64._0_4_);
            *(float *)(puVar41 + 1) = fVar57 + auVar52._8_4_ * auVar64._8_4_;
            puVar41 = puVar41 + 3;
          } while ((long)uVar35 < (long)(int)(uVar28 - 1));
        }
        if ((int)(uint)uVar35 < (int)uVar28) {
          uVar13 = *(ushort *)(lVar48 + (ulong)((uint)uVar35 ^ 3) * 2);
          auVar58._0_8_ = (ulong)CONCAT24(uVar13 >> 5,(uint)uVar13) & 0x1f0000001f;
          auVar58._8_2_ = uVar13 >> 10;
          auVar58._10_2_ = 0;
LAB_0084259c:
          auVar59._12_4_ = 0;
          auVar59._0_12_ = auVar58;
          auVar64 = NEON_scvtf(auVar59,4);
          uVar81 = CONCAT44(fVar90 + auVar52._4_4_ * auVar64._4_4_,
                            fVar72 + auVar52._0_4_ * auVar64._0_4_);
          fVar57 = fVar57 + auVar52._8_4_ * auVar64._8_4_;
LAB_008425a8:
          *(undefined8 *)(local_590 + (uVar35 & 0xffffffff) * 0xc) = uVar81;
          *(float *)((long)(local_590 + (uVar35 & 0xffffffff) * 0xc) + 8) = fVar57;
        }
      }
      else if (uVar13 == 1) {
        lVar48 = *(long *)(param_3 + 0x78);
        auVar52._0_4_ = (auVar76._0_4_ - fVar72) * *(float *)PTR_DAT_047d1a70;
        auVar52._4_4_ = (auVar76._4_4_ - fVar90) * *(float *)(PTR_DAT_047d1a70 + 4);
        auVar52._8_4_ = (auVar76._8_4_ - fVar57) * *(float *)(PTR_DAT_047d1a70 + 8);
        if (uVar28 < 2) {
          uVar35 = 0;
        }
        else {
          uVar35 = 0;
          puVar44 = (uint *)(lVar48 + uVar34 * 8 + 4);
          puVar41 = (undefined8 *)(local_590 + 0xc);
          do {
            uVar9 = *puVar44;
            auVar63._0_8_ = CONCAT44(uVar9 >> 0xb,uVar9) & 0x7ff000007ff;
            auVar63._8_4_ = uVar9 >> 0x16;
            auVar63._12_4_ = 0;
            auVar64 = NEON_scvtf(auVar63,4);
            uVar35 = uVar35 + 2;
            *(ulong *)((long)puVar41 + -0xc) =
                 CONCAT44(fVar90 + auVar52._4_4_ * auVar64._4_4_,
                          fVar72 + auVar52._0_4_ * auVar64._0_4_);
            *(float *)((long)puVar41 + -4) = fVar57 + auVar52._8_4_ * auVar64._8_4_;
            uVar9 = puVar44[-1];
            puVar44 = puVar44 + 2;
            auVar65._0_8_ = CONCAT44(uVar9 >> 0xb,uVar9) & 0x7ff000007ff;
            auVar65._8_4_ = uVar9 >> 0x16;
            auVar65._12_4_ = 0;
            auVar64 = NEON_scvtf(auVar65,4);
            *puVar41 = CONCAT44(fVar90 + auVar52._4_4_ * auVar64._4_4_,
                                fVar72 + auVar52._0_4_ * auVar64._0_4_);
            *(float *)(puVar41 + 1) = fVar57 + auVar52._8_4_ * auVar64._8_4_;
            puVar41 = puVar41 + 3;
          } while ((long)uVar35 < (long)(int)(uVar28 - 1));
        }
        if ((int)(uint)uVar35 < (int)uVar28) {
          uVar28 = *(uint *)(lVar48 + uVar34 * 8 + (ulong)((uint)uVar35 | 1) * 4);
          auVar58._0_8_ = CONCAT44(uVar28 >> 0xb,uVar28) & 0x7ff000007ff;
          auVar58._8_4_ = uVar28 >> 0x16;
          goto LAB_0084259c;
        }
      }
      else if (uVar13 == 0) {
        lVar48 = *(long *)(param_3 + 0x78) + uVar34 * 8;
        if (uVar28 < 2) {
          uVar35 = 0;
        }
        else {
          fVar57 = *(float *)(param_3 + 0x10);
          fVar72 = *(float *)(param_3 + 0x14);
          fVar90 = *(float *)(param_3 + 0x18);
          auVar64 = *(undefined1 (*) [16])(param_3 + 0x20);
          uVar35 = 0;
          puVar41 = (undefined8 *)(local_590 + 0xc);
          puVar43 = (ulong *)(lVar48 + 8);
          do {
            uVar34 = puVar43[-1];
            auVar69._0_8_ = CONCAT44((int)(uVar34 >> 0x15),(int)uVar34) & 0x1fffff001fffff;
            auVar69._8_4_ = (uint)(uVar34 >> 0x2a);
            auVar69._12_4_ = 0;
            auVar70 = NEON_scvtf(auVar69,4);
            uVar35 = uVar35 + 2;
            *(ulong *)((long)puVar41 + -0xc) =
                 CONCAT44(fVar72 + auVar64._4_4_ * auVar70._4_4_,
                          fVar57 + auVar64._0_4_ * auVar70._0_4_);
            *(float *)((long)puVar41 + -4) = fVar90 + auVar64._8_4_ * auVar70._8_4_;
            uVar34 = *puVar43;
            auVar71._0_8_ = CONCAT44((int)(uVar34 >> 0x15),(int)uVar34) & 0x1fffff001fffff;
            auVar71._8_4_ = (uint)(uVar34 >> 0x2a);
            auVar71._12_4_ = 0;
            auVar70 = NEON_scvtf(auVar71,4);
            *puVar41 = CONCAT44(fVar72 + auVar64._4_4_ * auVar70._4_4_,
                                fVar57 + auVar64._0_4_ * auVar70._0_4_);
            *(float *)(puVar41 + 1) = fVar90 + auVar64._8_4_ * auVar70._8_4_;
            puVar41 = puVar41 + 3;
            puVar43 = puVar43 + 2;
          } while ((long)uVar35 < (long)(int)(uVar28 - 1));
        }
        if ((int)uVar35 < (int)uVar28) {
          uVar34 = *(ulong *)(lVar48 + (uVar35 & 0xffffffff) * 8);
          auVar64 = *(undefined1 (*) [16])(param_3 + 0x10);
          auVar55._0_8_ = CONCAT44((int)(uVar34 >> 0x15),(int)uVar34) & 0x1fffff001fffff;
          auVar55._8_4_ = (uint)(uVar34 >> 0x2a);
          auVar55._12_4_ = 0;
          auVar70 = NEON_scvtf(auVar55,4);
          uVar81 = CONCAT44(auVar64._4_4_ + *(float *)(param_3 + 0x24) * auVar70._4_4_,
                            auVar64._0_4_ + *(float *)(param_3 + 0x20) * auVar70._0_4_);
          fVar57 = auVar64._8_4_ + *(float *)(param_3 + 0x28) * auVar70._8_4_;
          goto LAB_008425a8;
        }
      }
      else {
        FUN_032260f8(&local_e80,&local_280,0x200);
        uVar81 = FUN_0322b1e0(&local_e80,"Compression method #");
        uVar81 = FUN_0322b250(uVar81,*(ushort *)
                                      (*(long *)(param_3 + 0x80) +
                                      (ulong)*(byte *)(*(long *)(param_3 + 0x68) + lVar48) * 2) >> 4
                                     & 3);
        FUN_0322b1e0(uVar81," not implemented");
        iVar25 = FUN_03226f50(0x902f09ed,&local_280,
                              "../..\\Geometry/Collide/DataStructures/StaticMeshTree/hkcdStaticMeshTreeDecoder.inl"
                              ,0x95);
        if (iVar25 != 0) {
          CallSupervisor(0x26);
        }
        FUN_032261b0(&local_e80);
      }
      if (uVar45 != 0) {
        lVar48 = 0;
        do {
          puVar41 = (undefined8 *)(local_590 + lVar48);
          uVar8 = *(undefined4 *)(puVar41 + 1);
          pauVar3 = (undefined1 (*) [12])((long)ppuVar49 + lVar48);
          lVar48 = lVar48 + 0xc;
          *(undefined8 *)*pauVar3 = *puVar41;
          *(undefined4 *)(*pauVar3 + 8) = uVar8;
          *(ulong *)*pauVar3 =
               CONCAT44(fVar88 * SUB124(*pauVar3,4),fVar80 * (float)*(undefined8 *)*pauVar3);
          *(float *)(*pauVar3 + 8) = auVar54._8_4_ * SUB124(*pauVar3,8);
        } while ((ulong)uVar45 * 0xc != lVar48);
      }
      if ((uVar14 & 0xf) == 0) {
        uStack_278 = CONCAT44(*(undefined4 *)(ppuVar49 + 1),*(undefined4 *)(ppuVar49 + 1));
        local_280 = *ppuVar49;
        lVar40 = FUN_02ee32ec(fVar50,&local_db0,&local_280);
      }
      else if (uVar5 == 1) {
        uStack_278 = CONCAT44(*(undefined4 *)(ppuVar49 + 1),*(undefined4 *)(ppuVar49 + 1));
        local_280 = *ppuVar49;
        uStack_e78 = CONCAT44(*(undefined4 *)((long)ppuVar49 + 0x14),
                              *(undefined4 *)((long)ppuVar49 + 0x14));
        local_e80 = *(undefined **)((long)ppuVar49 + 0xc);
        lVar40 = FUN_02ee3050(fVar50,&local_db0,&local_280,&local_e80);
      }
      else if ((uVar5 == 2) && (uVar45 < uVar26)) {
        puVar41 = (undefined8 *)((long)ppuVar49 + (long)(int)(uVar45 - 1) * 0xc);
        uVar34 = ~uVar47;
        if ((uVar16 & 1) != 0) {
          puVar36 = (undefined8 *)((long)ppuVar49 + uVar47 * 0xc);
          uVar81 = *puVar41;
          uVar47 = uVar47 + 1;
          *(undefined4 *)(puVar36 + 1) = *(undefined4 *)(puVar41 + 1);
          *puVar36 = uVar81;
        }
        if (uVar34 + uVar30 != 0) {
          puVar36 = (undefined8 *)((long)ppuVar49 + uVar47 * 0xc);
          lVar48 = uVar47 - uVar30;
          do {
            uVar81 = *puVar41;
            lVar48 = lVar48 + 2;
            *(undefined4 *)(puVar36 + 1) = *(undefined4 *)(puVar41 + 1);
            *puVar36 = uVar81;
            uVar81 = *puVar41;
            *(undefined4 *)((long)puVar36 + 0x14) = *(undefined4 *)(puVar41 + 1);
            *(undefined8 *)((long)puVar36 + 0xc) = uVar81;
            puVar36 = puVar36 + 3;
          } while (lVar48 != 0);
        }
      }
      lVar48 = uStack_588;
      uVar47 = (ulong)uStack_588._4_4_;
      uStack_588 = (ulong)uStack_588._4_4_ << 0x20;
      if ((-1 < lVar48) && (local_590 != (undefined1 *)0x0)) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_590,uVar47 * 0xc);
      }
      *(long *)(param_3 + 0x128) = lVar40;
      lVar48 = *(long *)(param_3 + 0x88);
      uVar26 = (uint)*(byte *)(*(long *)(param_3 + 0x60) + 0x5a);
      if (uVar26 < 5) {
        iVar25 = 0;
      }
      else {
        iVar25 = 0;
        iVar31 = uVar26 - 1;
        do {
          while( true ) {
            iVar6 = iVar25 + iVar31 >> 1;
            iVar15 = uVar46 - *(byte *)(lVar48 + (long)iVar6 * 4 + 2);
            if (iVar15 < 0) break;
            puVar32 = (undefined2 *)
                      (lVar48 + ((long)((ulong)(uint)(iVar25 + iVar31) << 0x20) >> 0x21) * 4);
            if (iVar15 < (int)(uint)*(byte *)((long)puVar32 + 3)) goto LAB_008427c8;
            iVar25 = iVar6 + 1;
            if (iVar31 - iVar25 < 4) goto LAB_008427a4;
          }
          iVar31 = iVar6;
        } while (3 < iVar6 - iVar25);
      }
LAB_008427a4:
      for (puVar32 = (undefined2 *)(lVar48 + (long)iVar25 * 4);
          ((int)(uVar46 - *(byte *)(puVar32 + 1)) < 0 ||
          ((int)(uint)*(byte *)((long)puVar32 + 3) <= (int)(uVar46 - *(byte *)(puVar32 + 1))));
          puVar32 = puVar32 + 2) {
      }
LAB_008427c8:
      uVar12 = *puVar32;
    }
    else {
      puVar2 = (ushort *)
               (*(long *)(param_3 + 0x80) +
               (((ulong)(*(ushort *)
                          (*(long *)(param_3 + 0x80) + (ulong)*(byte *)(lVar40 + lVar48) * 2) >> 6)
                & 3) + (ulong)*(byte *)(lVar40 + lVar48)) * 2);
      plVar27 = (long *)(*(long *)(param_3 + 0xd0) + 0x70);
      puVar41 = (undefined8 *)
                ((long)plVar27 +
                ((long)(int)((uint)puVar2[1] << 0x10) | (ulong)*puVar2) * 0x40 + *plVar27);
      plVar27 = puVar41 + 6;
      lVar48 = 0;
      if (*plVar27 != 0) {
        lVar48 = *plVar27 + (long)plVar27;
      }
      lVar40 = 0;
      if ((*(ushort *)(lVar48 + 0x1a) & 1) != 0) {
        lVar40 = lVar48;
      }
      *(long *)(param_3 + 0x128) = lVar40;
      fVar50 = *(float *)*(undefined1 (*) [12])(puVar41 + 4);
      fVar57 = *(float *)((long)puVar41 + 0x24);
      fVar72 = *(float *)(puVar41 + 5);
      auVar76 = *(undefined1 (*) [12])(puVar41 + 4);
      bVar11 = *(byte *)((long)puVar41 + 0x1e);
      local_280 = (undefined1 *)*puVar41;
      uStack_278 = puVar41[1];
      uStack_268 = (ulong)SUB164(*(undefined1 (*) [16])(puVar41 + 2),8);
      local_270 = SUB168(*(undefined1 (*) [16])(puVar41 + 2),0);
      FUN_031cc2c4(&local_590,&local_280);
      fStack_e48 = (float)uStack_588;
      fStack_e44 = (float)((ulong)uStack_588 >> 0x20);
      local_e50 = local_590;
      local_e38 = local_580._8_8_;
      fStack_e40 = local_580._0_4_;
      local_e3c = local_580._4_4_;
      fStack_e28 = local_580._24_4_;
      fStack_e24 = local_580._28_4_;
      local_e30 = local_580._16_4_;
      fStack_e2c = local_580._20_4_;
      fStack_e18 = (float)uStack_268;
      fStack_e14 = uStack_268._4_4_;
      local_e20 = (float)local_270;
      fStack_e1c = local_270._4_4_;
      if (local_de0 == '\0') {
        auVar54._12_4_ = fVar80;
        auVar54._0_12_ = auVar76;
        if ((bVar11 >> 3 & 1) != 0) goto LAB_00841f14;
      }
      else {
        local_e20 = (float)local_270 * (float)local_dd0;
        fVar90 = (float)((ulong)local_dd0 >> 0x20);
        fStack_e1c = local_270._4_4_ * fVar90;
        fStack_e18 = (float)uStack_268 * (float)uStack_dc8;
        fVar89 = (float)((ulong)uStack_dc8 >> 0x20);
        fStack_e14 = uStack_268._4_4_ * fVar89;
        auVar54._0_4_ = fVar50 * (float)local_dd0;
        auVar54._4_4_ = fVar57 * fVar90;
        auVar54._8_4_ = fVar72 * (float)uStack_dc8;
        auVar54._12_4_ = fVar80 * fVar89;
LAB_00841f14:
        local_de0 = '\x01';
        uStack_dc8 = auVar54._8_8_;
        local_dd0 = auVar54._0_8_;
        local_dc0 = 0;
        uStack_db8 = 0;
        bVar11 = *(byte *)((long)puVar41 + 0x1e);
        if ((bVar11 >> 3 & 1) != 0) {
          local_ddc = (bVar11 >> 5 ^ 0xffffffff) & 1;
        }
        lVar48 = 0;
        if (*plVar27 != 0) {
          lVar48 = *plVar27 + (long)plVar27;
        }
        local_dd8[0] = *(undefined4 *)(lVar48 + 0x20);
        if ((lVar48 != 0) && ((*(ushort *)(lVar48 + 0x1a) & 1) != 0)) {
          iVar25 = *(int *)(lVar48 + 0x40);
          lVar40 = 0;
          if (iVar25 != 0) {
            lVar40 = (long)iVar25 + lVar48 + 0x40;
          }
          FUN_00cb0560(lVar40,*(undefined4 *)(lVar48 + 0x44),local_ddc,&local_dd0,local_dd8,
                       &local_dc0);
        }
      }
      FUN_031cc5e4(&local_590,local_df0,&local_e50);
      ppuVar1 = &local_280;
      local_df0 = &local_590;
      FUN_031cc66c(&local_280,*(undefined8 *)(*(long *)(param_3 + 200) + 0x20),&local_590);
      uVar12 = *(undefined2 *)((long)puVar41 + 0x2c);
    }
    uVar26 = 1;
    goto LAB_008427d0;
  }
  bVar11 = *(byte *)(lVar40 + lVar48);
  uVar28 = *(uint *)(param_3 + 0x90);
  if ((int)(uint)bVar11 < (int)uVar28) {
    uVar45 = *(uint *)(*(long *)(param_3 + 0x70) + (ulong)bVar11 * 4);
    auVar83 = SUB1612(*(undefined1 (*) [16])(param_3 + 0x30),0);
    auVar76 = SUB1612(*(undefined1 (*) [16])(param_3 + 0x40),0);
    auVar51._0_8_ = CONCAT44(uVar45 >> 0xb,uVar45) & 0x7ff000007ff;
    auVar51._8_4_ = uVar45 >> 0x16;
  }
  else {
    auVar83 = SUB1612(*(undefined1 (*) [16])(param_3 + 0x10),0);
    auVar76 = SUB1612(*(undefined1 (*) [16])(param_3 + 0x20),0);
    uVar30 = *(ulong *)(*(long *)(param_3 + 0x78) +
                       (ulong)*(ushort *)(*(long *)(param_3 + 0x80) + (ulong)bVar11 * 2) * 8);
    auVar51._0_8_ = CONCAT44((int)(uVar30 >> 0x15),(int)uVar30) & 0x1fffff001fffff;
    auVar51._8_4_ = (uint)(uVar30 >> 0x2a);
  }
  auVar53._12_4_ = 0;
  auVar53._0_12_ = auVar51;
  auVar54 = NEON_scvtf(auVar53,4);
  fVar50 = auVar83._0_4_ + auVar76._0_4_ * auVar54._0_4_;
  fVar57 = auVar83._4_4_ + auVar76._4_4_ * auVar54._4_4_;
  local_e50 = (undefined1 *)CONCAT44(fVar57,fVar50);
  fStack_e48 = auVar83._8_4_ + auVar76._8_4_ * auVar54._8_4_;
  bVar11 = *pbVar38;
  if ((int)(uint)bVar11 < (int)uVar28) {
    uVar45 = *(uint *)(*(long *)(param_3 + 0x70) + (ulong)bVar11 * 4);
    fStack_e44 = *(float *)(param_3 + 0x30);
    fStack_e40 = *(float *)(param_3 + 0x34);
    local_e3c = *(float *)(param_3 + 0x38);
    fVar72 = (float)*(undefined8 *)(param_3 + 0x48);
    uVar81 = *(undefined8 *)(param_3 + 0x40);
    auVar66._0_8_ = CONCAT44(uVar45 >> 0xb,uVar45) & 0x7ff000007ff;
    auVar66._8_4_ = uVar45 >> 0x16;
  }
  else {
    fStack_e44 = *(float *)(param_3 + 0x10);
    fStack_e40 = *(float *)(param_3 + 0x14);
    local_e3c = *(float *)(param_3 + 0x18);
    fVar72 = (float)*(undefined8 *)(param_3 + 0x28);
    uVar81 = *(undefined8 *)(param_3 + 0x20);
    uVar30 = *(ulong *)(*(long *)(param_3 + 0x78) +
                       (ulong)*(ushort *)(*(long *)(param_3 + 0x80) + (ulong)bVar11 * 2) * 8);
    auVar66._0_8_ = CONCAT44((int)(uVar30 >> 0x15),(int)uVar30) & 0x1fffff001fffff;
    auVar66._8_4_ = (uint)(uVar30 >> 0x2a);
  }
  auVar67._12_4_ = 0;
  auVar67._0_12_ = auVar66;
  auVar54 = NEON_scvtf(auVar67,4);
  fStack_e44 = fStack_e44 + (float)uVar81 * auVar54._0_4_;
  fStack_e40 = fStack_e40 + (float)((ulong)uVar81 >> 0x20) * auVar54._4_4_;
  uVar81 = CONCAT44(fStack_e40,fStack_e44);
  local_e3c = local_e3c + fVar72 * auVar54._8_4_;
  bVar11 = *pbVar37;
  if ((int)(uint)bVar11 < (int)uVar28) {
    uVar45 = *(uint *)(*(long *)(param_3 + 0x70) + (ulong)bVar11 * 4);
    fVar75 = *(float *)(param_3 + 0x30);
    fVar79 = *(float *)(param_3 + 0x34);
    fVar91 = *(float *)(param_3 + 0x38);
    fVar72 = *(float *)(param_3 + 0x40);
    fVar90 = *(float *)(param_3 + 0x44);
    fVar89 = *(float *)(param_3 + 0x48);
    auVar77._0_8_ = CONCAT44(uVar45 >> 0xb,uVar45) & 0x7ff000007ff;
    auVar77._8_4_ = uVar45 >> 0x16;
  }
  else {
    fVar75 = *(float *)(param_3 + 0x10);
    fVar79 = *(float *)(param_3 + 0x14);
    fVar91 = *(float *)(param_3 + 0x18);
    fVar72 = *(float *)(param_3 + 0x20);
    fVar90 = *(float *)(param_3 + 0x24);
    fVar89 = *(float *)(param_3 + 0x28);
    uVar30 = *(ulong *)(*(long *)(param_3 + 0x78) +
                       (ulong)*(ushort *)(*(long *)(param_3 + 0x80) + (ulong)bVar11 * 2) * 8);
    auVar77._0_8_ = CONCAT44((int)(uVar30 >> 0x15),(int)uVar30) & 0x1fffff001fffff;
    auVar77._8_4_ = (uint)(uVar30 >> 0x2a);
  }
  auVar78._12_4_ = 0;
  auVar78._0_12_ = auVar77;
  auVar54 = NEON_scvtf(auVar78,4);
  fVar75 = fVar75 + fVar72 * auVar54._0_4_;
  fVar79 = fVar79 + fVar90 * auVar54._4_4_;
  local_e38 = CONCAT44(fVar79,fVar75);
  local_e30 = fVar91 + fVar89 * auVar54._8_4_;
  bVar10 = *pbVar29;
  if ((uint)bVar11 == (uint)bVar10) {
    fStack_e2c = fVar75;
    fStack_e28 = fVar79;
    fStack_e24 = local_e30;
    if (local_de0 == '\0') goto LAB_00841b90;
LAB_00841c1c:
    local_de0 = '\0';
    fVar72 = auVar64._0_4_;
    fVar90 = auVar64._4_4_;
    fVar89 = auVar64._8_4_;
    fVar91 = auVar70._0_4_;
    fVar74 = auVar70._4_4_;
    local_e50 = (undefined1 *)CONCAT44(fVar90 * fVar57 + fVar74,fVar72 * fVar50 + fVar91);
    fVar50 = auVar70._8_4_;
    fStack_e48 = fVar89 * fStack_e48 + fVar50;
    fStack_e44 = fVar72 * fStack_e44 + fVar91;
    fStack_e40 = fVar90 * fStack_e40 + fVar74;
    uVar81 = CONCAT44(fStack_e40,fStack_e44);
    local_e3c = fVar89 * local_e3c + fVar50;
    local_e38 = CONCAT44(fVar90 * fVar79 + fVar74,fVar72 * fVar75 + fVar91);
    local_e30 = fVar89 * local_e30 + fVar50;
    local_dc0 = 0;
    uStack_db8 = 0;
    fStack_e2c = fVar72 * fStack_e2c + fVar91;
    fStack_e28 = fVar90 * fStack_e28 + fVar74;
    uVar42 = CONCAT44(fStack_e28,fStack_e2c);
    fStack_e24 = fVar89 * fStack_e24 + fVar50;
    auVar54 = NEON_fmov(0x3f800000,4);
    uStack_dc8 = auVar54._8_8_;
    local_dd0 = auVar54._0_8_;
  }
  else {
    if (uVar28 == bVar10 || (int)uVar28 < (int)(uint)bVar10) {
      fVar90 = (float)*(undefined8 *)(param_3 + 0x18);
      uVar73 = *(undefined8 *)(param_3 + 0x10);
      fVar72 = (float)*(undefined8 *)(param_3 + 0x28);
      uVar42 = *(undefined8 *)(param_3 + 0x20);
      uVar30 = *(ulong *)(*(long *)(param_3 + 0x78) +
                         (ulong)*(ushort *)(*(long *)(param_3 + 0x80) + (ulong)bVar10 * 2) * 8);
      auVar84._0_8_ = CONCAT44((int)(uVar30 >> 0x15),(int)uVar30) & 0x1fffff001fffff;
      auVar84._8_4_ = (uint)(uVar30 >> 0x2a);
    }
    else {
      uVar28 = *(uint *)(*(long *)(param_3 + 0x70) + (ulong)(uint)bVar10 * 4);
      fVar90 = (float)*(undefined8 *)(param_3 + 0x38);
      uVar73 = *(undefined8 *)(param_3 + 0x30);
      fVar72 = (float)*(undefined8 *)(param_3 + 0x48);
      uVar42 = *(undefined8 *)(param_3 + 0x40);
      auVar84._0_8_ = CONCAT44(uVar28 >> 0xb,uVar28) & 0x7ff000007ff;
      auVar84._8_4_ = uVar28 >> 0x16;
    }
    auVar85._12_4_ = 0;
    auVar85._0_12_ = auVar84;
    auVar54 = NEON_scvtf(auVar85,4);
    fStack_e2c = (float)uVar73 + (float)uVar42 * auVar54._0_4_;
    fStack_e28 = (float)((ulong)uVar73 >> 0x20) + (float)((ulong)uVar42 >> 0x20) * auVar54._4_4_;
    fStack_e24 = fVar90 + fVar72 * auVar54._8_4_;
    if (local_de0 != '\0') goto LAB_00841c1c;
LAB_00841b90:
    uVar42 = CONCAT44(fStack_e28,fStack_e2c);
  }
  lVar48 = *(long *)(*(long *)(param_3 + 0xb0) + 8);
  fVar50 = SUB84(local_e50,0);
  fVar89 = (float)uVar81 - fVar50;
  fVar57 = (float)((ulong)local_e50 >> 0x20);
  fVar72 = (float)((ulong)uVar81 >> 0x20);
  fVar75 = fVar72 - fVar57;
  fVar79 = (float)local_e38 - fVar50;
  fVar90 = (float)((ulong)local_e38 >> 0x20);
  fVar91 = fVar90 - fVar57;
  uVar82 = NEON_ext(CONCAT44(fVar75,fVar89),CONCAT44(local_e3c - fStack_e48,local_e3c - fStack_e48),
                    4,1);
  uVar73 = NEON_ext(CONCAT44(fVar91,fVar79),CONCAT44(local_e30 - fStack_e48,local_e30 - fStack_e48),
                    4,1);
  piVar39 = (int *)(lVar48 + 0x40);
  puVar41 = (undefined8 *)0x0;
  if (*piVar39 != 0) {
    puVar41 = (undefined8 *)((long)*piVar39 + (long)piVar39);
  }
  iVar25 = *(int *)(lVar48 + 0x48);
  auVar86._0_4_ =
       ((float)uVar81 - fVar50) * (float)uVar73 - ((float)local_e38 - fVar50) * (float)uVar82;
  auVar86._4_4_ =
       (fVar72 - fVar57) * (float)((ulong)uVar73 >> 0x20) -
       (fVar90 - fVar57) * (float)((ulong)uVar82 >> 0x20);
  auVar86._8_4_ = (local_e3c - fStack_e48) * fVar79 - (local_e30 - fStack_e48) * fVar89;
  auVar86._12_4_ = (local_e3c - fStack_e48) * fVar91 - (local_e30 - fStack_e48) * fVar75;
  auVar54 = NEON_ext(auVar86,auVar86,4,1);
  fVar72 = auVar54._0_4_;
  fVar90 = auVar54._4_4_;
  fVar89 = fVar72 * fVar72 + fVar90 * fVar90 + auVar86._0_4_ * auVar86._0_4_;
  pfVar7 = (float *)0x0;
  if (iVar25 != 0) {
    pfVar7 = (float *)((long)iVar25 + lVar48 + 0x48);
  }
  if (fVar89 == 0.0) {
    uVar73 = *(undefined8 *)(puVar21 + 0x50);
  }
  else {
    uVar73 = CONCAT44(fVar88 / SQRT(fVar72 * fVar72 + fVar90 * fVar90 +
                                    auVar86._0_4_ * auVar86._0_4_),fVar80 / SQRT(fVar89));
  }
  *puVar41 = local_e50;
  *(float *)(puVar41 + 1) = fStack_e48;
  *(undefined8 *)((long)puVar41 + 0xc) = uVar81;
  *(float *)((long)puVar41 + 0x14) = local_e3c;
  puVar41[3] = local_e38;
  fVar89 = (float)uVar73 * fVar72;
  fVar91 = (float)((ulong)uVar73 >> 0x20);
  fVar75 = fVar91 * fVar90;
  fVar79 = (float)uVar73 * auVar86._0_4_;
  fVar91 = fVar91 * -(fStack_e48 * auVar86._0_4_ + fVar50 * fVar72 + fVar57 * fVar90);
  *(float *)(puVar41 + 4) = local_e30;
  *(undefined8 *)((long)puVar41 + 0x24) = uVar42;
  *(float *)((long)puVar41 + 0x2c) = fStack_e24;
  iVar25 = *(int *)(lVar48 + 0x58);
  *(undefined4 *)(lVar48 + 0x44) = 4;
  lVar40 = 0;
  if (iVar25 != 0) {
    lVar40 = (long)iVar25 + lVar48 + 0x58;
  }
  *(undefined1 *)(lVar40 + 3) = 3;
  *(undefined1 *)(lVar40 + 7) = 3;
  pfVar7[2] = fVar79;
  pfVar7[3] = fVar91;
  *pfVar7 = fVar89;
  pfVar7[1] = fVar75;
  pfVar7[6] = -fVar79;
  pfVar7[7] = -fVar91;
  pfVar7[4] = -fVar89;
  pfVar7[5] = -fVar75;
  pfVar7[10] = fVar79;
  pfVar7[0xb] = fVar91;
  pfVar7[8] = fVar89;
  pfVar7[9] = fVar75;
  pfVar7[0xe] = fVar79;
  pfVar7[0xf] = fVar91;
  pfVar7[0xc] = fVar89;
  pfVar7[0xd] = fVar75;
  *(undefined4 *)(lVar48 + 0x20) = *(undefined4 *)(*(long *)(param_3 + 0xd0) + 0x20);
  if ((uVar26 == 2) &&
     (lVar40 = *(long *)(param_3 + 0x68) + uVar47 * 4,
     (*(byte *)(lVar40 + 1) & *(byte *)(param_3 + 0x58)) <= *(byte *)(lVar40 + 3))) {
    lVar40 = 0;
    if (*(int *)(lVar48 + 0x40) != 0) {
      lVar40 = (long)*(int *)(lVar48 + 0x40) + (long)piVar39;
    }
    *(undefined8 *)(lVar40 + 0x24) = *(undefined8 *)(lVar40 + 0x18);
    *(undefined4 *)(lVar40 + 0x2c) = *(undefined4 *)(lVar40 + 0x20);
    uVar26 = 2;
    *(undefined4 *)(lVar48 + 0x44) = 3;
  }
  else {
    uVar26 = 1;
  }
  *(long *)(param_3 + 0x128) = lVar48;
  lVar48 = *(long *)(param_3 + 0x88);
  uVar28 = (uint)*(byte *)(*(long *)(param_3 + 0x60) + 0x5a);
  if (uVar28 < 5) {
    iVar25 = 0;
  }
  else {
    iVar25 = 0;
    iVar31 = uVar28 - 1;
    do {
      while( true ) {
        iVar6 = iVar25 + iVar31 >> 1;
        iVar15 = uVar46 - *(byte *)(lVar48 + (long)iVar6 * 4 + 2);
        if (iVar15 < 0) break;
        puVar32 = (undefined2 *)
                  (lVar48 + ((long)((ulong)(uint)(iVar25 + iVar31) << 0x20) >> 0x21) * 4);
        if (iVar15 < (int)(uint)*(byte *)((long)puVar32 + 3)) goto LAB_00841ee8;
        iVar25 = iVar6 + 1;
        if (iVar31 - iVar25 < 4) goto LAB_00841ec4;
      }
      iVar31 = iVar6;
    } while (3 < iVar6 - iVar25);
  }
LAB_00841ec4:
  for (puVar32 = (undefined2 *)(lVar48 + (long)iVar25 * 4);
      ((int)(uVar46 - *(byte *)(puVar32 + 1)) < 0 ||
      ((int)(uint)*(byte *)((long)puVar32 + 3) <= (int)(uVar46 - *(byte *)(puVar32 + 1))));
      puVar32 = puVar32 + 2) {
  }
LAB_00841ee8:
  uVar12 = *puVar32;
LAB_008427d0:
  puVar23 = PTR_DAT_047d1a60;
  puVar22 = PTR_DAT_047d19f0;
  local_e60 = *(long *)(param_3 + 0xe8);
  local_e80 = PTR_DAT_047d1b48 + 0x10;
  local_e70 = NEON_fmin(*(undefined8 *)(puVar21 + 0x250),*(undefined8 *)(local_e60 + 0x10),4);
  local_e68 = *(char *)(local_e60 + 0x18) != '\0';
  uVar81 = *(undefined8 *)(puVar21 + 0x50);
  uStack_e78 = CONCAT44(*(undefined4 *)(local_e60 + 0xc),
                        (int)CONCAT71((int7)((ulong)uStack_e78 >> 8),*(undefined1 *)(local_e60 + 8))
                       );
  uVar28 = 0;
  do {
    uVar45 = uVar28 | uVar46 << 1 | *(int *)(param_3 + 0x94) << 8;
    lVar48 = *(long *)(*(long *)(param_3 + 0xe0) + 0x28);
    if ((lVar48 == 0) ||
       (uVar47 = (**(code **)(*(long *)puVar22 + (ulong)*(byte *)(lVar48 + 0x18) * 0x40 + 0x4020))
                           (lVar48,uVar45 << (ulong)(*(uint *)(param_3 + 0xa0) & 0x1f)),
       (uVar47 & 1) != 0)) {
      if (uVar28 == 1) {
        fVar50 = SUB84(local_e50,0);
        fVar90 = (float)local_e38 - fVar50;
        fVar57 = (float)((ulong)local_e50 >> 0x20);
        fVar72 = (float)((ulong)local_e38 >> 0x20);
        fVar89 = fVar72 - fVar57;
        lVar48 = *(long *)(*(long *)(param_3 + 0xb0) + 8);
        uVar73 = NEON_ext(CONCAT44(fVar89,fVar90),
                          CONCAT44(local_e30 - fStack_e48,local_e30 - fStack_e48),4,1);
        uVar42 = NEON_ext(CONCAT44(fStack_e28 - fVar57,fStack_e2c - fVar50),
                          CONCAT44(fStack_e24 - fStack_e48,fStack_e24 - fStack_e48),4,1);
        iVar25 = *(int *)(lVar48 + 0x40);
        auVar87._0_4_ =
             ((float)local_e38 - fVar50) * (float)uVar42 - (fStack_e2c - fVar50) * (float)uVar73;
        auVar87._4_4_ =
             (fVar72 - fVar57) * (float)((ulong)uVar42 >> 0x20) -
             (fStack_e28 - fVar57) * (float)((ulong)uVar73 >> 0x20);
        auVar87._8_4_ =
             (local_e30 - fStack_e48) * (fStack_e2c - fVar50) - (fStack_e24 - fStack_e48) * fVar90;
        auVar87._12_4_ =
             (local_e30 - fStack_e48) * (fStack_e28 - fVar57) - (fStack_e24 - fStack_e48) * fVar89;
        auVar54 = NEON_ext(auVar87,auVar87,4,1);
        fVar72 = auVar54._0_4_;
        fVar90 = auVar54._4_4_;
        iVar31 = *(int *)(lVar48 + 0x48);
        puVar41 = (undefined8 *)0x0;
        if (iVar25 != 0) {
          puVar41 = (undefined8 *)((long)iVar25 + lVar48 + 0x40);
        }
        puVar36 = (undefined8 *)0x0;
        if (iVar31 != 0) {
          puVar36 = (undefined8 *)((long)iVar31 + lVar48 + 0x48);
        }
        fVar89 = fVar72 * fVar72 + fVar90 * fVar90 + auVar87._0_4_ * auVar87._0_4_;
        uVar42 = uVar81;
        if (fVar89 != 0.0) {
          uVar42 = CONCAT44(fVar88 / SQRT(fVar72 * fVar72 + fVar90 * fVar90 +
                                          auVar87._0_4_ * auVar87._0_4_),fVar80 / SQRT(fVar89));
        }
        *(float *)(puVar41 + 1) = fStack_e48;
        *(undefined8 *)((long)puVar41 + 0xc) = local_e38;
        *(float *)((long)puVar41 + 0x14) = local_e30;
        *puVar41 = local_e50;
        puVar41[3] = CONCAT44(fStack_e28,fStack_e2c);
        fVar89 = (float)uVar42 * fVar72;
        fVar79 = (float)((ulong)uVar42 >> 0x20);
        fVar75 = fVar79 * fVar90;
        auVar56._0_8_ = CONCAT44(fVar75,fVar89);
        auVar56._8_4_ = (float)uVar42 * auVar87._0_4_;
        auVar56._12_4_ = fVar79 * -(fStack_e48 * auVar87._0_4_ + fVar50 * fVar72 + fVar57 * fVar90);
        *(float *)(puVar41 + 4) = fStack_e24;
        *(ulong *)((long)puVar41 + 0x24) = CONCAT44(fStack_e28,fStack_e2c);
        *(float *)((long)puVar41 + 0x2c) = fStack_e24;
        iVar25 = *(int *)(lVar48 + 0x58);
        *(undefined4 *)(lVar48 + 0x44) = 3;
        lVar40 = 0;
        if (iVar25 != 0) {
          lVar40 = (long)iVar25 + lVar48 + 0x58;
        }
        *(undefined1 *)(lVar40 + 3) = 0;
        *(undefined1 *)(lVar40 + 7) = 0;
        auVar60._0_8_ = CONCAT44(-fVar75,-fVar89);
        auVar60._8_4_ = -auVar56._8_4_;
        auVar60._12_4_ = -auVar56._12_4_;
        uVar42 = auVar56._8_8_;
        puVar36[5] = uVar42;
        puVar36[4] = auVar56._0_8_;
        puVar36[7] = uVar42;
        puVar36[6] = auVar56._0_8_;
        puVar36[1] = uVar42;
        *puVar36 = auVar56._0_8_;
        puVar36[3] = auVar60._8_8_;
        puVar36[2] = auVar60._0_8_;
        *(undefined4 *)(lVar48 + 0x20) = *(undefined4 *)(*(long *)(param_3 + 0xd0) + 0x20);
      }
      iVar25 = local_df8._4_4_ + *(int *)(*(long *)(param_3 + 0x50) + 0x34);
      uVar45 = *(uint *)(puVar23 + (long)local_df8._4_4_ * 4) & (uint)local_df8 |
               (uVar45 + 1 << (ulong)(-iVar25 & 0x1f)) - 1;
      local_df8 = CONCAT44(iVar25,uVar45);
      plVar27 = *(long **)(param_3 + 0xb8);
      if (*plVar27 != 0) {
        puVar32 = *(undefined2 **)(param_3 + 0xd8);
        *(undefined2 *)(param_3 + 0x100) = *puVar32;
        uVar42 = *(undefined8 *)(puVar32 + 2);
        *(undefined4 *)(param_3 + 0x10c) = *(undefined4 *)(puVar32 + 6);
        *(undefined8 *)(param_3 + 0x104) = uVar42;
        (**(code **)(*(long *)*plVar27 + 0x40))
                  ((long *)*plVar27,uVar12,5,**(undefined8 **)(param_3 + 0xe0),
                   (*(undefined8 **)(param_3 + 0xe0))[1],*(undefined8 *)(param_3 + 0xd0),uVar45,
                   *(undefined8 *)(param_3 + 0x128),param_3 + 0x100);
        plVar27 = *(long **)(param_3 + 0xb8);
      }
      FUN_02eb7744(*(undefined8 *)(param_3 + 0xb0),(undefined8 *)(param_3 + 0xf0),&local_e10,
                   *(undefined8 *)(param_3 + 0xc0),plVar27 + 2,*(undefined8 *)(param_3 + 200),
                   ppuVar1,*(char *)(param_3 + 0x1c0) == '\0',&local_e80);
    }
    uVar28 = uVar28 + 1;
  } while (uVar26 != uVar28);
  local_db0 = PTR_DAT_047d1b30 + 0x10;
  if (local_da8 != (long *)0x0) {
    (**(code **)(*local_da8 + 8))();
  }
  return 1;
}



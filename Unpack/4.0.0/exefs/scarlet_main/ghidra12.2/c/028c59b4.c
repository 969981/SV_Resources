/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028c59b4; name: FUN_028c59b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028c59b4(long param_1,long param_2,long param_3)

{
  short *psVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  ulong uVar13;
  long *plVar14;
  char cVar15;
  short sVar16;
  long lVar17;
  char cVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float extraout_s0;
  float fVar29;
  float fVar30;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float fVar35;
  undefined1 auVar31 [16];
  float fVar33;
  float fVar34;
  float fVar36;
  float fVar37;
  undefined1 auVar32 [16];
  float fVar38;
  float fVar39;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar40 [16];
  undefined1 auVar45 [12];
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar46 [16];
  float fVar50;
  int iVar51;
  float fVar52;
  int iVar53;
  float fVar54;
  int iVar55;
  float fVar56;
  int iVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  float fVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar80 [16];
  undefined1 auVar79 [16];
  undefined1 auVar78 [16];
  undefined1 auVar77 [16];
  undefined1 auVar84 [16];
  undefined1 auVar83 [16];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar85 [16];
  float fVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar96 [16];
  undefined1 auVar95 [16];
  undefined1 auVar94 [16];
  undefined1 auVar93 [16];
  undefined1 auVar100 [16];
  undefined1 auVar99 [16];
  undefined1 auVar98 [16];
  undefined1 auVar97 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined8 uVar103;
  float local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_c0;
  undefined4 uStack_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  undefined4 local_94;
  char local_74 [4];
  
  cVar18 = *(char *)(param_1 + 0x23b);
  if (cVar18 == '\0' && *(char *)(param_1 + 0x239) != '\0') {
    cVar15 = *(char *)(param_3 + 0x100);
    *(undefined1 *)(param_3 + 0x100) = 0;
    if (cVar15 == '\0') {
      bVar7 = *(char *)(param_1 + 0x4b0) != '\0';
      cVar15 = '\0';
    }
    else {
      cVar15 = '\x01';
      bVar7 = true;
    }
  }
  else {
    cVar15 = '\0';
    bVar7 = false;
  }
  if (*(char *)(param_1 + 0x23a) == '\0') {
    bVar11 = false;
  }
  else {
    bVar11 = *(char *)(param_3 + 0x19) != '\0';
  }
  cVar12 = cVar18 != '\0';
  cVar18 = cVar15;
  if (!bVar7) {
    cVar18 = '\x01';
  }
  if (cVar15 == '\0' && !bVar7) {
    cVar18 = *(char *)(param_3 + 0x100);
    *(undefined1 *)(param_3 + 0x100) = 0;
    if (cVar18 == '\0') {
      if (*(char *)(param_1 + 0x4b0) == '\0') {
        if ((*(char *)(param_1 + 0x239) == '\0') || (*(char *)(param_3 + 0x128) == '\0')) {
          cVar12 = *(char *)(param_1 + 0x23b) != '\0';
          cVar18 = '\0';
        }
        else {
          cVar18 = '\0';
          cVar12 = true;
        }
      }
      else {
        cVar18 = '\0';
      }
    }
    else {
      cVar18 = '\x01';
    }
  }
  local_c0 = *(float *)(param_3 + 0xb0);
  local_d0 = *(undefined8 *)*(undefined1 (*) [16])(param_3 + 0xa0);
  uStack_c8 = *(undefined8 *)(param_3 + 0xa8);
  auVar40 = *(undefined1 (*) [16])(param_3 + 0xa0);
  fVar65 = local_c0 * local_c0;
  fVar30 = auVar40._0_4_;
  fVar33 = auVar40._4_4_;
  fVar34 = auVar40._8_4_;
  fVar37 = auVar40._12_4_;
  if (bVar7) {
    lVar17 = *(long *)(param_1 + 0x200);
    lVar19 = *(long *)(param_1 + 0x208);
    if (lVar17 == lVar19) goto LAB_028c5d50;
    do {
      auVar40 = *(undefined1 (*) [16])(lVar17 + 400);
      fVar38 = fVar30 - auVar40._0_4_;
      fVar41 = fVar33 - auVar40._4_4_;
      fVar43 = fVar34 - auVar40._8_4_;
      fVar44 = fVar37 - auVar40._12_4_;
      fVar38 = fVar38 * fVar38;
      fVar41 = fVar41 * fVar41;
      fVar43 = fVar43 * fVar43;
      fVar44 = fVar44 * fVar44;
      auVar31._0_4_ = fVar38 + fVar41;
      auVar31._4_4_ = fVar43 + fVar44;
      auVar31._8_4_ = fVar38 + fVar41;
      auVar31._12_4_ = fVar43 + fVar44;
      auVar40 = NEON_ext(auVar31,auVar31,4,1);
      fVar38 = auVar40._0_4_ + auVar40._4_4_;
      if (fVar38 <= fVar65) goto LAB_028c5ccc;
      auVar40 = *(undefined1 (*) [16])(lVar17 + 0x160);
      thunk_FUN_026fd880(&local_d0);
      fVar41 = (fVar30 - extraout_s0) * (fVar30 - extraout_s0);
      fVar43 = (fVar33 - extraout_var) * (fVar33 - extraout_var);
      fVar44 = (fVar34 - extraout_var_00) * (fVar34 - extraout_var_00);
      fVar35 = (fVar37 - extraout_var_01) * (fVar37 - extraout_var_01);
      auVar75._0_4_ = fVar41 + fVar43;
      auVar75._4_4_ = fVar44 + fVar35;
      auVar75._8_4_ = fVar41 + fVar43;
      auVar75._12_4_ = fVar44 + fVar35;
      auVar31 = NEON_ext(auVar75,auVar75,4,1);
      fVar38 = fVar38 + auVar31._0_4_ + auVar31._4_4_;
      local_130 = auVar40._0_4_;
      if ((fVar38 <= local_130 * local_130) ||
         (*(double *)(param_1 + 0x270) <= (double)(fVar65 / fVar38))) {
        if (*(char *)(param_3 + 0x18) == '\0') {
          local_120 = local_d0;
          uStack_118 = uStack_c8;
          local_110 = CONCAT44(uStack_bc,local_c0);
          uVar13 = FUN_00c74600(lVar17,&local_120,*(undefined1 *)(param_1 + 0x8e8));
          if ((uVar13 & 1) != 0) goto LAB_028c5ccc;
        }
        else {
          local_f0 = local_d0;
          uStack_e8 = uStack_c8;
          local_e0 = CONCAT44(uStack_bc,local_c0);
          cVar15 = *(char *)(param_1 + 0x8e8);
          uVar13 = FUN_00c74600(lVar17,&local_f0,cVar15);
          if ((uVar13 & 1) != 0) {
LAB_028c5ccc:
            cVar12 = false;
            goto LAB_028c5d50;
          }
          local_f8 = local_b4;
          fVar29 = *(float *)(lVar17 + 0x1d0);
          fVar38 = *(float *)(lVar17 + 0x170);
          fVar41 = *(float *)(lVar17 + 0x1b0);
          fVar43 = *(float *)(lVar17 + 0x1b4);
          fVar44 = *(float *)(lVar17 + 0x1b8);
          fVar35 = *(float *)(lVar17 + 0x1bc);
          fVar58 = *(float *)(lVar17 + 0x1c0) * fVar29;
          fVar59 = *(float *)(lVar17 + 0x1c4) * fVar29;
          fVar60 = *(float *)(lVar17 + 0x1c8) * fVar29;
          fVar29 = *(float *)(lVar17 + 0x1cc) * fVar29;
          auVar40 = *(undefined1 (*) [16])(param_1 + 0x280);
          fVar62 = fVar38 * fVar38;
          fVar47 = auVar40._0_4_;
          fVar66 = fVar47 * fVar38;
          fVar48 = auVar40._4_4_;
          fVar68 = fVar48 * fVar38;
          fVar49 = auVar40._8_4_;
          fVar69 = fVar49 * fVar38;
          fVar36 = auVar40._12_4_;
          fVar70 = fVar36 * fVar38;
          fVar50 = fVar41 + fVar58;
          fVar52 = fVar43 + fVar59;
          fVar54 = fVar44 + fVar60;
          fVar56 = fVar35 + fVar29;
          fVar39 = (float)local_d0;
          auVar85._0_4_ = fVar41 - fVar39;
          fVar42 = (float)((ulong)local_d0 >> 0x20);
          auVar85._4_4_ = fVar43 - fVar42;
          fVar67 = (float)uStack_c8;
          auVar85._8_4_ = fVar44 - fVar67;
          fVar86 = (float)((ulong)uStack_c8 >> 0x20);
          auVar85._12_4_ = fVar35 - fVar86;
          auVar88._0_4_ = auVar85._0_4_ * fVar66 + auVar85._4_4_ * fVar68;
          auVar88._4_4_ = auVar85._8_4_ * fVar69 + auVar85._12_4_ * fVar70;
          auVar88._8_4_ = auVar85._0_4_ * fVar66 + auVar85._4_4_ * fVar68;
          auVar88._12_4_ = auVar85._8_4_ * fVar69 + auVar85._12_4_ * fVar70;
          auVar40 = NEON_ext(auVar88,auVar88,4,1);
          auVar63._0_4_ = fVar50 - fVar39;
          auVar63._4_4_ = fVar52 - fVar42;
          auVar63._8_4_ = fVar54 - fVar67;
          auVar63._12_4_ = fVar56 - fVar86;
          fVar71 = fVar41 - (auVar40._0_4_ + auVar40._4_4_) * (fVar66 / fVar62);
          fVar72 = fVar43 - (auVar40._8_4_ + auVar40._12_4_) * (fVar68 / fVar62);
          fVar73 = fVar44 - (auVar40._0_4_ + auVar40._4_4_) * (fVar69 / fVar62);
          fVar74 = fVar35 - (auVar40._8_4_ + auVar40._12_4_) * (fVar70 / fVar62);
          auVar102._0_4_ = fVar66 * auVar63._0_4_ + fVar68 * auVar63._4_4_;
          auVar102._4_4_ = fVar69 * auVar63._8_4_ + fVar70 * auVar63._12_4_;
          auVar102._8_4_ = fVar66 * auVar63._0_4_ + fVar68 * auVar63._4_4_;
          auVar102._12_4_ = fVar69 * auVar63._8_4_ + fVar70 * auVar63._12_4_;
          auVar40 = NEON_ext(auVar102,auVar102,4,1);
          fVar50 = (fVar50 - (fVar66 / fVar62) * (auVar40._0_4_ + auVar40._4_4_)) - fVar71;
          fVar52 = (fVar52 - (fVar68 / fVar62) * (auVar40._8_4_ + auVar40._12_4_)) - fVar72;
          fVar54 = (fVar54 - (fVar69 / fVar62) * (auVar40._0_4_ + auVar40._4_4_)) - fVar73;
          fVar56 = (fVar56 - (fVar70 / fVar62) * (auVar40._8_4_ + auVar40._12_4_)) - fVar74;
          bVar7 = false;
          bVar9 = true;
          bVar10 = false;
          if (fVar50 < 1.1920929e-07) {
            bVar7 = false;
            bVar9 = false;
            bVar10 = true;
            if (!NAN(fVar50)) {
              bVar7 = fVar50 < -1.1920929e-07;
              bVar9 = fVar50 == -1.1920929e-07;
              bVar10 = false;
            }
          }
          bVar8 = false;
          if ((!bVar9 && bVar7 == bVar10) && (bVar8 = false, !NAN(fVar52))) {
            bVar8 = fVar52 < 1.1920929e-07;
          }
          bVar7 = false;
          bVar9 = true;
          bVar10 = false;
          if (bVar8) {
            bVar7 = false;
            bVar9 = false;
            bVar10 = true;
            if (!NAN(fVar52)) {
              bVar7 = fVar52 < -1.1920929e-07;
              bVar9 = fVar52 == -1.1920929e-07;
              bVar10 = false;
            }
          }
          bVar8 = false;
          if ((!bVar9 && bVar7 == bVar10) && (bVar8 = false, !NAN(fVar54))) {
            bVar8 = fVar54 < 1.1920929e-07;
          }
          bVar7 = false;
          bVar9 = true;
          bVar10 = false;
          if (bVar8) {
            bVar7 = false;
            bVar9 = false;
            bVar10 = true;
            if (!NAN(fVar54)) {
              bVar7 = fVar54 < -1.1920929e-07;
              bVar9 = fVar54 == -1.1920929e-07;
              bVar10 = false;
            }
          }
          if (bVar9 || bVar7 != bVar10) {
            fVar62 = (fVar39 - fVar71) * fVar50;
            fVar66 = (fVar42 - fVar72) * fVar52;
            fVar68 = (fVar67 - fVar73) * fVar54;
            fVar69 = (fVar86 - fVar74) * fVar56;
            auVar20._0_4_ = fVar62 + fVar66;
            auVar20._4_4_ = fVar68 + fVar69;
            auVar20._8_4_ = fVar62 + fVar66;
            auVar20._12_4_ = fVar68 + fVar69;
            auVar21._0_4_ = fVar50 * fVar50 + fVar52 * fVar52;
            auVar21._4_4_ = fVar54 * fVar54 + fVar56 * fVar56;
            auVar21._8_4_ = fVar50 * fVar50 + fVar52 * fVar52;
            auVar21._12_4_ = fVar54 * fVar54 + fVar56 * fVar56;
            auVar31 = NEON_ext(auVar20,auVar20,4,1);
            auVar40 = NEON_ext(auVar21,auVar21,4,1);
            fVar50 = (auVar31._0_4_ + auVar31._4_4_) / (auVar40._0_4_ + auVar40._4_4_);
            if ((0.0 < fVar50) && (auVar85 = auVar63, fVar50 < 1.0)) {
              auVar85._0_4_ = (fVar41 + fVar58 * fVar50) - fVar39;
              auVar85._4_4_ = (fVar43 + fVar59 * fVar50) - fVar42;
              auVar85._8_4_ = (fVar44 + fVar60 * fVar50) - fVar67;
              auVar85._12_4_ = (fVar35 + fVar29 * fVar50) - fVar86;
            }
          }
          fVar41 = fVar47 * auVar85._0_4_;
          fVar43 = fVar48 * auVar85._4_4_;
          fVar44 = fVar49 * auVar85._8_4_;
          fVar35 = fVar36 * auVar85._12_4_;
          auVar22._0_4_ = fVar41 + fVar43;
          auVar22._4_4_ = fVar44 + fVar35;
          auVar22._8_4_ = fVar41 + fVar43;
          auVar22._12_4_ = fVar44 + fVar35;
          auVar40 = NEON_ext(auVar22,auVar22,4,1);
          fVar41 = auVar40._0_4_ + auVar40._4_4_;
          fVar43 = 1.0;
          if (fVar41 < 0.0) {
            fVar43 = 0.0;
          }
          fVar43 = fVar43 * fVar41;
          fVar41 = 1.0;
          if (fVar38 <= fVar43) {
            fVar41 = 0.0;
          }
          fVar44 = 1.0;
          if (fVar38 > fVar43) {
            fVar44 = 0.0;
          }
          fVar41 = fVar43 * fVar41 + fVar38 * fVar44;
          if (0.0 < fVar41 / fVar38) {
            fVar38 = 1.0;
            if (local_c0 < 0.0) {
              fVar38 = 0.0;
            }
            uStack_a8 = CONCAT44(fVar86 + fVar36 * fVar41,fVar67 + fVar49 * fVar41);
            local_b0 = CONCAT44(fVar42 + fVar48 * fVar41,fVar39 + fVar47 * fVar41);
            fVar41 = 1.0;
            if (local_c0 >= 0.0) {
              fVar41 = 0.0;
            }
            local_a0 = local_c0 * fVar38 - local_c0 * fVar41;
          }
          else {
            uStack_a8 = uStack_c8;
            local_b0 = local_d0;
            local_a0 = local_c0;
            local_94 = local_b4;
          }
          uVar13 = FUN_00c74600(lVar17,&local_b0,cVar15 != '\0');
          if ((uVar13 & 1) != 0) {
            bVar7 = false;
            cVar12 = false;
            goto LAB_028c5d54;
          }
        }
      }
      lVar17 = lVar17 + 0x230;
    } while (lVar19 != lVar17);
    bVar7 = true;
    cVar12 = true;
  }
  else {
    if (bVar11 != false) {
      if (*(long *)(param_1 + 0x200) != *(long *)(param_1 + 0x208)) {
        bVar7 = true;
        lVar17 = *(long *)(param_1 + 0x200);
        do {
          if (*(long *)(param_1 + 0x208) == lVar17 + 0x230) break;
          fVar38 = *(float *)(lVar17 + 400) - fVar30;
          fVar41 = *(float *)(lVar17 + 0x194) - fVar33;
          fVar43 = *(float *)(lVar17 + 0x198) - fVar34;
          fVar44 = *(float *)(lVar17 + 0x19c) - fVar37;
          fVar38 = fVar38 * fVar38;
          fVar41 = fVar41 * fVar41;
          fVar43 = fVar43 * fVar43;
          fVar44 = fVar44 * fVar44;
          auVar40._0_4_ = fVar38 + fVar41;
          auVar40._4_4_ = fVar43 + fVar44;
          auVar40._8_4_ = fVar38 + fVar41;
          auVar40._12_4_ = fVar43 + fVar44;
          auVar40 = NEON_ext(auVar40,auVar40,4,1);
          lVar17 = lVar17 + 0x230;
        } while (fVar65 < auVar40._0_4_ + auVar40._4_4_);
        goto LAB_028c5d54;
      }
    }
LAB_028c5d50:
    bVar7 = true;
  }
LAB_028c5d54:
  uVar6 = uStack_c8;
  uVar5 = local_d0;
  local_b0 = CONCAT71(local_b0._1_7_,cVar12);
  local_74[0] = '\0';
  if ((!bVar7) || ((bVar11 & (cVar12 ^ 1U)) == 0)) {
    *(undefined8 *)(param_3 + 0x40) = 0;
    *(undefined2 *)(param_3 + 0x12a) = 0;
    *(undefined8 *)(param_3 + 0x28) = 0;
    *(undefined8 *)(param_3 + 0x30) = 0;
    local_74[0] = '\0';
    goto LAB_028c5db4;
  }
  if ((*(char *)(param_3 + 0x129) != '\0') && (*(ulong *)(param_3 + 0x40) < 0xff)) {
    *(ulong *)(param_3 + 0x40) = *(ulong *)(param_3 + 0x40) + 1;
  }
  if (*(char *)(param_1 + 0x23c) != '\0') {
    local_74[0] = '\x01';
    *(undefined1 *)(param_3 + 0x12a) = 1;
    *(undefined8 *)(param_3 + 0x30) = 0;
    goto LAB_028c5db4;
  }
  cVar15 = *(char *)(*(long *)(*(long *)(param_1 + 0x3f8) + *(long *)(param_3 + 0x20) * 8) + 0x2c);
  if ((*(char *)(param_1 + 0x4b0) == '\0') && (cVar15 != '\0')) {
    if (cVar18 == '\0') {
      cVar18 = *(char *)(param_3 + 0x100);
      *(undefined1 *)(param_3 + 0x100) = 0;
      bVar11 = cVar18 != '\0';
      bVar7 = bVar11;
    }
    else {
      bVar11 = true;
      bVar7 = true;
    }
  }
  else {
    if (*(char *)(param_1 + 0x4b0) == '\0' && cVar18 == '\0') {
      cVar18 = *(char *)(param_3 + 0x100);
      *(undefined1 *)(param_3 + 0x100) = 0;
      bVar7 = cVar18 != '\0';
    }
    else {
      bVar7 = true;
    }
    bVar11 = true;
    if ((cVar15 != '\0') && (cVar18 == '\0')) {
      cVar18 = *(char *)(param_3 + 0x100);
      *(undefined1 *)(param_3 + 0x100) = 0;
      bVar11 = cVar18 != '\0';
    }
  }
  uVar4 = _UNK_03cabe58;
  uVar3 = _DAT_03cabe50;
  fVar65 = local_c0 + local_c0;
  uVar103 = CONCAT44(fVar65,fVar65);
  uVar13 = (ulong)(uint)fVar65;
  fVar30 = (float)local_d0;
  fVar33 = (float)((ulong)local_d0 >> 0x20);
  fVar34 = (float)uStack_c8;
  fVar37 = (float)((ulong)uStack_c8 >> 0x20);
  if (*(long *)(param_1 + 0x200) == *(long *)(param_1 + 0x208)) {
LAB_028c6120:
    if (bVar11) {
      *(ulong *)(param_2 + 0x28) = uVar13;
      *(undefined8 *)(param_2 + 0x20) = uVar103;
      *(undefined8 *)(param_2 + 0x38) = uVar4;
      *(undefined8 *)(param_2 + 0x30) = uVar3;
      *(undefined8 *)(param_2 + 0x48) = uStack_c8;
      *(undefined8 *)(param_2 + 0x40) = local_d0;
      if (*(char *)(param_2 + 0x50) == '\0') {
        *(undefined1 *)(param_2 + 0x50) = 1;
      }
LAB_028c6144:
      if ((bVar7) || (*(long *)(param_3 + 0x30) == 0)) goto LAB_028c6298;
      lVar17 = *(long *)(param_3 + 0x30) + -1;
    }
    else {
      if (((DAT_04865e30 & 1) == 0) && (iVar51 = __cxa_guard_acquire(&DAT_04865e30), iVar51 != 0)) {
        auVar32._8_4_ = 0x34000000;
        auVar32._0_8_ = 0x3400000034000000;
        auVar32._12_4_ = 0x34000000;
        uRam0000000004865e28 = auVar32._8_8_;
        _DAT_04865e20 = 0x3400000034000000;
        __cxa_guard_release(&DAT_04865e30);
      }
      uVar4 = _UNK_03cabe58;
      uVar3 = _DAT_03cabe50;
      lVar17 = *(long *)(*(long *)(param_1 + 0x3f8) + *(long *)(param_3 + 0x20) * 8);
      fVar30 = *(float *)(lVar17 + 0x50) - fVar30;
      fVar33 = *(float *)(lVar17 + 0x54) - fVar33;
      fVar34 = *(float *)(lVar17 + 0x58) - fVar34;
      fVar37 = *(float *)(lVar17 + 0x5c) - fVar37;
      fVar30 = fVar30 * fVar30;
      fVar33 = fVar33 * fVar33;
      fVar34 = fVar34 * fVar34;
      fVar37 = fVar37 * fVar37;
      auVar25._0_4_ = fVar30 + fVar33;
      auVar25._4_4_ = fVar34 + fVar37;
      auVar25._8_4_ = fVar30 + fVar33;
      auVar25._12_4_ = fVar34 + fVar37;
      auVar40 = NEON_ext(auVar25,auVar25,4,1);
      fVar30 = (float)_DAT_04865e20;
      if ((fVar30 < auVar40._0_4_ + auVar40._4_4_) ||
         (fVar33 = *(float *)(lVar17 + 0x30) - fVar65, fVar34 = *(float *)(lVar17 + 0x34) - fVar65,
         fVar65 = *(float *)(lVar17 + 0x38) - fVar65, fVar37 = *(float *)(lVar17 + 0x3c) - 0.0,
         fVar33 = fVar33 * fVar33, fVar34 = fVar34 * fVar34, fVar65 = fVar65 * fVar65,
         fVar37 = fVar37 * fVar37, auVar26._0_4_ = fVar33 + fVar34, auVar26._4_4_ = fVar65 + fVar37,
         auVar26._8_4_ = fVar33 + fVar34, auVar26._12_4_ = fVar65 + fVar37,
         auVar40 = NEON_ext(auVar26,auVar26,4,1), fVar30 < auVar40._0_4_ + auVar40._4_4_)) {
LAB_028c6278:
        cVar18 = *(char *)(param_2 + 0x50);
        *(ulong *)(param_2 + 0x28) = uVar13;
        *(undefined8 *)(param_2 + 0x20) = uVar103;
        *(undefined8 *)(param_2 + 0x38) = uVar4;
        *(undefined8 *)(param_2 + 0x30) = uVar3;
      }
      else {
        fVar33 = *(float *)(lVar17 + 0x40) + (float)_DAT_03cabb30;
        fVar34 = *(float *)(lVar17 + 0x44) + (float)((ulong)_DAT_03cabb30 >> 0x20);
        fVar37 = *(float *)(lVar17 + 0x48) + (float)_UNK_03cabb38;
        fVar65 = *(float *)(lVar17 + 0x4c) + (float)((ulong)_UNK_03cabb38 >> 0x20);
        fVar33 = fVar33 * fVar33;
        fVar34 = fVar34 * fVar34;
        fVar37 = fVar37 * fVar37;
        fVar65 = fVar65 * fVar65;
        auVar27._0_4_ = fVar33 + fVar34;
        auVar27._4_4_ = fVar37 + fVar65;
        auVar27._8_4_ = fVar33 + fVar34;
        auVar27._12_4_ = fVar37 + fVar65;
        auVar40 = NEON_ext(auVar27,auVar27,4,1);
        if (fVar30 < auVar40._0_4_ + auVar40._4_4_) goto LAB_028c6278;
        fVar33 = *(float *)(lVar17 + 0x40) + (float)_DAT_03cabe50;
        fVar34 = *(float *)(lVar17 + 0x44) + (float)((ulong)_DAT_03cabe50 >> 0x20);
        fVar37 = *(float *)(lVar17 + 0x48) + (float)_UNK_03cabe58;
        fVar65 = *(float *)(lVar17 + 0x4c) + (float)((ulong)_UNK_03cabe58 >> 0x20);
        fVar33 = fVar33 * fVar33;
        fVar34 = fVar34 * fVar34;
        fVar37 = fVar37 * fVar37;
        fVar65 = fVar65 * fVar65;
        auVar28._0_4_ = fVar33 + fVar34;
        auVar28._4_4_ = fVar37 + fVar65;
        auVar28._8_4_ = fVar33 + fVar34;
        auVar28._12_4_ = fVar37 + fVar65;
        auVar40 = NEON_ext(auVar28,auVar28,4,1);
        if (auVar40._0_4_ + auVar40._4_4_ <= fVar30) goto LAB_028c6144;
        cVar18 = *(char *)(param_2 + 0x50);
        *(ulong *)(param_2 + 0x28) = uVar13;
        *(undefined8 *)(param_2 + 0x20) = uVar103;
        *(undefined8 *)(param_2 + 0x38) = uVar4;
        *(undefined8 *)(param_2 + 0x30) = uVar3;
      }
      *(undefined8 *)(param_2 + 0x48) = uVar6;
      *(undefined8 *)(param_2 + 0x40) = uVar5;
      if (cVar18 == '\0') {
        *(undefined1 *)(param_2 + 0x50) = 1;
      }
LAB_028c6298:
      if (*(long *)(param_3 + 0x38) != 3) {
        *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x20);
      }
      if (*(char *)(param_3 + 0x12a) == '\0') {
        lVar17 = *(long *)(param_1 + 0x248);
      }
      else {
        lVar17 = *(long *)(param_1 + 0x240);
      }
    }
    *(long *)(param_3 + 0x30) = lVar17;
    uVar13 = *(ulong *)(param_3 + 0x28);
    if (uVar13 < 3) {
      if (uVar13 == 2) {
        *(undefined1 *)(param_3 + 299) = 1;
        *(undefined8 *)(param_3 + 0x40) = 5;
      }
      *(ulong *)(param_3 + 0x28) = uVar13 + 1;
    }
    else {
      *(undefined1 *)(param_3 + 299) = 1;
      if (*(char *)(param_3 + 0x129) == '\0') {
        if (*(char *)(param_3 + 0x12a) == '\0') {
          local_74[0] = '\0';
        }
        else if (4 < *(ulong *)(param_3 + 0x40)) {
          local_74[0] = '\x01';
          *(undefined8 *)(param_3 + 0x40) = 0;
        }
      }
      else {
        local_74[0] = *(char *)(param_3 + 0x12a);
      }
    }
  }
  else {
    fVar38 = (float)_DAT_03cabe50;
    fVar41 = (float)((ulong)_DAT_03cabe50 >> 0x20);
    auVar23._0_4_ = fVar38 + fVar41;
    fVar43 = (float)_UNK_03cabe58;
    fVar44 = (float)((ulong)_UNK_03cabe58 >> 0x20);
    auVar23._4_4_ = fVar43 + fVar44;
    auVar23._8_4_ = fVar38 + fVar41;
    auVar23._12_4_ = fVar43 + fVar44;
    auVar24._0_4_ = *(float *)PTR_DAT_047d41d0 * fVar38 + *(float *)(PTR_DAT_047d41d0 + 4) * fVar41;
    auVar24._4_4_ =
         *(float *)(PTR_DAT_047d41d0 + 8) * fVar43 + *(float *)(PTR_DAT_047d41d0 + 0xc) * fVar44;
    auVar24._8_4_ = *(float *)PTR_DAT_047d41d0 * fVar38 + *(float *)(PTR_DAT_047d41d0 + 4) * fVar41;
    auVar24._12_4_ =
         *(float *)(PTR_DAT_047d41d0 + 8) * fVar43 + *(float *)(PTR_DAT_047d41d0 + 0xc) * fVar44;
    auVar40 = NEON_ext(auVar23,auVar23,4,1);
    auVar31 = NEON_ext(auVar24,auVar24,4,1);
    fVar38 = auVar31._0_4_ + auVar31._4_4_;
    fVar41 = auVar40._0_4_ + auVar40._4_4_;
    fVar43 = auVar40._8_4_ + auVar40._12_4_;
    fVar44 = auVar40._0_4_ + auVar40._4_4_;
    fVar35 = auVar40._8_4_ + auVar40._12_4_;
    fVar29 = (float)_DAT_03caade0 / fVar41;
    fVar47 = (float)((ulong)_DAT_03caade0 >> 0x20) / fVar43;
    fVar48 = (float)_UNK_03caade8 / fVar44;
    fVar49 = (float)((ulong)_UNK_03caade8 >> 0x20) / fVar35;
    iVar51 = -(uint)(fVar41 == 0.0);
    iVar53 = -(uint)(fVar43 == 0.0);
    iVar55 = -(uint)(fVar44 == 0.0);
    iVar57 = -(uint)(fVar35 == 0.0);
    fVar41 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                             CONCAT12((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10),
                                      CONCAT11((byte)((uint)fVar29 >> 8) &
                                               ~(byte)((uint)iVar51 >> 8),
                                               SUB41(fVar29,0) & ~(byte)iVar51)));
    auVar45._0_8_ =
         CONCAT17((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18),
                  CONCAT16((byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10),
                           CONCAT15((byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar53 >> 8),
                                    CONCAT14(SUB41(fVar47,0) & ~(byte)iVar53,fVar41))));
    auVar45[8] = SUB41(fVar48,0) & ~(byte)iVar55;
    auVar45[9] = (byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar55 >> 8);
    auVar45[10] = (byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
    auVar45[0xb] = (byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
    auVar46[0xc] = SUB41(fVar49,0) & ~(byte)iVar57;
    auVar46._0_12_ = auVar45;
    auVar46[0xd] = (byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar57 >> 8);
    auVar46[0xe] = (byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
    auVar46[0xf] = (byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
    fVar29 = -fVar41;
    fVar43 = (float)((ulong)auVar45._0_8_ >> 0x20);
    fVar47 = -fVar43;
    fVar44 = auVar45._8_4_;
    fVar48 = -fVar44;
    fVar35 = auVar46._12_4_;
    auVar76._4_4_ = fVar48;
    auVar76._0_4_ = fVar48;
    auVar76._8_4_ = fVar48;
    auVar76._12_4_ = fVar48;
    auVar61._4_4_ = fVar44;
    auVar61._0_4_ = fVar44;
    auVar61._8_4_ = fVar44;
    auVar61._12_4_ = fVar44;
    auVar40 = NEON_ext(auVar61,auVar46,0xc,1);
    fVar67 = ((float)((float)*(undefined8 *)PTR_DAT_047d4180 <= fVar38) * fVar38 +
             *(float *)PTR_DAT_047d41a0 * (float)(fVar38 < (float)*(undefined8 *)PTR_DAT_047d4180) *
             fVar38) - *(float *)PTR_DAT_047d4190;
    auVar64._4_4_ = fVar43;
    auVar64._0_4_ = fVar43;
    auVar64._8_4_ = fVar43;
    auVar64._12_4_ = fVar43;
    auVar77._4_12_ = auVar76._4_12_;
    auVar77._0_4_ = fVar29;
    auVar79._0_8_ = auVar77._0_8_;
    auVar79._8_4_ = fVar47;
    auVar79._12_4_ = fVar48;
    auVar78._8_8_ = auVar79._8_8_;
    auVar78._4_4_ = fVar48;
    auVar78._0_4_ = fVar29;
    auVar80._0_12_ = auVar78._0_12_;
    auVar80._12_4_ = fVar48;
    auVar75 = NEON_ext(auVar80,auVar80,8,1);
    fVar38 = auVar75._0_4_;
    auVar81._4_12_ = auVar80._4_12_;
    auVar81._0_4_ = fVar38;
    auVar83._0_8_ = auVar81._0_8_;
    auVar83._8_4_ = auVar75._8_4_;
    auVar83._12_4_ = fVar48;
    auVar82._8_8_ = auVar83._8_8_;
    auVar82._4_4_ = fVar29;
    auVar82._0_4_ = fVar38;
    auVar84._0_12_ = auVar82._0_12_;
    auVar84._12_4_ = fVar47;
    auVar31 = NEON_ext(auVar64,auVar40,0xc,1);
    auVar85 = NEON_ext(auVar84,auVar75,8,1);
    auVar85 = NEON_ext(auVar85,auVar85,0xc,1);
    fVar49 = (float)_DAT_03cab640;
    fVar36 = (float)((ulong)_DAT_03cab640 >> 0x20);
    fVar39 = (float)_UNK_03cab648;
    fVar42 = (float)((ulong)_UNK_03cab648 >> 0x20);
    lVar17 = *(long *)(param_1 + 0x200);
    do {
      fVar86 = *(float *)(lVar17 + 400);
      fVar50 = *(float *)(lVar17 + 0x194);
      fVar52 = *(float *)(lVar17 + 0x198);
      fVar54 = *(float *)(lVar17 + 0x19c);
      bVar9 = false;
      if (fVar67 < *(float *)PTR_DAT_047d41c0 || *(float *)PTR_DAT_047d41b0 < fVar67) {
        fVar86 = fVar86 - fVar30;
        fVar50 = fVar50 - fVar33;
        fVar52 = fVar52 - fVar34;
        auVar92._4_4_ = fVar52;
        auVar92._0_4_ = fVar52;
        auVar92._8_4_ = fVar52;
        auVar92._12_4_ = fVar52;
        auVar93._4_12_ = auVar92._4_12_;
        auVar93._0_4_ = fVar86;
        auVar95._0_8_ = auVar93._0_8_;
        auVar95._8_4_ = fVar50;
        auVar95._12_4_ = fVar52;
        auVar94._8_8_ = auVar95._8_8_;
        auVar94._4_4_ = fVar52;
        auVar94._0_4_ = fVar86;
        auVar96._0_12_ = auVar94._0_12_;
        auVar96._12_4_ = fVar52;
        auVar102 = NEON_ext(auVar96,auVar96,8,1);
        fVar54 = auVar102._0_4_;
        auVar97._4_12_ = auVar96._4_12_;
        auVar97._0_4_ = fVar54;
        auVar99._0_8_ = auVar97._0_8_;
        auVar99._8_4_ = auVar102._8_4_;
        auVar99._12_4_ = fVar52;
        auVar98._8_8_ = auVar99._8_8_;
        auVar98._4_4_ = fVar86;
        auVar98._0_4_ = fVar54;
        auVar100._0_12_ = auVar98._0_12_;
        auVar100._12_4_ = fVar50;
        auVar88 = NEON_ext(auVar100,auVar102,8,1);
        auVar88 = NEON_ext(auVar88,auVar88,0xc,1);
        auVar89._0_4_ =
             (fVar86 * fVar35 + fVar41 * fVar49 * 0.0 + auVar88._0_4_ * auVar31._0_4_ * fVar49) -
             auVar40._0_4_ * fVar54;
        auVar89._4_4_ =
             (fVar50 * fVar35 + fVar43 * fVar36 * 0.0 + auVar88._4_4_ * auVar31._4_4_ * fVar36) -
             auVar40._4_4_ * auVar102._4_4_;
        auVar89._8_4_ =
             (fVar52 * fVar35 + fVar44 * fVar39 * 0.0 + auVar88._8_4_ * auVar31._8_4_ * fVar39) -
             auVar40._8_4_ * auVar102._8_4_;
        auVar89._12_4_ =
             (fVar35 * 0.0 + fVar86 * fVar41 * fVar42 + auVar88._12_4_ * auVar31._12_4_ * fVar42) -
             auVar40._12_4_ * auVar102._12_4_;
        auVar91._4_4_ = auVar89._8_4_;
        auVar91._0_4_ = auVar89._8_4_;
        auVar91._8_4_ = auVar89._8_4_;
        auVar91._12_4_ = auVar89._8_4_;
        auVar88 = NEON_ext(auVar91,auVar89,0xc,1);
        auVar101._4_4_ = auVar89._4_4_;
        auVar101._0_4_ = auVar89._4_4_;
        auVar101._8_4_ = auVar89._4_4_;
        auVar101._12_4_ = auVar89._4_4_;
        auVar102 = NEON_ext(auVar101,auVar88,0xc,1);
        fVar86 = fVar30 + ((fVar29 * auVar89._12_4_ + fVar35 * auVar89._0_4_ * fVar49 +
                           auVar85._0_4_ * auVar102._0_4_ * fVar49) - auVar88._0_4_ * fVar38);
        fVar50 = fVar33 + ((fVar47 * auVar89._12_4_ + fVar35 * auVar89._4_4_ * fVar36 +
                           auVar85._4_4_ * auVar102._4_4_ * fVar36) - auVar88._4_4_ * auVar75._4_4_)
        ;
        fVar52 = fVar34 + ((fVar48 * auVar89._12_4_ + fVar35 * auVar89._8_4_ * fVar39 +
                           auVar85._8_4_ * auVar102._8_4_ * fVar39) - auVar88._8_4_ * auVar75._8_4_)
        ;
        fVar54 = fVar37 + 0.0;
      }
      auVar90._0_4_ = fVar86 - (fVar30 - ABS(fVar65 * 0.5));
      auVar90._4_4_ = fVar50 - (fVar33 - ABS(fVar65 * 0.5));
      auVar90._8_4_ = fVar52 - (fVar34 - ABS(fVar65 * 0.5));
      auVar90._12_4_ = fVar54 - 0.0;
      auVar87._0_4_ = (fVar30 + ABS(fVar65 * 0.5)) - fVar86;
      auVar87._4_4_ = (fVar33 + ABS(fVar65 * 0.5)) - fVar50;
      auVar87._8_4_ = (fVar34 + ABS(fVar65 * 0.5)) - fVar52;
      auVar87._12_4_ = 0.0 - fVar54;
      auVar88 = NEON_fmin(auVar90,auVar87,4);
      if ((0.0 <= auVar88._0_4_) && (0.0 <= auVar88._4_4_)) {
        bVar9 = 0.0 <= auVar88._8_4_;
      }
    } while ((*(long *)(param_1 + 0x208) != lVar17 + 0x230) && (lVar17 = lVar17 + 0x230, !bVar9));
    if (!bVar9) goto LAB_028c6120;
  }
  cVar12 = (char)local_b0;
LAB_028c5db4:
  if (cVar12 != *(char *)(param_3 + 0x128)) {
    lVar17 = *(long *)(param_3 + 0x48);
    if (lVar17 == 0) {
      lVar19 = 0;
    }
    else if (*(short *)(lVar17 + 0x1a) == 0) {
      lVar19 = 0;
    }
    else {
      psVar1 = (short *)(lVar17 + 0x1a);
      sVar16 = *(short *)(lVar17 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar16) {
          cVar18 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar16 + 1;
            cVar18 = ExclusiveMonitorsStatus();
          }
          if (cVar18 != '\0') goto LAB_028c646c;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_028c646c:
          bVar7 = false;
        }
        if (bVar7) {
          lVar19 = 0;
          if (*(long *)(lVar17 + 0x10) != 0) {
            lVar19 = *(long *)(lVar17 + 0x10) + -8;
          }
          break;
        }
        lVar19 = 0;
        sVar16 = sVar2;
      } while (sVar2 != 0);
    }
    plVar14 = *(long **)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    if (plVar14 != (long *)0x0) {
      (**(code **)(*plVar14 + 0x18))();
    }
    *(long *)(param_2 + 8) = lVar19;
    if (lVar19 != 0) {
      FUN_01ac1e54(*(undefined8 *)(param_3 + 0x110),&local_b0);
      *(char *)(param_3 + 0x128) = cVar12;
      if (cVar12 == '\0') {
        *(undefined8 *)(param_3 + 0x38) = 5;
      }
    }
  }
  uVar13 = *(ulong *)(param_3 + 0x38);
  if (uVar13 < 2) {
    if (uVar13 == 1) {
      *(undefined8 *)(param_3 + 0x38) = 0;
    }
  }
  else {
    *(ulong *)(param_3 + 0x38) = uVar13 - 1;
    local_74[0] = '\0';
  }
  cVar18 = local_74[0];
  if ((*(char *)(param_1 + 0x23d) == '\0') && (local_74[0] != *(char *)(param_3 + 0x129))) {
    if (*(long *)(param_2 + 8) == 0) {
      lVar17 = *(long *)(param_3 + 0x48);
      if (lVar17 == 0) {
        lVar19 = 0;
      }
      else if (*(short *)(lVar17 + 0x1a) == 0) {
        lVar19 = 0;
      }
      else {
        psVar1 = (short *)(lVar17 + 0x1a);
        sVar16 = *(short *)(lVar17 + 0x1a);
        do {
          sVar2 = *psVar1;
          if (sVar2 == sVar16) {
            cVar15 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar16 + 1;
              cVar15 = ExclusiveMonitorsStatus();
            }
            if (cVar15 != '\0') goto LAB_028c64d8;
            bVar7 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_028c64d8:
            bVar7 = false;
          }
          if (bVar7) {
            lVar19 = 0;
            if (*(long *)(lVar17 + 0x10) != 0) {
              lVar19 = *(long *)(lVar17 + 0x10) + -8;
            }
            break;
          }
          lVar19 = 0;
          sVar16 = sVar2;
        } while (sVar2 != 0);
      }
      plVar14 = *(long **)(param_2 + 8);
      *(undefined8 *)(param_2 + 8) = 0;
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x18))();
      }
      *(long *)(param_2 + 8) = lVar19;
      if (lVar19 == 0) {
        return;
      }
    }
    FUN_01ac1e54(*(undefined8 *)(param_3 + 0x118),local_74);
    *(char *)(param_3 + 0x129) = cVar18;
  }
  return;
}



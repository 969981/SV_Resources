/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03071c50; name: FUN_03071c50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_03071c50(long param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,long param_5,
            undefined8 param_6,undefined8 param_7,undefined4 param_8,int *param_9,
            undefined8 *param_10,undefined8 *param_11,float *param_12,long param_13)

{
  int iVar1;
  undefined8 *puVar2;
  short sVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  float *pfVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  undefined8 uVar23;
  uint uVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar34;
  undefined1 auVar28 [12];
  float fVar32;
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar35;
  int iVar36;
  float fVar38;
  int iVar39;
  undefined1 auVar37 [16];
  float fVar40;
  float fVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar58;
  float fVar59;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar60;
  ulong uVar61;
  float fVar66;
  float fVar67;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar68;
  uint uVar69;
  float fVar74;
  undefined8 uVar70;
  float fVar75;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  int iVar81;
  undefined4 uVar82;
  float fVar83;
  float fVar87;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar88;
  undefined1 auVar86 [16];
  float fVar89;
  float fVar91;
  float fVar92;
  undefined1 auVar90 [16];
  undefined1 auVar93 [16];
  ulong uVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  int iVar98;
  undefined1 auVar97 [16];
  float fStack_180;
  ulong local_118;
  ulong local_110;
  long local_108;
  ulong local_100;
  ulong local_f8;
  undefined8 local_f0;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  char local_98;
  undefined4 local_90 [4];
  ulong local_78;
  
  local_90[0] = param_8;
  lVar10 = nn::os::GetSystemTick();
  FUN_03072d30(&local_a0,param_1,local_90);
  uStack_a8 = param_10[1];
  local_b0 = *param_10;
  if (param_12[1] < (float)*param_11) {
    uVar23 = 0;
    goto LAB_03072c30;
  }
  local_d8 = 0;
  local_d0 = 0x8000000000000000;
  lVar12 = tpidr_el0;
  lVar15 = *(long *)(lVar12 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar12 + 0x1000b8) = lVar15;
  }
  local_c8 = *(long *)(*(long *)(lVar15 + 0x3d0) + 0x10);
  if (*(long *)(local_c8 + 8) == 0) {
    local_b8 = 0x1000;
    local_f0 = 0x1000;
    if (local_c8 == 0) goto LAB_03071d94;
    local_118 = 0x1000;
    if (*(ulong *)(local_c8 + 0x28) < 0x1000) {
LAB_03071d48:
      local_c0 = FUN_031cf3b4(local_c8,&local_118);
    }
    else {
      local_c0 = *(long *)(local_c8 + 0x38);
      if (*(ulong *)(local_c8 + 0x40) < local_c0 + 0x1000U) goto LAB_03071d48;
      *(ulong *)(local_c8 + 0x38) = local_c0 + 0x1000U;
    }
  }
  else {
    local_c8 = 0;
LAB_03071d94:
    local_b8 = 0x1000;
    local_f0 = 0x1000;
    local_c0 = (**(code **)PTR_DAT_047d1a08)(1,&local_f0,0x40);
  }
  lVar25 = (param_4 >> 0x16 & 0x3ff) * 0x100;
  local_d0 = CONCAT44(0x80000080,(int)local_d0);
  fVar40 = *(float *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + lVar25) + 0x20) +
                               0x68) + 0xb0);
  fVar52 = (float)*param_11 - fVar40;
  local_e0 = CONCAT44((float)((ulong)*param_11 >> 0x20) - fVar40,fVar52);
  sVar3 = *(short *)(param_5 + 8);
  local_118 = 0;
  local_110 = 0x8000000000000000;
  lVar15 = *(long *)(lVar12 + 0x1000b8);
  local_d8 = local_c0;
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar12 + 0x1000b8) = lVar15;
  }
  local_108 = *(long *)(*(long *)(lVar15 + 0x3d0) + 0x10);
  if (*(long *)(local_108 + 8) != 0) {
    local_108 = 0;
  }
  local_f8 = -((ulong)(long)sVar3 >> 0x1f & 1) & 0xffffffe000000000 |
             ((long)sVar3 & 0xffffffffU) << 5;
  local_78 = local_f8;
  if (local_108 == 0) {
    local_100 = (**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
  }
  else {
    local_f0 = local_f8 + 0x3f & 0xffffffffffffffc0;
    if (local_f0 <= *(ulong *)(local_108 + 0x28)) {
      local_100 = *(ulong *)(local_108 + 0x38);
      if (local_f0 + local_100 <= *(ulong *)(local_108 + 0x40)) {
        *(ulong *)(local_108 + 0x38) = local_f0 + local_100;
        goto LAB_03071e98;
      }
    }
    local_100 = FUN_031cf3b4(local_108,&local_f0);
  }
LAB_03071e98:
  local_110 = CONCAT44((int)sVar3,(undefined4)local_110) | 0x8000000000000000;
  local_118 = local_100;
  FUN_0306a200(param_1,param_2,param_4 & 0xffffffff,param_5);
  uVar19 = local_118;
  if (local_100 == local_118) {
    local_110 = local_110 & 0xffffffff00000000;
  }
  if (local_108 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar14 = local_f8 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_108 + 0x28) < uVar14) ||
       (*(long *)(local_108 + 0x38) != uVar14 + local_100)) {
      if (local_100 != 0) {
        if (*(ulong *)(local_108 + 0x28) < uVar14 + 0x40) {
          *(int *)(*(long *)(local_108 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_108 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_108 + 0x10) + 0x18))
                    (*(long **)(local_108 + 0x10),local_100 - (long)*(int *)(local_100 - 4),
                     uVar14 + 0x44);
        }
        else {
          if (*(long *)(local_108 + 0x38) == uVar14 + local_100) {
            *(ulong *)(local_108 + 0x38) = local_100;
            goto LAB_03071fb4;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(ulong *)(local_108 + 0x38) = local_100;
      if (*(ulong *)(local_108 + 0x48) == local_100) {
LAB_03071fb4:
        FUN_031cf578();
      }
    }
  }
  uVar61 = local_110;
  uVar14 = local_110 >> 0x20;
  local_110 = uVar14 << 0x20;
  if ((uVar19 != 0) && (-1 < (long)uVar61)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,uVar19,uVar14 << 5);
  }
  uVar23 = local_b0;
  uVar19 = local_d0;
  lVar25 = *(long *)(*(long *)(param_1 + 0x38) + lVar25);
  lVar18 = *(long *)(lVar25 + 0x20);
  iVar36 = *param_9;
  iVar81 = param_9[1];
  iVar39 = *(int *)(lVar18 + 0x40);
  fVar38 = (float)*(undefined8 *)(lVar25 + 0x68);
  fVar46 = (float)((ulong)*(undefined8 *)(lVar25 + 0x68) >> 0x20);
  fVar27 = (float)*(undefined8 *)(lVar25 + 0x60);
  fVar33 = (float)((ulong)*(undefined8 *)(lVar25 + 0x60) >> 0x20);
  fVar35 = *(float *)(lVar25 + 0x7c);
  lVar15 = 0x38;
  if (iVar39 <= iVar36) {
    lVar15 = 0xf0;
  }
  iVar98 = 0;
  if (iVar39 <= iVar36) {
    iVar98 = iVar39;
  }
  iVar1 = 0;
  if (iVar39 <= iVar81) {
    iVar1 = iVar39;
  }
  pfVar16 = (float *)(*(long *)(lVar18 + lVar15) + (long)(iVar36 - iVar98) * 0x10);
  fVar44 = *pfVar16;
  fVar45 = pfVar16[1];
  fVar47 = pfVar16[2];
  lVar15 = 0x38;
  if (iVar39 <= iVar81) {
    lVar15 = 0xf0;
  }
  auVar43._8_8_ = uStack_a8;
  auVar43._0_8_ = local_b0;
  auVar29 = *(undefined1 (*) [16])(*(long *)(lVar18 + lVar15) + (long)(iVar81 - iVar1) * 0x10);
  fVar89 = (float)*param_3;
  fVar26 = (float)local_b0;
  fVar48 = fVar26 * fVar89;
  fVar91 = (float)((ulong)*param_3 >> 0x20);
  fVar32 = (float)((ulong)local_b0 >> 0x20);
  fVar50 = fVar32 * fVar91;
  fVar92 = (float)param_3[1];
  fVar34 = (float)uStack_a8;
  fVar51 = fVar34 * fVar92;
  fVar49 = fVar48 + fVar50 + fVar51;
  fVar51 = fVar48 + fVar50 + fVar51;
  auVar41 = *(undefined1 (*) [16])(lVar25 + 0x90);
  uVar13 = NEON_fmov(0x3f800000,4);
  fVar50 = (float)((ulong)uStack_a8 >> 0x20);
  fVar48 = *param_12;
  fVar89 = fVar89 - fVar26 * fVar49;
  fVar91 = fVar91 - fVar32 * fVar51;
  fVar92 = fVar92 - fVar34 * fVar49;
  fVar49 = (float)((ulong)param_3[1] >> 0x20) - fVar50 * fVar51;
  iVar36 = (int)local_d0;
  uVar14 = local_d0 & 0xffffffff;
  if (0 < (int)local_d0) {
    pfVar16 = (float *)(local_d8 + 0x10);
    do {
      fVar60 = *pfVar16 - pfVar16[-4];
      fVar66 = pfVar16[1] - pfVar16[-3];
      fVar67 = pfVar16[2] - pfVar16[-2];
      fVar51 = fVar89 - pfVar16[-4];
      fVar58 = fVar91 - pfVar16[-3];
      fVar59 = fVar92 - pfVar16[-2];
      fVar68 = fVar51 * fVar60;
      fVar74 = fVar58 * fVar66;
      fVar75 = fVar59 * fVar67;
      fVar76 = fVar60 * fVar60 + fVar66 * fVar66 + fVar67 * fVar67;
      iVar81 = -(uint)(fVar76 == 0.0);
      uVar82 = CONCAT13(~(byte)((uint)iVar81 >> 0x18),
                        CONCAT12(~(byte)((uint)iVar81 >> 0x10),
                                 CONCAT11(~(byte)((uint)iVar81 >> 8),~(byte)iVar81)));
      uVar70 = NEON_fminnm(CONCAT44((fVar68 + fVar74 + fVar75) /
                                    (fVar60 * fVar60 + fVar66 * fVar66 + fVar67 * fVar67),
                                    (fVar68 + fVar74 + fVar75) / fVar76) & CONCAT44(uVar82,uVar82),
                           uVar13,4);
      uVar70 = NEON_fmax(uVar70,0,4);
      fVar68 = (float)((ulong)uVar70 >> 0x20);
      fVar51 = fVar51 - fVar60 * (float)uVar70;
      fVar58 = fVar58 - fVar66 * fVar68;
      fVar59 = fVar59 - fVar67 * (float)uVar70;
      fVar60 = (fVar49 - pfVar16[-1]) - (pfVar16[3] - pfVar16[-1]) * fVar68;
      auVar56._0_4_ = fVar51 * fVar51;
      auVar56._4_4_ = fVar58 * fVar58;
      auVar56._8_4_ = fVar59 * fVar59;
      auVar56._12_4_ = fVar60 * fVar60;
      auVar62 = NEON_ext(auVar56,auVar56,8,1);
      if (!(bool)(~(auVar56._0_4_ + auVar56._4_4_ + auVar62._0_4_ < fVar52 * fVar52) & 1)) {
        uVar23 = 0;
        goto LAB_03072b38;
      }
      uVar14 = uVar14 - 1;
      pfVar16 = pfVar16 + 8;
    } while (uVar14 != 0);
  }
  fVar52 = auVar29._0_4_;
  fVar58 = auVar29._4_4_;
  fVar67 = (float)*(undefined8 *)(lVar25 + 0x80);
  fVar68 = (float)((ulong)*(undefined8 *)(lVar25 + 0x80) >> 0x20);
  fVar74 = (float)*(undefined8 *)(lVar25 + 0x88);
  fVar75 = (float)((ulong)*(undefined8 *)(lVar25 + 0x88) >> 0x20);
  fVar60 = auVar29._8_4_;
  fVar51 = auVar41._0_4_ + fVar67 * fVar47 + fVar27 * fVar44 + *(float *)(lVar25 + 0x70) * fVar45;
  fVar59 = auVar41._4_4_ + fVar68 * fVar47 + fVar33 * fVar44 + *(float *)(lVar25 + 0x74) * fVar45;
  fVar66 = auVar41._8_4_ + fVar74 * fVar47 + fVar38 * fVar44 + *(float *)(lVar25 + 0x78) * fVar45;
  fVar44 = auVar41._12_4_ + fVar75 * fVar47 + fVar46 * fVar44 + fVar35 * fVar45;
  fVar51 = fVar51 + ((auVar41._0_4_ +
                     fVar67 * fVar60 + fVar27 * fVar52 + *(float *)(lVar25 + 0x70) * fVar58) -
                    fVar51) * fVar48;
  fVar59 = fVar59 + ((auVar41._4_4_ +
                     fVar68 * fVar60 + fVar33 * fVar52 + *(float *)(lVar25 + 0x74) * fVar58) -
                    fVar59) * fVar48;
  fVar66 = fVar66 + ((auVar41._8_4_ +
                     fVar74 * fVar60 + fVar38 * fVar52 + *(float *)(lVar25 + 0x78) * fVar58) -
                    fVar66) * fVar48;
  fVar26 = fVar26 * fVar51;
  fVar32 = fVar32 * fVar59;
  fVar33 = fVar34 * fVar66;
  fVar27 = fVar26 + fVar32 + fVar33;
  fVar33 = fVar26 + fVar32 + fVar33;
  lVar15 = *(long *)(lVar12 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    auVar43._8_4_ = fVar34;
    auVar43._0_8_ = uVar23;
    auVar43._12_4_ = fVar50;
    *(long *)(lVar12 + 0x1000b8) = lVar15;
  }
  auVar29._0_8_ = CONCAT44(fVar33,fVar27);
  lVar15 = *(long *)(*(long *)(lVar15 + 0x3d0) + 0x10);
  auVar29._8_8_ = auVar29._0_8_;
  if (*(long *)(lVar15 + 8) == 0) {
    uVar14 = (long)iVar36 * 0x20;
    local_78 = uVar14;
    if (lVar15 == 0) goto LAB_03072264;
    local_118 = uVar14 + 0x3f & 0xffffffffffffffc0;
    if (*(ulong *)(lVar15 + 0x28) < local_118) {
LAB_030721c4:
      lVar25 = FUN_031cf3b4(lVar15,&local_118);
      auVar29._8_4_ = fVar27;
      auVar29._12_4_ = fVar33;
      auVar43._8_4_ = fVar34;
      auVar43._0_8_ = uVar23;
      auVar43._12_4_ = fVar50;
    }
    else {
      lVar25 = *(long *)(lVar15 + 0x38);
      if (*(ulong *)(lVar15 + 0x40) < local_118 + lVar25) goto LAB_030721c4;
      *(ulong *)(lVar15 + 0x38) = local_118 + lVar25;
    }
  }
  else {
    local_78 = (long)iVar36 << 5;
LAB_03072264:
    uVar14 = local_78;
    lVar25 = (**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
    auVar43._8_4_ = fVar34;
    auVar43._0_8_ = uVar23;
    auVar43._12_4_ = fVar50;
    lVar15 = 0;
    auVar29._8_4_ = fVar27;
    auVar29._12_4_ = fVar33;
  }
  fVar27 = auVar43._0_4_;
  fVar33 = auVar43._4_4_;
  fVar38 = auVar43._8_4_;
  fVar45 = auVar43._12_4_;
  lVar18 = *(long *)(lVar12 + 0x1000b8);
  if (lVar18 == 0) {
    lVar18 = FUN_00e5d3b4();
    auVar43._8_4_ = fVar34;
    auVar43._0_8_ = uVar23;
    auVar43._12_4_ = fVar50;
    *(long *)(lVar12 + 0x1000b8) = lVar18;
  }
  fVar51 = fVar51 - fVar27 * auVar29._0_4_;
  fVar59 = fVar59 - fVar33 * auVar29._4_4_;
  fVar66 = fVar66 - fVar38 * auVar29._8_4_;
  fVar52 = (fVar44 + ((auVar41._12_4_ + fVar75 * fVar60 + fVar46 * fVar52 + fVar35 * fVar58) -
                     fVar44) * fVar48) - fVar45 * auVar29._12_4_;
  lVar12 = *(long *)(*(long *)(lVar18 + 0x3d0) + 0x10);
  local_78 = uVar14;
  if ((*(long *)(lVar12 + 8) == 0) && (lVar12 != 0)) {
    local_118 = uVar14 + 0x3f & 0xffffffffffffffc0;
    if (local_118 <= *(ulong *)(lVar12 + 0x28)) {
      lVar18 = *(long *)(lVar12 + 0x38);
      if (local_118 + lVar18 <= *(ulong *)(lVar12 + 0x40)) {
        *(ulong *)(lVar12 + 0x38) = local_118 + lVar18;
        goto LAB_03072378;
      }
    }
    lVar18 = FUN_031cf3b4(lVar12,&local_118);
    auVar43._8_4_ = fVar34;
    auVar43._0_8_ = uVar23;
    auVar43._12_4_ = fVar50;
  }
  else {
    lVar18 = (**(code **)PTR_DAT_047d1a08)(1,&local_78,0x40);
    auVar43._8_4_ = fVar34;
    auVar43._0_8_ = uVar23;
    auVar43._12_4_ = fVar50;
    lVar12 = 0;
  }
LAB_03072378:
  fVar44 = auVar43._0_4_;
  fVar35 = fVar44 * (fVar89 - fVar51);
  fVar47 = auVar43._4_4_;
  fVar27 = fVar47 * (fVar91 - fVar59);
  fVar26 = auVar43._8_4_;
  fVar38 = fVar26 * (fVar92 - fVar66);
  fVar33 = fVar38 + fVar35 + fVar27;
  fVar38 = fVar38 + fVar35 + fVar27;
  fVar35 = (fVar89 - fVar51) - fVar44 * fVar33;
  fVar27 = (fVar91 - fVar59) - fVar47 * fVar38;
  fVar33 = (fVar92 - fVar66) - fVar26 * fVar33;
  fVar38 = (fVar49 - fVar52) - auVar43._12_4_ * fVar38;
  auVar29 = NEON_ext(auVar43,auVar43,4,1);
  auVar41._4_4_ = fVar27;
  auVar41._0_4_ = fVar35;
  auVar41._8_4_ = fVar33;
  auVar41._12_4_ = fVar38;
  auVar62._4_4_ = fVar27;
  auVar62._0_4_ = fVar35;
  auVar62._8_4_ = fVar33;
  auVar62._12_4_ = fVar38;
  auVar41 = NEON_ext(auVar41,auVar62,4,1);
  fVar45 = fVar44 * auVar41._0_4_ - auVar29._0_4_ * fVar35;
  fVar46 = fVar47 * auVar41._4_4_ - auVar29._4_4_ * fVar27;
  fVar44 = fVar26 * fVar35 - fVar44 * fVar33;
  fVar47 = auVar43._12_4_ * fVar27 - fVar47 * fVar38;
  auVar64._4_4_ = fVar46;
  auVar64._0_4_ = fVar45;
  auVar64._8_4_ = fVar44;
  auVar64._12_4_ = fVar47;
  auVar72._4_4_ = fVar46;
  auVar72._0_4_ = fVar45;
  auVar72._8_4_ = fVar44;
  auVar72._12_4_ = fVar47;
  auVar29 = NEON_ext(auVar64,auVar72,4,1);
  fVar46 = auVar29._0_4_;
  fVar44 = auVar29._4_4_;
  fVar47 = fVar46 * fVar46 + fVar44 * fVar44 + fVar45 * fVar45;
  if (fVar47 == 0.0) {
    fVar26 = 0.0;
    fVar44 = 0.0;
    fVar45 = 0.0;
  }
  else {
    fVar47 = SQRT(fVar47);
    fVar26 = fVar46 / fVar47;
    fVar44 = fVar44 / SQRT(fVar46 * fVar46 + fVar44 * fVar44 + fVar45 * fVar45);
    fVar45 = fVar45 / fVar47;
  }
  fVar46 = fVar35 * fVar35 + fVar27 * fVar27 + fVar33 * fVar33;
  fVar47 = fVar35 * fVar35 + fVar27 * fVar27 + fVar33 * fVar33;
  uVar23 = *param_11;
  lVar11 = nn::os::GetSystemTick();
  puVar9 = PTR_DAT_047d19e0;
  fVar32 = (float)uVar13;
  if (iVar36 < 1) {
    uVar22 = 0;
    uVar24 = 0;
  }
  else {
    auVar95._4_4_ = fVar44;
    auVar95._0_4_ = fVar26;
    auVar95._8_4_ = fVar45;
    fStack_180 = (float)uVar23;
    iVar36 = -(uint)(fVar46 == 0.0);
    iVar81 = -(uint)(fVar47 == 0.0);
    iVar39 = -(uint)(fVar46 == 0.0);
    fVar48 = fVar35 / fVar46;
    fVar50 = fVar27 / fVar47;
    fVar34 = fVar33 / fVar46;
    fVar48 = (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18),
                             CONCAT12((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10),
                                      CONCAT11((byte)((uint)fVar48 >> 8) &
                                               ~(byte)((uint)iVar36 >> 8),
                                               SUB41(fVar48,0) & ~(byte)iVar36)));
    auVar28._0_8_ =
         CONCAT17((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar81 >> 0x18),
                  CONCAT16((byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar81 >> 0x10),
                           CONCAT15((byte)((uint)fVar50 >> 8) & ~(byte)((uint)iVar81 >> 8),
                                    CONCAT14(SUB41(fVar50,0) & ~(byte)iVar81,fVar48))));
    auVar28[8] = SUB41(fVar34,0) & ~(byte)iVar39;
    auVar28[9] = (byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar39 >> 8);
    auVar28[10] = (byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10);
    auVar28[0xb] = (byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18);
    fVar50 = (float)((ulong)auVar28._0_8_ >> 0x20);
    fVar34 = auVar28._8_4_;
    fVar58 = -(fVar51 * fVar48 + fVar59 * fVar50 + fVar66 * fVar34);
    auVar30._12_4_ = fVar58;
    auVar30._0_12_ = auVar28;
    fVar60 = -(fVar51 * fVar26 + fVar59 * fVar44 + fVar66 * fVar45);
    auVar95._12_4_ = fVar60;
    lVar17 = 0;
    fVar67 = (float)local_f0 * fVar26;
    fVar68 = local_f0._4_4_ * fVar44;
    auVar78._4_4_ = fVar68;
    auVar78._0_4_ = fVar67;
    auVar78._8_4_ = fStack_e8 * fVar45;
    auVar78._12_4_ = fStack_e4 * fVar60;
    auVar4._4_4_ = fVar68;
    auVar4._0_4_ = fVar67;
    auVar4._8_4_ = fStack_e8 * fVar45;
    auVar4._12_4_ = fStack_e4 * fVar60;
    auVar41 = NEON_ext(auVar78,auVar4,8,1);
    auVar42._8_8_ = _UNK_03caad18;
    auVar42._0_8_ = _DAT_03caad10;
    auVar29 = a64_TBL(ZEXT816(0),auVar95,auVar42);
    auVar43 = a64_TBL(ZEXT816(0),auVar30,auVar42);
    uVar22 = 0;
    uVar24 = 0;
    do {
      pfVar16 = (float *)(local_d8 + lVar17);
      fVar74 = *pfVar16;
      fVar75 = pfVar16[1];
      fVar76 = pfVar16[2];
      uVar70 = *(undefined8 *)(pfVar16 + 6);
      fVar54 = (float)((ulong)uVar70 >> 0x20);
      uVar23 = *(undefined8 *)(pfVar16 + 4);
      fVar53 = (float)((ulong)uVar23 >> 0x20);
      auVar63._0_4_ = fVar26 * (float)uVar23;
      auVar63._4_4_ = fVar44 * fVar53;
      auVar63._8_4_ = fVar45 * (float)uVar70;
      auVar63._12_4_ = fVar60 * fVar54;
      auVar77._0_4_ = fVar48 * (float)uVar23;
      auVar77._4_4_ = fVar50 * fVar53;
      auVar77._8_4_ = fVar34 * (float)uVar70;
      auVar77._12_4_ = fVar58 * fVar54;
      auVar55._0_4_ = fVar26 * fVar74;
      auVar55._4_4_ = fVar44 * fVar75;
      auVar55._8_4_ = fVar45 * fVar76;
      auVar55._12_4_ = fVar60 * pfVar16[3];
      auVar71._0_4_ = fVar48 * fVar74;
      auVar71._4_4_ = fVar50 * fVar75;
      auVar71._8_4_ = fVar34 * fVar76;
      auVar71._12_4_ = fVar58 * pfVar16[3];
      auVar56 = NEON_ext(auVar55,auVar55,8,1);
      auVar62 = NEON_ext(auVar63,auVar63,8,1);
      auVar72 = NEON_ext(auVar71,auVar71,8,1);
      auVar78 = NEON_ext(auVar77,auVar77,8,1);
      auVar64 = auVar43 ^ (auVar43 ^ auVar29) & *(undefined1 (*) [16])(puVar9 + 0x30);
      auVar85._0_4_ = auVar56._0_4_ + auVar55._0_4_ + auVar55._4_4_ + auVar64._0_4_;
      auVar85._4_4_ = auVar62._0_4_ + auVar63._0_4_ + auVar63._4_4_ + auVar64._4_4_;
      auVar85._8_4_ = auVar72._0_4_ + auVar71._0_4_ + auVar71._4_4_ + auVar64._8_4_;
      auVar85._12_4_ = auVar78._0_4_ + auVar77._0_4_ + auVar77._4_4_ + auVar64._12_4_;
      auVar56 = NEON_rev64(auVar85,4);
      uVar61 = CONCAT44(-(uint)(auVar85._12_4_ < auVar85._8_4_),
                        -(uint)(auVar85._12_4_ < auVar85._8_4_)) & 0x100000001;
      iVar36 = (int)uVar61;
      iVar81 = (int)(uVar61 >> 0x20);
      auVar65._0_8_ = CONCAT44((iVar81 << 0x1f) >> 0x1f,(iVar36 << 0x1f) >> 0x1f);
      auVar65._8_4_ = (iVar36 << 0x1f) >> 0x1f;
      auVar65._12_4_ = (iVar81 << 0x1f) >> 0x1f;
      auVar84._8_8_ = auVar65._8_8_;
      auVar84._0_8_ = auVar65._0_8_;
      auVar85 = auVar85 ^ (auVar85 ^ auVar56) & auVar84;
      fVar54 = auVar85._4_4_;
      uVar61 = CONCAT44(fVar54,fVar54);
      fVar88 = auVar85._12_4_;
      fVar53 = fVar54;
      if (0.0 <= fVar88) {
        fVar87 = auVar85._8_4_;
        fVar53 = auVar85._0_4_;
        uVar94 = CONCAT44(fVar53,fVar53);
        if (fVar87 <= 1.0) {
          iVar36 = -(uint)(fVar88 - fVar87 == 0.0);
          fVar83 = (float)((uint)(fVar32 / (fVar88 - fVar87)) &
                          CONCAT13(~(byte)((uint)iVar36 >> 0x18),
                                   CONCAT12(~(byte)((uint)iVar36 >> 0x10),
                                            CONCAT11(~(byte)((uint)iVar36 >> 8),~(byte)iVar36))));
          if (fVar87 < 0.0) {
            uVar94 = (ulong)(uint)(fVar53 - (fVar54 - fVar53) * fVar83 * fVar87);
          }
          if (1.0 < fVar88) {
            uVar61 = (ulong)(uint)(fVar53 + (fVar54 - fVar53) * (fVar32 - fVar87) * fVar83);
          }
          uVar21 = uVar94 & 0x7fffffff7fffffff;
          uVar69 = -(uint)((float)(uVar61 & 0x7fffffff7fffffff) < (float)uVar21);
          uVar21 = uVar21 ^ (uVar21 ^ uVar61 & 0x7fffffff7fffffff) & (ulong)uVar69;
          fVar53 = (float)CONCAT13((byte)(-(uint)((float)((uint)uVar94 ^
                                                         ((uint)uVar94 ^ (uint)uVar61) & ~uVar69) <
                                                 0.0) >> 0x18) & 0x80 | (byte)(uVar21 >> 0x18),
                                   (int3)uVar21);
        }
      }
      if (0.0 < (float)((uint)fVar53 ^
                       ((uint)fVar53 ^ (uint)(fVar53 - (fVar67 + fVar68 + auVar41._0_4_ + fVar60)))
                       & -(uint)(ABS(fVar53) < fStack_180 * 0.007874016))) {
        lVar20 = (long)(int)uVar24;
        uVar24 = uVar24 + 1;
        pfVar16 = (float *)(lVar25 + lVar20 * 0x20);
      }
      else {
        lVar20 = (long)(int)uVar22;
        uVar22 = uVar22 + 1;
        pfVar16 = (float *)(lVar18 + lVar20 * 0x20);
      }
      lVar17 = lVar17 + 0x20;
      pfVar16[2] = fVar76;
      pfVar16[3] = ABS(fVar53);
      *pfVar16 = fVar74;
      pfVar16[1] = fVar75;
      *(undefined8 *)(pfVar16 + 6) = uVar70;
      *(undefined8 *)(pfVar16 + 4) = uVar23;
    } while ((uVar19 & 0xffffffff) * 0x20 != lVar17);
  }
  lVar17 = nn::os::GetSystemTick();
  *(long *)(param_13 + 0x78) = (lVar17 - lVar11) + *(long *)(param_13 + 0x78);
  *(int *)(param_13 + 0x80) = *(int *)(param_13 + 0x80) + 1;
  if (uVar24 - 1 != 0 && 0 < (int)uVar24) {
    FUN_03076680(lVar25,0,uVar24 - 1);
  }
  if (1 < (int)uVar22) {
    FUN_03076680(lVar18,0,uVar22 - 1);
  }
  if (fVar46 == 0.0) {
    fVar35 = 0.0;
    fVar27 = 0.0;
    fVar33 = 0.0;
    fVar38 = 0.0;
  }
  else {
    fVar35 = fVar35 / SQRT(fVar46);
    fVar27 = fVar27 / SQRT(fVar47);
    fVar33 = fVar33 / SQRT(fVar46);
    fVar38 = fVar38 / SQRT(fVar47);
  }
  lVar11 = nn::os::GetSystemTick();
  uVar23 = 1;
  if ((uVar22 != 0) && (uVar24 != 0)) {
    if (0 < (int)uVar24) {
      auVar31._0_4_ = fVar51 * fVar35;
      auVar31._4_4_ = fVar59 * fVar27;
      auVar31._8_4_ = fVar66 * fVar33;
      auVar31._12_4_ = fVar52 * fVar38;
      auVar29 = NEON_ext(auVar31,auVar31,8,1);
      auVar37._0_4_ = fVar89 * fVar35;
      auVar37._4_4_ = fVar91 * fVar27;
      auVar37._8_4_ = fVar92 * fVar33;
      auVar37._12_4_ = fVar49 * fVar38;
      auVar41 = NEON_ext(auVar37,auVar37,8,1);
      auVar43 = NEON_fmov(0x3f800000,4);
      fVar40 = (float)*param_11 - fVar40;
      fVar40 = fVar40 + fVar40;
      uVar19 = 0;
      do {
        puVar2 = (undefined8 *)(lVar25 + uVar19 * 0x20);
        uVar70 = puVar2[1];
        uVar23 = *puVar2;
        fVar52 = (float)((ulong)uVar70 >> 0x20);
        if (fVar40 < fVar52) break;
        if (0 < (int)uVar22) {
          lVar17 = lVar25 + uVar19 * 0x20;
          uVar8 = *(undefined8 *)(lVar17 + 0x18);
          uVar7 = *(undefined8 *)(lVar17 + 0x10);
          fVar46 = (float)uVar23;
          fVar47 = (float)uVar7 - fVar46;
          fVar44 = (float)((ulong)uVar23 >> 0x20);
          fVar26 = (float)((ulong)uVar7 >> 0x20) - fVar44;
          fVar45 = (float)uVar70;
          fVar48 = (float)uVar8 - fVar45;
          fVar49 = (float)((ulong)uVar8 >> 0x20) - fVar52;
          auVar5._4_4_ = fVar26;
          auVar5._0_4_ = fVar47;
          auVar5._8_4_ = fVar48;
          auVar5._12_4_ = fVar49;
          auVar6._4_4_ = fVar26;
          auVar6._0_4_ = fVar47;
          auVar6._8_4_ = fVar48;
          auVar6._12_4_ = fVar49;
          auVar56 = NEON_ext(auVar5,auVar6,4,1);
          auVar57._0_4_ = fVar47 * fVar47;
          auVar57._4_4_ = fVar26 * fVar26;
          auVar57._8_4_ = fVar48 * fVar48;
          auVar57._12_4_ = fVar49 * fVar49;
          auVar62 = NEON_ext(auVar57,auVar57,8,1);
          pfVar16 = (float *)(lVar18 + 0x10);
          uVar61 = (ulong)uVar22;
          do {
            auVar64 = *(undefined1 (*) [16])(pfVar16 + -4);
            fVar50 = auVar64._4_4_;
            fVar51 = auVar64._8_4_;
            fVar89 = auVar64._12_4_;
            if (fVar40 < fVar52 + fVar89) break;
            fVar92 = auVar64._0_4_;
            auVar79._0_4_ = *pfVar16 - fVar92;
            auVar79._4_4_ = pfVar16[1] - fVar50;
            auVar79._8_4_ = pfVar16[2] - fVar51;
            auVar79._12_4_ = pfVar16[3] - fVar89;
            auVar64 = NEON_ext(auVar79,auVar79,4,1);
            fVar59 = fVar92 - fVar46;
            fVar60 = fVar50 - fVar44;
            fVar66 = fVar51 - fVar45;
            fVar91 = auVar56._0_4_ * auVar79._0_4_ - fVar47 * auVar64._0_4_;
            auVar86._0_8_ = CONCAT44(auVar56._4_4_ * auVar79._4_4_ - fVar26 * auVar64._4_4_,fVar91);
            auVar86._8_4_ = fVar47 * auVar79._8_4_ - fVar48 * auVar79._0_4_;
            auVar86._12_4_ = fVar26 * auVar79._12_4_ - fVar49 * auVar79._4_4_;
            auVar72 = NEON_ext(auVar86,auVar86,4,1);
            uVar23 = NEON_ext(auVar72._0_8_,auVar86._0_8_,4,1);
            fVar67 = auVar72._0_4_;
            fVar68 = auVar72._4_4_;
            auVar97._0_4_ = auVar79._0_4_ * auVar79._0_4_;
            auVar97._4_4_ = auVar79._4_4_ * auVar79._4_4_;
            auVar97._8_4_ = auVar79._8_4_ * auVar79._8_4_;
            auVar97._12_4_ = auVar79._12_4_ * auVar79._12_4_;
            fVar34 = fVar67 * fVar67 + fVar68 * fVar68 + fVar91 * fVar91;
            fVar58 = fVar67 * fVar67 + fVar68 * fVar68 + fVar91 * fVar91;
            iVar36 = -(uint)(fVar34 == 0.0);
            uVar82 = CONCAT13(~(byte)((uint)iVar36 >> 0x18),
                              CONCAT12(~(byte)((uint)iVar36 >> 0x10),
                                       CONCAT11(~(byte)((uint)iVar36 >> 8),~(byte)iVar36)));
            auVar93._0_4_ = auVar64._0_4_ * fVar67 - auVar79._0_4_ * (float)uVar23;
            auVar93._4_4_ = auVar64._4_4_ * fVar68 - auVar79._4_4_ * (float)((ulong)uVar23 >> 0x20);
            auVar93._8_4_ = auVar79._0_4_ * fVar91 - auVar79._8_4_ * fVar67;
            auVar93._12_4_ = auVar79._4_4_ * 0.0 - auVar79._12_4_ * fVar68;
            auVar64 = NEON_ext(auVar93,auVar93,4,1);
            iVar36 = -(uint)(fVar34 == 0.0);
            iVar81 = -(uint)(fVar58 == 0.0);
            uVar94 = CONCAT44((float)((ulong)uVar13 >> 0x20) / fVar58,fVar32 / fVar34) &
                     CONCAT44(uVar82,uVar82);
            fVar34 = fVar59 * auVar64._0_4_;
            fVar67 = fVar60 * auVar64._4_4_;
            auVar96._0_4_ = fVar47 * fVar59;
            auVar96._4_4_ = fVar26 * fVar60;
            auVar96._8_4_ = fVar48 * fVar66;
            auVar96._12_4_ = fVar49 * (fVar89 - fVar52);
            auVar90._0_4_ = fVar59 * auVar79._0_4_;
            auVar90._4_4_ = fVar60 * auVar79._4_4_;
            auVar90._8_4_ = fVar66 * auVar79._8_4_;
            auVar90._12_4_ = (fVar89 - fVar52) * auVar79._12_4_;
            auVar72 = NEON_ext(auVar97,auVar97,8,1);
            auVar64 = NEON_ext(auVar90,auVar90,8,1);
            fVar91 = auVar72._0_4_ + auVar97._0_4_ + auVar97._4_4_;
            fVar58 = auVar64._0_4_ + auVar90._0_4_ + auVar90._4_4_;
            fVar59 = fVar48 * auVar79._8_4_ + fVar47 * auVar79._0_4_ + fVar26 * auVar79._4_4_;
            fVar60 = fVar48 * auVar79._8_4_ + fVar47 * auVar79._0_4_ + fVar26 * auVar79._4_4_;
            auVar64 = NEON_ext(auVar96,auVar96,8,1);
            fVar68 = auVar62._0_4_ + auVar57._0_4_ + auVar57._4_4_;
            fVar74 = auVar64._0_4_ + auVar96._0_4_ + auVar96._4_4_;
            uVar23 = NEON_fminnm(CONCAT44((float)(uVar94 >> 0x20) *
                                          (fVar34 + fVar67 + fVar66 * auVar93._0_4_),
                                          (float)uVar94 * (fVar34 + fVar67 + fVar66 * auVar93._0_4_)
                                         ),uVar13,4);
            uVar94 = NEON_fmax(uVar23,0,4);
            iVar39 = -(uint)(fVar68 == 0.0);
            iVar98 = -(uint)(fVar91 == 0.0);
            fVar68 = auVar43._0_4_ / fVar68;
            fVar91 = auVar43._8_4_ / fVar91;
            fVar66 = (float)CONCAT13((byte)((uint)fVar68 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18),
                                     CONCAT12((byte)((uint)fVar68 >> 0x10) &
                                              ~(byte)((uint)iVar39 >> 0x10),
                                              CONCAT11((byte)((uint)fVar68 >> 8) &
                                                       ~(byte)((uint)iVar39 >> 8),
                                                       SUB41(fVar68,0) & ~(byte)iVar39)));
            fVar91 = (float)CONCAT13((byte)((uint)fVar91 >> 0x18) & ~(byte)((uint)iVar98 >> 0x18),
                                     CONCAT12((byte)((uint)fVar91 >> 0x10) &
                                              ~(byte)((uint)iVar98 >> 0x10),
                                              CONCAT11((byte)((uint)fVar91 >> 8) &
                                                       ~(byte)((uint)iVar98 >> 8),
                                                       SUB41(fVar91,0) & ~(byte)iVar98)));
            fVar34 = ((float)uVar94 * fVar59 - fVar58) * fVar91;
            fVar91 = ((float)(uVar94 >> 0x20) * fVar60 - fVar58) * fVar91;
            uVar23 = NEON_fminnm(CONCAT44(fVar91,fVar34),uVar13,4);
            uVar23 = NEON_fmax(uVar23,0,4);
            fVar67 = (float)uVar23;
            fVar68 = (float)((ulong)uVar23 >> 0x20);
            iVar39 = -(uint)(fVar67 == fVar34);
            iVar98 = -(uint)(fVar68 == fVar91);
            uVar23 = NEON_fminnm(CONCAT44((fVar74 + fVar68 * fVar60) * fVar66,
                                          (fVar74 + fVar67 * fVar59) * fVar66),uVar13,4);
            uVar21 = NEON_fmax(uVar23,0,4);
            uVar94 = uVar94 ^ (uVar94 ^ uVar21) &
                              CONCAT17(~(byte)((uint)iVar98 >> 0x18) | (byte)((uint)iVar81 >> 0x18),
                                       CONCAT16(~(byte)((uint)iVar98 >> 0x10) |
                                                (byte)((uint)iVar81 >> 0x10),
                                                CONCAT15(~(byte)((uint)iVar98 >> 8) |
                                                         (byte)((uint)iVar81 >> 8),
                                                         CONCAT14(~(byte)iVar98 | (byte)iVar81,
                                                                  CONCAT13(~(byte)((uint)iVar39 >>
                                                                                  0x18) |
                                                                           (byte)((uint)iVar36 >>
                                                                                 0x18),
                                                                           CONCAT12(~(byte)((uint)
                                                  iVar39 >> 0x10) | (byte)((uint)iVar36 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar39 >> 8) |
                                                           (byte)((uint)iVar36 >> 8),
                                                           ~(byte)iVar39 | (byte)iVar36)))))));
            fVar91 = (float)uVar94;
            fVar58 = (float)(uVar94 >> 0x20);
            fVar34 = fVar46 + fVar47 * fVar91;
            fVar59 = fVar44 + fVar26 * fVar58;
            fVar60 = fVar45 + fVar48 * fVar91;
            fVar58 = fVar52 + fVar49 * fVar58;
            fVar91 = fVar34 - (fVar92 + auVar79._0_4_ * fVar67);
            fVar50 = fVar59 - (fVar50 + auVar79._4_4_ * fVar68);
            fVar51 = fVar60 - (fVar51 + auVar79._8_4_ * fVar67);
            fVar89 = fVar58 - (fVar89 + auVar79._12_4_ * fVar68);
            auVar80._0_4_ = fVar91 * fVar91;
            auVar80._4_4_ = fVar50 * fVar50;
            auVar80._8_4_ = fVar51 * fVar51;
            auVar80._12_4_ = fVar89 * fVar89;
            auVar64 = NEON_ext(auVar80,auVar80,8,1);
            if ((auVar80._0_4_ + auVar80._4_4_ + auVar64._0_4_ < fVar40 * fVar40) &&
               (auVar73._0_4_ = fVar35 * (fVar34 + fVar91 * -0.5),
               auVar73._4_4_ = fVar27 * (fVar59 + fVar50 * -0.5),
               auVar73._8_4_ = fVar33 * (fVar60 + fVar51 * -0.5),
               auVar73._12_4_ = fVar38 * (fVar58 + fVar89 * -0.5),
               auVar64 = NEON_ext(auVar73,auVar73,8,1),
               fVar50 = auVar64._0_4_ + auVar73._0_4_ + auVar73._4_4_,
               !(bool)((~(auVar31._0_4_ + auVar31._4_4_ + auVar29._0_4_ < fVar50) |
                       ~(fVar50 < auVar37._0_4_ + auVar37._4_4_ + auVar41._0_4_)) & 1))) {
              uVar23 = 0;
              goto LAB_03072980;
            }
            uVar61 = uVar61 - 1;
            pfVar16 = pfVar16 + 8;
          } while (uVar61 != 0);
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar24);
    }
    uVar23 = 1;
  }
LAB_03072980:
  lVar17 = nn::os::GetSystemTick();
  *(long *)(param_13 + 0x90) = (lVar17 - lVar11) + *(long *)(param_13 + 0x90);
  *(int *)(param_13 + 0x98) = *(int *)(param_13 + 0x98) + 1;
  if (lVar12 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar18,uVar14);
  }
  else {
    uVar19 = uVar14 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(lVar12 + 0x28) < uVar19) || (*(long *)(lVar12 + 0x38) != uVar19 + lVar18)) {
      if (lVar18 != 0) {
        if (*(ulong *)(lVar12 + 0x28) < uVar19 + 0x40) {
          *(int *)(*(long *)(lVar12 + 0x30) + 0x20) = *(int *)(*(long *)(lVar12 + 0x30) + 0x20) + -1
          ;
          (**(code **)(**(long **)(lVar12 + 0x10) + 0x18))
                    (*(long **)(lVar12 + 0x10),lVar18 - *(int *)(lVar18 + -4),uVar19 + 0x44);
        }
        else {
          if (*(long *)(lVar12 + 0x38) == uVar19 + lVar18) {
            *(long *)(lVar12 + 0x38) = lVar18;
            goto LAB_03072a68;
          }
          FUN_031cf778(lVar12,lVar18);
        }
      }
    }
    else {
      *(long *)(lVar12 + 0x38) = lVar18;
      if (*(long *)(lVar12 + 0x48) == lVar18) {
LAB_03072a68:
        FUN_031cf578(lVar12);
      }
    }
  }
  if (lVar15 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar25,uVar14);
  }
  else {
    uVar19 = uVar14 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(lVar15 + 0x28) < uVar19) || (*(long *)(lVar15 + 0x38) != uVar19 + lVar25)) {
      if (lVar25 != 0) {
        if (*(ulong *)(lVar15 + 0x28) < uVar19 + 0x40) {
          *(int *)(*(long *)(lVar15 + 0x30) + 0x20) = *(int *)(*(long *)(lVar15 + 0x30) + 0x20) + -1
          ;
          (**(code **)(**(long **)(lVar15 + 0x10) + 0x18))
                    (*(long **)(lVar15 + 0x10),lVar25 - *(int *)(lVar25 + -4),uVar19 + 0x44);
        }
        else {
          if (*(long *)(lVar15 + 0x38) == uVar19 + lVar25) {
            *(long *)(lVar15 + 0x38) = lVar25;
            goto LAB_03072b30;
          }
          FUN_031cf778(lVar15,lVar25);
        }
      }
    }
    else {
      *(long *)(lVar15 + 0x38) = lVar25;
      if (*(long *)(lVar15 + 0x48) == lVar25) {
LAB_03072b30:
        FUN_031cf578(lVar15);
      }
    }
  }
LAB_03072b38:
  lVar12 = local_d8;
  if (local_c0 == local_d8) {
    local_d0 = local_d0 & 0xffffffff00000000;
  }
  if (local_c8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar19 = local_b8 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_c8 + 0x28) < uVar19) || (*(long *)(local_c8 + 0x38) != uVar19 + local_c0))
    {
      if (local_c0 != 0) {
        if (*(ulong *)(local_c8 + 0x28) < uVar19 + 0x40) {
          *(int *)(*(long *)(local_c8 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_c8 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_c8 + 0x10) + 0x18))
                    (*(long **)(local_c8 + 0x10),local_c0 - *(int *)(local_c0 + -4),uVar19 + 0x44);
        }
        else {
          if (*(long *)(local_c8 + 0x38) == uVar19 + local_c0) {
            *(long *)(local_c8 + 0x38) = local_c0;
            goto LAB_03072c00;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(long *)(local_c8 + 0x38) = local_c0;
      if (*(long *)(local_c8 + 0x48) == local_c0) {
LAB_03072c00:
        FUN_031cf578();
      }
    }
  }
  uVar14 = local_d0;
  uVar19 = local_d0 >> 0x20;
  local_d0 = uVar19 << 0x20;
  if ((lVar12 != 0) && (-1 < (long)uVar14)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar12,uVar19 << 5);
  }
LAB_03072c30:
  if ((local_a0 != (long *)0x0) && (local_98 != '\0')) {
    lVar12 = *local_a0;
    if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (local_a0[6] != 0)) {
      puVar2 = (undefined8 *)local_a0[2];
      uVar19 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar19 <= (ulong)local_a0[3]) && (local_a0[2] = uVar19, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(local_a0[6] + 8);
      }
    }
    puVar2 = (undefined8 *)local_a0[2];
    uVar19 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar19 <= (ulong)local_a0[3]) && (local_a0[2] = uVar19, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c2d363;
      uVar13 = nn::os::GetSystemTick();
      puVar2[1] = uVar13;
    }
    if (*(code **)(lVar12 + 0x20) != (code *)0x0) {
      (**(code **)(lVar12 + 0x20))(*(undefined8 *)(lVar12 + 0x28));
    }
  }
  lVar12 = nn::os::GetSystemTick();
  *(long *)(param_13 + 8) = (lVar12 - lVar10) + *(long *)(param_13 + 8);
  *(int *)(param_13 + 0x10) = *(int *)(param_13 + 0x10) + 1;
  return uVar23;
}



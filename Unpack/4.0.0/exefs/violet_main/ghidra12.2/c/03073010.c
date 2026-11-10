/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03073010; name: FUN_03073010
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_03073010(long param_1,long *param_2,undefined4 param_3,int *param_4,undefined8 param_5,
            undefined8 param_6,ulong param_7,long param_8,undefined8 param_9,undefined8 param_10,
            undefined1 (*param_11) [16],undefined1 (*param_12) [16],undefined8 *param_13,
            long param_14)

{
  int iVar1;
  short sVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined *puVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  float *pfVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  undefined1 auVar31 [12];
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  int iVar41;
  float fVar42;
  float fVar43;
  float fVar47;
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  float fVar56;
  float fVar57;
  float fVar59;
  float fVar60;
  undefined1 auVar58 [16];
  float fVar61;
  float fVar63;
  undefined8 uVar62;
  float fVar64;
  int iVar65;
  undefined4 uVar66;
  float fVar67;
  undefined8 uVar68;
  float fVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  ulong uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  uint uVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar86;
  float fVar90;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar92;
  float fVar93;
  undefined1 auVar91 [16];
  float fVar95;
  undefined1 auVar94 [16];
  ulong uVar96;
  float fVar97;
  float fVar100;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  int iVar102;
  undefined1 auVar101 [16];
  long *plVar103;
  ulong *puVar104;
  undefined8 *puVar105;
  float local_1d0;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float local_154;
  ulong local_150;
  undefined8 uStack_148;
  ulong local_140;
  ulong local_138;
  long local_130;
  ulong local_128;
  ulong local_120;
  undefined8 local_110;
  float fStack_108;
  float fStack_104;
  undefined8 local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long *local_a8;
  char local_a0;
  undefined4 local_98 [6];
  
  local_98[0] = param_3;
  lVar13 = nn::os::GetSystemTick();
  FUN_03072d30(&local_a8,param_1,local_98);
  uStack_b8 = *(undefined8 *)(*param_12 + 8);
  local_c0 = *(undefined8 *)*param_12;
  auVar58 = *param_12;
  auVar32 = *param_11;
  local_e8 = 0;
  local_e0 = 0x8000000000000000;
  fStack_198 = auVar32._8_4_;
  fStack_194 = auVar32._12_4_;
  local_1a0 = auVar32._0_4_;
  fStack_19c = auVar32._4_4_;
  lVar25 = tpidr_el0;
  lVar19 = *(long *)(lVar25 + 0x1000b8);
  if (lVar19 == 0) {
    lVar19 = FUN_00e5d3b4();
    *(long *)(lVar25 + 0x1000b8) = lVar19;
  }
  local_d8 = *(long *)(*(long *)(lVar19 + 0x3d0) + 0x10);
  if (*(long *)(local_d8 + 8) == 0) {
    local_c8 = 0x1000;
    local_110 = 0x1000;
    if (local_d8 == 0) goto LAB_0307314c;
    local_140 = 0x1000;
    if (*(ulong *)(local_d8 + 0x28) < 0x1000) {
LAB_03073104:
      lVar19 = FUN_031cf3b4(local_d8,&local_140);
    }
    else {
      lVar19 = *(long *)(local_d8 + 0x38);
      if (*(ulong *)(local_d8 + 0x40) < lVar19 + 0x1000U) goto LAB_03073104;
      *(ulong *)(local_d8 + 0x38) = lVar19 + 0x1000U;
    }
  }
  else {
    local_d8 = 0;
LAB_0307314c:
    local_c8 = 0x1000;
    local_110 = 0x1000;
    lVar19 = (**(code **)PTR_DAT_047d1a08)(1,&local_110,0x40);
  }
  local_e0 = CONCAT44(0x80000080,(int)local_e0);
  local_e8 = lVar19;
  local_d0 = lVar19;
  if (param_2 == (long *)0x0) {
LAB_03073210:
    lVar14 = (param_7 >> 0x16 & 0x3ff) * 0x100;
    fVar28 = *(float *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + lVar14) + 0x20) +
                                 0x68) + 0xb0);
    local_f0 = CONCAT44(fVar28,fVar28);
    fVar69 = (float)*param_13 - fVar28;
    local_f8 = CONCAT44((float)((ulong)*param_13 >> 0x20) - fVar28,fVar69);
    sVar2 = *(short *)(param_8 + 8);
    local_140 = 0;
    local_138 = 0x8000000000000000;
    lVar19 = *(long *)(lVar25 + 0x1000b8);
    if (lVar19 == 0) {
      lVar19 = FUN_00e5d3b4();
      *(long *)(lVar25 + 0x1000b8) = lVar19;
    }
    local_130 = *(long *)(*(long *)(lVar19 + 0x3d0) + 0x10);
    if (*(long *)(local_130 + 8) != 0) {
      local_130 = 0;
    }
    local_150 = -((ulong)(long)sVar2 >> 0x1f & 1) & 0xffffffe000000000 |
                ((long)sVar2 & 0xffffffffU) << 5;
    local_120 = local_150;
    if (local_130 == 0) {
      local_128 = (**(code **)PTR_DAT_047d1a08)(1,&local_150,0x40);
    }
    else {
      local_110 = local_150 + 0x3f & 0xffffffffffffffc0;
      if (local_110 <= *(ulong *)(local_130 + 0x28)) {
        local_128 = *(ulong *)(local_130 + 0x38);
        if (local_110 + local_128 <= *(ulong *)(local_130 + 0x40)) {
          *(ulong *)(local_130 + 0x38) = local_110 + local_128;
          goto LAB_030732f4;
        }
      }
      local_128 = FUN_031cf3b4(local_130,&local_110);
    }
LAB_030732f4:
    lVar19 = param_14 + 0x18;
    local_138 = CONCAT44((int)sVar2,(undefined4)local_138) | 0x8000000000000000;
    puVar105 = &local_110;
    puVar104 = &local_140;
    plVar103 = &local_e8;
    local_140 = local_128;
    FUN_0306a200(param_1,param_2,param_7 & 0xffffffff,param_8);
    uVar16 = local_140;
    if (local_128 == local_140) {
      local_138 = local_138 & 0xffffffff00000000;
    }
    if (local_130 == 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    }
    else {
      uVar18 = local_120 + 0x3f & 0xffffffffffffffc0;
      if ((*(ulong *)(local_130 + 0x28) < uVar18) ||
         (*(long *)(local_130 + 0x38) != uVar18 + local_128)) {
        if (local_128 != 0) {
          if (*(ulong *)(local_130 + 0x28) < uVar18 + 0x40) {
            *(int *)(*(long *)(local_130 + 0x30) + 0x20) =
                 *(int *)(*(long *)(local_130 + 0x30) + 0x20) + -1;
            (**(code **)(**(long **)(local_130 + 0x10) + 0x18))
                      (*(long **)(local_130 + 0x10),local_128 - (long)*(int *)(local_128 - 4),
                       uVar18 + 0x44);
          }
          else {
            if (*(long *)(local_130 + 0x38) == uVar18 + local_128) {
              *(ulong *)(local_130 + 0x38) = local_128;
              goto LAB_03073408;
            }
            FUN_031cf778();
          }
        }
      }
      else {
        *(ulong *)(local_130 + 0x38) = local_128;
        if (*(ulong *)(local_130 + 0x48) == local_128) {
LAB_03073408:
          FUN_031cf578();
        }
      }
    }
    uVar73 = local_138;
    uVar18 = local_138 >> 0x20;
    local_138 = uVar18 << 0x20;
    if ((uVar16 != 0) && (-1 < (long)uVar73)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,uVar16,uVar18 << 5);
    }
    uVar30 = local_c0;
    iVar12 = *param_4;
    iVar65 = param_4[1];
    lVar15 = *(long *)(*(long *)(param_1 + 0x38) + lVar14);
    lVar17 = *(long *)(lVar15 + 0x20);
    fVar28 = (float)*(undefined8 *)(lVar15 + 0x78);
    fVar29 = (float)((ulong)*(undefined8 *)(lVar15 + 0x78) >> 0x20);
    iVar41 = *(int *)(lVar17 + 0x40);
    lVar14 = 0x38;
    if (iVar41 <= iVar12) {
      lVar14 = 0xf0;
    }
    iVar102 = 0;
    if (iVar41 <= iVar12) {
      iVar102 = iVar41;
    }
    lVar21 = 0x38;
    if (iVar41 <= iVar65) {
      lVar21 = 0xf0;
    }
    iVar1 = 0;
    if (iVar41 <= iVar65) {
      iVar1 = iVar41;
    }
    pfVar20 = (float *)(*(long *)(lVar17 + lVar14) + (long)(iVar12 - iVar102) * 0x10);
    fVar57 = *pfVar20;
    fVar59 = pfVar20[1];
    fVar60 = pfVar20[2];
    pfVar20 = (float *)(*(long *)(lVar17 + lVar21) + (long)(iVar65 - iVar1) * 0x10);
    fVar61 = *pfVar20;
    fVar63 = pfVar20[1];
    fVar64 = pfVar20[2];
    fVar42 = (float)*(undefined8 *)(lVar15 + 0x70);
    fVar37 = (float)((ulong)*(undefined8 *)(lVar15 + 0x70) >> 0x20);
    fVar56 = (float)*(undefined8 *)(lVar15 + 0x80);
    fVar43 = (float)((ulong)*(undefined8 *)(lVar15 + 0x80) >> 0x20);
    fVar47 = (float)*(undefined8 *)(lVar15 + 0x88);
    fVar97 = (float)((ulong)*(undefined8 *)(lVar15 + 0x88) >> 0x20);
    fVar38 = (float)*(undefined8 *)(lVar15 + 0x90);
    fVar27 = fVar38 + fVar56 * fVar60 + *(float *)(lVar15 + 0x60) * fVar57 + fVar42 * fVar59;
    fVar39 = (float)((ulong)*(undefined8 *)(lVar15 + 0x90) >> 0x20);
    fVar35 = fVar39 + fVar43 * fVar60 + *(float *)(lVar15 + 100) * fVar57 + fVar37 * fVar59;
    fVar40 = (float)*(undefined8 *)(lVar15 + 0x98);
    fVar36 = fVar40 + fVar47 * fVar60 + *(float *)(lVar15 + 0x68) * fVar57 + fVar28 * fVar59;
    fVar67 = (float)((ulong)*(undefined8 *)(lVar15 + 0x98) >> 0x20);
    fVar38 = fVar38 + fVar56 * fVar64 + *(float *)(lVar15 + 0x60) * fVar61 + fVar42 * fVar63;
    fVar39 = fVar39 + fVar43 * fVar64 + *(float *)(lVar15 + 100) * fVar61 + fVar37 * fVar63;
    fVar40 = fVar40 + fVar47 * fVar64 + *(float *)(lVar15 + 0x68) * fVar61 + fVar28 * fVar63;
    fVar92 = (float)local_c0;
    fVar42 = fVar92 * fVar27;
    fVar93 = (float)((ulong)local_c0 >> 0x20);
    fVar47 = fVar93 * fVar35;
    fVar95 = (float)uStack_b8;
    fVar48 = fVar95 * fVar36;
    fVar100 = (float)((ulong)uStack_b8 >> 0x20);
    fVar28 = fVar92 * fVar38;
    fVar37 = fVar93 * fVar39;
    fVar56 = fVar95 * fVar40;
    fVar43 = fVar42 + fVar47 + fVar48;
    fVar48 = fVar42 + fVar47 + fVar48;
    fVar42 = fVar56 + fVar28 + fVar37;
    fVar56 = fVar56 + fVar28 + fVar37;
    fVar27 = fVar27 - fVar92 * fVar43;
    fVar35 = fVar35 - fVar93 * fVar48;
    auVar32._0_8_ = CONCAT44(fVar35,fVar27);
    auVar32._8_4_ = fVar36 - fVar95 * fVar43;
    auVar32._12_4_ =
         (fVar67 + fVar97 * fVar60 + *(float *)(lVar15 + 0x6c) * fVar57 + fVar29 * fVar59) -
         fVar100 * fVar48;
    fVar38 = fVar38 - fVar92 * fVar42;
    fVar39 = fVar39 - fVar93 * fVar56;
    auVar45._0_8_ = CONCAT44(fVar39,fVar38);
    auVar45._8_4_ = fVar40 - fVar95 * fVar42;
    auVar45._12_4_ =
         (fVar67 + fVar97 * fVar64 + *(float *)(lVar15 + 0x6c) * fVar61 + fVar29 * fVar63) -
         fVar100 * (float)(CONCAT17((char)((uint)fVar56 >> 0x18),
                                    CONCAT16((char)((uint)fVar56 >> 0x10),
                                             CONCAT15((char)((uint)fVar56 >> 8),
                                                      CONCAT14(SUB41(fVar56,0),fVar42)))) >> 0x20);
    local_138 = auVar32._8_8_;
    uStack_148 = auVar45._8_8_;
    local_150 = auVar45._0_8_;
    local_140 = auVar32._0_8_;
    iVar12 = FUN_03070100(&local_140,&local_150,param_13,&local_f0,&local_c0,&local_e8,&local_154,
                          param_14 + 0x58,plVar103,puVar104,puVar105,lVar19);
    uVar16 = local_e0;
    if (iVar12 == 0) {
LAB_03073698:
      uVar30 = 0;
    }
    else {
      fVar28 = local_1a0 * auVar58._0_4_;
      fVar42 = fStack_19c * auVar58._4_4_;
      fVar37 = fStack_198 * auVar58._8_4_;
      fVar29 = fVar28 + fVar42 + fVar37;
      fVar37 = fVar28 + fVar42 + fVar37;
      iVar12 = (int)local_e0;
      uVar18 = local_e0 & 0xffffffff;
      uVar68 = NEON_fmov(0x3f800000,4);
      local_1a0 = local_1a0 - auVar58._0_4_ * fVar29;
      fVar28 = fStack_19c - auVar58._4_4_ * fVar37;
      fStack_198 = fStack_198 - auVar58._8_4_ * fVar29;
      fStack_194 = fStack_194 - auVar58._12_4_ * fVar37;
      if (0 < (int)local_e0) {
        pfVar20 = (float *)(local_e8 + 0x10);
        do {
          fVar37 = (float)*(undefined8 *)(pfVar20 + -2);
          fVar56 = (float)((ulong)*(undefined8 *)(pfVar20 + -2) >> 0x20);
          fVar29 = (float)*(undefined8 *)(pfVar20 + -4);
          fVar57 = *pfVar20 - fVar29;
          fVar42 = (float)((ulong)*(undefined8 *)(pfVar20 + -4) >> 0x20);
          fVar59 = pfVar20[1] - fVar42;
          fVar60 = pfVar20[2] - fVar37;
          fVar29 = local_1a0 - fVar29;
          fVar42 = fVar28 - fVar42;
          fVar37 = fStack_198 - fVar37;
          fVar61 = fVar29 * fVar57;
          fVar63 = fVar42 * fVar59;
          fVar64 = fVar37 * fVar60;
          fVar36 = fVar57 * fVar57 + fVar59 * fVar59 + fVar60 * fVar60;
          iVar65 = -(uint)(fVar36 == 0.0);
          uVar66 = CONCAT13(~(byte)((uint)iVar65 >> 0x18),
                            CONCAT12(~(byte)((uint)iVar65 >> 0x10),
                                     CONCAT11(~(byte)((uint)iVar65 >> 8),~(byte)iVar65)));
          uVar62 = NEON_fminnm(CONCAT44((fVar61 + fVar63 + fVar64) /
                                        (fVar57 * fVar57 + fVar59 * fVar59 + fVar60 * fVar60),
                                        (fVar61 + fVar63 + fVar64) / fVar36) &
                               CONCAT44(uVar66,uVar66),uVar68,4);
          uVar62 = NEON_fmax(uVar62,0,4);
          fVar61 = (float)((ulong)uVar62 >> 0x20);
          fVar29 = fVar29 - fVar57 * (float)uVar62;
          fVar42 = fVar42 - fVar59 * fVar61;
          fVar37 = fVar37 - fVar60 * (float)uVar62;
          fVar56 = (fStack_194 - fVar56) - (pfVar20[3] - fVar56) * fVar61;
          fVar29 = fVar29 * fVar29;
          fVar42 = fVar42 * fVar42;
          uVar49 = (undefined1)((uint)fVar42 >> 8);
          uVar50 = (undefined1)((uint)fVar42 >> 0x10);
          uVar53 = (undefined1)((uint)fVar42 >> 0x18);
          fVar37 = fVar37 * fVar37;
          fVar56 = fVar56 * fVar56;
          auVar58[4] = SUB41(fVar42,0);
          auVar58._0_4_ = fVar29;
          auVar58[5] = uVar49;
          auVar58[6] = uVar50;
          auVar58[7] = uVar53;
          auVar58._8_4_ = fVar37;
          auVar58._12_4_ = fVar56;
          auVar71[4] = SUB41(fVar42,0);
          auVar71._0_4_ = fVar29;
          auVar71[5] = uVar49;
          auVar71[6] = uVar50;
          auVar71[7] = uVar53;
          auVar71._8_4_ = fVar37;
          auVar71._12_4_ = fVar56;
          auVar58 = NEON_ext(auVar58,auVar71,8,1);
          if (!(bool)(~(fVar29 + fVar42 + auVar58._0_4_ < fVar69 * fVar69) & 1)) goto LAB_03073698;
          uVar18 = uVar18 - 1;
          pfVar20 = pfVar20 + 8;
        } while (uVar18 != 0);
      }
      lVar19 = *(long *)(lVar25 + 0x1000b8);
      if (lVar19 == 0) {
        lVar19 = FUN_00e5d3b4();
        *(long *)(lVar25 + 0x1000b8) = lVar19;
      }
      auVar75._0_4_ = fVar38 - fVar27;
      auVar75._4_4_ = fVar39 - fVar35;
      auVar75._8_4_ = auVar45._8_4_ - auVar32._8_4_;
      auVar75._12_4_ = auVar45._12_4_ - auVar32._12_4_;
      lVar19 = *(long *)(*(long *)(lVar19 + 0x3d0) + 0x10);
      if (*(long *)(lVar19 + 8) == 0) {
        uVar18 = (long)iVar12 * 0x20;
        local_150 = uVar18;
        if (lVar19 == 0) goto LAB_0307370c;
        local_140 = uVar18 + 0x3f & 0xffffffffffffffc0;
        if (*(ulong *)(lVar19 + 0x28) < local_140) {
LAB_0307367c:
          lVar14 = FUN_031cf3b4(lVar19,&local_140);
        }
        else {
          lVar14 = *(long *)(lVar19 + 0x38);
          if (*(ulong *)(lVar19 + 0x40) < local_140 + lVar14) goto LAB_0307367c;
          *(ulong *)(lVar19 + 0x38) = local_140 + lVar14;
        }
      }
      else {
        local_150 = (long)iVar12 << 5;
LAB_0307370c:
        uVar18 = local_150;
        lVar14 = (**(code **)PTR_DAT_047d1a08)(1,&local_150,0x40);
        lVar19 = 0;
      }
      lVar15 = *(long *)(lVar25 + 0x1000b8);
      if (lVar15 == 0) {
        lVar15 = FUN_00e5d3b4();
        *(long *)(lVar25 + 0x1000b8) = lVar15;
      }
      lVar25 = *(long *)(*(long *)(lVar15 + 0x3d0) + 0x10);
      fVar27 = fVar27 + auVar75._0_4_ * local_154;
      fVar35 = fVar35 + auVar75._4_4_ * local_154;
      fVar69 = auVar32._8_4_ + auVar75._8_4_ * local_154;
      fVar29 = auVar32._12_4_ + auVar75._12_4_ * local_154;
      local_150 = uVar18;
      if ((*(long *)(lVar25 + 8) == 0) && (lVar25 != 0)) {
        local_140 = uVar18 + 0x3f & 0xffffffffffffffc0;
        if (local_140 <= *(ulong *)(lVar25 + 0x28)) {
          lVar15 = *(long *)(lVar25 + 0x38);
          if (local_140 + lVar15 <= *(ulong *)(lVar25 + 0x40)) {
            *(ulong *)(lVar25 + 0x38) = local_140 + lVar15;
            goto LAB_03073810;
          }
        }
        lVar15 = FUN_031cf3b4(lVar25,&local_140);
      }
      else {
        lVar15 = (**(code **)PTR_DAT_047d1a08)(1,&local_150,0x40);
        lVar25 = 0;
      }
LAB_03073810:
      auVar10._8_4_ = fVar95;
      auVar10._0_8_ = uVar30;
      auVar10._12_4_ = fVar100;
      fVar42 = fVar92 * (local_1a0 - fVar27);
      fVar56 = fVar93 * (fVar28 - fVar35);
      fVar60 = fVar95 * (fStack_198 - fVar69);
      fVar37 = fVar60 + fVar42 + fVar56;
      fVar60 = fVar60 + fVar42 + fVar56;
      fVar42 = (local_1a0 - fVar27) - fVar92 * fVar37;
      fVar57 = (fVar28 - fVar35) - fVar93 * fVar60;
      uVar49 = SUB41(fVar57,0);
      uVar50 = (undefined1)((uint)fVar57 >> 8);
      uVar51 = (undefined1)((uint)fVar57 >> 0x10);
      uVar54 = (undefined1)((uint)fVar57 >> 0x18);
      fVar59 = (fStack_198 - fVar69) - fVar95 * fVar37;
      fVar60 = (fStack_194 - fVar29) - fVar100 * fVar60;
      auVar32 = NEON_ext(auVar10,auVar10,4,1);
      auVar76[4] = uVar49;
      auVar76._0_4_ = fVar42;
      auVar76[5] = uVar50;
      auVar76[6] = uVar51;
      auVar76[7] = uVar54;
      auVar76._8_4_ = fVar59;
      auVar76._12_4_ = fVar60;
      auVar80[4] = uVar49;
      auVar80._0_4_ = fVar42;
      auVar80[5] = uVar50;
      auVar80[6] = uVar51;
      auVar80[7] = uVar54;
      auVar80._8_4_ = fVar59;
      auVar80._12_4_ = fVar60;
      auVar58 = NEON_ext(auVar76,auVar80,4,1);
      fStack_19c = (float)(CONCAT17(uVar54,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(uVar49,fVar42)))
                                   ) >> 0x20);
      fVar37 = fVar92 * auVar58._0_4_ - auVar32._0_4_ * fVar42;
      fVar56 = fVar93 * auVar58._4_4_ - auVar32._4_4_ * fVar57;
      uVar53 = (undefined1)((uint)fVar56 >> 8);
      uVar52 = (undefined1)((uint)fVar56 >> 0x10);
      uVar55 = (undefined1)((uint)fVar56 >> 0x18);
      fVar61 = fVar95 * fVar42 - fVar92 * fVar59;
      fVar63 = fVar100 * (float)(CONCAT17(uVar54,CONCAT16(uVar51,CONCAT15(uVar50,CONCAT14(uVar49,
                                                  fVar42)))) >> 0x20) - fVar93 * fVar60;
      auVar83[4] = SUB41(fVar56,0);
      auVar83._0_4_ = fVar37;
      auVar83[5] = uVar53;
      auVar83[6] = uVar52;
      auVar83[7] = uVar55;
      auVar83._8_4_ = fVar61;
      auVar83._12_4_ = fVar63;
      auVar3[4] = SUB41(fVar56,0);
      auVar3._0_4_ = fVar37;
      auVar3[5] = uVar53;
      auVar3[6] = uVar52;
      auVar3[7] = uVar55;
      auVar3._8_4_ = fVar61;
      auVar3._12_4_ = fVar63;
      auVar32 = NEON_ext(auVar83,auVar3,4,1);
      fVar61 = auVar32._0_4_;
      fVar63 = auVar32._4_4_;
      fVar56 = fVar61 * fVar61 + fVar63 * fVar63 + fVar37 * fVar37;
      if (fVar56 == 0.0) {
        fVar64 = 0.0;
        fVar63 = 0.0;
        fVar37 = 0.0;
      }
      else {
        fVar56 = SQRT(fVar56);
        fVar64 = fVar61 / fVar56;
        fVar63 = fVar63 / SQRT(fVar61 * fVar61 + fVar63 * fVar63 + fVar37 * fVar37);
        fVar37 = fVar37 / fVar56;
      }
      fVar56 = fVar42 * fVar42 + fVar57 * fVar57 + fVar59 * fVar59;
      fVar57 = fVar42 * fVar42 + fVar57 * fVar57 + fVar59 * fVar59;
      uVar30 = *param_13;
      lVar17 = nn::os::GetSystemTick();
      puVar11 = PTR_DAT_047d19e0;
      fVar61 = (float)uVar68;
      if (iVar12 < 1) {
        uVar24 = 0;
        uVar26 = 0;
      }
      else {
        local_1d0 = (float)uVar30;
        auVar98._4_4_ = fVar63;
        auVar98._0_4_ = fVar64;
        auVar98._8_4_ = fVar37;
        iVar12 = -(uint)(fVar56 == 0.0);
        iVar65 = -(uint)(fVar57 == 0.0);
        iVar41 = -(uint)(fVar56 == 0.0);
        fVar36 = fVar42 / fVar56;
        fVar38 = fStack_19c / fVar57;
        fVar40 = fVar59 / fVar56;
        fVar39 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                                 CONCAT12((byte)((uint)fVar36 >> 0x10) &
                                          ~(byte)((uint)iVar12 >> 0x10),
                                          CONCAT11((byte)((uint)fVar36 >> 8) &
                                                   ~(byte)((uint)iVar12 >> 8),
                                                   SUB41(fVar36,0) & ~(byte)iVar12)));
        auVar31._0_8_ =
             CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                      CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10),
                               CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar65 >> 8),
                                        CONCAT14(SUB41(fVar38,0) & ~(byte)iVar65,fVar39))));
        auVar31[8] = SUB41(fVar40,0) & ~(byte)iVar41;
        auVar31[9] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar41 >> 8);
        auVar31[10] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
        auVar31[0xb] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
        fVar40 = (float)((ulong)auVar31._0_8_ >> 0x20);
        fVar43 = auVar31._8_4_;
        fVar47 = -(fVar27 * fVar39 + fVar35 * fVar40 + fVar69 * fVar43);
        auVar33._12_4_ = fVar47;
        auVar33._0_12_ = auVar31;
        fVar48 = -(fVar27 * fVar64 + fVar35 * fVar63 + fVar69 * fVar37);
        auVar98._12_4_ = fVar48;
        lVar21 = 0;
        fVar36 = (float)local_110 * fVar64;
        fVar38 = local_110._4_4_ * fVar63;
        uVar49 = (undefined1)((uint)fVar38 >> 8);
        uVar50 = (undefined1)((uint)fVar38 >> 0x10);
        uVar53 = (undefined1)((uint)fVar38 >> 0x18);
        auVar4[4] = SUB41(fVar38,0);
        auVar4._0_4_ = fVar36;
        auVar4[5] = uVar49;
        auVar4[6] = uVar50;
        auVar4[7] = uVar53;
        auVar4._8_4_ = fStack_108 * fVar37;
        auVar4._12_4_ = fStack_104 * fVar48;
        auVar5[4] = SUB41(fVar38,0);
        auVar5._0_4_ = fVar36;
        auVar5[5] = uVar49;
        auVar5[6] = uVar50;
        auVar5[7] = uVar53;
        auVar5._8_4_ = fStack_108 * fVar37;
        auVar5._12_4_ = fStack_104 * fVar48;
        auVar58 = NEON_ext(auVar4,auVar5,8,1);
        auVar44._8_8_ = _UNK_03caad18;
        auVar44._0_8_ = _DAT_03caad10;
        auVar32 = a64_TBL(ZEXT816(0),auVar98,auVar44);
        auVar45 = a64_TBL(ZEXT816(0),auVar33,auVar44);
        uVar24 = 0;
        uVar26 = 0;
        do {
          pfVar20 = (float *)(local_e8 + lVar21);
          fVar92 = *pfVar20;
          fVar93 = pfVar20[1];
          fVar95 = pfVar20[2];
          uVar62 = *(undefined8 *)(pfVar20 + 6);
          fVar100 = (float)((ulong)uVar62 >> 0x20);
          uVar30 = *(undefined8 *)(pfVar20 + 4);
          fVar97 = (float)((ulong)uVar30 >> 0x20);
          auVar74._0_4_ = fVar64 * (float)uVar30;
          auVar74._4_4_ = fVar63 * fVar97;
          auVar74._8_4_ = fVar37 * (float)uVar62;
          auVar74._12_4_ = fVar48 * fVar100;
          auVar82._0_4_ = fVar39 * (float)uVar30;
          auVar82._4_4_ = fVar40 * fVar97;
          auVar82._8_4_ = fVar43 * (float)uVar62;
          auVar82._12_4_ = fVar47 * fVar100;
          auVar70._0_4_ = fVar64 * fVar92;
          auVar70._4_4_ = fVar63 * fVar93;
          auVar70._8_4_ = fVar37 * fVar95;
          auVar70._12_4_ = fVar48 * pfVar20[3];
          auVar79._0_4_ = fVar39 * fVar92;
          auVar79._4_4_ = fVar40 * fVar93;
          auVar79._8_4_ = fVar43 * fVar95;
          auVar79._12_4_ = fVar47 * pfVar20[3];
          auVar71 = NEON_ext(auVar70,auVar70,8,1);
          auVar75 = NEON_ext(auVar74,auVar74,8,1);
          auVar80 = NEON_ext(auVar79,auVar79,8,1);
          auVar83 = NEON_ext(auVar82,auVar82,8,1);
          auVar76 = auVar45 ^ (auVar45 ^ auVar32) & *(undefined1 (*) [16])(puVar11 + 0x30);
          auVar88._0_4_ = auVar71._0_4_ + auVar70._0_4_ + auVar70._4_4_ + auVar76._0_4_;
          auVar88._4_4_ = auVar75._0_4_ + auVar74._0_4_ + auVar74._4_4_ + auVar76._4_4_;
          auVar88._8_4_ = auVar80._0_4_ + auVar79._0_4_ + auVar79._4_4_ + auVar76._8_4_;
          auVar88._12_4_ = auVar83._0_4_ + auVar82._0_4_ + auVar82._4_4_ + auVar76._12_4_;
          auVar71 = NEON_rev64(auVar88,4);
          uVar73 = CONCAT44(-(uint)(auVar88._12_4_ < auVar88._8_4_),
                            -(uint)(auVar88._12_4_ < auVar88._8_4_)) & 0x100000001;
          iVar12 = (int)uVar73;
          iVar65 = (int)(uVar73 >> 0x20);
          auVar77._0_8_ = CONCAT44((iVar65 << 0x1f) >> 0x1f,(iVar12 << 0x1f) >> 0x1f);
          auVar77._8_4_ = (iVar12 << 0x1f) >> 0x1f;
          auVar77._12_4_ = (iVar65 << 0x1f) >> 0x1f;
          auVar87._8_8_ = auVar77._8_8_;
          auVar87._0_8_ = auVar77._0_8_;
          auVar88 = auVar88 ^ (auVar88 ^ auVar71) & auVar87;
          fVar100 = auVar88._4_4_;
          uVar73 = CONCAT44(fVar100,fVar100);
          fVar67 = auVar88._12_4_;
          fVar97 = fVar100;
          if (0.0 <= fVar67) {
            fVar90 = auVar88._8_4_;
            fVar97 = auVar88._0_4_;
            uVar96 = CONCAT44(fVar97,fVar97);
            if (fVar90 <= 1.0) {
              iVar12 = -(uint)(fVar67 - fVar90 == 0.0);
              fVar86 = (float)((uint)(fVar61 / (fVar67 - fVar90)) &
                              CONCAT13(~(byte)((uint)iVar12 >> 0x18),
                                       CONCAT12(~(byte)((uint)iVar12 >> 0x10),
                                                CONCAT11(~(byte)((uint)iVar12 >> 8),~(byte)iVar12)))
                              );
              if (fVar90 < 0.0) {
                uVar96 = (ulong)(uint)(fVar97 - (fVar100 - fVar97) * fVar86 * fVar90);
              }
              if (1.0 < fVar67) {
                uVar73 = (ulong)(uint)(fVar97 + (fVar100 - fVar97) * (fVar61 - fVar90) * fVar86);
              }
              uVar23 = uVar96 & 0x7fffffff7fffffff;
              uVar78 = -(uint)((float)(uVar73 & 0x7fffffff7fffffff) < (float)uVar23);
              uVar23 = uVar23 ^ (uVar23 ^ uVar73 & 0x7fffffff7fffffff) & (ulong)uVar78;
              fVar97 = (float)CONCAT13((byte)(-(uint)((float)((uint)uVar96 ^
                                                             ((uint)uVar96 ^ (uint)uVar73) & ~uVar78
                                                             ) < 0.0) >> 0x18) & 0x80 |
                                       (byte)(uVar23 >> 0x18),(int3)uVar23);
            }
          }
          if (0.0 < (float)((uint)fVar97 ^
                           ((uint)fVar97 ^
                           (uint)(fVar97 - (fVar36 + fVar38 + auVar58._0_4_ + fVar48))) &
                           -(uint)(ABS(fVar97) < local_1d0 * 0.007874016))) {
            lVar22 = (long)(int)uVar26;
            uVar26 = uVar26 + 1;
            pfVar20 = (float *)(lVar14 + lVar22 * 0x20);
          }
          else {
            lVar22 = (long)(int)uVar24;
            uVar24 = uVar24 + 1;
            pfVar20 = (float *)(lVar15 + lVar22 * 0x20);
          }
          lVar21 = lVar21 + 0x20;
          pfVar20[2] = fVar95;
          pfVar20[3] = ABS(fVar97);
          *pfVar20 = fVar92;
          pfVar20[1] = fVar93;
          *(undefined8 *)(pfVar20 + 6) = uVar62;
          *(undefined8 *)(pfVar20 + 4) = uVar30;
        } while ((uVar16 & 0xffffffff) * 0x20 != lVar21);
      }
      lVar21 = nn::os::GetSystemTick();
      *(long *)(param_14 + 0x78) = (lVar21 - lVar17) + *(long *)(param_14 + 0x78);
      *(int *)(param_14 + 0x80) = *(int *)(param_14 + 0x80) + 1;
      if (uVar26 - 1 != 0 && 0 < (int)uVar26) {
        FUN_03076680(lVar14,0,uVar26 - 1);
      }
      if (1 < (int)uVar24) {
        FUN_03076680(lVar15,0,uVar24 - 1);
      }
      if (fVar56 == 0.0) {
        fVar42 = 0.0;
        fStack_19c = 0.0;
        fVar59 = 0.0;
        fVar60 = 0.0;
      }
      else {
        fVar42 = fVar42 / SQRT(fVar56);
        fStack_19c = fStack_19c / SQRT(fVar57);
        fVar59 = fVar59 / SQRT(fVar56);
        fVar60 = fVar60 / SQRT(fVar57);
      }
      lVar17 = nn::os::GetSystemTick();
      uVar30 = 1;
      if ((uVar24 != 0) && (uVar26 != 0)) {
        if (0 < (int)uVar26) {
          auVar34._0_4_ = fVar27 * fVar42;
          auVar34._4_4_ = fVar35 * fStack_19c;
          auVar34._8_4_ = fVar69 * fVar59;
          auVar34._12_4_ = fVar29 * fVar60;
          auVar46._0_4_ = local_1a0 * fVar42;
          auVar46._4_4_ = fVar28 * fStack_19c;
          auVar46._8_4_ = fStack_198 * fVar59;
          auVar46._12_4_ = fStack_194 * fVar60;
          auVar45 = NEON_fmov(0x3f800000,4);
          auVar32 = NEON_ext(auVar34,auVar34,8,1);
          auVar58 = NEON_ext(auVar46,auVar46,8,1);
          fVar28 = (float)*param_13 - (float)local_f0;
          fVar28 = fVar28 + fVar28;
          uVar16 = 0;
          do {
            puVar105 = (undefined8 *)(lVar14 + uVar16 * 0x20);
            uVar62 = puVar105[1];
            uVar30 = *puVar105;
            fVar69 = (float)((ulong)uVar62 >> 0x20);
            if (fVar28 < fVar69) break;
            if (0 < (int)uVar24) {
              lVar21 = lVar14 + uVar16 * 0x20;
              uVar9 = *(undefined8 *)(lVar21 + 0x18);
              uVar8 = *(undefined8 *)(lVar21 + 0x10);
              fVar29 = (float)uVar30;
              fVar57 = (float)uVar8 - fVar29;
              fVar37 = (float)((ulong)uVar30 >> 0x20);
              fVar63 = (float)((ulong)uVar8 >> 0x20) - fVar37;
              fVar56 = (float)uVar62;
              fVar64 = (float)uVar9 - fVar56;
              fVar27 = (float)((ulong)uVar9 >> 0x20) - fVar69;
              auVar6._4_4_ = fVar63;
              auVar6._0_4_ = fVar57;
              auVar6._8_4_ = fVar64;
              auVar6._12_4_ = fVar27;
              auVar7._4_4_ = fVar63;
              auVar7._0_4_ = fVar57;
              auVar7._8_4_ = fVar64;
              auVar7._12_4_ = fVar27;
              auVar71 = NEON_ext(auVar6,auVar7,4,1);
              auVar72._0_4_ = fVar57 * fVar57;
              auVar72._4_4_ = fVar63 * fVar63;
              auVar72._8_4_ = fVar64 * fVar64;
              auVar72._12_4_ = fVar27 * fVar27;
              auVar75 = NEON_ext(auVar72,auVar72,8,1);
              pfVar20 = (float *)(lVar15 + 0x10);
              uVar73 = (ulong)uVar24;
              do {
                auVar76 = *(undefined1 (*) [16])(pfVar20 + -4);
                fVar35 = auVar76._4_4_;
                fVar36 = auVar76._8_4_;
                fVar38 = auVar76._12_4_;
                if (fVar28 < fVar69 + fVar38) break;
                fVar40 = auVar76._0_4_;
                auVar84._0_4_ = *pfVar20 - fVar40;
                auVar84._4_4_ = pfVar20[1] - fVar35;
                auVar84._8_4_ = pfVar20[2] - fVar36;
                auVar84._12_4_ = pfVar20[3] - fVar38;
                auVar76 = NEON_ext(auVar84,auVar84,4,1);
                fVar48 = fVar40 - fVar29;
                fVar92 = fVar35 - fVar37;
                fVar93 = fVar36 - fVar56;
                fVar39 = auVar71._0_4_ * auVar84._0_4_ - fVar57 * auVar76._0_4_;
                auVar89._0_8_ =
                     CONCAT44(auVar71._4_4_ * auVar84._4_4_ - fVar63 * auVar76._4_4_,fVar39);
                auVar89._8_4_ = fVar57 * auVar84._8_4_ - fVar64 * auVar84._0_4_;
                auVar89._12_4_ = fVar63 * auVar84._12_4_ - fVar27 * auVar84._4_4_;
                auVar80 = NEON_ext(auVar89,auVar89,4,1);
                uVar30 = NEON_ext(auVar80._0_8_,auVar89._0_8_,4,1);
                fVar95 = auVar80._0_4_;
                fVar97 = auVar80._4_4_;
                auVar101._0_4_ = auVar84._0_4_ * auVar84._0_4_;
                auVar101._4_4_ = auVar84._4_4_ * auVar84._4_4_;
                auVar101._8_4_ = auVar84._8_4_ * auVar84._8_4_;
                auVar101._12_4_ = auVar84._12_4_ * auVar84._12_4_;
                fVar43 = fVar95 * fVar95 + fVar97 * fVar97 + fVar39 * fVar39;
                fVar47 = fVar95 * fVar95 + fVar97 * fVar97 + fVar39 * fVar39;
                iVar12 = -(uint)(fVar43 == 0.0);
                uVar66 = CONCAT13(~(byte)((uint)iVar12 >> 0x18),
                                  CONCAT12(~(byte)((uint)iVar12 >> 0x10),
                                           CONCAT11(~(byte)((uint)iVar12 >> 8),~(byte)iVar12)));
                auVar94._0_4_ = auVar76._0_4_ * fVar95 - auVar84._0_4_ * (float)uVar30;
                auVar94._4_4_ =
                     auVar76._4_4_ * fVar97 - auVar84._4_4_ * (float)((ulong)uVar30 >> 0x20);
                auVar94._8_4_ = auVar84._0_4_ * fVar39 - auVar84._8_4_ * fVar95;
                auVar94._12_4_ = auVar84._4_4_ * 0.0 - auVar84._12_4_ * fVar97;
                auVar76 = NEON_ext(auVar94,auVar94,4,1);
                iVar12 = -(uint)(fVar43 == 0.0);
                iVar65 = -(uint)(fVar47 == 0.0);
                uVar96 = CONCAT44((float)((ulong)uVar68 >> 0x20) / fVar47,fVar61 / fVar43) &
                         CONCAT44(uVar66,uVar66);
                fVar43 = fVar48 * auVar76._0_4_;
                fVar95 = fVar92 * auVar76._4_4_;
                auVar99._0_4_ = fVar57 * fVar48;
                auVar99._4_4_ = fVar63 * fVar92;
                auVar99._8_4_ = fVar64 * fVar93;
                auVar99._12_4_ = fVar27 * (fVar38 - fVar69);
                auVar91._0_4_ = fVar48 * auVar84._0_4_;
                auVar91._4_4_ = fVar92 * auVar84._4_4_;
                auVar91._8_4_ = fVar93 * auVar84._8_4_;
                auVar91._12_4_ = (fVar38 - fVar69) * auVar84._12_4_;
                auVar80 = NEON_ext(auVar101,auVar101,8,1);
                auVar76 = NEON_ext(auVar91,auVar91,8,1);
                fVar39 = auVar80._0_4_ + auVar101._0_4_ + auVar101._4_4_;
                fVar47 = auVar76._0_4_ + auVar91._0_4_ + auVar91._4_4_;
                fVar48 = fVar64 * auVar84._8_4_ + fVar57 * auVar84._0_4_ + fVar63 * auVar84._4_4_;
                fVar92 = fVar64 * auVar84._8_4_ + fVar57 * auVar84._0_4_ + fVar63 * auVar84._4_4_;
                auVar76 = NEON_ext(auVar99,auVar99,8,1);
                fVar97 = auVar75._0_4_ + auVar72._0_4_ + auVar72._4_4_;
                fVar100 = auVar76._0_4_ + auVar99._0_4_ + auVar99._4_4_;
                uVar30 = NEON_fminnm(CONCAT44((float)(uVar96 >> 0x20) *
                                              (fVar43 + fVar95 + fVar93 * auVar94._0_4_),
                                              (float)uVar96 *
                                              (fVar43 + fVar95 + fVar93 * auVar94._0_4_)),uVar68,4);
                uVar96 = NEON_fmax(uVar30,0,4);
                iVar41 = -(uint)(fVar97 == 0.0);
                iVar102 = -(uint)(fVar39 == 0.0);
                fVar97 = auVar45._0_4_ / fVar97;
                fVar39 = auVar45._8_4_ / fVar39;
                fVar93 = (float)CONCAT13((byte)((uint)fVar97 >> 0x18) &
                                         ~(byte)((uint)iVar41 >> 0x18),
                                         CONCAT12((byte)((uint)fVar97 >> 0x10) &
                                                  ~(byte)((uint)iVar41 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar97 >> 8) &
                                                           ~(byte)((uint)iVar41 >> 8),
                                                           SUB41(fVar97,0) & ~(byte)iVar41)));
                fVar39 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) &
                                         ~(byte)((uint)iVar102 >> 0x18),
                                         CONCAT12((byte)((uint)fVar39 >> 0x10) &
                                                  ~(byte)((uint)iVar102 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar39 >> 8) &
                                                           ~(byte)((uint)iVar102 >> 8),
                                                           SUB41(fVar39,0) & ~(byte)iVar102)));
                fVar43 = ((float)uVar96 * fVar48 - fVar47) * fVar39;
                fVar39 = ((float)(uVar96 >> 0x20) * fVar92 - fVar47) * fVar39;
                uVar30 = NEON_fminnm(CONCAT44(fVar39,fVar43),uVar68,4);
                uVar30 = NEON_fmax(uVar30,0,4);
                fVar95 = (float)uVar30;
                fVar97 = (float)((ulong)uVar30 >> 0x20);
                iVar41 = -(uint)(fVar95 == fVar43);
                iVar102 = -(uint)(fVar97 == fVar39);
                uVar30 = NEON_fminnm(CONCAT44((fVar100 + fVar97 * fVar92) * fVar93,
                                              (fVar100 + fVar95 * fVar48) * fVar93),uVar68,4);
                uVar23 = NEON_fmax(uVar30,0,4);
                uVar96 = uVar96 ^ (uVar96 ^ uVar23) &
                                  CONCAT17(~(byte)((uint)iVar102 >> 0x18) |
                                           (byte)((uint)iVar65 >> 0x18),
                                           CONCAT16(~(byte)((uint)iVar102 >> 0x10) |
                                                    (byte)((uint)iVar65 >> 0x10),
                                                    CONCAT15(~(byte)((uint)iVar102 >> 8) |
                                                             (byte)((uint)iVar65 >> 8),
                                                             CONCAT14(~(byte)iVar102 | (byte)iVar65,
                                                                      CONCAT13(~(byte)((uint)iVar41
                                                                                      >> 0x18) |
                                                                               (byte)((uint)iVar12
                                                                                     >> 0x18),
                                                                               CONCAT12(~(byte)((
                                                  uint)iVar41 >> 0x10) |
                                                  (byte)((uint)iVar12 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar41 >> 8) |
                                                           (byte)((uint)iVar12 >> 8),
                                                           ~(byte)iVar41 | (byte)iVar12)))))));
                fVar39 = (float)uVar96;
                fVar47 = (float)(uVar96 >> 0x20);
                fVar43 = fVar29 + fVar57 * fVar39;
                fVar48 = fVar37 + fVar63 * fVar47;
                fVar92 = fVar56 + fVar64 * fVar39;
                fVar47 = fVar69 + fVar27 * fVar47;
                fVar39 = fVar43 - (fVar40 + auVar84._0_4_ * fVar95);
                fVar35 = fVar48 - (fVar35 + auVar84._4_4_ * fVar97);
                fVar36 = fVar92 - (fVar36 + auVar84._8_4_ * fVar95);
                fVar38 = fVar47 - (fVar38 + auVar84._12_4_ * fVar97);
                auVar85._0_4_ = fVar39 * fVar39;
                auVar85._4_4_ = fVar35 * fVar35;
                auVar85._8_4_ = fVar36 * fVar36;
                auVar85._12_4_ = fVar38 * fVar38;
                auVar76 = NEON_ext(auVar85,auVar85,8,1);
                if ((auVar85._0_4_ + auVar85._4_4_ + auVar76._0_4_ < fVar28 * fVar28) &&
                   (auVar81._0_4_ = fVar42 * (fVar43 + fVar39 * -0.5),
                   auVar81._4_4_ = fStack_19c * (fVar48 + fVar35 * -0.5),
                   auVar81._8_4_ = fVar59 * (fVar92 + fVar36 * -0.5),
                   auVar81._12_4_ = fVar60 * (fVar47 + fVar38 * -0.5),
                   auVar76 = NEON_ext(auVar81,auVar81,8,1),
                   fVar35 = auVar76._0_4_ + auVar81._0_4_ + auVar81._4_4_,
                   !(bool)((~(auVar34._0_4_ + auVar34._4_4_ + auVar32._0_4_ < fVar35) |
                           ~(fVar35 < auVar46._0_4_ + auVar46._4_4_ + auVar58._0_4_)) & 1))) {
                  uVar30 = 0;
                  goto LAB_03073e18;
                }
                uVar73 = uVar73 - 1;
                pfVar20 = pfVar20 + 8;
              } while (uVar73 != 0);
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar26);
        }
        uVar30 = 1;
      }
LAB_03073e18:
      lVar21 = nn::os::GetSystemTick();
      *(long *)(param_14 + 0x90) = (lVar21 - lVar17) + *(long *)(param_14 + 0x90);
      *(int *)(param_14 + 0x98) = *(int *)(param_14 + 0x98) + 1;
      if (lVar25 == 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar15,uVar18);
      }
      else {
        uVar16 = uVar18 + 0x3f & 0xffffffffffffffc0;
        if ((*(ulong *)(lVar25 + 0x28) < uVar16) || (*(long *)(lVar25 + 0x38) != uVar16 + lVar15)) {
          if (lVar15 != 0) {
            if (*(ulong *)(lVar25 + 0x28) < uVar16 + 0x40) {
              *(int *)(*(long *)(lVar25 + 0x30) + 0x20) =
                   *(int *)(*(long *)(lVar25 + 0x30) + 0x20) + -1;
              (**(code **)(**(long **)(lVar25 + 0x10) + 0x18))
                        (*(long **)(lVar25 + 0x10),lVar15 - *(int *)(lVar15 + -4),uVar16 + 0x44);
            }
            else {
              if (*(long *)(lVar25 + 0x38) == uVar16 + lVar15) {
                *(long *)(lVar25 + 0x38) = lVar15;
                goto LAB_03073f04;
              }
              FUN_031cf778(lVar25,lVar15);
            }
          }
        }
        else {
          *(long *)(lVar25 + 0x38) = lVar15;
          if (*(long *)(lVar25 + 0x48) == lVar15) {
LAB_03073f04:
            FUN_031cf578(lVar25);
          }
        }
      }
      if (lVar19 == 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar14,uVar18);
      }
      else {
        uVar16 = uVar18 + 0x3f & 0xffffffffffffffc0;
        if ((*(ulong *)(lVar19 + 0x28) < uVar16) || (*(long *)(lVar19 + 0x38) != uVar16 + lVar14)) {
          if (lVar14 != 0) {
            if (*(ulong *)(lVar19 + 0x28) < uVar16 + 0x40) {
              *(int *)(*(long *)(lVar19 + 0x30) + 0x20) =
                   *(int *)(*(long *)(lVar19 + 0x30) + 0x20) + -1;
              (**(code **)(**(long **)(lVar19 + 0x10) + 0x18))
                        (*(long **)(lVar19 + 0x10),lVar14 - *(int *)(lVar14 + -4),uVar16 + 0x44);
            }
            else {
              if (*(long *)(lVar19 + 0x38) == uVar16 + lVar14) {
                *(long *)(lVar19 + 0x38) = lVar14;
                goto LAB_03073fcc;
              }
              FUN_031cf778(lVar19,lVar14);
            }
          }
        }
        else {
          *(long *)(lVar19 + 0x38) = lVar14;
          if (*(long *)(lVar19 + 0x48) == lVar14) {
LAB_03073fcc:
            FUN_031cf578(lVar19);
          }
        }
      }
    }
    lVar19 = local_d0;
    lVar25 = local_e8;
    if (local_d0 == local_e8) goto LAB_030732cc;
  }
  else {
    lVar14 = nn::os::GetSystemTick();
    lVar15 = nn::os::GetSystemTick();
    uVar16 = (**(code **)(*param_2 + 0x20))
                       (param_2,param_1,param_7 & 0xffffffff,param_8,param_9,param_10);
    lVar17 = nn::os::GetSystemTick();
    *(long *)(param_14 + 0x38) = (lVar17 - lVar15) + *(long *)(param_14 + 0x38);
    *(int *)(param_14 + 0x40) = *(int *)(param_14 + 0x40) + 1;
    lVar15 = nn::os::GetSystemTick();
    *(long *)(param_14 + 0x20) = (lVar15 - lVar14) + *(long *)(param_14 + 0x20);
    *(int *)(param_14 + 0x28) = *(int *)(param_14 + 0x28) + 1;
    if ((uVar16 & 1) != 0) goto LAB_03073210;
    uVar30 = 0;
    lVar25 = lVar19;
LAB_030732cc:
    local_e0 = local_e0 & 0xffffffff00000000;
  }
  if (local_d8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar19);
    goto LAB_030740ac;
  }
  uVar16 = local_c8 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_d8 + 0x28) < uVar16) || (*(long *)(local_d8 + 0x38) != uVar16 + lVar19)) {
    if (lVar19 == 0) goto LAB_030740ac;
    if (*(ulong *)(local_d8 + 0x28) < uVar16 + 0x40) {
      *(int *)(*(long *)(local_d8 + 0x30) + 0x20) = *(int *)(*(long *)(local_d8 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_d8 + 0x10) + 0x18))
                (*(long **)(local_d8 + 0x10),lVar19 - *(int *)(lVar19 + -4),uVar16 + 0x44);
      goto LAB_030740ac;
    }
    if (*(long *)(local_d8 + 0x38) != uVar16 + lVar19) {
      FUN_031cf778(local_d8,lVar19);
      goto LAB_030740ac;
    }
    *(long *)(local_d8 + 0x38) = lVar19;
  }
  else {
    *(long *)(local_d8 + 0x38) = lVar19;
    if (*(long *)(local_d8 + 0x48) != lVar19) goto LAB_030740ac;
  }
  FUN_031cf578();
LAB_030740ac:
  uVar18 = local_e0;
  uVar16 = local_e0 >> 0x20;
  local_e0 = uVar16 << 0x20;
  if ((lVar25 != 0) && (-1 < (long)uVar18)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar25,uVar16 << 5);
  }
  if ((local_a8 != (long *)0x0) && (local_a0 != '\0')) {
    lVar25 = *local_a8;
    if (((*(byte *)(lVar25 + 0x38) & 1) != 0) && (local_a8[6] != 0)) {
      puVar105 = (undefined8 *)local_a8[2];
      uVar16 = (long)puVar105 + 0x17U & 0xfffffffffffffff8;
      if ((uVar16 <= (ulong)local_a8[3]) && (local_a8[2] = uVar16, puVar105 != (undefined8 *)0x0)) {
        *puVar105 = &DAT_03c4e575;
        puVar105[1] = *(undefined8 *)(local_a8[6] + 8);
      }
    }
    puVar105 = (undefined8 *)local_a8[2];
    uVar16 = (long)puVar105 + 0x17U & 0xfffffffffffffff8;
    if ((uVar16 <= (ulong)local_a8[3]) && (local_a8[2] = uVar16, puVar105 != (undefined8 *)0x0)) {
      *puVar105 = &DAT_03c2d363;
      uVar68 = nn::os::GetSystemTick();
      puVar105[1] = uVar68;
    }
    if (*(code **)(lVar25 + 0x20) != (code *)0x0) {
      (**(code **)(lVar25 + 0x20))(*(undefined8 *)(lVar25 + 0x28));
    }
  }
  lVar25 = nn::os::GetSystemTick();
  *(long *)(param_14 + 8) = (lVar25 - lVar13) + *(long *)(param_14 + 8);
  *(int *)(param_14 + 0x10) = *(int *)(param_14 + 0x10) + 1;
  return uVar30;
}



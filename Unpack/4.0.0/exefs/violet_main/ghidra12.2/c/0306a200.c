/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0306a200; name: FUN_0306a200
 */


void FUN_0306a200(long param_1,long *param_2,ulong param_3,int *param_4,undefined8 param_5,
                 undefined8 param_6,undefined1 (*param_7) [16],undefined8 *param_8,long *param_9,
                 long *param_10,undefined8 *param_11,long param_12)

{
  void *__src;
  uint *puVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined2 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  ulong uVar19;
  bool bVar20;
  byte bVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  void *pvVar25;
  long lVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined8 *puVar31;
  float *pfVar32;
  int iVar33;
  uint uVar34;
  long lVar35;
  long lVar36;
  int *piVar37;
  long *plVar38;
  uint uVar39;
  long lVar40;
  long lVar41;
  ulong uVar42;
  int iVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar65;
  undefined4 uVar66;
  float fVar67;
  float fVar72;
  float fVar73;
  float fVar75;
  int iVar76;
  float fVar77;
  float fVar78;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar64;
  float fVar74;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined8 uVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  int iVar88;
  float fVar89;
  int iVar90;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  undefined1 auVar91 [16];
  float fVar97;
  float fVar101;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  int iVar104;
  undefined8 uVar105;
  int iVar106;
  undefined8 uVar107;
  undefined8 uVar108;
  float fVar109;
  float fVar110;
  undefined8 uVar111;
  float fVar112;
  undefined8 uVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  undefined8 uVar129;
  undefined8 uVar130;
  undefined8 uVar131;
  undefined8 uVar132;
  float fVar133;
  float fVar134;
  undefined8 uVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  long local_2c8;
  ulong local_298;
  float local_230;
  float fStack_22c;
  ulong local_1e0;
  ulong local_1d8;
  void *local_1a0;
  ulong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  ulong local_d0;
  undefined8 local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  undefined8 local_98 [2];
  
  lVar22 = nn::os::GetSystemTick();
  uVar135 = *(undefined8 *)(*param_7 + 8);
  uVar111 = *(undefined8 *)*param_7;
  auVar79 = *param_7;
  uVar108 = *param_8;
  iVar90 = param_4[2];
  lVar26 = tpidr_el0;
  lVar28 = *(long *)(lVar26 + 0x1000b8);
  if (lVar28 == 0) {
    lVar28 = FUN_00e5d3b4();
    *(long *)(lVar26 + 0x1000b8) = lVar28;
  }
  lVar35 = (long)(short)iVar90 * 0x10;
  local_2c8 = *(long *)(*(long *)(lVar28 + 0x3d0) + 0x10);
  local_f8 = lVar35;
  if ((*(long *)(local_2c8 + 8) == 0) && (local_2c8 != 0)) {
    local_d0 = lVar35 + 0x3fU & 0xffffffffffffffc0;
    if (local_d0 <= *(ulong *)(local_2c8 + 0x28)) {
      lVar28 = *(long *)(local_2c8 + 0x38);
      if (local_d0 + lVar28 <= *(ulong *)(local_2c8 + 0x40)) {
        *(ulong *)(local_2c8 + 0x38) = local_d0 + lVar28;
        goto LAB_0306a330;
      }
    }
    lVar28 = FUN_031cf3b4(local_2c8,&local_d0);
  }
  else {
    lVar28 = (**(code **)PTR_DAT_047d1a08)(1,&local_f8,0x40);
    local_2c8 = 0;
  }
LAB_0306a330:
  local_1a0 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,0x400);
  local_d0 = 0;
  local_c8 = 0x8000000000000000;
  lVar29 = *(long *)(lVar26 + 0x1000b8);
  if (lVar29 == 0) {
    lVar29 = FUN_00e5d3b4();
    *(long *)(lVar26 + 0x1000b8) = lVar29;
  }
  local_c0 = *(long *)(*(long *)(lVar29 + 0x3d0) + 0x10);
  if (*(long *)(local_c0 + 8) == 0) {
    local_b0 = 0x300;
    local_110 = 0x300;
    if (local_c0 == 0) goto LAB_0306a400;
    local_f8 = 0x300;
    if (*(ulong *)(local_c0 + 0x28) < 0x300) {
LAB_0306a3b8:
      local_b8 = FUN_031cf3b4(local_c0,&local_f8);
    }
    else {
      local_b8 = *(ulong *)(local_c0 + 0x38);
      if (*(ulong *)(local_c0 + 0x40) < local_b8 + 0x300) goto LAB_0306a3b8;
      *(ulong *)(local_c0 + 0x38) = local_b8 + 0x300;
    }
  }
  else {
    local_c0 = 0;
LAB_0306a400:
    local_b0 = 0x300;
    local_110 = 0x300;
    local_b8 = (**(code **)PTR_DAT_047d1a08)(1,&local_110,0x40);
  }
  local_c8 = CONCAT44(0x80000040,(int)local_c8);
  local_f8 = 0;
  local_f0 = 0x8000000000000000;
  lVar29 = *(long *)(lVar26 + 0x1000b8);
  local_d0 = local_b8;
  if (lVar29 == 0) {
    lVar29 = FUN_00e5d3b4();
    *(long *)(lVar26 + 0x1000b8) = lVar29;
  }
  local_e8 = *(long *)(*(long *)(lVar29 + 0x3d0) + 0x10);
  if (*(long *)(local_e8 + 8) == 0) {
    local_d8 = 0x100;
    local_98[0] = 0x100;
    if (local_e8 == 0) goto LAB_0306a4ec;
    local_110 = 0x100;
    if (*(ulong *)(local_e8 + 0x28) < 0x100) {
LAB_0306a4a4:
      local_e0 = FUN_031cf3b4(local_e8,&local_110);
    }
    else {
      local_e0 = *(long *)(local_e8 + 0x38);
      if (*(ulong *)(local_e8 + 0x40) < local_e0 + 0x100U) goto LAB_0306a4a4;
      *(ulong *)(local_e8 + 0x38) = local_e0 + 0x100U;
    }
  }
  else {
    local_e8 = 0;
LAB_0306a4ec:
    local_98[0] = 0x100;
    local_d8 = 0x100;
    local_e0 = (**(code **)PTR_DAT_047d1a08)(1,local_98,0x40);
  }
  local_298 = param_3 >> 0x16 & 0x3ff;
  local_f0 = CONCAT44(0x80000040,(int)local_f0);
  iVar88 = *param_4;
  lVar29 = (long)iVar88;
  lVar30 = *(long *)(*(long *)(param_1 + 0x38) + local_298 * 0x100);
  lVar41 = *(long *)(lVar30 + 0x20);
  auVar68 = *(undefined1 (*) [16])(lVar30 + 0x60);
  auVar70 = *(undefined1 (*) [16])(lVar30 + 0x70);
  uVar107 = *(undefined8 *)(lVar30 + 0x88);
  uVar105 = *(undefined8 *)(lVar30 + 0x80);
  auVar99 = *(undefined1 (*) [16])(lVar30 + 0x90);
  sVar3 = (short)param_4[2];
  iVar43 = *(int *)(lVar41 + 0x30);
  lVar30 = *(long *)(lVar41 + 0x28);
  iVar90 = iVar88 + sVar3;
  iVar76 = iVar90 + -1;
  if (iVar43 < iVar90) {
    plVar38 = (long *)(lVar41 + 0xe0);
    iVar76 = iVar76 - iVar43;
LAB_0306a5a8:
    lVar40 = *plVar38;
  }
  else {
    iVar90 = iVar76;
    if (*(int *)(lVar41 + 0x78) != 0) {
      iVar90 = *(int *)(*(long *)(lVar41 + 0x70) + (long)iVar76 * 4);
    }
    lVar40 = lVar30;
    if (iVar90 != -1) {
      plVar38 = (long *)(lVar41 + 0xc0);
      iVar76 = iVar90;
      goto LAB_0306a5a8;
    }
  }
  iVar90 = *(int *)(lVar41 + 0x40);
  iVar76 = *(int *)(lVar40 + (long)iVar76 * 0x14 + 4);
  lVar40 = 0x38;
  if (iVar90 <= iVar76) {
    lVar40 = 0xf0;
  }
  iVar33 = 0;
  if (iVar90 <= iVar76) {
    iVar33 = iVar90;
  }
  uVar130 = auVar70._8_8_;
  uVar129 = auVar70._0_8_;
  uVar132 = auVar99._8_8_;
  uVar131 = auVar99._0_8_;
  fVar87 = (float)uVar111;
  fVar92 = (float)((ulong)uVar111 >> 0x20);
  fVar94 = (float)uVar135;
  fVar96 = (float)((ulong)uVar135 >> 0x20);
  fVar123 = auVar68._0_4_;
  fVar124 = auVar68._4_4_;
  fVar125 = auVar68._8_4_;
  fVar127 = auVar68._12_4_;
  local_f8 = local_e0;
  if (sVar3 != 0) {
    puVar31 = (undefined8 *)(*(long *)(lVar41 + lVar40) + (long)(iVar76 - iVar33) * 0x10);
    uVar111 = *puVar31;
    uVar2 = (uint)param_3 & 0xffc00000;
    fVar67 = (float)uVar111;
    fVar126 = (float)((ulong)uVar111 >> 0x20);
    fVar128 = (float)puVar31[1];
    fVar85 = (float)((ulong)uVar105 >> 0x20);
    fVar86 = (float)((ulong)uVar107 >> 0x20);
    fVar109 = 0.0;
    fVar110 = 0.0;
    fVar118 = 0.0;
    fVar119 = 0.0;
    fVar120 = 0.0;
    fVar121 = 0.0;
    fVar133 = auVar99._0_4_ + (float)uVar105 * fVar128 + fVar123 * fVar67 + auVar70._0_4_ * fVar126;
    fVar122 = auVar99._4_4_ + fVar85 * fVar128 + fVar124 * fVar67 + auVar70._4_4_ * fVar126;
    fVar112 = auVar99._8_4_ + (float)uVar107 * fVar128 + fVar125 * fVar67 + auVar70._8_4_ * fVar126;
    iVar76 = 0;
    fVar60 = fVar87 * fVar133;
    fVar72 = fVar92 * fVar122;
    fVar77 = fVar94 * fVar112;
    fVar61 = fVar77 + fVar60 + fVar72;
    fVar77 = fVar77 + fVar60 + fVar72;
    auVar79 = NEON_ext(auVar79,auVar79,4,1);
    lVar40 = lVar29 * 0x14;
    iVar90 = 0;
    local_118 = 0;
    local_1e0 = 0;
    uVar42 = 0x40;
    fVar133 = fVar133 - fVar87 * fVar61;
    fVar122 = fVar122 - fVar92 * fVar77;
    fVar112 = fVar112 - fVar94 * fVar61;
    fVar67 = (auVar99._12_4_ + fVar86 * fVar128 + fVar127 * fVar67 + auVar70._12_4_ * fVar126) -
             fVar96 * fVar77;
    do {
      auVar68 = *param_7;
      iVar33 = *(int *)(lVar41 + 0x60);
      lVar36 = (long)iVar33;
      if (lVar29 < iVar43) {
        if (*(int *)(lVar41 + 0x78) == 0) {
          iVar43 = iVar88 + iVar76;
        }
        else {
          iVar43 = *(int *)(*(long *)(lVar41 + 0x70) + lVar29 * 4);
        }
        if (iVar43 == -1) {
          puVar31 = (undefined8 *)(lVar30 + lVar40);
          lVar30 = *(long *)(lVar41 + 0x58) + lVar29 * lVar36 * 4;
          lVar36 = lVar30 + lVar36 * 4;
        }
        else {
          lVar30 = *(long *)(lVar41 + 0x130) + (long)(iVar43 * iVar33) * 4;
          lVar36 = lVar30 + lVar36 * 4;
          puVar31 = (undefined8 *)(*(long *)(lVar41 + 0xc0) + (long)iVar43 * 0x14);
        }
      }
      else {
        iVar43 = (iVar88 + iVar76) - iVar43;
        lVar30 = *(long *)(lVar41 + 0x150) + (long)(iVar33 * iVar43) * 4;
        lVar36 = lVar30 + lVar36 * 4;
        puVar31 = (undefined8 *)(*(long *)(lVar41 + 0xe0) + (long)iVar43 * 0x14);
      }
      iVar43 = *(int *)((long)puVar31 + 4);
      local_110 = *puVar31;
      local_108 = puVar31[1];
      local_100 = *(undefined4 *)(puVar31 + 2);
      iVar33 = *(int *)(lVar41 + 0x40);
      lVar23 = 0x38;
      if (iVar33 <= iVar43) {
        lVar23 = 0xf0;
      }
      iVar104 = 0;
      if (iVar33 <= iVar43) {
        iVar104 = iVar33;
      }
      puVar31 = (undefined8 *)(*(long *)(lVar41 + lVar23) + (long)(iVar43 - iVar104) * 0x10);
      uVar111 = *puVar31;
      fVar126 = (float)uVar111;
      fVar128 = (float)((ulong)uVar111 >> 0x20);
      fVar60 = (float)puVar31[1];
      fVar61 = auVar99._0_4_ + (float)uVar105 * fVar60 + fVar123 * fVar126 + auVar70._0_4_ * fVar128
      ;
      fVar72 = auVar99._4_4_ + fVar85 * fVar60 + fVar124 * fVar126 + auVar70._4_4_ * fVar128;
      fVar77 = auVar99._8_4_ + (float)uVar107 * fVar60 + fVar125 * fVar126 + auVar70._8_4_ * fVar128
      ;
      fVar64 = auVar68._0_4_;
      fVar62 = fVar64 * fVar61;
      fVar74 = auVar68._4_4_;
      fVar73 = fVar74 * fVar72;
      fVar95 = auVar68._8_4_;
      fVar78 = fVar95 * fVar77;
      fVar63 = fVar62 + fVar73 + fVar78;
      fVar78 = fVar62 + fVar73 + fVar78;
      fVar61 = fVar61 - fVar64 * fVar63;
      fVar72 = fVar72 - fVar74 * fVar78;
      fVar77 = fVar77 - fVar95 * fVar63;
      fVar126 = (auVar99._12_4_ + fVar86 * fVar60 + fVar127 * fVar126 + auVar70._12_4_ * fVar128) -
                auVar68._12_4_ * fVar78;
      auVar68._4_4_ = fVar122;
      auVar68._0_4_ = fVar133;
      auVar68._8_4_ = fVar112;
      auVar68._12_4_ = fVar67;
      auVar80._4_4_ = fVar122;
      auVar80._0_4_ = fVar133;
      auVar80._8_4_ = fVar112;
      auVar80._12_4_ = fVar67;
      auVar68 = NEON_ext(auVar68,auVar80,4,1);
      auVar15._4_4_ = fVar72;
      auVar15._0_4_ = fVar61;
      auVar15._8_4_ = fVar77;
      auVar15._12_4_ = fVar126;
      auVar16._4_4_ = fVar72;
      auVar16._0_4_ = fVar61;
      auVar16._8_4_ = fVar77;
      auVar16._12_4_ = fVar126;
      auVar80 = NEON_ext(auVar15,auVar16,4,1);
      auVar69._0_4_ = fVar133 * auVar80._0_4_ - auVar68._0_4_ * fVar61;
      auVar69._4_4_ = fVar122 * auVar80._4_4_ - auVar68._4_4_ * fVar72;
      auVar69._8_4_ = fVar112 * fVar61 - fVar133 * fVar77;
      auVar69._12_4_ = fVar67 * fVar72 - fVar122 * fVar126;
      auVar68 = NEON_ext(auVar69,auVar69,4,1);
      fVar64 = fVar64 * auVar68._0_4_;
      fVar74 = fVar74 * auVar68._4_4_;
      fVar128 = fVar64 + fVar74 + fVar95 * auVar69._0_4_;
      fVar60 = fVar64 + fVar74 + fVar95 * auVar69._0_4_;
      local_1d8 = uVar42;
      if ((int)local_108 == -1) {
LAB_0306a868:
        iVar43 = (int)param_9[1];
        lVar30 = (long)iVar43;
        if ((int)(*(uint *)((long)param_9 + 0xc) & 0x7fffffff) <= iVar43) {
          FUN_03076488(param_9,lVar30 + 1);
          iVar43 = (int)param_9[1];
        }
        puVar31 = (undefined8 *)(*param_9 + (long)iVar43 * 0x20);
        *(int *)(param_9 + 1) = (int)(lVar30 + 1);
        puVar31[1] = CONCAT44(fVar67,fVar112);
        *puVar31 = CONCAT44(fVar122,fVar133);
        puVar31[3] = CONCAT44(fVar126,fVar77);
        puVar31[2] = CONCAT44(fVar72,fVar61);
      }
      else {
        if ((param_2 == (long *)0x0) || (((byte)local_100 >> 5 & 1) != 0)) {
          if (((byte)local_100 >> 5 & 1) != 0) goto LAB_0306a868;
        }
        else {
          lVar23 = nn::os::GetSystemTick();
          uVar24 = (**(code **)(*param_2 + 0x28))
                             (param_2,param_1,uVar2 | iVar88 + iVar76,&local_110,lVar30,lVar36);
          lVar30 = nn::os::GetSystemTick();
          *(long *)(param_12 + 0x20) = (lVar30 - lVar23) + *(long *)(param_12 + 0x20);
          *(int *)(param_12 + 0x28) = *(int *)(param_12 + 0x28) + 1;
          if ((uVar24 & 1) == 0) goto LAB_0306a868;
        }
        auVar80 = *param_7;
        fVar62 = fVar61 - fVar133;
        fVar63 = fVar72 - fVar122;
        uVar44 = SUB41(fVar63,0);
        uVar45 = (undefined1)((uint)fVar63 >> 8);
        uVar46 = (undefined1)((uint)fVar63 >> 0x10);
        uVar47 = (undefined1)((uint)fVar63 >> 0x18);
        fVar64 = fVar77 - fVar112;
        uVar48 = (undefined1)((uint)fVar64 >> 8);
        uVar49 = (undefined1)((uint)fVar64 >> 0x10);
        uVar50 = (undefined1)((uint)fVar64 >> 0x18);
        fVar73 = fVar126 - fVar67;
        uVar51 = (undefined1)((uint)fVar73 >> 8);
        uVar52 = (undefined1)((uint)fVar73 >> 0x10);
        uVar53 = (undefined1)((uint)fVar73 >> 0x18);
        local_230 = auVar79._0_4_;
        fStack_22c = auVar79._4_4_;
        auVar8[4] = uVar44;
        auVar8._0_4_ = fVar62;
        auVar8[5] = uVar45;
        auVar8[6] = uVar46;
        auVar8[7] = uVar47;
        auVar8[8] = SUB41(fVar64,0);
        auVar8[9] = uVar48;
        auVar8[10] = uVar49;
        auVar8[0xb] = uVar50;
        auVar8[0xc] = SUB41(fVar73,0);
        auVar8[0xd] = uVar51;
        auVar8[0xe] = uVar52;
        auVar8[0xf] = uVar53;
        auVar9[4] = uVar44;
        auVar9._0_4_ = fVar62;
        auVar9[5] = uVar45;
        auVar9[6] = uVar46;
        auVar9[7] = uVar47;
        auVar9[8] = SUB41(fVar64,0);
        auVar9[9] = uVar48;
        auVar9[10] = uVar49;
        auVar9[0xb] = uVar50;
        auVar9[0xc] = SUB41(fVar73,0);
        auVar9[0xd] = uVar51;
        auVar9[0xe] = uVar52;
        auVar9[0xf] = uVar53;
        auVar68 = NEON_ext(auVar8,auVar9,4,1);
        auVar81._0_4_ = local_230 * fVar62 - auVar80._0_4_ * auVar68._0_4_;
        auVar81._4_4_ = fStack_22c * fVar63 - auVar80._4_4_ * auVar68._4_4_;
        auVar81._8_4_ = fVar87 * fVar64 - auVar80._8_4_ * fVar62;
        auVar81._12_4_ =
             fVar92 * fVar73 -
             auVar80._12_4_ *
             (float)(CONCAT17(uVar47,CONCAT16(uVar46,CONCAT15(uVar45,CONCAT14(uVar44,fVar62)))) >>
                    0x20);
        auVar68 = NEON_ext(auVar81,auVar81,4,1);
        fVar63 = auVar68._0_4_;
        fVar64 = auVar68._4_4_;
        fVar62 = auVar81._0_4_ * auVar81._0_4_ + fVar63 * fVar63 + fVar64 * fVar64;
        uVar44 = 0;
        uVar45 = 0;
        uVar46 = 0;
        uVar47 = 0;
        uVar48 = 0;
        uVar49 = 0;
        uVar50 = 0;
        uVar51 = 0;
        uVar52 = 0;
        uVar53 = 0;
        uVar54 = 0;
        uVar55 = 0;
        uVar56 = 0;
        uVar57 = 0;
        uVar58 = 0;
        uVar59 = 0;
        if (fVar62 != 0.0) {
          fVar62 = SQRT(fVar62);
          fVar73 = SQRT(auVar81._0_4_ * auVar81._0_4_ + fVar63 * fVar63 + fVar64 * fVar64);
          fVar63 = fVar63 / fVar62;
          uVar44 = SUB41(fVar63,0);
          uVar45 = (undefined1)((uint)fVar63 >> 8);
          uVar46 = (undefined1)((uint)fVar63 >> 0x10);
          uVar47 = (undefined1)((uint)fVar63 >> 0x18);
          fVar64 = fVar64 / fVar73;
          uVar48 = SUB41(fVar64,0);
          uVar49 = (undefined1)((uint)fVar64 >> 8);
          uVar50 = (undefined1)((uint)fVar64 >> 0x10);
          uVar51 = (undefined1)((uint)fVar64 >> 0x18);
          fVar63 = auVar81._0_4_ / fVar62;
          uVar52 = SUB41(fVar63,0);
          uVar53 = (undefined1)((uint)fVar63 >> 8);
          uVar54 = (undefined1)((uint)fVar63 >> 0x10);
          uVar55 = (undefined1)((uint)fVar63 >> 0x18);
          fVar62 = 0.0 / (float)CONCAT13((char)((uint)fVar73 >> 0x18),
                                         CONCAT12((char)((uint)fVar73 >> 0x10),
                                                  (short)(CONCAT15((char)((uint)fVar73 >> 8),
                                                                   CONCAT14(SUB41(fVar73,0),fVar62))
                                                         >> 0x20)));
          uVar56 = SUB41(fVar62,0);
          uVar57 = (undefined1)((uint)fVar62 >> 8);
          uVar58 = (undefined1)((uint)fVar62 >> 0x10);
          uVar59 = (undefined1)((uint)fVar62 >> 0x18);
        }
        puVar31 = (undefined8 *)(lVar28 + (long)iVar90 * 0x10);
        puVar31[1] = CONCAT17(uVar59,CONCAT16(uVar58,CONCAT15(uVar57,CONCAT14(uVar56,CONCAT13(uVar55
                                                  ,CONCAT12(uVar54,CONCAT11(uVar53,uVar52)))))));
        *puVar31 = CONCAT17(uVar51,CONCAT16(uVar50,CONCAT15(uVar49,CONCAT14(uVar48,CONCAT13(uVar47,
                                                  CONCAT12(uVar46,CONCAT11(uVar45,uVar44)))))));
        uVar27 = local_108._4_4_;
        if ((((byte)local_100 >> 6 & 1) == 0) && (local_108._4_4_ != 0xffffffff)) {
          uVar27 = local_108._4_4_ & 0x3fffff | *(int *)(lVar41 + 0x17c) << 0x16;
        }
        fVar62 = fVar133 * (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44)));
        fVar63 = fVar122 * (float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48)));
        uVar44 = (undefined1)((uint)fVar63 >> 8);
        uVar45 = (undefined1)((uint)fVar63 >> 0x10);
        uVar46 = (undefined1)((uint)fVar63 >> 0x18);
        fVar64 = fVar112 * (float)CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,uVar52)));
        uVar47 = (undefined1)((uint)fVar64 >> 8);
        uVar48 = (undefined1)((uint)fVar64 >> 0x10);
        uVar49 = (undefined1)((uint)fVar64 >> 0x18);
        fVar73 = fVar67 * (float)CONCAT13(uVar59,CONCAT12(uVar58,CONCAT11(uVar57,uVar56)));
        uVar50 = (undefined1)((uint)fVar73 >> 8);
        uVar51 = (undefined1)((uint)fVar73 >> 0x10);
        uVar52 = (undefined1)((uint)fVar73 >> 0x18);
        iVar90 = iVar90 + 1;
        auVar10[4] = SUB41(fVar63,0);
        auVar10._0_4_ = fVar62;
        auVar10[5] = uVar44;
        auVar10[6] = uVar45;
        auVar10[7] = uVar46;
        auVar10[8] = SUB41(fVar64,0);
        auVar10[9] = uVar47;
        auVar10[10] = uVar48;
        auVar10[0xb] = uVar49;
        auVar10[0xc] = SUB41(fVar73,0);
        auVar10[0xd] = uVar50;
        auVar10[0xe] = uVar51;
        auVar10[0xf] = uVar52;
        auVar11[4] = SUB41(fVar63,0);
        auVar11._0_4_ = fVar62;
        auVar11[5] = uVar44;
        auVar11[6] = uVar45;
        auVar11[7] = uVar46;
        auVar11[8] = SUB41(fVar64,0);
        auVar11[9] = uVar47;
        auVar11[10] = uVar48;
        auVar11[0xb] = uVar49;
        auVar11[0xc] = SUB41(fVar73,0);
        auVar11[0xd] = uVar50;
        auVar11[0xe] = uVar51;
        auVar11[0xf] = uVar52;
        auVar68 = NEON_ext(auVar10,auVar11,8,1);
        uVar39 = *(uint *)(param_10 + 1);
        iVar43 = (int)uVar42;
        pvVar25 = local_1a0;
        if (iVar43 <= (int)local_118) {
          uVar4 = iVar43 * 2;
          uVar34 = 8;
          if (iVar43 != 0) {
            uVar34 = uVar4;
          }
          if (iVar43 < (int)uVar34) {
            if ((int)uVar34 <= (int)uVar4) {
              uVar34 = uVar4;
            }
            local_1d8 = (ulong)uVar34;
            pvVar25 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                        (PTR_PTR_047d1a50,
                                         -(ulong)(uVar34 >> 0x1f) & 0xfffffff000000000 |
                                         local_1d8 << 4);
            if ((local_1a0 != (void *)0x0) && (pvVar25 != (void *)0x0)) {
              if ((int)local_118 == 0) {
                local_1e0._0_4_ = 0;
              }
              else if ((int)local_1e0 < 1) {
                memcpy(pvVar25,local_1a0,-(uVar42 >> 0x1f) & 0xfffffff000000000 | uVar42 << 4);
                memcpy((void *)((long)pvVar25 + (long)iVar43 * 0x10),local_1a0,
                       -(local_1e0 >> 0x1f) & 0xfffffff000000000 | local_1e0 << 4);
                local_1e0._0_4_ = (int)local_118;
              }
              else {
                memcpy(pvVar25,local_1a0,-(local_118 >> 0x1f) & 0xfffffff000000000 | local_118 << 4)
                ;
                local_1e0._0_4_ = (int)local_118;
              }
            }
            if (iVar43 != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_1a0,0);
            }
          }
        }
        local_1a0 = pvVar25;
        bVar20 = (int)local_1e0 != (int)local_1d8;
        iVar43 = 0;
        if (bVar20) {
          iVar43 = (int)local_1e0;
        }
        puVar1 = (uint *)((long)local_1a0 + (long)iVar43 * 0x10);
        *puVar1 = uVar27;
        puVar1[1] = uVar2 | iVar88 + iVar76;
        puVar1[2] = uVar39;
        puVar1[3] = (uint)(auVar68._0_4_ + fVar62 + fVar63);
        lVar30 = param_10[1];
        *(int *)(param_10 + 1) = (int)lVar30 + 1;
        puVar31 = (undefined8 *)(*param_10 + (long)(int)lVar30 * 0x20);
        puVar31[1] = CONCAT44(fVar67,fVar112);
        *puVar31 = CONCAT44(fVar122,fVar133);
        puVar31[3] = CONCAT17((char)((uint)iVar76 >> 0x18),
                              CONCAT16((char)((uint)iVar76 >> 0x10),
                                       CONCAT15((char)((uint)iVar76 >> 8),
                                                CONCAT14((char)iVar76,fVar77)))) |
                     0x3f00000000000000;
        puVar31[2] = CONCAT17((char)((uint)fVar72 >> 0x18),
                              CONCAT16((char)((uint)fVar72 >> 0x10),
                                       CONCAT15((char)((uint)fVar72 >> 8),
                                                CONCAT14(SUB41(fVar72,0),fVar61))));
        uVar27 = 1;
        if (bVar20) {
          uVar27 = (int)local_1e0 + 1;
        }
        local_1e0 = (ulong)uVar27;
        local_118 = (ulong)((int)local_118 + 1);
      }
      fVar109 = fVar109 + fVar128;
      fVar110 = fVar110 + fVar60;
      fVar118 = fVar118 + (fVar133 + fVar61) * fVar128;
      fVar119 = fVar119 + (fVar122 + fVar72) * fVar60;
      fVar120 = fVar120 + (fVar112 + fVar77) * fVar128;
      fVar121 = fVar121 + (fVar67 + fVar126) * fVar60;
      if (sVar3 + -1 == iVar76) goto LAB_0306ab7c;
      lVar30 = *(long *)(lVar41 + 0x28);
      lVar29 = lVar29 + 1;
      iVar76 = iVar76 + 1;
      iVar43 = *(int *)(lVar41 + 0x30);
      lVar40 = lVar40 + 0x14;
      uVar42 = local_1d8;
      fVar133 = fVar61;
      fVar122 = fVar72;
      fVar112 = fVar77;
      fVar67 = fVar126;
    } while( true );
  }
  fVar118 = 0.0;
  fVar119 = 0.0;
  fVar120 = 0.0;
  fVar121 = 0.0;
  fVar109 = 0.0;
  fVar110 = 0.0;
  local_1e0 = 0;
  local_118 = 0;
  local_1d8 = 0x40;
LAB_0306aba4:
  uVar111 = NEON_fmov(0x40400000,4);
  fVar109 = fVar109 * (float)uVar111;
  fVar110 = fVar110 * (float)((ulong)uVar111 >> 0x20);
  uVar44 = (undefined1)((uint)fVar110 >> 0x10);
  uVar45 = (undefined1)((uint)fVar110 >> 0x18);
  fVar118 = fVar118 / fVar109;
  fVar119 = fVar119 / fVar110;
  fVar120 = fVar120 / fVar109;
  uVar12 = (undefined2)
           (CONCAT15((char)((uint)fVar110 >> 8),CONCAT14(SUB41(fVar110,0),fVar109)) >> 0x20);
  fVar121 = fVar121 / (float)CONCAT13(uVar45,CONCAT12(uVar44,uVar12));
  iVar90 = -(uint)(fVar109 == 0.0);
  iVar43 = -(uint)(fVar110 == 0.0);
  iVar88 = -(uint)(fVar109 == 0.0);
  iVar76 = -(uint)((float)CONCAT13(uVar45,CONCAT12(uVar44,uVar12)) == 0.0);
  param_11[1] = CONCAT17((byte)((uint)fVar121 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18),
                         CONCAT16((byte)((uint)fVar121 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10),
                                  CONCAT15((byte)((uint)fVar121 >> 8) & ~(byte)((uint)iVar76 >> 8),
                                           CONCAT14(SUB41(fVar121,0) & ~(byte)iVar76,
                                                    CONCAT13((byte)((uint)fVar120 >> 0x18) &
                                                             ~(byte)((uint)iVar88 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar120 >> 0x10)
                                                                      & ~(byte)((uint)iVar88 >> 0x10
                                                                               ),
                                                                      CONCAT11((byte)((uint)fVar120
                                                                                     >> 8) &
                                                                               ~(byte)((uint)iVar88
                                                                                      >> 8),
                                                                               SUB41(fVar120,0) &
                                                                               ~(byte)iVar88)))))));
  *param_11 = CONCAT17((byte)((uint)fVar119 >> 0x18) & ~(byte)((uint)iVar43 >> 0x18),
                       CONCAT16((byte)((uint)fVar119 >> 0x10) & ~(byte)((uint)iVar43 >> 0x10),
                                CONCAT15((byte)((uint)fVar119 >> 8) & ~(byte)((uint)iVar43 >> 8),
                                         CONCAT14(SUB41(fVar119,0) & ~(byte)iVar43,
                                                  CONCAT13((byte)((uint)fVar118 >> 0x18) &
                                                           ~(byte)((uint)iVar90 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar118 >> 0x10) &
                                                                    ~(byte)((uint)iVar90 >> 0x10),
                                                                    CONCAT11((byte)((uint)fVar118 >>
                                                                                   8) &
                                                                             ~(byte)((uint)iVar90 >>
                                                                                    8),
                                                                             SUB41(fVar118,0) &
                                                                             ~(byte)iVar90)))))));
  iVar90 = *(int *)PTR_DAT_047e4f38;
  lVar29 = *(long *)(lVar26 + 0x1000b8);
  if (lVar29 == 0) {
    lVar29 = FUN_00e5d3b4();
    *(long *)(lVar26 + 0x1000b8) = lVar29;
  }
  if (*(long *)(lVar29 + (long)iVar90 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if ((int)local_118 != 0) {
    uVar111 = NEON_fmov(0x3f800000,4);
    iVar90 = 0;
    do {
      pfVar32 = (float *)((long)local_1a0 + (long)iVar90 * 0x10);
      fVar133 = pfVar32[3];
      iVar88 = (int)local_c8;
      local_118 = (ulong)((int)local_118 - 1);
      fVar128 = pfVar32[2];
      fVar67 = *pfVar32;
      fVar126 = pfVar32[1];
      iVar43 = 0;
      if (iVar90 + 1 != (int)local_1d8) {
        iVar43 = iVar90 + 1;
      }
      if (0 < (int)local_c8) {
        uVar42 = 0;
        pfVar32 = (float *)(local_d0 + 8);
        do {
          if ((pfVar32[-2] == fVar67) && (pfVar32[-1] == fVar128)) {
            if ((int)uVar42 < 0) {
              bVar20 = true;
            }
            else {
              iVar90 = iVar43;
              if (*pfVar32 <= fVar133) goto LAB_0306b6c4;
              bVar20 = false;
            }
            goto LAB_0306ac90;
          }
          uVar42 = uVar42 + 1;
          pfVar32 = pfVar32 + 3;
        } while ((local_c8 & 0xffffffff) != uVar42);
      }
      bVar20 = true;
      uVar42 = 0xffffffff;
LAB_0306ac90:
      uVar2 = (uint)fVar67 >> 0x16;
      if (uVar2 != (uint)local_298) {
        lVar29 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)uVar2 * 0x100);
        lVar41 = *(long *)(lVar29 + 0x20);
        fVar125 = (float)*(undefined8 *)(lVar29 + 0x68);
        fVar127 = (float)((ulong)*(undefined8 *)(lVar29 + 0x68) >> 0x20);
        fVar123 = (float)*(undefined8 *)(lVar29 + 0x60);
        fVar124 = (float)((ulong)*(undefined8 *)(lVar29 + 0x60) >> 0x20);
        uVar130 = *(undefined8 *)(lVar29 + 0x78);
        uVar129 = *(undefined8 *)(lVar29 + 0x70);
        uVar107 = *(undefined8 *)(lVar29 + 0x88);
        uVar105 = *(undefined8 *)(lVar29 + 0x80);
        uVar132 = *(undefined8 *)(lVar29 + 0x98);
        uVar131 = *(undefined8 *)(lVar29 + 0x90);
        local_298 = (ulong)uVar2;
      }
      uVar24 = (ulong)(uint)fVar67 & 0x3fffff;
      lVar30 = (long)(int)fVar128;
      iVar76 = *(int *)(lVar41 + 0x50);
      lVar29 = (long)iVar76;
      iVar33 = (int)uVar24;
      iVar90 = iVar33 - *(int *)(lVar41 + 0x20);
      if (iVar33 < *(int *)(lVar41 + 0x20)) {
        if (*(int *)(lVar41 + 0x98) == 0) {
          iVar90 = iVar33;
LAB_0306ad34:
          lVar40 = *(long *)(lVar41 + 0x120) + (long)(iVar90 * iVar76) * 4;
          lVar29 = lVar40 + lVar29 * 4;
          lVar36 = *(long *)(lVar41 + 0xb0);
          goto LAB_0306ad48;
        }
        iVar90 = *(int *)(*(long *)(lVar41 + 0x90) + uVar24 * 4);
        if (iVar90 != -1) goto LAB_0306ad34;
        lVar40 = *(long *)(lVar41 + 0x48) + (long)(iVar76 * iVar33) * 4;
        lVar29 = lVar40 + lVar29 * 4;
        piVar37 = (int *)(*(long *)(lVar41 + 0x18) + uVar24 * 0x10);
      }
      else {
        lVar40 = *(long *)(lVar41 + 0x140) + (long)(iVar76 * iVar90) * 4;
        lVar29 = lVar40 + lVar29 * 4;
        lVar36 = *(long *)(lVar41 + 0xd0);
LAB_0306ad48:
        piVar37 = (int *)(lVar36 + (long)iVar90 * 0x10);
      }
      fVar122 = (float)uVar111;
      fVar109 = (float)((ulong)uVar111 >> 0x20);
      if (param_2 == (long *)0x0) {
LAB_0306add8:
        if (bVar20) {
          iVar90 = iVar88;
          if ((int)(local_c8._4_4_ & 0x7fffffff) <= iVar88) {
            FUN_0307635c(&local_d0,(long)iVar88 + 1);
            iVar90 = (int)local_c8;
          }
          pfVar32 = (float *)(local_d0 + (long)iVar90 * 0xc);
          local_c8 = CONCAT44(local_c8._4_4_,(int)((long)iVar88 + 1));
          *pfVar32 = fVar67;
          pfVar32[1] = fVar128;
        }
        else {
          pfVar32 = (float *)(local_d0 + (uVar42 & 0xffffffff) * 0xc);
        }
        pfVar32[2] = fVar133;
        iVar90 = *piVar37;
        iVar33 = piVar37[2];
        puVar31 = (undefined8 *)(*param_10 + lVar30 * 0x20);
        puVar5 = (undefined8 *)(lVar28 + lVar30 * 0x10);
        uVar135 = *puVar5;
        iVar88 = *(int *)(lVar41 + 0x30);
        lVar30 = *(long *)(lVar41 + 0x28);
        lVar29 = (long)iVar90;
        iVar76 = iVar90 - iVar88;
        if (iVar90 < iVar88) {
          iVar76 = iVar90;
          if (*(int *)(lVar41 + 0x78) != 0) {
            iVar76 = *(int *)(*(long *)(lVar41 + 0x70) + lVar29 * 4);
          }
          lVar40 = lVar30;
          iVar104 = iVar90;
          if (iVar76 != -1) {
            plVar38 = (long *)(lVar41 + 0xc0);
            goto LAB_0306aeb8;
          }
        }
        else {
          plVar38 = (long *)(lVar41 + 0xe0);
LAB_0306aeb8:
          lVar40 = *plVar38;
          iVar104 = iVar76;
        }
        iVar104 = *(int *)(lVar40 + (long)iVar104 * 0x14);
        iVar76 = *(int *)(lVar41 + 0x40);
        lVar40 = 0x38;
        if (iVar76 <= iVar104) {
          lVar40 = 0xf0;
        }
        iVar106 = 0;
        if (iVar76 <= iVar104) {
          iVar106 = iVar76;
        }
        if ((short)iVar33 != 0) {
          fVar73 = (float)*puVar31;
          fVar138 = (float)puVar31[2] - fVar73;
          fVar78 = (float)((ulong)*puVar31 >> 0x20);
          fVar139 = (float)((ulong)puVar31[2] >> 0x20) - fVar78;
          fVar74 = (float)puVar31[1];
          fVar140 = (float)puVar31[3] - fVar74;
          fVar95 = (float)((ulong)puVar31[1] >> 0x20);
          fVar141 = (float)((ulong)puVar31[3] >> 0x20) - fVar95;
          auVar79._4_4_ = fVar139;
          auVar79._0_4_ = fVar138;
          auVar79._8_4_ = fVar140;
          auVar79._12_4_ = fVar141;
          auVar70._4_4_ = fVar139;
          auVar70._0_4_ = fVar138;
          auVar70._8_4_ = fVar140;
          auVar70._12_4_ = fVar141;
          auVar79 = NEON_ext(auVar79,auVar70,4,1);
          puVar31 = (undefined8 *)(*(long *)(lVar41 + lVar40) + (long)(iVar104 - iVar106) * 0x10);
          uVar113 = *puVar31;
          fVar67 = (float)uVar113;
          fVar126 = (float)((ulong)uVar113 >> 0x20);
          fVar121 = (float)((ulong)uVar129 >> 0x20);
          fVar85 = (float)((ulong)uVar130 >> 0x20);
          fVar110 = (float)puVar31[1];
          fVar86 = (float)((ulong)uVar105 >> 0x20);
          fVar62 = (float)((ulong)uVar107 >> 0x20);
          uVar2 = (int)local_298 << 0x16;
          fVar142 = fVar138 * fVar138;
          fVar143 = fVar139 * fVar139;
          auVar99._4_4_ = fVar143;
          auVar99._0_4_ = fVar142;
          auVar99._8_4_ = fVar140 * fVar140;
          auVar99._12_4_ = fVar141 * fVar141;
          auVar17._4_4_ = fVar143;
          auVar17._0_4_ = fVar142;
          auVar17._8_4_ = fVar140 * fVar140;
          auVar17._12_4_ = fVar141 * fVar141;
          auVar68 = NEON_ext(auVar99,auVar17,8,1);
          fVar112 = (float)uVar131 +
                    (float)uVar105 * fVar110 + fVar123 * fVar67 + (float)uVar129 * fVar126;
          fVar63 = (float)((ulong)uVar131 >> 0x20);
          fVar61 = fVar63 + fVar86 * fVar110 + fVar124 * fVar67 + fVar121 * fVar126;
          fVar72 = (float)uVar132 +
                   (float)uVar107 * fVar110 + fVar125 * fVar67 + (float)uVar130 * fVar126;
          fVar64 = (float)((ulong)uVar132 >> 0x20);
          fVar60 = fVar87 * fVar112;
          fVar77 = fVar92 * fVar61;
          fVar119 = fVar94 * fVar72;
          fVar118 = fVar60 + fVar77 + fVar119;
          fVar119 = fVar60 + fVar77 + fVar119;
          fVar112 = fVar112 - fVar87 * fVar118;
          fVar61 = fVar61 - fVar92 * fVar119;
          fVar72 = fVar72 - fVar94 * fVar118;
          fVar134 = (float)uVar135;
          fVar60 = fVar134 * fVar112;
          fVar136 = (float)((ulong)uVar135 >> 0x20);
          fVar118 = fVar136 * fVar61;
          fVar137 = (float)puVar5[1];
          fVar77 = fVar137 * fVar72;
          fVar120 = fVar60 + fVar118 + fVar77;
          uVar135 = CONCAT44(fVar61,fVar112);
          uVar113 = CONCAT44((fVar64 + fVar62 * fVar110 + fVar127 * fVar67 + fVar85 * fVar126) -
                             fVar96 * fVar119,fVar72);
          bVar20 = fVar133 < fVar120;
          uVar18 = CONCAT44(fVar60 + fVar118 + fVar77,fVar120);
          do {
            iVar76 = *(int *)(lVar41 + 0x60);
            lVar40 = (long)iVar76;
            uVar27 = (uint)lVar29;
            if (lVar29 < iVar88) {
              if (*(int *)(lVar41 + 0x78) == 0) {
                uVar39 = uVar27;
              }
              else {
                uVar39 = *(uint *)(*(long *)(lVar41 + 0x70) + lVar29 * 4);
              }
              if (uVar39 == 0xffffffff) {
                lVar36 = *(long *)(lVar41 + 0x58) + lVar29 * lVar40 * 4;
                lVar40 = lVar36 + lVar40 * 4;
                lVar30 = lVar30 + lVar29 * 0x14;
              }
              else {
                lVar36 = *(long *)(lVar41 + 0x130) + (long)(int)(uVar39 * iVar76) * 4;
                lVar40 = lVar36 + lVar40 * 4;
                lVar30 = *(long *)(lVar41 + 0xc0) + (long)(int)uVar39 * 0x14;
              }
            }
            else {
              lVar36 = *(long *)(lVar41 + 0x150) + (long)(int)(iVar76 * (uVar27 - iVar88)) * 4;
              lVar40 = lVar36 + lVar40 * 4;
              lVar30 = *(long *)(lVar41 + 0xe0) + (long)(int)(uVar27 - iVar88) * 0x14;
            }
            iVar88 = *(int *)(lVar30 + 4);
            iVar76 = *(int *)(lVar41 + 0x40);
            lVar23 = 0x38;
            if (iVar76 <= iVar88) {
              lVar23 = 0xf0;
            }
            iVar104 = 0;
            if (iVar76 <= iVar88) {
              iVar104 = iVar76;
            }
            puVar31 = (undefined8 *)(*(long *)(lVar41 + lVar23) + (long)(iVar88 - iVar104) * 0x10);
            uVar83 = *puVar31;
            fVar67 = (float)uVar83;
            fVar126 = (float)((ulong)uVar83 >> 0x20);
            fVar110 = (float)puVar31[1];
            fVar112 = (float)uVar131 +
                      (float)uVar105 * fVar110 + fVar123 * fVar67 + (float)uVar129 * fVar126;
            fVar60 = fVar63 + fVar86 * fVar110 + fVar124 * fVar67 + fVar121 * fVar126;
            fVar61 = (float)uVar132 +
                     (float)uVar107 * fVar110 + fVar125 * fVar67 + (float)uVar130 * fVar126;
            fVar118 = fVar87 * fVar112;
            fVar77 = fVar92 * fVar60;
            fVar119 = fVar94 * fVar61;
            fVar72 = fVar118 + fVar77 + fVar119;
            fVar119 = fVar118 + fVar77 + fVar119;
            fVar112 = fVar112 - fVar87 * fVar72;
            fVar60 = fVar60 - fVar92 * fVar119;
            fVar61 = fVar61 - fVar94 * fVar72;
            fVar118 = (fVar64 + fVar62 * fVar110 + fVar127 * fVar67 + fVar85 * fVar126) -
                      fVar96 * fVar119;
            fVar67 = fVar134 * fVar112;
            fVar126 = fVar136 * fVar60;
            fVar110 = fVar137 * fVar61;
            fVar72 = fVar67 + fVar126 + fVar110;
            fVar110 = fVar67 + fVar126 + fVar110;
            if ((bool)(bVar20 | fVar133 < fVar72)) {
              fVar114 = (float)uVar135 - fVar112;
              fVar115 = (float)((ulong)uVar135 >> 0x20) - fVar60;
              fVar116 = (float)uVar113 - fVar61;
              fVar117 = (float)((ulong)uVar113 >> 0x20) - fVar118;
              auVar13._4_4_ = fVar115;
              auVar13._0_4_ = fVar114;
              auVar13._8_4_ = fVar116;
              auVar13._12_4_ = fVar117;
              auVar14._4_4_ = fVar115;
              auVar14._0_4_ = fVar114;
              auVar14._8_4_ = fVar116;
              auVar14._12_4_ = fVar117;
              auVar70 = NEON_ext(auVar13,auVar14,4,1);
              fVar67 = fVar73 - fVar112;
              fVar126 = fVar78 - fVar60;
              fVar77 = fVar74 - fVar61;
              fVar119 = fVar95 - fVar118;
              fVar120 = fVar138 * auVar70._0_4_ - auVar79._0_4_ * fVar114;
              auVar71._0_8_ = CONCAT44(fVar139 * auVar70._4_4_ - auVar79._4_4_ * fVar115,fVar120);
              auVar71._8_4_ = fVar140 * fVar114 - fVar138 * fVar116;
              auVar71._12_4_ = fVar141 * fVar115 - fVar139 * fVar117;
              auVar70 = NEON_ext(auVar71,auVar71,4,1);
              uVar83 = NEON_ext(auVar70._0_8_,auVar71._0_8_,4,1);
              fVar84 = auVar70._0_4_;
              fVar89 = auVar70._4_4_;
              fVar65 = fVar120 * fVar120 + fVar84 * fVar84 + fVar89 * fVar89;
              fVar75 = fVar120 * fVar120 + fVar84 * fVar84 + fVar89 * fVar89;
              iVar88 = -(uint)(fVar65 == 0.0);
              auVar98._0_4_ = fVar114 * fVar114;
              auVar98._4_4_ = fVar115 * fVar115;
              auVar98._8_4_ = fVar116 * fVar116;
              auVar98._12_4_ = fVar117 * fVar117;
              uVar66 = CONCAT13(~(byte)((uint)iVar88 >> 0x18),
                                CONCAT12(~(byte)((uint)iVar88 >> 0x10),
                                         CONCAT11(~(byte)((uint)iVar88 >> 8),~(byte)iVar88)));
              auVar82._0_4_ = auVar79._0_4_ * fVar84 - fVar138 * (float)uVar83;
              auVar82._4_4_ = auVar79._4_4_ * fVar89 - fVar139 * (float)((ulong)uVar83 >> 0x20);
              auVar82._8_4_ = fVar138 * fVar120 - fVar140 * fVar84;
              auVar82._12_4_ = fVar139 * 0.0 - fVar141 * fVar89;
              auVar70 = NEON_ext(auVar82,auVar82,4,1);
              auVar102._0_4_ = fVar67 * fVar114;
              auVar102._4_4_ = fVar126 * fVar115;
              auVar102._8_4_ = fVar77 * fVar116;
              auVar102._12_4_ = fVar119 * fVar117;
              fVar120 = fVar67 * auVar70._0_4_;
              fVar84 = fVar126 * auVar70._4_4_;
              iVar88 = -(uint)(fVar65 == 0.0);
              iVar76 = -(uint)(fVar75 == 0.0);
              uVar42 = CONCAT44(fVar109 / fVar75,fVar122 / fVar65) & CONCAT44(uVar66,uVar66);
              fVar65 = fVar140 * fVar116 + fVar138 * fVar114 + fVar139 * fVar115;
              fVar75 = fVar140 * fVar116 + fVar138 * fVar114 + fVar139 * fVar115;
              auVar99 = NEON_ext(auVar98,auVar98,8,1);
              auVar91._0_4_ = fVar138 * fVar67;
              auVar91._4_4_ = fVar139 * fVar126;
              auVar91._8_4_ = fVar140 * fVar77;
              auVar91._12_4_ = fVar141 * fVar119;
              auVar80 = NEON_ext(auVar102,auVar102,8,1);
              auVar70 = NEON_ext(auVar91,auVar91,8,1);
              fVar97 = auVar99._0_4_ + auVar98._0_4_ + auVar98._4_4_;
              fVar101 = auVar80._0_4_ + auVar102._0_4_ + auVar102._4_4_;
              auVar99 = NEON_fmov(0x3f800000,4);
              fVar89 = auVar68._0_4_ + fVar142 + fVar143;
              fVar93 = auVar70._0_4_ + auVar91._0_4_ + auVar91._4_4_;
              uVar83 = NEON_fminnm(CONCAT44((fVar77 * auVar82._0_4_ + fVar120 + fVar84) *
                                            (float)(uVar42 >> 0x20),
                                            (fVar77 * auVar82._0_4_ + fVar120 + fVar84) *
                                            (float)uVar42),uVar111,4);
              uVar42 = NEON_fmax(uVar83,0,4);
              iVar104 = -(uint)(fVar97 == 0.0);
              iVar106 = -(uint)(fVar89 == 0.0);
              fVar97 = auVar99._0_4_ / fVar97;
              fVar89 = auVar99._8_4_ / fVar89;
              fVar97 = (float)CONCAT13((byte)((uint)fVar97 >> 0x18) & ~(byte)((uint)iVar104 >> 0x18)
                                       ,CONCAT12((byte)((uint)fVar97 >> 0x10) &
                                                 ~(byte)((uint)iVar104 >> 0x10),
                                                 CONCAT11((byte)((uint)fVar97 >> 8) &
                                                          ~(byte)((uint)iVar104 >> 8),
                                                          SUB41(fVar97,0) & ~(byte)iVar104)));
              fVar120 = (float)CONCAT13((byte)((uint)fVar89 >> 0x18) &
                                        ~(byte)((uint)iVar106 >> 0x18),
                                        CONCAT12((byte)((uint)fVar89 >> 0x10) &
                                                 ~(byte)((uint)iVar106 >> 0x10),
                                                 CONCAT11((byte)((uint)fVar89 >> 8) &
                                                          ~(byte)((uint)iVar106 >> 8),
                                                          SUB41(fVar89,0) & ~(byte)iVar106)));
              fVar84 = ((float)uVar42 * fVar65 - fVar93) * fVar120;
              fVar120 = ((float)(uVar42 >> 0x20) * fVar75 - fVar93) * fVar120;
              uVar83 = NEON_fminnm(CONCAT44(fVar120,fVar84),uVar111,4);
              uVar83 = NEON_fmax(uVar83,0,4);
              fVar89 = (float)uVar83;
              fVar93 = (float)((ulong)uVar83 >> 0x20);
              iVar104 = -(uint)(fVar89 == fVar84);
              iVar106 = -(uint)(fVar93 == fVar120);
              uVar83 = NEON_fminnm(CONCAT44((fVar101 + fVar93 * fVar75) * fVar97,
                                            (fVar101 + fVar89 * fVar65) * fVar97),uVar111,4);
              uVar24 = NEON_fmax(uVar83,0,4);
              uVar42 = uVar42 ^ (uVar42 ^ uVar24) &
                                CONCAT17(~(byte)((uint)iVar106 >> 0x18) |
                                         (byte)((uint)iVar76 >> 0x18),
                                         CONCAT16(~(byte)((uint)iVar106 >> 0x10) |
                                                  (byte)((uint)iVar76 >> 0x10),
                                                  CONCAT15(~(byte)((uint)iVar106 >> 8) |
                                                           (byte)((uint)iVar76 >> 8),
                                                           CONCAT14(~(byte)iVar106 | (byte)iVar76,
                                                                    CONCAT13(~(byte)((uint)iVar104
                                                                                    >> 0x18) |
                                                                             (byte)((uint)iVar88 >>
                                                                                   0x18),
                                                                             CONCAT12(~(byte)((uint)
                                                  iVar104 >> 0x10) | (byte)((uint)iVar88 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar104 >> 8) |
                                                           (byte)((uint)iVar88 >> 8),
                                                           ~(byte)iVar104 | (byte)iVar88)))))));
              fVar120 = (float)uVar42;
              fVar65 = (float)(uVar42 >> 0x20);
              fVar67 = fVar138 * fVar89 + (fVar67 - fVar114 * fVar120);
              fVar126 = fVar139 * fVar93 + (fVar126 - fVar115 * fVar65);
              fVar77 = fVar140 * fVar89 + (fVar77 - fVar116 * fVar120);
              fVar119 = fVar141 * fVar93 + (fVar119 - fVar117 * fVar65);
              fVar67 = fVar67 * fVar67;
              fVar126 = fVar126 * fVar126;
              uVar44 = (undefined1)((uint)fVar126 >> 8);
              uVar45 = (undefined1)((uint)fVar126 >> 0x10);
              uVar46 = (undefined1)((uint)fVar126 >> 0x18);
              fVar77 = fVar77 * fVar77;
              uVar47 = (undefined1)((uint)fVar77 >> 8);
              uVar48 = (undefined1)((uint)fVar77 >> 0x10);
              uVar49 = (undefined1)((uint)fVar77 >> 0x18);
              fVar119 = fVar119 * fVar119;
              uVar50 = (undefined1)((uint)fVar119 >> 8);
              uVar51 = (undefined1)((uint)fVar119 >> 0x10);
              uVar52 = (undefined1)((uint)fVar119 >> 0x18);
              auVar6[4] = SUB41(fVar126,0);
              auVar6._0_4_ = fVar67;
              auVar6[5] = uVar44;
              auVar6[6] = uVar45;
              auVar6[7] = uVar46;
              auVar6[8] = SUB41(fVar77,0);
              auVar6[9] = uVar47;
              auVar6[10] = uVar48;
              auVar6[0xb] = uVar49;
              auVar6[0xc] = SUB41(fVar119,0);
              auVar6[0xd] = uVar50;
              auVar6[0xe] = uVar51;
              auVar6[0xf] = uVar52;
              auVar7[4] = SUB41(fVar126,0);
              auVar7._0_4_ = fVar67;
              auVar7[5] = uVar44;
              auVar7[6] = uVar45;
              auVar7[7] = uVar46;
              auVar7[8] = SUB41(fVar77,0);
              auVar7[9] = uVar47;
              auVar7[10] = uVar48;
              auVar7[0xb] = uVar49;
              auVar7[0xc] = SUB41(fVar119,0);
              auVar7[0xd] = uVar50;
              auVar7[0xe] = uVar51;
              auVar7[0xf] = uVar52;
              auVar70 = NEON_ext(auVar6,auVar7,8,1);
              if (fVar67 + fVar126 + auVar70._0_4_ <= (float)uVar108 * (float)uVar108) {
                if (*(int *)(lVar30 + 8) != -1) {
                  bVar21 = (*(byte *)(lVar30 + 0x10) >> 5 ^ 0xff) & 1;
                  if ((param_2 != (long *)0x0) && (bVar21 != 0)) {
                    lVar23 = nn::os::GetSystemTick();
                    bVar21 = (**(code **)(*param_2 + 0x28))
                                       (param_2,param_1,uVar2 | uVar27,lVar30,lVar36,lVar40);
                    bVar21 = bVar21 & 1;
                    lVar40 = nn::os::GetSystemTick();
                    *(long *)(param_12 + 0x20) = (lVar40 - lVar23) + *(long *)(param_12 + 0x20);
                    *(int *)(param_12 + 0x28) = *(int *)(param_12 + 0x28) + 1;
                  }
                  if (bVar21 != 0) {
                    uVar39 = *(uint *)(lVar30 + 0xc);
                    if ((*(byte *)(lVar30 + 0x10) >> 6 & 1) == 0) {
                      if (uVar39 == 0xffffffff) {
                        uVar39 = 0xffffffff;
                      }
                      else {
                        uVar39 = uVar39 & 0x3fffff | *(int *)(lVar41 + 0x17c) << 0x16;
                      }
                    }
                    if (uVar39 != (uint)param_3) {
                      uVar135 = NEON_fmin(uVar18,CONCAT44(fVar110,fVar72),4);
                      uVar135 = NEON_fmax(uVar135,CONCAT44(fVar133,fVar133),4);
                      iVar88 = (int)local_1d8;
                      if (iVar88 <= (int)local_118) {
                        uVar4 = iVar88 * 2;
                        uVar34 = 8;
                        if (iVar88 != 0) {
                          uVar34 = uVar4;
                        }
                        if (iVar88 < (int)uVar34) {
                          if ((int)uVar34 <= (int)uVar4) {
                            uVar34 = uVar4;
                          }
                          local_1d8 = (ulong)uVar34;
                          pvVar25 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                                      (PTR_PTR_047d1a50,
                                                       -(ulong)(uVar34 >> 0x1f) & 0xfffffff000000000
                                                       | local_1d8 << 4);
                          if ((local_1a0 != (void *)0x0) && (pvVar25 != (void *)0x0)) {
                            if ((int)local_118 == 0) {
                              iVar43 = 0;
                              local_1e0._0_4_ = 0;
                            }
                            else {
                              __src = (void *)((long)local_1a0 + (long)iVar43 * 0x10);
                              if (iVar43 < (int)local_1e0) {
                                memcpy(pvVar25,__src,
                                       -(local_118 >> 0x1f) & 0xfffffff000000000 | local_118 << 4);
                                iVar43 = 0;
                                local_1e0._0_4_ = (int)local_118;
                              }
                              else {
                                uVar34 = iVar88 - iVar43;
                                memcpy(pvVar25,__src,
                                       -(ulong)(uVar34 >> 0x1f) & 0xfffffff000000000 |
                                       (ulong)uVar34 << 4);
                                memcpy((void *)((long)pvVar25 + (long)(int)uVar34 * 0x10),local_1a0,
                                       -(local_1e0 >> 0x1f) & 0xfffffff000000000 | local_1e0 << 4);
                                iVar43 = 0;
                                local_1e0._0_4_ = (int)local_118;
                              }
                            }
                          }
                          if (iVar88 != 0) {
                            (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_1a0,0);
                          }
                          local_1a0 = pvVar25;
                        }
                      }
                      bVar20 = (int)local_1e0 != (int)local_1d8;
                      iVar88 = 0;
                      if (bVar20) {
                        iVar88 = (int)local_1e0;
                      }
                      puVar1 = (uint *)((long)local_1a0 + (long)iVar88 * 0x10);
                      uVar34 = 1;
                      if (bVar20) {
                        uVar34 = (int)local_1e0 + 1;
                      }
                      local_1e0 = (ulong)uVar34;
                      *puVar1 = uVar39;
                      puVar1[1] = uVar2 | uVar27;
                      puVar1[2] = (uint)fVar128;
                      puVar1[3] = (uint)uVar135;
                      local_118 = (ulong)((int)local_118 + 1);
                    }
                    goto LAB_0306b5dc;
                  }
                }
                if (0 < (int)local_f0) {
                  uVar42 = 0;
                  do {
                    if (*(uint *)(local_f8 + uVar42 * 4) == (uVar2 | uVar27)) {
                      if (-1 < (int)uVar42) goto LAB_0306b5dc;
                      break;
                    }
                    uVar42 = uVar42 + 1;
                  } while ((local_f0 & 0xffffffff) != uVar42);
                }
                if (((float)uVar18 < fVar133) || (fVar72 < fVar133)) {
                  fVar67 = (float)uVar18 - fVar72;
                  iVar88 = -(uint)(fVar67 == 0.0);
                  fVar126 = fVar109 / ((float)((ulong)uVar18 >> 0x20) - fVar110);
                  uVar66 = CONCAT13(~(byte)((uint)iVar88 >> 0x18),
                                    CONCAT12(~(byte)((uint)iVar88 >> 0x10),
                                             CONCAT11(~(byte)((uint)iVar88 >> 8),~(byte)iVar88)));
                  uVar42 = CONCAT17((char)((uint)fVar126 >> 0x18),
                                    CONCAT16((char)((uint)fVar126 >> 0x10),
                                             CONCAT15((char)((uint)fVar126 >> 8),
                                                      CONCAT14(SUB41(fVar126,0),fVar122 / fVar67))))
                           & CONCAT44(uVar66,uVar66);
                  fVar67 = (fVar133 - fVar72) * (float)uVar42;
                  fVar77 = (fVar133 - fVar110) * (float)(uVar42 >> 0x20);
                  fVar126 = fVar112 + fVar114 * fVar67;
                  uVar44 = SUB41(fVar126,0);
                  uVar45 = (undefined1)((uint)fVar126 >> 8);
                  uVar46 = (undefined1)((uint)fVar126 >> 0x10);
                  uVar47 = (undefined1)((uint)fVar126 >> 0x18);
                  fVar119 = fVar60 + fVar115 * fVar77;
                  uVar48 = SUB41(fVar119,0);
                  uVar49 = (undefined1)((uint)fVar119 >> 8);
                  uVar50 = (undefined1)((uint)fVar119 >> 0x10);
                  uVar51 = (undefined1)((uint)fVar119 >> 0x18);
                  fVar119 = fVar61 + fVar116 * fVar67;
                  uVar52 = SUB41(fVar119,0);
                  uVar53 = (undefined1)((uint)fVar119 >> 8);
                  uVar54 = (undefined1)((uint)fVar119 >> 0x10);
                  uVar55 = (undefined1)((uint)fVar119 >> 0x18);
                  fVar67 = fVar118 + fVar117 * (float)CONCAT13((char)((uint)fVar77 >> 0x18),
                                                               CONCAT12((char)((uint)fVar77 >> 0x10)
                                                                        ,(short)(CONCAT15((char)((
                                                  uint)fVar77 >> 8),CONCAT14(SUB41(fVar77,0),fVar67)
                                                  ) >> 0x20)));
                  uVar56 = SUB41(fVar67,0);
                  uVar57 = (undefined1)((uint)fVar67 >> 8);
                  uVar58 = (undefined1)((uint)fVar67 >> 0x10);
                  uVar59 = (undefined1)((uint)fVar67 >> 0x18);
                  if (fVar133 <= fVar72) {
                    uVar113 = CONCAT17(uVar59,CONCAT16(uVar58,CONCAT15(uVar57,CONCAT14(uVar56,
                                                  fVar119))));
                    uVar135 = CONCAT17(uVar51,CONCAT16(uVar50,CONCAT15(uVar49,CONCAT14(uVar48,
                                                  fVar126))));
                    goto LAB_0306b3a4;
                  }
                }
                else {
                  lVar30 = (long)(int)local_f0;
                  if ((int)(local_f0._4_4_ & 0x7fffffff) <= (int)local_f0) {
                    FUN_03066094(&local_f8,PTR_PTR_047d1a50,lVar30 + 1);
                  }
                  *(uint *)(local_f8 + (long)(int)local_f0 * 4) = uVar2 | uVar27;
                  local_f0 = CONCAT44(local_f0._4_4_,(int)(lVar30 + 1));
LAB_0306b3a4:
                  uVar52 = SUB41(fVar61,0);
                  uVar53 = (undefined1)((uint)fVar61 >> 8);
                  uVar54 = (undefined1)((uint)fVar61 >> 0x10);
                  uVar55 = (undefined1)((uint)fVar61 >> 0x18);
                  uVar56 = SUB41(fVar118,0);
                  uVar57 = (undefined1)((uint)fVar118 >> 8);
                  uVar58 = (undefined1)((uint)fVar118 >> 0x10);
                  uVar59 = (undefined1)((uint)fVar118 >> 0x18);
                  uVar44 = SUB41(fVar112,0);
                  uVar45 = (undefined1)((uint)fVar112 >> 8);
                  uVar46 = (undefined1)((uint)fVar112 >> 0x10);
                  uVar47 = (undefined1)((uint)fVar112 >> 0x18);
                  uVar48 = SUB41(fVar60,0);
                  uVar49 = (undefined1)((uint)fVar60 >> 8);
                  uVar50 = (undefined1)((uint)fVar60 >> 0x10);
                  uVar51 = (undefined1)((uint)fVar60 >> 0x18);
                }
                iVar88 = (int)param_9[1];
                lVar30 = (long)iVar88;
                if ((int)(*(uint *)((long)param_9 + 0xc) & 0x7fffffff) <= iVar88) {
                  FUN_03076488(param_9,lVar30 + 1);
                  iVar88 = (int)param_9[1];
                }
                puVar31 = (undefined8 *)(*param_9 + (long)iVar88 * 0x20);
                *(int *)(param_9 + 1) = (int)(lVar30 + 1);
                puVar31[1] = uVar113;
                *puVar31 = uVar135;
                puVar31[3] = CONCAT17(uVar59,CONCAT16(uVar58,CONCAT15(uVar57,CONCAT14(uVar56,
                                                  CONCAT13(uVar55,CONCAT12(uVar54,CONCAT11(uVar53,
                                                  uVar52)))))));
                puVar31[2] = CONCAT17(uVar51,CONCAT16(uVar50,CONCAT15(uVar49,CONCAT14(uVar48,
                                                  CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,
                                                  uVar44)))))));
              }
            }
LAB_0306b5dc:
            lVar29 = lVar29 + 1;
            if (iVar90 + (short)iVar33 == (int)lVar29) break;
            lVar30 = *(long *)(lVar41 + 0x28);
            iVar88 = *(int *)(lVar41 + 0x30);
            uVar135 = CONCAT44(fVar60,fVar112);
            uVar113 = CONCAT44(fVar118,fVar61);
            bVar20 = fVar133 < fVar72;
            uVar18 = CONCAT44(fVar110,fVar72);
          } while( true );
        }
        iVar88 = *(int *)PTR_DAT_047e4f38;
        lVar29 = *(long *)(lVar26 + 0x1000b8);
      }
      else {
        lVar36 = nn::os::GetSystemTick();
        uVar24 = (**(code **)(*param_2 + 0x20))
                           (param_2,param_1,(ulong)(uint)fVar67,piVar37,lVar40,lVar29);
        lVar29 = nn::os::GetSystemTick();
        *(long *)(param_12 + 0x20) = (lVar29 - lVar36) + *(long *)(param_12 + 0x20);
        *(int *)(param_12 + 0x28) = *(int *)(param_12 + 0x28) + 1;
        if ((uVar24 & 1) != 0) goto LAB_0306add8;
        uVar42 = (ulong)(uint)fVar126 & 0x3fffff;
        lVar29 = *(long *)(*(long *)(param_1 + 0x38) + ((ulong)((uint)fVar126 >> 0xe) & 0x3ff00));
        lVar40 = *(long *)(lVar29 + 0x20);
        if ((int)uVar42 < *(int *)(lVar40 + 0x30)) {
          uVar24 = uVar42;
          if ((*(int *)(lVar40 + 0x78) == 0) ||
             (uVar2 = *(uint *)(*(long *)(lVar40 + 0x70) + uVar42 * 4), uVar24 = (ulong)uVar2,
             uVar2 != 0xffffffff)) {
            piVar37 = (int *)(*(long *)(lVar40 + 0xc0) + (long)(int)uVar24 * 0x14);
          }
          else {
            piVar37 = (int *)(*(long *)(lVar40 + 0x28) + uVar42 * 0x14);
          }
        }
        else {
          piVar37 = (int *)(*(long *)(lVar40 + 0xe0) +
                           (long)((int)uVar42 - *(int *)(lVar40 + 0x30)) * 0x14);
        }
        iVar76 = *(int *)(lVar40 + 0x40);
        iVar90 = *piVar37;
        iVar88 = piVar37[1];
        auVar79 = *(undefined1 (*) [16])(lVar29 + 0x60);
        auVar68 = *(undefined1 (*) [16])(lVar29 + 0x70);
        auVar99 = *(undefined1 (*) [16])(lVar29 + 0x80);
        auVar70 = *(undefined1 (*) [16])(lVar29 + 0x90);
        lVar29 = 0x38;
        if (iVar76 <= iVar90) {
          lVar29 = 0xf0;
        }
        iVar33 = 0;
        if (iVar76 <= iVar90) {
          iVar33 = iVar76;
        }
        iVar104 = 0;
        if (iVar76 <= iVar88) {
          iVar104 = iVar76;
        }
        auVar80 = *(undefined1 (*) [16])
                   (*(long *)(lVar40 + lVar29) + (long)(iVar90 - iVar33) * 0x10);
        lVar29 = 0x38;
        if (iVar76 <= iVar88) {
          lVar29 = 0xf0;
        }
        auVar15 = *(undefined1 (*) [16])
                   (*(long *)(lVar40 + lVar29) + (long)(iVar88 - iVar104) * 0x10);
        puVar31 = (undefined8 *)(lVar28 + lVar30 * 0x10);
        uVar135 = *puVar31;
        if (0 < (int)local_f0) {
          uVar42 = 0;
          do {
            if (*(float *)(local_f8 + uVar42 * 4) == fVar126) {
              if (-1 < (int)uVar42) goto LAB_0306b910;
              break;
            }
            uVar42 = uVar42 + 1;
          } while ((local_f0 & 0xffffffff) != uVar42);
        }
        fVar120 = auVar80._0_4_;
        fVar85 = auVar80._4_4_;
        fVar67 = auVar15._0_4_;
        fVar128 = auVar15._4_4_;
        fVar110 = auVar15._8_4_;
        fVar62 = auVar80._8_4_;
        fVar60 = auVar70._0_4_ +
                 auVar99._0_4_ * fVar110 + auVar79._0_4_ * fVar67 + auVar68._0_4_ * fVar128;
        fVar61 = auVar70._4_4_ +
                 auVar99._4_4_ * fVar110 + auVar79._4_4_ * fVar67 + auVar68._4_4_ * fVar128;
        fVar112 = auVar70._8_4_ +
                  auVar99._8_4_ * fVar110 + auVar79._8_4_ * fVar67 + auVar68._8_4_ * fVar128;
        fVar121 = auVar70._0_4_ +
                  auVar99._0_4_ * fVar62 + auVar79._0_4_ * fVar120 + auVar68._0_4_ * fVar85;
        fVar86 = auVar70._4_4_ +
                 auVar99._4_4_ * fVar62 + auVar79._4_4_ * fVar120 + auVar68._4_4_ * fVar85;
        fVar63 = auVar70._8_4_ +
                 auVar99._8_4_ * fVar62 + auVar79._8_4_ * fVar120 + auVar68._8_4_ * fVar85;
        fVar118 = fVar87 * fVar60;
        fVar77 = fVar92 * fVar61;
        fVar119 = fVar94 * fVar112;
        fVar72 = fVar118 + fVar77 + fVar119;
        fVar119 = fVar118 + fVar77 + fVar119;
        fVar60 = fVar60 - fVar87 * fVar72;
        fVar61 = fVar61 - fVar92 * fVar119;
        auVar100._0_8_ = CONCAT44(fVar61,fVar60);
        auVar100._8_4_ = fVar112 - fVar94 * fVar72;
        auVar100._12_4_ =
             (auVar70._12_4_ +
             auVar99._12_4_ * fVar110 + auVar79._12_4_ * fVar67 + auVar68._12_4_ * fVar128) -
             fVar96 * fVar119;
        fVar67 = fVar87 * fVar121;
        fVar110 = fVar92 * fVar86;
        fVar112 = fVar94 * fVar63;
        fVar128 = fVar67 + fVar110 + fVar112;
        fVar112 = fVar67 + fVar110 + fVar112;
        fVar121 = fVar121 - fVar87 * fVar128;
        fVar86 = fVar86 - fVar92 * fVar112;
        auVar103._0_8_ = CONCAT44(fVar86,fVar121);
        auVar103._8_4_ = fVar63 - fVar94 * fVar128;
        auVar103._12_4_ =
             (auVar70._12_4_ +
             auVar99._12_4_ * fVar62 + auVar79._12_4_ * fVar120 + auVar68._12_4_ * fVar85) -
             fVar96 * fVar112;
        fVar67 = (float)uVar135;
        fVar112 = fVar67 * fVar60;
        fVar128 = (float)((ulong)uVar135 >> 0x20);
        fVar72 = fVar128 * fVar61;
        fVar110 = (float)puVar31[1];
        fVar77 = fVar110 * auVar100._8_4_;
        fVar67 = fVar67 * fVar121;
        fVar128 = fVar128 * fVar86;
        fVar110 = fVar110 * auVar103._8_4_;
        fVar118 = fVar112 + fVar72 + fVar77;
        fVar77 = fVar112 + fVar72 + fVar77;
        fVar112 = fVar67 + fVar128 + fVar110;
        if ((fVar118 < fVar133) || (fVar112 < fVar133)) {
          fVar112 = fVar112 - fVar118;
          iVar90 = -(uint)(fVar112 == 0.0);
          fVar109 = fVar109 / ((fVar67 + fVar128 + fVar110) - fVar77);
          uVar66 = CONCAT13(~(byte)((uint)iVar90 >> 0x18),
                            CONCAT12(~(byte)((uint)iVar90 >> 0x10),
                                     CONCAT11(~(byte)((uint)iVar90 >> 8),~(byte)iVar90)));
          uVar42 = CONCAT17((char)((uint)fVar109 >> 0x18),
                            CONCAT16((char)((uint)fVar109 >> 0x10),
                                     CONCAT15((char)((uint)fVar109 >> 8),
                                              CONCAT14(SUB41(fVar109,0),fVar122 / fVar112)))) &
                   CONCAT44(uVar66,uVar66);
          fVar67 = (fVar133 - fVar118) * (float)uVar42;
          fVar126 = (fVar133 - fVar77) * (float)(uVar42 >> 0x20);
          fVar60 = fVar60 + (fVar121 - fVar60) * fVar67;
          fVar61 = fVar61 + (fVar86 - fVar61) * fVar126;
          uVar44 = (undefined1)((uint)fVar61 >> 8);
          uVar45 = (undefined1)((uint)fVar61 >> 0x10);
          uVar46 = (undefined1)((uint)fVar61 >> 0x18);
          fVar128 = auVar100._8_4_ + (auVar103._8_4_ - auVar100._8_4_) * fVar67;
          fVar67 = auVar100._12_4_ +
                   (auVar103._12_4_ - auVar100._12_4_) *
                   (float)CONCAT13((char)((uint)fVar126 >> 0x18),
                                   CONCAT12((char)((uint)fVar126 >> 0x10),
                                            (short)(CONCAT15((char)((uint)fVar126 >> 8),
                                                             CONCAT14(SUB41(fVar126,0),fVar67)) >>
                                                   0x20)));
          uVar47 = (undefined1)((uint)fVar67 >> 8);
          uVar48 = (undefined1)((uint)fVar67 >> 0x10);
          uVar49 = (undefined1)((uint)fVar67 >> 0x18);
          if (fVar133 <= fVar118) {
            auVar103[0xc] = SUB41(fVar67,0);
            auVar103._8_4_ = fVar128;
            auVar103[0xd] = uVar47;
            auVar103[0xe] = uVar48;
            auVar103[0xf] = uVar49;
            auVar103[4] = SUB41(fVar61,0);
            auVar103._0_4_ = fVar60;
            auVar103[5] = uVar44;
            auVar103[6] = uVar45;
            auVar103[7] = uVar46;
          }
          else {
            auVar100[0xc] = SUB41(fVar67,0);
            auVar100._8_4_ = fVar128;
            auVar100[0xd] = uVar47;
            auVar100[0xe] = uVar48;
            auVar100[0xf] = uVar49;
            auVar100[4] = SUB41(fVar61,0);
            auVar100._0_4_ = fVar60;
            auVar100[5] = uVar44;
            auVar100[6] = uVar45;
            auVar100[7] = uVar46;
          }
        }
        else {
          lVar29 = (long)(int)local_f0;
          if ((int)(local_f0._4_4_ & 0x7fffffff) <= (int)local_f0) {
            FUN_03066094(&local_f8,PTR_PTR_047d1a50,lVar29 + 1);
            auVar103._8_8_ = auVar103._8_8_;
            auVar100._8_8_ = auVar100._8_8_;
          }
          *(float *)(local_f8 + (long)(int)local_f0 * 4) = fVar126;
          local_f0 = CONCAT44(local_f0._4_4_,(int)(lVar29 + 1));
        }
        iVar90 = (int)param_9[1];
        lVar29 = (long)iVar90;
        if ((int)(*(uint *)((long)param_9 + 0xc) & 0x7fffffff) <= iVar90) {
          FUN_03076488(param_9,lVar29 + 1);
          iVar90 = (int)param_9[1];
        }
        puVar31 = (undefined8 *)(*param_9 + (long)iVar90 * 0x20);
        *(int *)(param_9 + 1) = (int)(lVar29 + 1);
        puVar31[1] = auVar103._8_8_;
        *puVar31 = auVar103._0_8_;
        puVar31[3] = auVar100._8_8_;
        puVar31[2] = auVar100._0_8_;
LAB_0306b910:
        iVar88 = *(int *)PTR_DAT_047e4f38;
        lVar29 = *(long *)(lVar26 + 0x1000b8);
      }
      if (lVar29 == 0) {
        lVar29 = FUN_00e5d3b4();
        *(long *)(lVar26 + 0x1000b8) = lVar29;
      }
      iVar90 = iVar43;
      if (*(long *)(lVar29 + (long)iVar88 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
LAB_0306b6c4:
    } while ((int)local_118 != 0);
  }
  *(int *)(param_12 + 0x30) = *(int *)(param_12 + 0x30) + (int)param_9[1];
  *(int *)(param_12 + 0x34) = *(int *)(param_12 + 0x34) + (int)local_c8;
  *(int *)(param_12 + 0x38) = *(int *)(param_12 + 0x38) + (int)local_f0;
  if (local_e0 == local_f8) {
    local_f0 = local_f0 & 0xffffffff00000000;
  }
  if (local_e8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar42 = local_d8 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_e8 + 0x28) < uVar42) || (*(long *)(local_e8 + 0x38) != uVar42 + local_e0))
    {
      if (local_e0 != 0) {
        if (*(ulong *)(local_e8 + 0x28) < uVar42 + 0x40) {
          *(int *)(*(long *)(local_e8 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_e8 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_e8 + 0x10) + 0x18))
                    (*(long **)(local_e8 + 0x10),local_e0 - *(int *)(local_e0 + -4),uVar42 + 0x44);
        }
        else {
          if (*(long *)(local_e8 + 0x38) == uVar42 + local_e0) {
            *(long *)(local_e8 + 0x38) = local_e0;
            goto LAB_0306ba98;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(long *)(local_e8 + 0x38) = local_e0;
      if (*(long *)(local_e8 + 0x48) == local_e0) {
LAB_0306ba98:
        FUN_031cf578();
      }
    }
  }
  uVar42 = local_f0;
  uVar24 = (ulong)local_f0._4_4_;
  local_f0 = (ulong)local_f0._4_4_ << 0x20;
  if ((-1 < (long)uVar42) && (local_f8 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_f8,uVar24 << 2);
  }
  uVar42 = local_d0;
  if (local_b8 == local_d0) {
    local_c8 = local_c8 & 0xffffffff00000000;
  }
  if (local_c0 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar24 = local_b0 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_c0 + 0x28) < uVar24) || (*(long *)(local_c0 + 0x38) != uVar24 + local_b8))
    {
      if (local_b8 != 0) {
        if (*(ulong *)(local_c0 + 0x28) < uVar24 + 0x40) {
          *(int *)(*(long *)(local_c0 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_c0 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_c0 + 0x10) + 0x18))
                    (*(long **)(local_c0 + 0x10),local_b8 - (long)*(int *)(local_b8 - 4),
                     uVar24 + 0x44);
        }
        else {
          if (*(long *)(local_c0 + 0x38) == uVar24 + local_b8) {
            *(ulong *)(local_c0 + 0x38) = local_b8;
            goto LAB_0306bb90;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(ulong *)(local_c0 + 0x38) = local_b8;
      if (*(ulong *)(local_c0 + 0x48) == local_b8) {
LAB_0306bb90:
        FUN_031cf578();
      }
    }
  }
  uVar19 = local_c8;
  uVar24 = local_c8 >> 0x20;
  local_c8 = uVar24 << 0x20;
  if ((uVar42 != 0) && (-1 < (long)uVar19)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,uVar42,uVar24 * 0xc);
  }
  if ((int)local_1d8 != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_1a0,0);
  }
  if (local_2c8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar28,lVar35);
    goto LAB_0306bcb4;
  }
  uVar42 = lVar35 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_2c8 + 0x28) < uVar42) || (*(long *)(local_2c8 + 0x38) != uVar42 + lVar28)) {
    if (lVar28 == 0) goto LAB_0306bcb4;
    if (*(ulong *)(local_2c8 + 0x28) < uVar42 + 0x40) {
      *(int *)(*(long *)(local_2c8 + 0x30) + 0x20) =
           *(int *)(*(long *)(local_2c8 + 0x30) + 0x20) + -1;
      (**(code **)(**(long **)(local_2c8 + 0x10) + 0x18))
                (*(long **)(local_2c8 + 0x10),lVar28 - *(int *)(lVar28 + -4),uVar42 + 0x44);
      goto LAB_0306bcb4;
    }
    if (*(long *)(local_2c8 + 0x38) != uVar42 + lVar28) {
      FUN_031cf778(local_2c8,lVar28);
      goto LAB_0306bcb4;
    }
    *(long *)(local_2c8 + 0x38) = lVar28;
  }
  else {
    *(long *)(local_2c8 + 0x38) = lVar28;
    if (*(long *)(local_2c8 + 0x48) != lVar28) goto LAB_0306bcb4;
  }
  FUN_031cf578();
LAB_0306bcb4:
  lVar26 = nn::os::GetSystemTick();
  *(long *)(param_12 + 8) = (lVar26 - lVar22) + *(long *)(param_12 + 8);
  *(int *)(param_12 + 0x10) = *(int *)(param_12 + 0x10) + 1;
  return;
LAB_0306ab7c:
  goto LAB_0306aba4;
}



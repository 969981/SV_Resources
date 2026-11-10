/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030c089c; name: FUN_030c089c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_030c089c(undefined8 param_1,long param_2,undefined8 param_3,long *param_4,ulong param_5,
                 undefined8 *param_6,undefined8 *param_7,undefined4 param_8,int param_9,
                 undefined8 *param_10,byte param_11,long *param_12,undefined8 *param_13,int param_14
                 ,undefined8 *param_15)

{
  undefined **ppuVar1;
  float *pfVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined *puVar13;
  long *plVar14;
  bool bVar15;
  bool bVar16;
  undefined1 (*pauVar17) [16];
  undefined8 *puVar18;
  undefined **ppuVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 *puVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  undefined **ppuVar28;
  int *piVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  undefined1 (*pauVar33) [16];
  ulong uVar34;
  uint uVar35;
  undefined4 *puVar36;
  undefined **ppuVar37;
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  int *piVar41;
  undefined8 *puVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar46;
  undefined8 uVar45;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [12];
  undefined1 auVar56 [16];
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  int iVar73;
  undefined4 uVar74;
  int iVar75;
  undefined8 uVar76;
  undefined1 auVar77 [16];
  undefined8 uVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar86;
  float fVar87;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar88;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar97;
  float fVar100;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined8 uVar103;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  undefined8 uVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar116;
  float fVar117;
  uint uVar118;
  uint uVar119;
  undefined1 auVar121 [12];
  undefined8 uVar120;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar122 [12];
  int iVar128;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 uVar129;
  byte bVar130;
  undefined1 uVar131;
  byte bVar132;
  undefined1 uVar133;
  byte bVar134;
  undefined1 uVar135;
  undefined1 uVar136;
  undefined1 uVar137;
  undefined1 uVar138;
  undefined1 uVar139;
  float fVar140;
  float fVar141;
  float fVar151;
  float fVar152;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  float fVar142;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  float fVar153;
  int iVar154;
  float fVar158;
  float fVar159;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  float fVar160;
  undefined8 uVar161;
  undefined1 auVar162 [16];
  float fVar166;
  float fVar167;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  int iVar170;
  float fVar171;
  float fVar173;
  int iVar174;
  undefined1 auVar172 [16];
  float fVar175;
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  long local_2f8;
  long local_2f0;
  ulong local_230;
  undefined **local_220;
  undefined8 local_218;
  long local_210;
  undefined **local_208;
  long local_200;
  long local_1e0;
  undefined4 local_1d8;
  uint local_1d4;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  undefined *local_110;
  undefined8 uStack_108;
  long *local_100;
  undefined8 *local_f8;
  int local_f0;
  int local_ec;
  int iStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong local_c0 [4];
  long local_98;
  
  iVar154 = *(int *)PTR_DAT_047e4f38;
  lVar3 = tpidr_el0;
  lVar21 = *(long *)(lVar3 + 0x1000b8);
  if (lVar21 == 0) {
    lVar21 = FUN_00e5d3b4();
    *(long *)(lVar3 + 0x1000b8) = lVar21;
  }
  if (*(long *)(lVar21 + (long)iVar154 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  puVar13 = PTR_DAT_047e4f38;
  local_ec = 0;
  iStack_e8 = 0;
  local_f0 = param_14;
  local_d0 = 0;
  local_100 = param_12;
  local_f8 = param_13;
  local_e0 = 0;
  uStack_d8 = 0;
  if ((param_11 & 1) == 0) {
    iVar154 = *(int *)PTR_DAT_047e4f38;
    lVar21 = *(long *)(lVar3 + 0x1000b8);
    if (lVar21 == 0) {
      lVar21 = FUN_00e5d3b4();
      *(long *)(lVar3 + 0x1000b8) = lVar21;
    }
    if (*(long *)(lVar21 + (long)iVar154 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    FUN_030c2b8c(param_1,&local_220,param_2,param_3,param_4,param_5 & 0xffffffff,param_6,param_7,
                 param_8,param_9,param_10,&local_100);
    bVar130 = FUN_030c52d8(&local_220);
    iVar154 = *(int *)puVar13;
    lVar21 = *(long *)(lVar3 + 0x1000b8);
    if (lVar21 == 0) {
      lVar21 = FUN_00e5d3b4();
      *(long *)(lVar3 + 0x1000b8) = lVar21;
    }
    if (*(long *)(lVar21 + (long)iVar154 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    local_220 = &PTR_LAB_0464d978;
    local_1a0 = 0;
    if ((-1 < (int)local_19c) && (local_1a8 != 0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                (PTR_PTR_047d1a50 + 0x20,local_1a8,(ulong)local_19c * 0x30);
    }
    local_19c = 0x80000000;
    local_1a8 = 0;
    if (local_1c8 == local_1e0) {
      local_1d8 = 0;
    }
    if (local_1d0 == 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    }
    else {
      uVar39 = local_1c0 + 0x3fU & 0xffffffffffffffc0;
      if ((*(ulong *)(local_1d0 + 0x28) < uVar39) ||
         (*(long *)(local_1d0 + 0x38) != uVar39 + local_1c8)) {
        if (local_1c8 != 0) {
          if (*(ulong *)(local_1d0 + 0x28) < uVar39 + 0x40) {
            *(int *)(*(long *)(local_1d0 + 0x30) + 0x20) =
                 *(int *)(*(long *)(local_1d0 + 0x30) + 0x20) + -1;
            (**(code **)(**(long **)(local_1d0 + 0x10) + 0x18))
                      (*(long **)(local_1d0 + 0x10),local_1c8 - *(int *)(local_1c8 + -4),
                       uVar39 + 0x44);
          }
          else {
            if (*(long *)(local_1d0 + 0x38) == uVar39 + local_1c8) {
              *(long *)(local_1d0 + 0x38) = local_1c8;
              goto LAB_030c0bc0;
            }
            FUN_031cf778();
          }
        }
      }
      else {
        *(long *)(local_1d0 + 0x38) = local_1c8;
        if (*(long *)(local_1d0 + 0x48) == local_1c8) {
LAB_030c0bc0:
          FUN_031cf578();
        }
      }
    }
    local_1d8 = 0;
    if ((-1 < (int)local_1d4) && (local_1e0 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,local_1e0,(ulong)local_1d4 << 7);
    }
    goto LAB_030c23bc;
  }
  uVar50 = param_6[1];
  uVar20 = *param_6;
  uStack_108 = param_7[1];
  local_110 = (undefined *)*param_7;
  uVar51 = param_10[1];
  uVar103 = *param_10;
  uVar35 = *(uint *)(param_4 + 1);
  lVar21 = *(long *)(lVar3 + 0x1000b8);
  if (lVar21 == 0) {
    lVar21 = FUN_00e5d3b4();
    *(long *)(lVar3 + 0x1000b8) = lVar21;
  }
  uVar32 = uVar35 * 2 + 2;
  local_2f8 = *(long *)(*(long *)(lVar21 + 0x3d0) + 0x10);
  if (*(long *)(local_2f8 + 8) == 0) {
    uVar39 = -(ulong)(uVar32 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar32 << 4;
    local_c0[0] = uVar39;
    if (local_2f8 == 0) goto LAB_030c0c40;
    local_220 = (undefined **)(uVar39 + 0x3f & 0xffffffffffffffc0);
    if (*(undefined ***)(local_2f8 + 0x28) < local_220) {
LAB_030c09e8:
      pauVar17 = (undefined1 (*) [16])FUN_031cf3b4(local_2f8,&local_220);
    }
    else {
      pauVar17 = *(undefined1 (**) [16])(local_2f8 + 0x38);
      if (*(undefined1 **)(local_2f8 + 0x40) < *pauVar17 + (long)local_220) goto LAB_030c09e8;
      *(undefined1 **)(local_2f8 + 0x38) = *pauVar17 + (long)local_220;
    }
  }
  else {
    local_c0[0] = -(ulong)(uVar32 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar32 << 4;
LAB_030c0c40:
    uVar39 = local_c0[0];
    pauVar17 = (undefined1 (*) [16])(**(code **)PTR_DAT_047d1a08)(1,local_c0,0x40);
    local_2f8 = 0;
  }
  lVar21 = *(long *)(lVar3 + 0x1000b8);
  if (lVar21 == 0) {
    lVar21 = FUN_00e5d3b4();
    *(long *)(lVar3 + 0x1000b8) = lVar21;
  }
  local_2f0 = *(long *)(*(long *)(lVar21 + 0x3d0) + 0x10);
  local_c0[0] = uVar39;
  if ((*(long *)(local_2f0 + 8) == 0) && (local_2f0 != 0)) {
    local_220 = (undefined **)(uVar39 + 0x3f & 0xffffffffffffffc0);
    if (local_220 <= *(undefined ***)(local_2f0 + 0x28)) {
      puVar18 = *(undefined8 **)(local_2f0 + 0x38);
      if ((ulong)((long)local_220 + (long)puVar18) <= *(ulong *)(local_2f0 + 0x40)) {
        *(long *)(local_2f0 + 0x38) = (long)local_220 + (long)puVar18;
        goto LAB_030c0d6c;
      }
    }
    puVar18 = (undefined8 *)FUN_031cf3b4(local_2f0,&local_220);
  }
  else {
    puVar18 = (undefined8 *)(**(code **)PTR_DAT_047d1a08)(1,local_c0,0x40);
    local_2f0 = 0;
  }
LAB_030c0d6c:
  local_220 = (undefined **)0x0;
  local_218 = 0x8000000000000000;
  lVar21 = *(long *)(lVar3 + 0x1000b8);
  if (lVar21 == 0) {
    lVar21 = FUN_00e5d3b4();
    *(long *)(lVar3 + 0x1000b8) = lVar21;
  }
  local_210 = *(long *)(*(long *)(lVar21 + 0x3d0) + 0x10);
  if (*(long *)(local_210 + 8) != 0) {
    local_210 = 0;
  }
  local_200 = (long)(int)uVar35 * 0x60;
  local_98 = local_200;
  if (local_210 == 0) {
    local_208 = (undefined **)(**(code **)PTR_DAT_047d1a08)(1,&local_98,0x40);
  }
  else {
    local_c0[0] = local_200 + 0x3fU & 0xffffffffffffffc0;
    if (local_c0[0] <= *(ulong *)(local_210 + 0x28)) {
      local_208 = *(undefined ***)(local_210 + 0x38);
      if (local_c0[0] + (long)local_208 <= *(ulong *)(local_210 + 0x40)) {
        *(ulong *)(local_210 + 0x38) = local_c0[0] + (long)local_208;
        goto LAB_030c0e0c;
      }
    }
    local_208 = (undefined **)FUN_031cf3b4(local_210,local_c0);
  }
LAB_030c0e0c:
  local_218 = CONCAT44(uVar35 * 2,(uint)local_218) | 0x8000000000000000;
  local_220 = local_208;
  if (param_9 == 0) {
    uVar44 = uVar103;
    uVar52 = uVar51;
  }
  else {
    lVar21 = *(long *)(*(long *)(param_2 + 0x38) + (param_5 >> 0x16 & 0x3ff) * 0x100);
    FUN_030963b0(*(undefined8 *)(lVar21 + 0x20),(uint)param_5 & 0x3fffff,local_c0);
    fVar47 = (float)(local_c0[0] >> 0x20);
    fVar43 = (float)local_c0[0];
    fVar49 = (float)local_c0[1];
    uVar44 = CONCAT44(*(float *)(lVar21 + 0x84) * fVar49 +
                      (float)((ulong)*(undefined8 *)(lVar21 + 0x60) >> 0x20) * fVar43 +
                      (float)((ulong)*(undefined8 *)(lVar21 + 0x70) >> 0x20) * fVar47,
                      *(float *)(lVar21 + 0x80) * fVar49 +
                      (float)*(undefined8 *)(lVar21 + 0x60) * fVar43 +
                      (float)*(undefined8 *)(lVar21 + 0x70) * fVar47);
    uVar52 = CONCAT44(*(float *)(lVar21 + 0x8c) * fVar49 +
                      (float)((ulong)*(undefined8 *)(lVar21 + 0x68) >> 0x20) * fVar43 +
                      (float)((ulong)*(undefined8 *)(lVar21 + 0x78) >> 0x20) * fVar47,
                      *(float *)(lVar21 + 0x88) * fVar49 +
                      (float)*(undefined8 *)(lVar21 + 0x68) * fVar43 +
                      (float)*(undefined8 *)(lVar21 + 0x78) * fVar47);
  }
  puVar18[1] = uVar52;
  *puVar18 = uVar44;
  if ((int)uVar35 < 1) {
    iVar154 = 1;
    local_230 = 0xffffffff;
  }
  else {
    uVar34 = 1;
    lVar21 = 0;
    local_230 = 0xffffffff;
    do {
      uVar32 = *(uint *)(*param_4 + lVar21);
      lVar26 = *(long *)(*(long *)(param_2 + 0x38) + ((ulong)(uVar32 >> 0xe) & 0x3ff00));
      lVar24 = *(long *)(lVar26 + 0x20);
      iVar75 = *(int *)(lVar24 + 0x60);
      uVar31 = (ulong)uVar32 & 0x3fffff;
      iVar73 = (int)uVar31;
      iVar154 = iVar73 - *(int *)(lVar24 + 0x30);
      if (iVar73 < *(int *)(lVar24 + 0x30)) {
        if (*(int *)(lVar24 + 0x78) == 0) {
          iVar154 = iVar73;
LAB_030c0f44:
          puVar36 = (undefined4 *)(*(long *)(lVar24 + 0x130) + (long)(iVar154 * iVar75) * 4);
          lVar25 = *(long *)(lVar24 + 0xc0);
          goto LAB_030c0f58;
        }
        iVar154 = *(int *)(*(long *)(lVar24 + 0x70) + uVar31 * 4);
        if (iVar154 != -1) goto LAB_030c0f44;
        puVar36 = (undefined4 *)(*(long *)(lVar24 + 0x58) + (long)(iVar75 * iVar73) * 4);
        piVar41 = (int *)(*(long *)(lVar24 + 0x28) + uVar31 * 0x14);
      }
      else {
        puVar36 = (undefined4 *)(*(long *)(lVar24 + 0x150) + (long)(iVar75 * iVar154) * 4);
        lVar25 = *(long *)(lVar24 + 0xe0);
LAB_030c0f58:
        piVar41 = (int *)(lVar25 + (long)iVar154 * 0x14);
      }
      iVar170 = *(int *)(lVar24 + 0x40);
      iVar154 = *piVar41;
      iVar73 = piVar41[1];
      fVar49 = (float)*(undefined8 *)(lVar26 + 0x88);
      fVar43 = (float)*(undefined8 *)(lVar26 + 0x80);
      fVar47 = (float)((ulong)*(undefined8 *)(lVar26 + 0x80) >> 0x20);
      auVar56 = *(undefined1 (*) [16])(lVar26 + 0x90);
      lVar25 = 0x38;
      if (iVar170 <= iVar154) {
        lVar25 = 0xf0;
      }
      iVar174 = 0;
      if (iVar170 <= iVar154) {
        iVar174 = iVar170;
      }
      lVar27 = 0x38;
      if (iVar170 <= iVar73) {
        lVar27 = 0xf0;
      }
      iVar128 = 0;
      if (iVar170 <= iVar73) {
        iVar128 = iVar170;
      }
      puVar42 = (undefined8 *)(*(long *)(lVar24 + lVar25) + (long)(iVar154 - iVar174) * 0x10);
      uVar44 = *puVar42;
      uVar38 = piVar41[2];
      fVar53 = (float)uVar44;
      fVar69 = (float)*(undefined8 *)(lVar26 + 0x60);
      fVar88 = (float)((ulong)*(undefined8 *)(lVar26 + 0x60) >> 0x20);
      fVar91 = (float)*(undefined8 *)(lVar26 + 0x68);
      pfVar2 = (float *)(*(long *)(lVar24 + lVar27) + (long)(iVar73 - iVar128) * 0x10);
      fVar70 = *pfVar2;
      fVar46 = pfVar2[1];
      fVar48 = pfVar2[2];
      fVar54 = (float)((ulong)uVar44 >> 0x20);
      fVar92 = (float)*(undefined8 *)(lVar26 + 0x70);
      fVar93 = (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20);
      fVar97 = (float)*(undefined8 *)(lVar26 + 0x78);
      fVar68 = (float)puVar42[1];
      if ((*(byte *)(piVar41 + 4) >> 6 & 1) == 0) {
        bVar15 = uVar38 == 0xffffffff;
        uVar38 = uVar38 & 0x3fffff | *(int *)(lVar24 + 0x17c) << 0x16;
        if (bVar15) {
          uVar38 = 0xffffffff;
        }
        uVar23 = 0xffffffff;
        if (piVar41[3] != 0xffffffff) {
          uVar23 = piVar41[3] & 0x3fffffU | *(int *)(lVar24 + 0x17c) << 0x16;
        }
      }
      else {
        uVar23 = piVar41[3];
      }
      auVar55._0_8_ =
           CONCAT44(fVar47 * fVar48 + fVar88 * fVar70 + fVar93 * fVar46,
                    fVar43 * fVar48 + fVar69 * fVar70 + fVar92 * fVar46);
      auVar55._8_4_ = fVar49 * fVar48 + fVar91 * fVar70 + fVar97 * fVar46;
      auVar94._12_4_ =
           (float)((ulong)*(undefined8 *)(lVar26 + 0x88) >> 0x20) * fVar48 +
           (float)((ulong)*(undefined8 *)(lVar26 + 0x68) >> 0x20) * fVar70 +
           (float)((ulong)*(undefined8 *)(lVar26 + 0x78) >> 0x20) * fVar46;
      auVar94._0_12_ = auVar55;
      lVar24 = (long)(int)uVar34;
      if (param_9 == 0) {
        uVar44 = uVar103;
        uVar52 = uVar51;
      }
      else {
        lVar26 = *(long *)(*(long *)(param_2 + 0x38) + (ulong)(uVar23 >> 0x16) * 0x100);
        FUN_030963b0(*(undefined8 *)(lVar26 + 0x20),uVar23 & 0x3fffff,local_c0);
        fVar46 = (float)(local_c0[0] >> 0x20);
        fVar70 = (float)local_c0[0];
        fVar48 = (float)local_c0[1];
        auVar98._8_8_ = auVar94._8_8_;
        auVar98._0_8_ = auVar55._0_8_;
        auVar55 = auVar98._0_12_;
        uVar44 = CONCAT44(*(float *)(lVar26 + 0x84) * fVar48 +
                          (float)((ulong)*(undefined8 *)(lVar26 + 0x60) >> 0x20) * fVar70 +
                          (float)((ulong)*(undefined8 *)(lVar26 + 0x70) >> 0x20) * fVar46,
                          *(float *)(lVar26 + 0x80) * fVar48 +
                          (float)*(undefined8 *)(lVar26 + 0x60) * fVar70 +
                          (float)*(undefined8 *)(lVar26 + 0x70) * fVar46);
        uVar52 = CONCAT44(*(float *)(lVar26 + 0x8c) * fVar48 +
                          (float)((ulong)*(undefined8 *)(lVar26 + 0x68) >> 0x20) * fVar70 +
                          (float)((ulong)*(undefined8 *)(lVar26 + 0x78) >> 0x20) * fVar46,
                          *(float *)(lVar26 + 0x88) * fVar48 +
                          (float)*(undefined8 *)(lVar26 + 0x68) * fVar70 +
                          (float)*(undefined8 *)(lVar26 + 0x78) * fVar46);
      }
      (puVar18 + lVar24 * 2)[1] = uVar52;
      puVar18[lVar24 * 2] = uVar44;
      lVar26 = (long)(int)(uint)local_218;
      uVar31 = lVar26 + 1;
      iVar154 = (uint)local_218;
      if ((int)(local_218._4_4_ & 0x7fffffff) <= (int)(uint)local_218) {
        FUN_030c2880(&local_220,uVar31);
        iVar154 = (uint)local_218;
      }
      ppuVar28 = local_220 + (long)iVar154 * 6;
      uVar74 = 0;
      uVar40 = lVar24 + 1;
      local_218 = CONCAT44(local_218._4_4_,(int)uVar31);
      *(uint *)(ppuVar28 + 4) = uVar32;
      ppuVar28[1] = (undefined *)
                    (ulong)(uint)(auVar56._8_4_ +
                                 fVar49 * fVar68 + fVar91 * fVar53 + fVar97 * fVar54);
      *ppuVar28 = (undefined *)
                  CONCAT44(auVar56._4_4_ + fVar47 * fVar68 + fVar88 * fVar53 + fVar93 * fVar54,
                           auVar56._0_4_ + fVar43 * fVar68 + fVar69 * fVar53 + fVar92 * fVar54);
      ppuVar28[3] = (undefined *)CONCAT44(0x3f800000,auVar56._8_4_ + auVar55._8_4_);
      ppuVar28[2] = (undefined *)
                    CONCAT44(auVar56._4_4_ + auVar55._4_4_,auVar56._0_4_ + auVar55._0_4_);
      if ((puVar36 != puVar36 + iVar75) && ((*(byte *)(piVar41 + 4) >> 4 & 1) != 0)) {
        uVar74 = *puVar36;
      }
      *(undefined4 *)((long)local_220 + (long)iVar154 * 0x30 + 0x24) = uVar74;
      *(byte *)(local_220 + (long)iVar154 * 6 + 5) = *(byte *)(piVar41 + 4) >> 4 & 1;
      uVar32 = uVar38;
      if ((ulong)(uVar35 - 1) << 2 != lVar21) {
        uVar32 = (uint)local_230;
      }
      local_230 = (ulong)uVar32;
      if ((*(byte *)(piVar41 + 4) >> 4 & 1) != 0) {
        uVar32 = uVar38 & 0x3fffff;
        lVar25 = *(long *)(*(long *)(param_2 + 0x38) + (ulong)(uVar38 >> 0x16) * 0x100);
        lVar27 = *(long *)(lVar25 + 0x20);
        iVar154 = *(int *)(lVar27 + 0x60);
        uVar23 = uVar32 - *(int *)(lVar27 + 0x30);
        if ((int)uVar32 < *(int *)(lVar27 + 0x30)) {
          if (*(int *)(lVar27 + 0x78) == 0) {
            uVar23 = uVar32;
LAB_030c11b4:
            puVar36 = (undefined4 *)(*(long *)(lVar27 + 0x130) + (long)(int)(uVar23 * iVar154) * 4);
            lVar30 = *(long *)(lVar27 + 0xc0);
            goto LAB_030c11c8;
          }
          uVar23 = *(uint *)(*(long *)(lVar27 + 0x70) + (ulong)uVar32 * 4);
          if (uVar23 != 0xffffffff) goto LAB_030c11b4;
          puVar36 = (undefined4 *)(*(long *)(lVar27 + 0x58) + (long)(int)(iVar154 * uVar32) * 4);
          piVar29 = (int *)(*(long *)(lVar27 + 0x28) + (ulong)uVar32 * 0x14);
        }
        else {
          puVar36 = (undefined4 *)(*(long *)(lVar27 + 0x150) + (long)(int)(iVar154 * uVar23) * 4);
          lVar30 = *(long *)(lVar27 + 0xe0);
LAB_030c11c8:
          piVar29 = (int *)(lVar30 + (long)(int)uVar23 * 0x14);
        }
        iVar170 = *(int *)(lVar27 + 0x40);
        iVar75 = *piVar29;
        iVar73 = piVar29[1];
        auVar56 = *(undefined1 (*) [16])(lVar25 + 0x70);
        lVar30 = 0x38;
        if (iVar170 <= iVar75) {
          lVar30 = 0xf0;
        }
        iVar174 = 0;
        if (iVar170 <= iVar75) {
          iVar174 = iVar170;
        }
        puVar42 = (undefined8 *)(*(long *)(lVar27 + lVar30) + (long)(iVar75 - iVar174) * 0x10);
        uVar44 = *puVar42;
        lVar30 = 0x38;
        if (iVar170 <= iVar73) {
          lVar30 = 0xf0;
        }
        fVar43 = (float)uVar44;
        fVar47 = (float)*(undefined8 *)(lVar25 + 0x60);
        fVar49 = (float)((ulong)*(undefined8 *)(lVar25 + 0x60) >> 0x20);
        fVar70 = (float)*(undefined8 *)(lVar25 + 0x68);
        iVar75 = 0;
        if (iVar170 <= iVar73) {
          iVar75 = iVar170;
        }
        fVar46 = (float)((ulong)uVar44 >> 0x20);
        lVar26 = lVar26 + 2;
        fVar97 = (float)*(undefined8 *)(lVar25 + 0x98);
        fVar92 = (float)*(undefined8 *)(lVar25 + 0x90);
        fVar93 = (float)((ulong)*(undefined8 *)(lVar25 + 0x90) >> 0x20);
        fVar48 = (float)puVar42[1];
        fVar69 = (float)*(undefined8 *)(lVar25 + 0x80);
        fVar88 = (float)((ulong)*(undefined8 *)(lVar25 + 0x80) >> 0x20);
        fVar91 = (float)*(undefined8 *)(lVar25 + 0x88);
        puVar42 = (undefined8 *)(*(long *)(lVar27 + lVar30) + (long)(iVar73 - iVar75) * 0x10);
        uVar44 = *puVar42;
        fVar53 = (float)uVar44;
        fVar54 = (float)((ulong)uVar44 >> 0x20);
        fVar68 = (float)puVar42[1];
        if ((int)(local_218._4_4_ & 0x7fffffff) <= (int)uVar31) {
          FUN_030c2880(&local_220,lVar26);
          uVar31 = local_218 & 0xffffffff;
        }
        iVar75 = (int)uVar31;
        ppuVar28 = local_220 + (long)iVar75 * 6;
        uVar74 = 0;
        local_218 = CONCAT44(local_218._4_4_,(int)lVar26);
        *(uint *)(ppuVar28 + 4) = uVar38;
        ppuVar28[1] = (undefined *)
                      (ulong)(uint)(fVar97 + fVar91 * fVar48 +
                                             fVar70 * fVar43 + auVar56._8_4_ * fVar46);
        *ppuVar28 = (undefined *)
                    CONCAT44(fVar93 + fVar88 * fVar48 + fVar49 * fVar43 + auVar56._4_4_ * fVar46,
                             fVar92 + fVar69 * fVar48 + fVar47 * fVar43 + auVar56._0_4_ * fVar46);
        ppuVar28[3] = (undefined *)
                      CONCAT44(0x3f800000,
                               fVar97 + fVar91 * fVar68 + fVar70 * fVar53 + auVar56._8_4_ * fVar54);
        ppuVar28[2] = (undefined *)
                      CONCAT44(fVar93 + fVar88 * fVar68 + fVar49 * fVar53 + auVar56._4_4_ * fVar54,
                               fVar92 + fVar69 * fVar68 + fVar47 * fVar53 + auVar56._0_4_ * fVar54);
        if ((puVar36 != puVar36 + iVar154) && ((*(byte *)(piVar41 + 4) >> 4 & 1) != 0)) {
          uVar74 = *puVar36;
        }
        *(undefined4 *)((long)local_220 + (long)iVar75 * 0x30 + 0x24) = uVar74;
        *(undefined1 *)(local_220 + (long)iVar75 * 6 + 5) = 2;
        uVar44 = puVar18[lVar24 * 2];
        (puVar18 + uVar40 * 2)[1] = (puVar18 + lVar24 * 2)[1];
        puVar18[uVar40 * 2] = uVar44;
        uVar40 = (ulong)((int)uVar34 + 2);
      }
      iVar154 = (int)uVar40;
      lVar21 = lVar21 + 4;
      uVar34 = uVar40 & 0xffffffff;
    } while ((ulong)uVar35 << 2 != lVar21);
  }
  ppuVar28 = local_220;
  puVar42 = puVar18 + (long)iVar154 * 2;
  puVar42[1] = puVar42[-1];
  *puVar42 = puVar42[-2];
  uVar45 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(*pauVar17 + 8) = uVar50;
  *(undefined8 *)*pauVar17 = uVar20;
  uVar52 = _UNK_03cab278;
  uVar44 = _DAT_03cab270;
  uVar51 = _UNK_03caa748;
  uVar103 = _DAT_03caa740;
  fVar43 = (float)uVar45;
  fVar47 = (float)((ulong)uVar45 >> 0x20);
  if (0 < (int)(uint)local_218) {
    auVar56 = NEON_fmov(0x3f800000,4);
    uVar34 = 0;
    do {
      uVar32 = (uint)uVar34;
      if ((int)uVar32 < (int)(uint)local_218) {
        pauVar33 = (undefined1 (*) [16])(local_220 + (long)(int)uVar32 * 6);
        auVar94 = *pauVar33;
        lVar24 = (long)(int)uVar32;
        iVar154 = 0;
        fVar49 = auVar94._0_4_;
        auVar115._0_4_ = *(float *)pauVar33[1] - fVar49;
        fVar70 = auVar94._4_4_;
        auVar115._4_4_ = *(float *)(pauVar33[1] + 4) - fVar70;
        fVar46 = auVar94._8_4_;
        auVar115._8_4_ = *(float *)(pauVar33[1] + 8) - fVar46;
        fVar48 = auVar94._12_4_;
        auVar115._12_4_ = *(float *)(pauVar33[1] + 0xc) - fVar48;
        auVar94 = NEON_ext(auVar115,auVar115,4,1);
        fVar53 = (float)uVar20;
        fVar88 = fVar49 - fVar53;
        fVar54 = (float)((ulong)uVar20 >> 0x20);
        fVar91 = fVar70 - fVar54;
        fVar68 = (float)uVar50;
        fVar92 = fVar46 - fVar68;
        fVar69 = (float)((ulong)uVar50 >> 0x20);
        fVar93 = fVar48 - fVar69;
        auVar144._0_4_ = auVar115._0_4_ * auVar115._0_4_;
        auVar144._4_4_ = auVar115._4_4_ * auVar115._4_4_;
        auVar144._8_4_ = auVar115._8_4_ * auVar115._8_4_;
        auVar144._12_4_ = auVar115._12_4_ * auVar115._12_4_;
        auVar156._0_4_ = fVar88 * auVar115._0_4_;
        auVar156._4_4_ = fVar91 * auVar115._4_4_;
        auVar156._8_4_ = fVar92 * auVar115._8_4_;
        auVar156._12_4_ = fVar93 * auVar115._12_4_;
        auVar98 = NEON_ext(auVar144,auVar144,8,1);
        auVar101 = NEON_ext(auVar156,auVar156,8,1);
        fVar97 = auVar98._0_4_ + auVar144._0_4_ + auVar144._4_4_;
        fVar100 = auVar101._0_4_ + auVar156._0_4_ + auVar156._4_4_;
        auVar101._8_8_ = uStack_108;
        auVar101._0_8_ = local_110;
        lVar21 = (int)(uint)local_218 - lVar24;
        uVar20 = 0x3f8000003f800000;
        uVar31 = uVar34 & 0xffffffff;
        uVar34 = uVar34 & 0xffffffff;
        uVar50 = 0;
        ppuVar19 = local_220 + lVar24 * 6;
        do {
          uVar38 = (uint)uVar31;
          uVar23 = (uint)uVar34;
          iVar75 = (uVar32 - (uint)local_218) + 1 + iVar154;
          ppuVar37 = &local_110;
          if (iVar75 != 0) {
            ppuVar37 = ppuVar19 + 6;
          }
          ppuVar1 = &local_110;
          if (iVar75 != 0) {
            ppuVar1 = ppuVar19 + 8;
          }
          auVar123._0_4_ = SUB84(*ppuVar37,0) - fVar53;
          auVar123._4_4_ = (float)((ulong)*ppuVar37 >> 0x20) - fVar54;
          auVar123._8_4_ = SUB84(ppuVar37[1],0) - fVar68;
          auVar123._12_4_ = (float)((ulong)ppuVar37[1] >> 0x20) - fVar69;
          auVar162 = NEON_ext(auVar123,auVar123,4,1);
          auVar113._0_4_ = SUB84(*ppuVar1,0) - fVar53;
          auVar113._4_4_ = (float)((ulong)*ppuVar1 >> 0x20) - fVar54;
          auVar113._8_4_ = SUB84(ppuVar1[1],0) - fVar68;
          auVar113._12_4_ = (float)((ulong)ppuVar1[1] >> 0x20) - fVar69;
          fVar86 = auVar94._0_4_;
          fVar87 = auVar94._4_4_;
          fVar111 = auVar115._8_4_ * auVar123._8_4_ +
                    auVar115._0_4_ * auVar123._0_4_ + auVar115._4_4_ * auVar123._4_4_;
          fVar142 = auVar115._8_4_ * auVar123._8_4_ +
                    auVar115._0_4_ * auVar123._0_4_ + auVar115._4_4_ * auVar123._4_4_;
          auVar143._0_4_ = auVar123._0_4_ * auVar123._0_4_;
          auVar143._4_4_ = auVar123._4_4_ * auVar123._4_4_;
          auVar143._8_4_ = auVar123._8_4_ * auVar123._8_4_;
          auVar143._12_4_ = auVar123._12_4_ * auVar123._12_4_;
          auVar155._0_4_ = fVar88 * auVar123._0_4_;
          auVar155._4_4_ = fVar91 * auVar123._4_4_;
          auVar155._8_4_ = fVar92 * auVar123._8_4_;
          auVar155._12_4_ = fVar93 * auVar123._12_4_;
          auVar98 = NEON_ext(auVar113,auVar113,4,1);
          auVar144 = NEON_ext(auVar143,auVar143,8,1);
          auVar156 = NEON_ext(auVar155,auVar155,8,1);
          fVar141 = auVar144._0_4_ + auVar143._0_4_ + auVar143._4_4_;
          fVar151 = auVar156._0_4_ + auVar155._0_4_ + auVar155._4_4_;
          fVar106 = auVar115._0_4_ * auVar162._0_4_ - fVar86 * auVar123._0_4_;
          fVar107 = auVar115._4_4_ * auVar162._4_4_ - fVar87 * auVar123._4_4_;
          fVar108 = auVar115._8_4_ * auVar123._0_4_ - auVar115._0_4_ * auVar123._8_4_;
          fVar109 = auVar115._12_4_ * auVar123._4_4_ - auVar115._4_4_ * auVar123._12_4_;
          fVar116 = auVar115._0_4_ * auVar98._0_4_ - fVar86 * auVar113._0_4_;
          auVar124._0_8_ =
               CONCAT44(auVar115._4_4_ * auVar98._4_4_ - fVar87 * auVar113._4_4_,fVar116);
          auVar124._8_4_ = auVar115._8_4_ * auVar113._0_4_ - auVar115._0_4_ * auVar113._8_4_;
          auVar124._12_4_ = auVar115._12_4_ * auVar113._4_4_ - auVar115._4_4_ * auVar113._12_4_;
          auVar162._4_4_ = fVar107;
          auVar162._0_4_ = fVar106;
          auVar162._8_4_ = fVar108;
          auVar162._12_4_ = fVar109;
          auVar6._4_4_ = fVar107;
          auVar6._0_4_ = fVar106;
          auVar6._8_4_ = fVar108;
          auVar6._12_4_ = fVar109;
          auVar98 = NEON_ext(auVar162,auVar6,4,1);
          uVar76 = NEON_ext(auVar98._0_8_,CONCAT44(fVar107,fVar106),4,1);
          auVar144 = NEON_ext(auVar124,auVar124,4,1);
          fVar140 = auVar98._0_4_;
          fVar153 = auVar98._4_4_;
          uVar78 = NEON_ext(auVar144._0_8_,auVar124._0_8_,4,1);
          fVar158 = auVar144._0_4_;
          fVar159 = auVar144._4_4_;
          iVar170 = -(uint)(fVar141 == 0.0);
          iVar174 = -(uint)(fVar97 == 0.0);
          fVar175 = fVar158 * fVar158 + fVar159 * fVar159 + fVar116 * fVar116;
          fVar141 = auVar56._0_4_ / fVar141;
          fVar152 = auVar56._8_4_ / fVar97;
          fVar117 = fVar140 * fVar140 + fVar153 * fVar153 + fVar106 * fVar106;
          fVar107 = fVar86 * fVar140 - auVar115._0_4_ * (float)uVar76;
          fVar108 = fVar87 * fVar153 - auVar115._4_4_ * (float)((ulong)uVar76 >> 0x20);
          fVar109 = auVar115._0_4_ * fVar106 - auVar115._8_4_ * fVar140;
          fVar110 = auVar115._4_4_ * 0.0 - auVar115._12_4_ * fVar153;
          iVar73 = -(uint)(fVar117 == 0.0);
          auVar7._4_4_ = fVar108;
          auVar7._0_4_ = fVar107;
          auVar7._8_4_ = fVar109;
          auVar7._12_4_ = fVar110;
          auVar8._4_4_ = fVar108;
          auVar8._0_4_ = fVar107;
          auVar8._8_4_ = fVar109;
          auVar8._12_4_ = fVar110;
          auVar98 = NEON_ext(auVar7,auVar8,4,1);
          fVar108 = fVar88 * auVar98._0_4_;
          fVar110 = fVar91 * auVar98._4_4_;
          uVar74 = CONCAT13(~(byte)((uint)iVar73 >> 0x18),
                            CONCAT12(~(byte)((uint)iVar73 >> 0x10),
                                     CONCAT11(~(byte)((uint)iVar73 >> 8),~(byte)iVar73)));
          uVar34 = CONCAT44(fVar47 / (fVar140 * fVar140 + fVar153 * fVar153 + fVar106 * fVar106),
                            fVar43 / fVar117) & CONCAT44(uVar74,uVar74);
          fVar109 = (float)CONCAT13((byte)((uint)fVar141 >> 0x18) & ~(byte)((uint)iVar170 >> 0x18),
                                    CONCAT12((byte)((uint)fVar141 >> 0x10) &
                                             ~(byte)((uint)iVar170 >> 0x10),
                                             CONCAT11((byte)((uint)fVar141 >> 8) &
                                                      ~(byte)((uint)iVar170 >> 8),
                                                      SUB41(fVar141,0) & ~(byte)iVar170)));
          fVar106 = (float)CONCAT13((byte)((uint)fVar152 >> 0x18) & ~(byte)((uint)iVar174 >> 0x18),
                                    CONCAT12((byte)((uint)fVar152 >> 0x10) &
                                             ~(byte)((uint)iVar174 >> 0x10),
                                             CONCAT11((byte)((uint)fVar152 >> 8) &
                                                      ~(byte)((uint)iVar174 >> 8),
                                                      SUB41(fVar152,0) & ~(byte)iVar174)));
          uVar76 = NEON_fminnm(CONCAT44((float)(uVar34 >> 0x20) *
                                        (fVar108 + fVar110 + fVar92 * fVar107),
                                        (float)uVar34 * (fVar108 + fVar110 + fVar92 * fVar107)),
                               uVar45,4);
          uVar76 = NEON_fmax(uVar76,0,4);
          fVar107 = (float)uVar76;
          fVar110 = (fVar107 * fVar111 - fVar100) * fVar106;
          uVar76 = NEON_fminnm(CONCAT44(((float)((ulong)uVar76 >> 0x20) * fVar142 - fVar100) *
                                        fVar106,fVar110),uVar45,4);
          uVar76 = NEON_fmax(uVar76,0,4);
          fVar108 = (float)uVar76;
          iVar174 = -(uint)(fVar108 == fVar110);
          fVar142 = (fVar151 + (float)((ulong)uVar76 >> 0x20) * fVar142) * fVar109;
          iVar170 = -(uint)(fVar175 == 0.0);
          uVar112 = NEON_fminnm(CONCAT17((char)((uint)fVar142 >> 0x18),
                                         CONCAT16((char)((uint)fVar142 >> 0x10),
                                                  CONCAT15((char)((uint)fVar142 >> 8),
                                                           CONCAT14(SUB41(fVar142,0),
                                                                    (fVar151 + fVar108 * fVar111) *
                                                                    fVar109)))),uVar45,4);
          iVar73 = -(uint)(fVar117 == 0.0);
          uVar112 = NEON_fmax(uVar112,0,4);
          fVar107 = (float)((uint)fVar107 ^
                           ((uint)fVar107 ^ (uint)uVar112) &
                           CONCAT13(~(byte)((uint)iVar174 >> 0x18) | (byte)((uint)iVar73 >> 0x18),
                                    CONCAT12(~(byte)((uint)iVar174 >> 0x10) |
                                             (byte)((uint)iVar73 >> 0x10),
                                             CONCAT11(~(byte)((uint)iVar174 >> 8) |
                                                      (byte)((uint)iVar73 >> 8),
                                                      ~(byte)iVar174 | (byte)iVar73))));
          bVar130 = ~(byte)((uint)iVar170 >> 8);
          bVar132 = ~(byte)((uint)iVar170 >> 0x10);
          bVar134 = ~(byte)((uint)iVar170 >> 0x18);
          auVar145._0_4_ = fVar86 * fVar158 - auVar115._0_4_ * (float)uVar78;
          auVar145._4_4_ = fVar87 * fVar159 - auVar115._4_4_ * (float)((ulong)uVar78 >> 0x20);
          auVar145._8_4_ = auVar115._0_4_ * fVar116 - auVar115._8_4_ * fVar158;
          auVar145._12_4_ = auVar115._4_4_ * 0.0 - auVar115._12_4_ * fVar159;
          auVar98 = NEON_ext(auVar145,auVar145,4,1);
          uVar34 = CONCAT44(fVar47 / (fVar158 * fVar158 + fVar159 * fVar159 + fVar116 * fVar116),
                            fVar43 / fVar175) &
                   CONCAT17(bVar134,CONCAT16(bVar132,CONCAT15(bVar130,CONCAT14(~(byte)iVar170,
                                                                               CONCAT13(bVar134,
                                                  CONCAT12(bVar132,CONCAT11(bVar130,~(byte)iVar170))
                                                  )))));
          fVar106 = (float)uVar103;
          iVar73 = -(uint)(fVar107 == fVar106);
          fVar86 = (float)((ulong)uVar103 >> 0x20);
          iVar170 = -(uint)(fVar107 == fVar86);
          fVar87 = (float)uVar51;
          iVar174 = -(uint)(fVar108 == fVar87);
          fVar107 = (float)((ulong)uVar51 >> 0x20);
          iVar128 = -(uint)((float)(CONCAT17((char)((ulong)uVar76 >> 0x18),
                                             CONCAT16((char)((ulong)uVar76 >> 0x10),
                                                      CONCAT15((char)((ulong)uVar76 >> 8),
                                                               CONCAT14((char)uVar76,fVar108)))) >>
                                   0x20) == fVar107);
          bVar130 = (byte)((ulong)uVar44 >> 8);
          bVar132 = (byte)((ulong)uVar44 >> 0x10);
          bVar134 = (byte)((ulong)uVar44 >> 0x18);
          iVar73 = CONCAT13((byte)((uint)iVar73 >> 0x18) & bVar134,
                            CONCAT12((byte)((uint)iVar73 >> 0x10) & bVar132,
                                     CONCAT11((byte)((uint)iVar73 >> 8) & bVar130,
                                              (byte)iVar73 & (byte)uVar44)));
          bVar57 = (byte)((ulong)uVar44 >> 0x20);
          bVar58 = (byte)((ulong)uVar44 >> 0x28);
          bVar59 = (byte)((ulong)uVar44 >> 0x30);
          bVar60 = (byte)((ulong)uVar44 >> 0x38);
          auVar121._0_8_ =
               CONCAT17((byte)((uint)iVar170 >> 0x18) & bVar60,
                        CONCAT16((byte)((uint)iVar170 >> 0x10) & bVar59,
                                 CONCAT15((byte)((uint)iVar170 >> 8) & bVar58,
                                          CONCAT14((byte)iVar170 & bVar57,iVar73))));
          auVar121[8] = (byte)iVar174 & (byte)uVar52;
          bVar61 = (byte)((ulong)uVar52 >> 8);
          auVar121[9] = (byte)((uint)iVar174 >> 8) & bVar61;
          bVar62 = (byte)((ulong)uVar52 >> 0x10);
          auVar121[10] = (byte)((uint)iVar174 >> 0x10) & bVar62;
          bVar63 = (byte)((ulong)uVar52 >> 0x18);
          auVar121[0xb] = (byte)((uint)iVar174 >> 0x18) & bVar63;
          bVar64 = (byte)((ulong)uVar52 >> 0x20);
          auVar125[0xc] = (byte)iVar128 & bVar64;
          auVar125._0_12_ = auVar121;
          bVar65 = (byte)((ulong)uVar52 >> 0x28);
          auVar125[0xd] = (byte)((uint)iVar128 >> 8) & bVar65;
          bVar66 = (byte)((ulong)uVar52 >> 0x30);
          auVar125[0xe] = (byte)((uint)iVar128 >> 0x10) & bVar66;
          bVar67 = (byte)((ulong)uVar52 >> 0x38);
          auVar125[0xf] = (byte)((uint)iVar128 >> 0x18) & bVar67;
          uVar118 = iVar73 + (int)((ulong)auVar121._0_8_ >> 0x20) + auVar121._8_4_ + auVar125._12_4_
          ;
          fVar142 = fVar88 * auVar98._0_4_;
          fVar109 = fVar91 * auVar98._4_4_;
          fVar111 = (float)(uVar34 >> 0x20) * (fVar142 + fVar109 + fVar92 * auVar145._0_4_);
          uVar112 = NEON_fminnm(CONCAT17((char)((uint)fVar111 >> 0x18),
                                         CONCAT16((char)((uint)fVar111 >> 0x10),
                                                  CONCAT15((char)((uint)fVar111 >> 8),
                                                           CONCAT14(SUB41(fVar111,0),
                                                                    (float)uVar34 *
                                                                    (fVar142 + fVar109 +
                                                                    fVar92 * auVar145._0_4_))))),
                                uVar45,4);
          auVar157._0_4_ = auVar113._0_4_ * auVar113._0_4_;
          auVar157._4_4_ = auVar113._4_4_ * auVar113._4_4_;
          auVar157._8_4_ = auVar113._8_4_ * auVar113._8_4_;
          auVar157._12_4_ = auVar113._12_4_ * auVar113._12_4_;
          uVar112 = NEON_fmax(uVar112,0,4);
          auVar114._0_4_ = fVar88 * auVar113._0_4_;
          auVar114._4_4_ = fVar91 * auVar113._4_4_;
          auVar114._8_4_ = fVar92 * auVar113._8_4_;
          auVar114._12_4_ = fVar93 * auVar113._12_4_;
          auVar144 = NEON_ext(auVar157,auVar157,8,1);
          auVar98 = NEON_ext(auVar114,auVar114,8,1);
          fVar111 = auVar144._0_4_ + auVar157._0_4_ + auVar157._4_4_;
          fVar109 = auVar98._0_4_ + auVar114._0_4_ + auVar114._4_4_;
          iVar73 = -(uint)(fVar111 == 0.0);
          iVar170 = -(uint)(fVar97 == 0.0);
          fVar111 = auVar56._0_4_ / fVar111;
          fVar142 = auVar56._8_4_ / fVar97;
          fVar110 = auVar115._8_4_ * auVar113._8_4_ +
                    auVar115._0_4_ * auVar113._0_4_ + auVar115._4_4_ * auVar113._4_4_;
          fVar116 = auVar115._8_4_ * auVar113._8_4_ +
                    auVar115._0_4_ * auVar113._0_4_ + auVar115._4_4_ * auVar113._4_4_;
          fVar117 = (float)CONCAT13((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18),
                                    CONCAT12((byte)((uint)fVar111 >> 0x10) &
                                             ~(byte)((uint)iVar73 >> 0x10),
                                             CONCAT11((byte)((uint)fVar111 >> 8) &
                                                      ~(byte)((uint)iVar73 >> 8),
                                                      SUB41(fVar111,0) & ~(byte)iVar73)));
          fVar142 = (float)CONCAT13((byte)((uint)fVar142 >> 0x18) & ~(byte)((uint)iVar170 >> 0x18),
                                    CONCAT12((byte)((uint)fVar142 >> 0x10) &
                                             ~(byte)((uint)iVar170 >> 0x10),
                                             CONCAT11((byte)((uint)fVar142 >> 8) &
                                                      ~(byte)((uint)iVar170 >> 8),
                                                      SUB41(fVar142,0) & ~(byte)iVar170)));
          fVar111 = (float)uVar112;
          fVar141 = (fVar111 * fVar110 - fVar100) * fVar142;
          uVar112 = NEON_fminnm(CONCAT44(((float)((ulong)uVar112 >> 0x20) * fVar116 - fVar100) *
                                         fVar142,fVar141),uVar45,4);
          uVar112 = NEON_fmax(uVar112,0,4);
          fVar142 = (float)uVar112;
          iVar170 = -(uint)(fVar175 == 0.0);
          iVar73 = -(uint)(fVar142 == fVar141);
          uVar78 = NEON_fminnm(CONCAT44((fVar109 + (float)((ulong)uVar112 >> 0x20) * fVar116) *
                                        fVar117,(fVar109 + fVar142 * fVar110) * fVar117),uVar45,4);
          uVar78 = NEON_fmax(uVar78,0,4);
          fVar111 = (float)((uint)fVar111 ^
                           ((uint)fVar111 ^ (uint)uVar78) &
                           CONCAT13(~(byte)((uint)iVar73 >> 0x18) | (byte)((uint)iVar170 >> 0x18),
                                    CONCAT12(~(byte)((uint)iVar73 >> 0x10) |
                                             (byte)((uint)iVar170 >> 0x10),
                                             CONCAT11(~(byte)((uint)iVar73 >> 8) |
                                                      (byte)((uint)iVar170 >> 8),
                                                      ~(byte)iVar73 | (byte)iVar170))));
          iVar73 = -(uint)(fVar111 == fVar106);
          iVar170 = -(uint)(fVar111 == fVar86);
          iVar174 = -(uint)(fVar142 == fVar87);
          iVar128 = -(uint)(fVar142 == fVar107);
          iVar73 = CONCAT13((byte)((uint)iVar73 >> 0x18) & bVar134,
                            CONCAT12((byte)((uint)iVar73 >> 0x10) & bVar132,
                                     CONCAT11((byte)((uint)iVar73 >> 8) & bVar130,
                                              (byte)iVar73 & (byte)uVar44)));
          auVar122._0_8_ =
               CONCAT17((byte)((uint)iVar170 >> 0x18) & bVar60,
                        CONCAT16((byte)((uint)iVar170 >> 0x10) & bVar59,
                                 CONCAT15((byte)((uint)iVar170 >> 8) & bVar58,
                                          CONCAT14((byte)iVar170 & bVar57,iVar73))));
          auVar122[8] = (byte)iVar174 & (byte)uVar52;
          auVar122[9] = (byte)((uint)iVar174 >> 8) & bVar61;
          auVar122[10] = (byte)((uint)iVar174 >> 0x10) & bVar62;
          auVar122[0xb] = (byte)((uint)iVar174 >> 0x18) & bVar63;
          auVar126[0xc] = (byte)iVar128 & bVar64;
          auVar126._0_12_ = auVar122;
          auVar126[0xd] = (byte)((uint)iVar128 >> 8) & bVar65;
          auVar126[0xe] = (byte)((uint)iVar128 >> 0x10) & bVar66;
          auVar126[0xf] = (byte)((uint)iVar128 >> 0x18) & bVar67;
          uVar119 = iVar73 + (int)((ulong)auVar122._0_8_ >> 0x20) + auVar122._8_4_ + auVar126._12_4_
          ;
          fVar111 = (float)uVar50;
          if (((uVar119 | uVar118) & 3) != 0) {
            uVar78 = uVar50;
            if (uVar118 == 0) {
              uVar78 = NEON_fmax(uVar50,uVar76,4);
            }
            uVar120 = uVar20;
            if (uVar119 == 0) {
              uVar120 = NEON_fmin(uVar20,uVar112,4);
            }
            fVar86 = (float)((ulong)uVar120 >> 0x20);
            fVar106 = (float)((ulong)uVar78 >> 0x20);
            auVar168._0_4_ = (fVar49 + auVar115._0_4_ * (float)uVar78) - fVar53;
            auVar168._4_4_ = (fVar70 + auVar115._4_4_ * fVar106) - fVar54;
            auVar168._8_4_ = (fVar46 + auVar115._8_4_ * (float)uVar78) - fVar68;
            auVar168._12_4_ = (fVar48 + auVar115._12_4_ * fVar106) - fVar69;
            auVar144 = NEON_ext(auVar168,auVar168,4,1);
            auVar146._0_4_ = (fVar49 + auVar115._0_4_ * (float)uVar120) - fVar53;
            auVar146._4_4_ = (fVar70 + auVar115._4_4_ * fVar86) - fVar54;
            auVar146._8_4_ = (fVar46 + auVar115._8_4_ * (float)uVar120) - fVar68;
            auVar146._12_4_ = (fVar48 + auVar115._12_4_ * fVar86) - fVar69;
            fVar87 = *(float *)ppuVar19;
            fVar107 = *(float *)((long)ppuVar19 + 4);
            fVar109 = *(float *)(ppuVar19 + 1);
            fVar110 = *(float *)((long)ppuVar19 + 0xc);
            fVar106 = SUB84(ppuVar19[2],0) - fVar87;
            fVar86 = (float)((ulong)ppuVar19[2] >> 0x20) - fVar107;
            uVar129 = SUB41(fVar86,0);
            uVar131 = (undefined1)((uint)fVar86 >> 8);
            uVar133 = (undefined1)((uint)fVar86 >> 0x10);
            uVar135 = (undefined1)((uint)fVar86 >> 0x18);
            fVar152 = SUB84(ppuVar19[3],0) - fVar109;
            fVar140 = (float)((ulong)ppuVar19[3] >> 0x20) - fVar110;
            auVar11[4] = uVar129;
            auVar11._0_4_ = fVar106;
            auVar11[5] = uVar131;
            auVar11[6] = uVar133;
            auVar11[7] = uVar135;
            auVar11._8_4_ = fVar152;
            auVar11._12_4_ = fVar140;
            auVar12[4] = uVar129;
            auVar12._0_4_ = fVar106;
            auVar12[5] = uVar131;
            auVar12[6] = uVar133;
            auVar12[7] = uVar135;
            auVar12._8_4_ = fVar152;
            auVar12._12_4_ = fVar140;
            auVar98 = NEON_ext(auVar11,auVar12,4,1);
            fVar153 = fVar87 - fVar53;
            fVar158 = fVar107 - fVar54;
            fVar159 = fVar109 - fVar68;
            fVar175 = fVar110 - fVar69;
            fVar160 = auVar98._0_4_;
            fVar166 = auVar98._4_4_;
            fVar167 = (float)(CONCAT17(uVar135,CONCAT16(uVar133,CONCAT15(uVar131,CONCAT14(uVar129,
                                                  fVar106)))) >> 0x20);
            auVar82._0_4_ = fVar153 * fVar106;
            auVar82._4_4_ = fVar158 * fVar86;
            auVar82._8_4_ = fVar159 * fVar152;
            auVar82._12_4_ = fVar175 * fVar140;
            fVar116 = auVar144._0_4_ * fVar106 - auVar168._0_4_ * fVar160;
            auVar172._0_8_ = CONCAT44(auVar144._4_4_ * fVar86 - auVar168._4_4_ * fVar166,fVar116);
            auVar172._8_4_ = auVar168._0_4_ * fVar152 - auVar168._8_4_ * fVar106;
            auVar172._12_4_ = auVar168._4_4_ * fVar140 - auVar168._12_4_ * fVar167;
            auVar98 = NEON_ext(auVar172,auVar172,4,1);
            uVar78 = NEON_ext(auVar98._0_8_,auVar172._0_8_,4,1);
            fVar141 = auVar98._0_4_;
            fVar151 = auVar98._4_4_;
            fVar117 = fVar141 * fVar141 + fVar151 * fVar151 + fVar116 * fVar116;
            auVar80._0_4_ = fVar106 * fVar106;
            auVar80._4_4_ = fVar86 * fVar86;
            auVar80._8_4_ = fVar152 * fVar152;
            auVar80._12_4_ = fVar140 * fVar140;
            iVar75 = -(uint)(fVar117 == 0.0);
            uVar74 = CONCAT13(~(byte)((uint)iVar75 >> 0x18),
                              CONCAT12(~(byte)((uint)iVar75 >> 0x10),
                                       CONCAT11(~(byte)((uint)iVar75 >> 8),~(byte)iVar75)));
            auVar176._0_4_ = fVar160 * fVar141 - fVar106 * (float)uVar78;
            auVar176._4_4_ = fVar166 * fVar151 - fVar86 * (float)((ulong)uVar78 >> 0x20);
            auVar176._8_4_ = fVar106 * fVar116 - fVar152 * fVar141;
            auVar176._12_4_ = fVar167 * 0.0 - fVar140 * fVar151;
            auVar98 = NEON_ext(auVar176,auVar176,4,1);
            uVar34 = CONCAT44(fVar47 / (fVar141 * fVar141 + fVar151 * fVar151 + fVar116 * fVar116),
                              fVar43 / fVar117) & CONCAT44(uVar74,uVar74);
            fVar116 = fVar153 * auVar98._0_4_;
            fVar117 = fVar158 * auVar98._4_4_;
            uVar78 = NEON_fminnm(CONCAT44((float)(uVar34 >> 0x20) *
                                          (fVar116 + fVar117 + fVar159 * auVar176._0_4_),
                                          (float)uVar34 *
                                          (fVar116 + fVar117 + fVar159 * auVar176._0_4_)),uVar45,4);
            auVar77._0_4_ = auVar168._0_4_ * auVar168._0_4_;
            auVar77._4_4_ = auVar168._4_4_ * auVar168._4_4_;
            auVar77._8_4_ = auVar168._8_4_ * auVar168._8_4_;
            auVar77._12_4_ = auVar168._12_4_ * auVar168._12_4_;
            uVar78 = NEON_fmax(uVar78,0,4);
            auVar169._0_4_ = auVar168._0_4_ * fVar153;
            auVar169._4_4_ = auVar168._4_4_ * fVar158;
            auVar169._8_4_ = auVar168._8_4_ * fVar159;
            auVar169._12_4_ = auVar168._12_4_ * fVar175;
            auVar98 = NEON_ext(auVar77,auVar77,8,1);
            auVar162 = NEON_ext(auVar169,auVar169,8,1);
            auVar144 = NEON_ext(auVar80,auVar80,8,1);
            auVar156 = NEON_ext(auVar82,auVar82,8,1);
            fVar171 = auVar144._0_4_ + auVar80._0_4_ + auVar80._4_4_;
            fVar173 = auVar156._0_4_ + auVar82._0_4_ + auVar82._4_4_;
            iVar75 = -(uint)(auVar98._0_4_ + auVar77._0_4_ + auVar77._4_4_ == 0.0);
            iVar73 = -(uint)(auVar162._0_4_ + auVar169._0_4_ + auVar169._4_4_ == 0.0);
            iVar170 = -(uint)(fVar171 == 0.0);
            iVar174 = -(uint)(fVar173 == 0.0);
            auVar177[0] = ~(byte)iVar75;
            auVar177[1] = ~(byte)((uint)iVar75 >> 8);
            auVar177[2] = ~(byte)((uint)iVar75 >> 0x10);
            auVar177[3] = ~(byte)((uint)iVar75 >> 0x18);
            auVar177[4] = ~(byte)iVar73;
            auVar177[5] = ~(byte)((uint)iVar73 >> 8);
            auVar177[6] = ~(byte)((uint)iVar73 >> 0x10);
            auVar177[7] = ~(byte)((uint)iVar73 >> 0x18);
            auVar177[8] = ~(byte)iVar170;
            auVar177[9] = ~(byte)((uint)iVar170 >> 8);
            auVar177[10] = ~(byte)((uint)iVar170 >> 0x10);
            auVar177[0xb] = ~(byte)((uint)iVar170 >> 0x18);
            auVar177[0xc] = ~(byte)iVar174;
            auVar177[0xd] = ~(byte)((uint)iVar174 >> 8);
            auVar177[0xe] = ~(byte)((uint)iVar174 >> 0x10);
            auVar177[0xf] = ~(byte)((uint)iVar174 >> 0x18);
            auVar98 = NEON_ext(auVar177,auVar177,8,1);
            fVar116 = (float)((uint)(fVar43 / fVar171) & auVar98._0_4_);
            auVar98 = NEON_ext(auVar146,auVar146,4,1);
            uVar78 = NEON_fminnm(CONCAT44(((float)((ulong)uVar78 >> 0x20) *
                                           (auVar168._8_4_ * fVar152 +
                                           auVar168._0_4_ * fVar106 + auVar168._4_4_ * fVar86) -
                                          fVar173) * fVar116,
                                          ((float)uVar78 *
                                           (auVar168._8_4_ * fVar152 +
                                           auVar168._0_4_ * fVar106 + auVar168._4_4_ * fVar86) -
                                          fVar173) * fVar116),uVar45,4);
            uVar78 = NEON_fmax(uVar78,0,4);
            fVar116 = fVar106 * auVar98._0_4_ - auVar146._0_4_ * fVar160;
            auVar79._0_8_ = CONCAT44(fVar86 * auVar98._4_4_ - auVar146._4_4_ * fVar166,fVar116);
            auVar79._8_4_ = fVar152 * auVar146._0_4_ - auVar146._8_4_ * fVar106;
            auVar79._12_4_ = fVar140 * auVar146._4_4_ - auVar146._12_4_ * fVar167;
            auVar98 = NEON_ext(auVar79,auVar79,4,1);
            uVar120 = NEON_ext(auVar98._0_8_,auVar79._0_8_,4,1);
            fVar141 = auVar98._0_4_;
            fVar151 = auVar98._4_4_;
            fVar117 = fVar141 * fVar141 + fVar151 * fVar151 + fVar116 * fVar116;
            iVar75 = -(uint)(fVar117 == 0.0);
            uVar74 = CONCAT13(~(byte)((uint)iVar75 >> 0x18),
                              CONCAT12(~(byte)((uint)iVar75 >> 0x10),
                                       CONCAT11(~(byte)((uint)iVar75 >> 8),~(byte)iVar75)));
            uVar34 = CONCAT44(fVar47 / (fVar141 * fVar141 + fVar151 * fVar151 + fVar116 * fVar116),
                              fVar43 / fVar117) & CONCAT44(uVar74,uVar74);
            auVar163._0_4_ = fVar160 * fVar141 - fVar106 * (float)uVar120;
            auVar163._4_4_ = fVar166 * fVar151 - fVar86 * (float)((ulong)uVar120 >> 0x20);
            auVar163._8_4_ = fVar106 * fVar116 - fVar152 * fVar141;
            auVar163._12_4_ = fVar167 * 0.0 - fVar140 * fVar151;
            auVar98 = NEON_ext(auVar163,auVar163,4,1);
            fVar116 = fVar153 * auVar98._0_4_;
            fVar117 = fVar158 * auVar98._4_4_;
            uVar120 = NEON_fminnm(CONCAT44((float)(uVar34 >> 0x20) *
                                           (fVar116 + fVar117 + fVar159 * auVar163._0_4_),
                                           (float)uVar34 *
                                           (fVar116 + fVar117 + fVar159 * auVar163._0_4_)),uVar45,4)
            ;
            auVar81._0_4_ = auVar146._0_4_ * auVar146._0_4_;
            auVar81._4_4_ = auVar146._4_4_ * auVar146._4_4_;
            auVar81._8_4_ = auVar146._8_4_ * auVar146._8_4_;
            auVar81._12_4_ = auVar146._12_4_ * auVar146._12_4_;
            auVar147._0_4_ = fVar153 * auVar146._0_4_;
            auVar147._4_4_ = fVar158 * auVar146._4_4_;
            auVar147._8_4_ = fVar159 * auVar146._8_4_;
            auVar147._12_4_ = fVar175 * auVar146._12_4_;
            auVar98 = NEON_ext(auVar81,auVar81,8,1);
            auVar144 = NEON_ext(auVar147,auVar147,8,1);
            uVar120 = NEON_fmax(uVar120,0,4);
            iVar75 = -(uint)(auVar98._0_4_ + auVar81._0_4_ + auVar81._4_4_ == 0.0);
            iVar73 = -(uint)(auVar144._0_4_ + auVar147._0_4_ + auVar147._4_4_ == 0.0);
            iVar170 = -(uint)(fVar171 == 0.0);
            iVar174 = -(uint)(fVar173 == 0.0);
            auVar148[0] = ~(byte)iVar75;
            auVar148[1] = ~(byte)((uint)iVar75 >> 8);
            auVar148[2] = ~(byte)((uint)iVar75 >> 0x10);
            auVar148[3] = ~(byte)((uint)iVar75 >> 0x18);
            auVar148[4] = ~(byte)iVar73;
            auVar148[5] = ~(byte)((uint)iVar73 >> 8);
            auVar148[6] = ~(byte)((uint)iVar73 >> 0x10);
            auVar148[7] = ~(byte)((uint)iVar73 >> 0x18);
            auVar148[8] = ~(byte)iVar170;
            auVar148[9] = ~(byte)((uint)iVar170 >> 8);
            auVar148[10] = ~(byte)((uint)iVar170 >> 0x10);
            auVar148[0xb] = ~(byte)((uint)iVar170 >> 0x18);
            auVar148[0xc] = ~(byte)iVar174;
            auVar148[0xd] = ~(byte)((uint)iVar174 >> 8);
            auVar148[0xe] = ~(byte)((uint)iVar174 >> 0x10);
            auVar148[0xf] = ~(byte)((uint)iVar174 >> 0x18);
            auVar98 = NEON_ext(auVar148,auVar148,8,1);
            fVar116 = (float)((uint)(fVar43 / fVar171) & auVar98._0_4_);
            uVar120 = NEON_fminnm(CONCAT44(((float)((ulong)uVar120 >> 0x20) *
                                            (fVar152 * auVar146._8_4_ +
                                            fVar106 * auVar146._0_4_ + fVar86 * auVar146._4_4_) -
                                           fVar173) * fVar116,
                                           ((float)uVar120 *
                                            (fVar152 * auVar146._8_4_ +
                                            fVar106 * auVar146._0_4_ + fVar86 * auVar146._4_4_) -
                                           fVar173) * fVar116),uVar45,4);
            uVar161 = NEON_fminnm(uVar78,0x3f7333333f733333,4);
            uVar78 = NEON_fmax(uVar120,0,4);
            uVar120 = NEON_fmax(uVar161,0x3d4ccccd3d4ccccd,4);
            uVar78 = NEON_fminnm(uVar78,0x3f7333333f733333,4);
            uVar78 = NEON_fmax(uVar78,0x3d4ccccd3d4ccccd,4);
            fVar116 = ((float)uVar120 + (float)uVar78) * 0.5;
            fVar117 = ((float)((ulong)uVar120 >> 0x20) + (float)((ulong)uVar78 >> 0x20)) * 0.5;
            auVar127._0_4_ = fVar87 + fVar106 * fVar116;
            auVar127._4_4_ = fVar107 + fVar86 * fVar117;
            auVar127._8_4_ = fVar109 + fVar152 * fVar116;
            auVar127._12_4_ = fVar110 + fVar140 * fVar117;
            uVar118 = uVar32 + iVar154;
LAB_030c1978:
            if (uVar118 == 0xffffffff) goto code_r0x030c1990;
            if ((int)uVar32 < (int)uVar118) {
              auVar71._0_4_ = auVar127._0_4_ - fVar53;
              auVar71._4_4_ = auVar127._4_4_ - fVar54;
              auVar71._8_4_ = auVar127._8_4_ - fVar68;
              auVar71._12_4_ = auVar127._12_4_ - fVar69;
              auVar89._0_4_ = auVar71._0_4_ * auVar71._0_4_;
              auVar89._4_4_ = auVar71._4_4_ * auVar71._4_4_;
              auVar89._8_4_ = auVar71._8_4_ * auVar71._8_4_;
              auVar89._12_4_ = auVar71._12_4_ * auVar71._12_4_;
              auVar94 = NEON_ext(auVar71,auVar71,4,1);
              lVar26 = (int)uVar118 - lVar24;
              lVar21 = lVar24 * 0x30;
              auVar98 = NEON_ext(auVar89,auVar89,8,1);
              pauVar33 = pauVar17 + lVar24 + 1;
              do {
                pfVar2 = (float *)((long)local_220 + lVar21);
                lVar26 = lVar26 + -1;
                fVar49 = *pfVar2;
                fVar70 = pfVar2[1];
                fVar46 = pfVar2[2];
                fVar48 = pfVar2[3];
                auVar102._0_4_ = pfVar2[4] - fVar49;
                auVar102._4_4_ = pfVar2[5] - fVar70;
                auVar102._8_4_ = pfVar2[6] - fVar46;
                auVar102._12_4_ = pfVar2[7] - fVar48;
                auVar101 = NEON_ext(auVar102,auVar102,4,1);
                lVar21 = lVar21 + 0x30;
                fVar88 = auVar94._0_4_ * auVar102._0_4_ - auVar71._0_4_ * auVar101._0_4_;
                fVar91 = auVar94._4_4_ * auVar102._4_4_ - auVar71._4_4_ * auVar101._4_4_;
                fVar92 = auVar71._0_4_ * auVar102._8_4_ - auVar71._8_4_ * auVar102._0_4_;
                fVar93 = auVar71._4_4_ * auVar102._12_4_ - auVar71._12_4_ * auVar102._4_4_;
                auVar9._4_4_ = fVar91;
                auVar9._0_4_ = fVar88;
                auVar9._8_4_ = fVar92;
                auVar9._12_4_ = fVar93;
                auVar10._4_4_ = fVar91;
                auVar10._0_4_ = fVar88;
                auVar10._8_4_ = fVar92;
                auVar10._12_4_ = fVar93;
                auVar115 = NEON_ext(auVar9,auVar10,4,1);
                uVar20 = NEON_ext(auVar115._0_8_,CONCAT44(fVar91,fVar88),4,1);
                fVar92 = auVar115._0_4_;
                fVar97 = auVar115._4_4_;
                fVar91 = fVar92 * fVar92 + fVar97 * fVar97 + fVar88 * fVar88;
                fVar93 = fVar49 - fVar53;
                fVar100 = fVar70 - fVar54;
                fVar111 = fVar46 - fVar68;
                iVar154 = -(uint)(fVar91 == 0.0);
                auVar104._0_4_ = auVar101._0_4_ * fVar92 - auVar102._0_4_ * (float)uVar20;
                auVar104._4_4_ =
                     auVar101._4_4_ * fVar97 - auVar102._4_4_ * (float)((ulong)uVar20 >> 0x20);
                auVar104._8_4_ = auVar102._0_4_ * fVar88 - auVar102._8_4_ * fVar92;
                auVar104._12_4_ = auVar102._4_4_ * 0.0 - auVar102._12_4_ * fVar97;
                auVar144 = NEON_ext(auVar104,auVar104,4,1);
                auVar164._0_4_ = fVar93 * auVar102._0_4_;
                auVar164._4_4_ = fVar100 * auVar102._4_4_;
                auVar164._8_4_ = fVar111 * auVar102._8_4_;
                auVar164._12_4_ = (fVar48 - fVar69) * auVar102._12_4_;
                auVar150._0_4_ = auVar102._0_4_ * auVar102._0_4_;
                auVar150._4_4_ = auVar102._4_4_ * auVar102._4_4_;
                auVar150._8_4_ = auVar102._8_4_ * auVar102._8_4_;
                auVar150._12_4_ = auVar102._12_4_ * auVar102._12_4_;
                auVar101 = NEON_ext(auVar150,auVar150,8,1);
                auVar115 = NEON_ext(auVar164,auVar164,8,1);
                auVar165._0_4_ = auVar71._0_4_ * fVar93;
                auVar165._4_4_ = auVar71._4_4_ * fVar100;
                auVar165._8_4_ = auVar71._8_4_ * fVar111;
                auVar165._12_4_ = auVar71._12_4_ * (fVar48 - fVar69);
                uVar74 = CONCAT13(~(byte)((uint)iVar154 >> 0x18),
                                  CONCAT12(~(byte)((uint)iVar154 >> 0x10),
                                           CONCAT11(~(byte)((uint)iVar154 >> 8),~(byte)iVar154)));
                fVar93 = fVar93 * auVar144._0_4_;
                fVar100 = fVar100 * auVar144._4_4_;
                auVar144 = NEON_ext(auVar165,auVar165,8,1);
                fVar142 = auVar101._0_4_ + auVar150._0_4_ + auVar150._4_4_;
                fVar106 = auVar115._0_4_ + auVar164._0_4_ + auVar164._4_4_;
                uVar34 = CONCAT44(fVar47 / (fVar92 * fVar92 + fVar97 * fVar97 + fVar88 * fVar88),
                                  fVar43 / fVar91) & CONCAT44(uVar74,uVar74);
                uVar20 = NEON_fminnm(CONCAT44((float)(uVar34 >> 0x20) *
                                              (fVar93 + fVar100 + fVar111 * auVar104._0_4_),
                                              (float)uVar34 *
                                              (fVar93 + fVar100 + fVar111 * auVar104._0_4_)),uVar45,
                                     4);
                iVar154 = -(uint)(auVar98._0_4_ + auVar89._0_4_ + auVar89._4_4_ == 0.0);
                iVar75 = -(uint)(auVar144._0_4_ + auVar165._0_4_ + auVar165._4_4_ == 0.0);
                iVar73 = -(uint)(fVar142 == 0.0);
                iVar170 = -(uint)(fVar106 == 0.0);
                uVar20 = NEON_fmax(uVar20,0,4);
                auVar105[0] = ~(byte)iVar154;
                auVar105[1] = ~(byte)((uint)iVar154 >> 8);
                auVar105[2] = ~(byte)((uint)iVar154 >> 0x10);
                auVar105[3] = ~(byte)((uint)iVar154 >> 0x18);
                auVar105[4] = ~(byte)iVar75;
                auVar105[5] = ~(byte)((uint)iVar75 >> 8);
                auVar105[6] = ~(byte)((uint)iVar75 >> 0x10);
                auVar105[7] = ~(byte)((uint)iVar75 >> 0x18);
                auVar105[8] = ~(byte)iVar73;
                auVar105[9] = ~(byte)((uint)iVar73 >> 8);
                auVar105[10] = ~(byte)((uint)iVar73 >> 0x10);
                auVar105[0xb] = ~(byte)((uint)iVar73 >> 0x18);
                auVar105[0xc] = ~(byte)iVar170;
                auVar105[0xd] = ~(byte)((uint)iVar170 >> 8);
                auVar105[0xe] = ~(byte)((uint)iVar170 >> 0x10);
                auVar105[0xf] = ~(byte)((uint)iVar170 >> 0x18);
                auVar101 = NEON_ext(auVar105,auVar105,8,1);
                fVar88 = (float)((uint)(fVar43 / fVar142) & auVar101._0_4_);
                uVar20 = NEON_fminnm(CONCAT44(((float)((ulong)uVar20 >> 0x20) *
                                               (auVar71._8_4_ * auVar102._8_4_ +
                                               auVar71._0_4_ * auVar102._0_4_ +
                                               auVar71._4_4_ * auVar102._4_4_) - fVar106) * fVar88,
                                              ((float)uVar20 *
                                               (auVar71._8_4_ * auVar102._8_4_ +
                                               auVar71._0_4_ * auVar102._0_4_ +
                                               auVar71._4_4_ * auVar102._4_4_) - fVar106) * fVar88),
                                     uVar45,4);
                uVar20 = NEON_fmax(uVar20,0,4);
                fVar88 = (float)((ulong)uVar20 >> 0x20);
                *(float *)(*pauVar33 + 8) = fVar46 + auVar102._8_4_ * (float)uVar20;
                *(float *)(*pauVar33 + 0xc) = fVar48 + auVar102._12_4_ * fVar88;
                *(float *)*pauVar33 = fVar49 + auVar102._0_4_ * (float)uVar20;
                *(float *)(*pauVar33 + 4) = fVar70 + auVar102._4_4_ * fVar88;
                pauVar33 = pauVar33 + 1;
              } while (lVar26 != 0);
            }
            *(long *)(pauVar17[(long)(int)uVar118 + 1] + 8) = auVar127._8_8_;
            *(long *)pauVar17[(long)(int)uVar118 + 1] = auVar127._0_8_;
            uVar32 = uVar118;
            break;
          }
          if (!(bool)(~(fVar142 <= fVar111) & 1)) {
            ppuVar37 = local_220 + (long)(int)uVar38 * 6;
            auVar149._8_4_ = 0x3dcccccd;
            auVar149._0_8_ = 0x3dcccccd3dcccccd;
            auVar149._12_4_ = 0x3dcccccd;
            fVar109 = SUB84(ppuVar37[1],0);
            fVar110 = (float)((ulong)ppuVar37[1] >> 0x20);
            puVar13 = *ppuVar37;
            uVar129 = SUB81(puVar13,0);
            uVar131 = (undefined1)((ulong)puVar13 >> 8);
            uVar133 = (undefined1)((ulong)puVar13 >> 0x10);
            uVar135 = (undefined1)((ulong)puVar13 >> 0x18);
            uVar136 = (undefined1)((ulong)puVar13 >> 0x20);
            uVar137 = (undefined1)((ulong)puVar13 >> 0x28);
            uVar138 = (undefined1)((ulong)puVar13 >> 0x30);
            uVar139 = (undefined1)((ulong)puVar13 >> 0x38);
            fVar106 = *(float *)(ppuVar37 + 2) - SUB84(puVar13,0);
            fVar86 = *(float *)((long)ppuVar37 + 0x14) - (float)((ulong)puVar13 >> 0x20);
            fVar87 = *(float *)(ppuVar37 + 3) - fVar109;
            fVar107 = *(float *)((long)ppuVar37 + 0x1c) - fVar110;
            uVar118 = uVar38;
LAB_030c1970:
            auVar127._0_4_ =
                 (float)CONCAT13(uVar135,CONCAT12(uVar133,CONCAT11(uVar131,uVar129))) +
                 fVar106 * auVar149._0_4_;
            auVar127._4_4_ =
                 (float)CONCAT13(uVar139,CONCAT12(uVar138,CONCAT11(uVar137,uVar136))) +
                 fVar86 * auVar149._4_4_;
            auVar127._8_4_ = fVar109 + fVar87 * auVar149._8_4_;
            auVar127._12_4_ = fVar110 + fVar107 * auVar149._12_4_;
            goto LAB_030c1978;
          }
          if (!(bool)(~((float)uVar20 <= fVar108) & 1)) {
            ppuVar37 = local_220 + (long)(int)uVar23 * 6;
            auVar149._8_4_ = 0x3f666666;
            auVar149._0_8_ = 0x3f6666663f666666;
            auVar149._12_4_ = 0x3f666666;
            fVar109 = SUB84(ppuVar37[1],0);
            fVar110 = (float)((ulong)ppuVar37[1] >> 0x20);
            puVar13 = *ppuVar37;
            uVar129 = SUB81(puVar13,0);
            uVar131 = (undefined1)((ulong)puVar13 >> 8);
            uVar133 = (undefined1)((ulong)puVar13 >> 0x10);
            uVar135 = (undefined1)((ulong)puVar13 >> 0x18);
            uVar136 = (undefined1)((ulong)puVar13 >> 0x20);
            uVar137 = (undefined1)((ulong)puVar13 >> 0x28);
            uVar138 = (undefined1)((ulong)puVar13 >> 0x30);
            uVar139 = (undefined1)((ulong)puVar13 >> 0x38);
            fVar106 = *(float *)(ppuVar37 + 2) - SUB84(puVar13,0);
            fVar86 = *(float *)((long)ppuVar37 + 0x14) - (float)((ulong)puVar13 >> 0x20);
            fVar87 = *(float *)(ppuVar37 + 3) - fVar109;
            fVar107 = *(float *)((long)ppuVar37 + 0x1c) - fVar110;
            uVar118 = uVar23;
            goto LAB_030c1970;
          }
          auVar127 = auVar101;
          uVar118 = (uint)local_218;
          if (iVar75 == 0) goto LAB_030c1978;
code_r0x030c1990:
          uVar118 = uVar32 + iVar154 + 1;
          iVar154 = iVar154 + 1;
          uVar119 = uVar118;
          if (fVar108 <= fVar111) {
            uVar119 = uVar38;
          }
          uVar31 = (ulong)uVar119;
          if (fVar108 <= fVar111) {
            uVar76 = uVar50;
          }
          if ((float)uVar20 <= fVar142) {
            uVar118 = uVar23;
            uVar112 = uVar20;
          }
          uVar20 = uVar112;
          uVar34 = (ulong)uVar118;
          lVar21 = lVar21 + -1;
          uVar50 = uVar76;
          ppuVar19 = ppuVar19 + 6;
        } while (lVar21 != 0);
      }
      uVar34 = (long)(int)uVar32 + 1;
      if ((int)(uint)local_218 <= (int)uVar34) break;
      uVar50 = *(undefined8 *)(pauVar17[uVar34] + 8);
      uVar20 = *(undefined8 *)pauVar17[uVar34];
    } while( true );
  }
  uVar32 = (uint)local_218 + 1;
  uVar34 = (ulong)uVar32;
  *(undefined8 *)(pauVar17[(int)uVar32] + 8) = uStack_108;
  *(undefined **)pauVar17[(int)uVar32] = local_110;
  uVar20 = NEON_fmov(0x3fc00000,4);
  iVar154 = 0;
  uVar38 = (uint)local_218 + 2;
  do {
    if (1 < (int)uVar32) {
      auVar56 = *pauVar17;
      lVar21 = 0;
      lVar24 = uVar34 - 1;
      pauVar33 = pauVar17;
      do {
        puVar42 = (undefined8 *)((long)local_220 + lVar21);
        fVar49 = (float)puVar42[3];
        fVar70 = (float)((ulong)puVar42[3] >> 0x20);
        fVar68 = (float)puVar42[2];
        fVar69 = (float)((ulong)puVar42[2] >> 0x20);
        fVar46 = (float)*puVar42;
        fVar48 = (float)((ulong)*puVar42 >> 0x20);
        fVar53 = (float)puVar42[1];
        fVar54 = (float)((ulong)puVar42[1] >> 0x20);
        fVar88 = auVar56._12_4_;
        if (*(char *)(puVar42 + 5) == '\x02') {
          fVar93 = fVar43 - fVar88;
          fVar88 = fVar47 - fVar88;
          fVar92 = fVar68 - fVar46;
          fVar69 = fVar69 - fVar48;
          fVar49 = fVar49 - fVar53;
          fVar68 = fVar70 - fVar54;
          fVar91 = fVar93;
          fVar70 = fVar88;
LAB_030c1c0c:
          fVar93 = fVar93 * fVar92;
          fVar88 = fVar88 * fVar69;
          fVar91 = fVar91 * fVar49;
          fVar70 = fVar70 * fVar68;
LAB_030c1d58:
          fVar97 = fVar46 + fVar93;
          fVar100 = fVar48 + fVar88;
          fVar111 = fVar53 + fVar91;
          fVar142 = fVar54 + fVar70;
        }
        else {
          fVar97 = auVar56._4_4_;
          fVar100 = auVar56._8_4_;
          fVar92 = auVar56._0_4_;
          if (*(char *)(puVar42 + 5) != '\x01') {
            fVar68 = fVar68 - fVar46;
            fVar69 = fVar69 - fVar48;
            fVar49 = fVar49 - fVar53;
            fVar70 = fVar70 - fVar54;
            auVar83._0_4_ = *(float *)pauVar33[2] - fVar92;
            auVar83._4_4_ = *(float *)(pauVar33[2] + 4) - fVar97;
            auVar83._8_4_ = *(float *)(pauVar33[2] + 8) - fVar100;
            auVar83._12_4_ = *(float *)(pauVar33[2] + 0xc) - fVar88;
            auVar4._4_4_ = fVar69;
            auVar4._0_4_ = fVar68;
            auVar4._8_4_ = fVar49;
            auVar4._12_4_ = fVar70;
            auVar5._4_4_ = fVar69;
            auVar5._0_4_ = fVar68;
            auVar5._8_4_ = fVar49;
            auVar5._12_4_ = fVar70;
            auVar56 = NEON_ext(auVar4,auVar5,4,1);
            fVar92 = fVar46 - fVar92;
            fVar97 = fVar48 - fVar97;
            fVar100 = fVar53 - fVar100;
            auVar94 = NEON_ext(auVar83,auVar83,4,1);
            fVar91 = fVar68 * auVar94._0_4_ - auVar56._0_4_ * auVar83._0_4_;
            auVar95._0_8_ = CONCAT44(fVar69 * auVar94._4_4_ - auVar56._4_4_ * auVar83._4_4_,fVar91);
            auVar95._8_4_ = fVar49 * auVar83._0_4_ - fVar68 * auVar83._8_4_;
            auVar95._12_4_ = fVar70 * auVar83._4_4_ - fVar69 * auVar83._12_4_;
            auVar94 = NEON_ext(auVar95,auVar95,4,1);
            uVar103 = NEON_ext(auVar94._0_8_,auVar95._0_8_,4,1);
            fVar111 = auVar94._0_4_;
            fVar142 = auVar94._4_4_;
            fVar93 = fVar111 * fVar111 + fVar142 * fVar142 + fVar91 * fVar91;
            iVar75 = -(uint)(fVar93 == 0.0);
            uVar74 = CONCAT13(~(byte)((uint)iVar75 >> 0x18),
                              CONCAT12(~(byte)((uint)iVar75 >> 0x10),
                                       CONCAT11(~(byte)((uint)iVar75 >> 8),~(byte)iVar75)));
            uVar31 = CONCAT44(fVar47 / (fVar111 * fVar111 + fVar142 * fVar142 + fVar91 * fVar91),
                              fVar43 / fVar93) & CONCAT44(uVar74,uVar74);
            auVar90._0_4_ = auVar56._0_4_ * fVar111 - fVar68 * (float)uVar103;
            auVar90._4_4_ = auVar56._4_4_ * fVar142 - fVar69 * (float)((ulong)uVar103 >> 0x20);
            auVar90._8_4_ = fVar68 * fVar91 - fVar49 * fVar111;
            auVar90._12_4_ = fVar69 * 0.0 - fVar70 * fVar142;
            auVar56 = NEON_ext(auVar90,auVar90,4,1);
            fVar91 = fVar92 * auVar56._0_4_;
            fVar93 = fVar97 * auVar56._4_4_;
            uVar103 = NEON_fminnm(CONCAT44((float)(uVar31 >> 0x20) *
                                           (fVar91 + fVar93 + fVar100 * auVar90._0_4_),
                                           (float)uVar31 *
                                           (fVar91 + fVar93 + fVar100 * auVar90._0_4_)),uVar45,4);
            auVar99._0_4_ = auVar83._0_4_ * auVar83._0_4_;
            auVar99._4_4_ = auVar83._4_4_ * auVar83._4_4_;
            auVar99._8_4_ = auVar83._8_4_ * auVar83._8_4_;
            auVar99._12_4_ = auVar83._12_4_ * auVar83._12_4_;
            uVar103 = NEON_fmax(uVar103,0,4);
            auVar84._0_4_ = fVar92 * auVar83._0_4_;
            auVar84._4_4_ = fVar97 * auVar83._4_4_;
            auVar84._8_4_ = fVar100 * auVar83._8_4_;
            auVar84._12_4_ = (fVar54 - fVar88) * auVar83._12_4_;
            auVar96._0_4_ = fVar68 * fVar68;
            auVar96._4_4_ = fVar69 * fVar69;
            auVar96._8_4_ = fVar49 * fVar49;
            auVar96._12_4_ = fVar70 * fVar70;
            auVar72._0_4_ = fVar92 * fVar68;
            auVar72._4_4_ = fVar97 * fVar69;
            auVar72._8_4_ = fVar100 * fVar49;
            auVar72._12_4_ = (fVar54 - fVar88) * fVar70;
            auVar101 = NEON_ext(auVar99,auVar99,8,1);
            auVar94 = NEON_ext(auVar84,auVar84,8,1);
            auVar98 = NEON_ext(auVar96,auVar96,8,1);
            auVar56 = NEON_ext(auVar72,auVar72,8,1);
            fVar88 = auVar98._0_4_ + auVar96._0_4_ + auVar96._4_4_;
            fVar91 = auVar56._0_4_ + auVar72._0_4_ + auVar72._4_4_;
            iVar75 = -(uint)(auVar101._0_4_ + auVar99._0_4_ + auVar99._4_4_ == 0.0);
            iVar73 = -(uint)(auVar94._0_4_ + auVar84._0_4_ + auVar84._4_4_ == 0.0);
            iVar170 = -(uint)(fVar88 == 0.0);
            iVar174 = -(uint)(fVar91 == 0.0);
            auVar85[0] = ~(byte)iVar75;
            auVar85[1] = ~(byte)((uint)iVar75 >> 8);
            auVar85[2] = ~(byte)((uint)iVar75 >> 0x10);
            auVar85[3] = ~(byte)((uint)iVar75 >> 0x18);
            auVar85[4] = ~(byte)iVar73;
            auVar85[5] = ~(byte)((uint)iVar73 >> 8);
            auVar85[6] = ~(byte)((uint)iVar73 >> 0x10);
            auVar85[7] = ~(byte)((uint)iVar73 >> 0x18);
            auVar85[8] = ~(byte)iVar170;
            auVar85[9] = ~(byte)((uint)iVar170 >> 8);
            auVar85[10] = ~(byte)((uint)iVar170 >> 0x10);
            auVar85[0xb] = ~(byte)((uint)iVar170 >> 0x18);
            auVar85[0xc] = ~(byte)iVar174;
            auVar85[0xd] = ~(byte)((uint)iVar174 >> 8);
            auVar85[0xe] = ~(byte)((uint)iVar174 >> 0x10);
            auVar85[0xf] = ~(byte)((uint)iVar174 >> 0x18);
            auVar56 = NEON_ext(auVar85,auVar85,8,1);
            fVar88 = (float)((uint)(fVar43 / fVar88) & auVar56._0_4_);
            uVar103 = NEON_fminnm(CONCAT44(((float)((ulong)uVar103 >> 0x20) *
                                            (fVar49 * auVar83._8_4_ +
                                            fVar68 * auVar83._0_4_ + fVar69 * auVar83._4_4_) -
                                           fVar91) * fVar88,
                                           ((float)uVar103 *
                                            (fVar49 * auVar83._8_4_ +
                                            fVar68 * auVar83._0_4_ + fVar69 * auVar83._4_4_) -
                                           fVar91) * fVar88),uVar45,4);
            uVar103 = NEON_fmax(uVar103,0,4);
            fVar88 = (float)((ulong)*(undefined8 *)(pauVar33[1] + 8) >> 0x20);
            uVar103 = NEON_fminnm(CONCAT44((float)((ulong)uVar103 >> 0x20) *
                                           (float)((ulong)uVar20 >> 0x20) + fVar88 * -0.5,
                                           (float)uVar103 * (float)uVar20 + fVar88 * -0.5),uVar45,4)
            ;
            uVar103 = NEON_fmax(uVar103,0,4);
            fVar93 = fVar68 * (float)uVar103;
            fVar68 = (float)((ulong)uVar103 >> 0x20);
            fVar88 = fVar69 * fVar68;
            fVar91 = fVar49 * (float)uVar103;
            fVar70 = fVar70 * fVar68;
            goto LAB_030c1d58;
          }
          fVar93 = fVar68 - fVar46;
          fVar88 = fVar69 - fVar48;
          fVar91 = fVar49 - fVar53;
          fVar106 = (fVar92 - fVar46) * fVar93;
          fVar86 = (fVar97 - fVar48) * fVar88;
          fVar87 = (fVar100 - fVar53) * fVar91;
          fVar92 = fVar87 + fVar106 + fVar86;
          fVar97 = fVar46;
          fVar100 = fVar48;
          fVar111 = fVar53;
          fVar142 = fVar54;
          if (0.0 < fVar92) {
            fVar107 = fVar91 * fVar91 + fVar93 * fVar93 + fVar88 * fVar88;
            fVar97 = fVar68;
            fVar100 = fVar69;
            fVar111 = fVar49;
            fVar142 = fVar70;
            if ((bool)(~(fVar107 <= fVar92) & 1)) {
              fVar92 = fVar92 / fVar107;
              fVar69 = (fVar87 + fVar106 + fVar86) /
                       (fVar91 * fVar91 + fVar93 * fVar93 + fVar88 * fVar88);
              fVar49 = fVar92;
              fVar68 = fVar69;
              fVar70 = fVar70 - fVar54;
              goto LAB_030c1c0c;
            }
          }
        }
        auVar56._12_4_ = fVar142;
        auVar56._8_4_ = fVar111;
        auVar56._4_4_ = fVar100;
        auVar56._0_4_ = fVar97;
        lVar24 = lVar24 + -1;
        lVar21 = lVar21 + 0x30;
        *(ulong *)(pauVar33[1] + 8) = CONCAT44(fVar142,fVar111);
        *(ulong *)pauVar33[1] = CONCAT44(fVar100,fVar97);
        pauVar33 = pauVar33 + 1;
      } while (lVar24 != 0);
    }
    iVar154 = iVar154 + 1;
  } while (iVar154 != 5);
  if ((int)uVar38 < 1) {
  }
  else if (uVar35 == 0) {
    lVar21 = 0;
    puVar42 = puVar18;
    pauVar33 = pauVar17;
    do {
      plVar14 = local_100;
      uVar51 = *(undefined8 *)(*pauVar33 + 8);
      uVar50 = *(undefined8 *)*pauVar33;
      uVar74 = 0;
      uVar103 = puVar42[1];
      uVar20 = *puVar42;
      uVar31 = param_5;
      if (lVar21 == 0) {
        uVar129 = 0;
      }
      else {
        uVar129 = 0;
        if (uVar34 * 0x30 != lVar21) {
          uVar129 = *(undefined1 *)((long)ppuVar28 + lVar21 + -8);
          uVar74 = *(undefined4 *)((long)ppuVar28 + lVar21 + -0xc);
          uVar31 = (ulong)*(uint *)((long)ppuVar28 + lVar21 + -0x10);
        }
      }
      uVar35 = (uint)(uVar31 >> 0x16) & 0x3ff;
      if (local_100 != (long *)0x0) {
        iVar154 = (int)local_100[1];
        lVar24 = (long)iVar154;
        if ((int)(*(uint *)((long)local_100 + 0xc) & 0x7fffffff) <= iVar154) {
          FUN_0308eb60(local_100,PTR_PTR_047d1a50,lVar24 + 1);
          iVar154 = (int)plVar14[1];
        }
        puVar22 = (undefined8 *)(*plVar14 + (long)iVar154 * 0x30);
        *(undefined4 *)(puVar22 + 4) = uVar74;
        *(uint *)((long)puVar22 + 0x24) = uVar35;
        puVar22[1] = uVar51;
        *puVar22 = uVar50;
        puVar22[3] = uVar103;
        puVar22[2] = uVar20;
        *(undefined1 *)(puVar22 + 5) = uVar129;
        *(int *)(plVar14 + 1) = (int)(lVar24 + 1);
      }
      if ((local_f8 != (undefined8 *)0x0) && (local_ec < local_f0)) {
        local_f8[1] = uVar51;
        *local_f8 = uVar50;
        local_f8[3] = uVar103;
        local_f8[2] = uVar20;
        *(undefined4 *)(local_f8 + 4) = uVar74;
        *(uint *)((long)local_f8 + 0x24) = uVar35;
        *(undefined1 *)(local_f8 + 5) = uVar129;
        local_f8 = local_f8 + 6;
        local_ec = local_ec + 1;
      }
      if (0 < iStack_e8) {
        fVar43 = (float)local_e0 - (float)uVar50;
        fVar47 = (float)((ulong)local_e0 >> 0x20) - (float)((ulong)uVar50 >> 0x20);
        fVar49 = (float)uStack_d8 - (float)uVar51;
        fVar43 = fVar43 * fVar43;
        fVar47 = fVar47 * fVar47;
        fVar49 = fVar49 * fVar49;
        local_d0 = CONCAT44((float)((ulong)local_d0 >> 0x20) + SQRT(fVar43 + fVar47 + fVar49),
                            (float)local_d0 + SQRT(fVar43 + fVar47 + fVar49));
      }
      lVar21 = lVar21 + 0x30;
      iStack_e8 = iStack_e8 + 1;
      pauVar33 = pauVar33 + 1;
      puVar42 = puVar42 + 2;
      local_e0 = uVar50;
      uStack_d8 = uVar51;
    } while ((ulong)uVar38 * 0x30 != lVar21);
  }
  else {
    lVar21 = 0;
    puVar42 = puVar18;
    pauVar33 = pauVar17;
    do {
      plVar14 = local_100;
      uVar51 = *(undefined8 *)(*pauVar33 + 8);
      uVar50 = *(undefined8 *)*pauVar33;
      uVar103 = puVar42[1];
      uVar20 = *puVar42;
      if (lVar21 == 0) {
        uVar74 = 0;
        uVar129 = 0;
        uVar31 = param_5;
      }
      else if (uVar34 * 0x30 == lVar21) {
        uVar74 = 0;
        uVar129 = 0;
        uVar31 = local_230;
      }
      else {
        uVar129 = *(undefined1 *)((long)ppuVar28 + lVar21 + -8);
        uVar31 = (ulong)*(uint *)((long)ppuVar28 + lVar21 + -0x10);
        uVar74 = *(undefined4 *)((long)ppuVar28 + lVar21 + -0xc);
      }
      uVar35 = (uint)(uVar31 >> 0x16) & 0x3ff;
      if (local_100 != (long *)0x0) {
        iVar154 = (int)local_100[1];
        lVar24 = (long)iVar154;
        if ((int)(*(uint *)((long)local_100 + 0xc) & 0x7fffffff) <= iVar154) {
          FUN_0308eb60(local_100,PTR_PTR_047d1a50,lVar24 + 1);
          iVar154 = (int)plVar14[1];
        }
        puVar22 = (undefined8 *)(*plVar14 + (long)iVar154 * 0x30);
        *(undefined4 *)(puVar22 + 4) = uVar74;
        *(uint *)((long)puVar22 + 0x24) = uVar35;
        puVar22[1] = uVar51;
        *puVar22 = uVar50;
        puVar22[3] = uVar103;
        puVar22[2] = uVar20;
        *(undefined1 *)(puVar22 + 5) = uVar129;
        *(int *)(plVar14 + 1) = (int)(lVar24 + 1);
      }
      if ((local_f8 != (undefined8 *)0x0) && (local_ec < local_f0)) {
        local_f8[1] = uVar51;
        *local_f8 = uVar50;
        local_f8[3] = uVar103;
        local_f8[2] = uVar20;
        *(undefined4 *)(local_f8 + 4) = uVar74;
        *(uint *)((long)local_f8 + 0x24) = uVar35;
        *(undefined1 *)(local_f8 + 5) = uVar129;
        local_f8 = local_f8 + 6;
        local_ec = local_ec + 1;
      }
      if (0 < iStack_e8) {
        fVar43 = (float)local_e0 - (float)uVar50;
        fVar47 = (float)((ulong)local_e0 >> 0x20) - (float)((ulong)uVar50 >> 0x20);
        fVar49 = (float)uStack_d8 - (float)uVar51;
        fVar43 = fVar43 * fVar43;
        fVar47 = fVar47 * fVar47;
        fVar49 = fVar49 * fVar49;
        local_d0 = CONCAT44((float)((ulong)local_d0 >> 0x20) + SQRT(fVar43 + fVar47 + fVar49),
                            (float)local_d0 + SQRT(fVar43 + fVar47 + fVar49));
      }
      lVar21 = lVar21 + 0x30;
      iStack_e8 = iStack_e8 + 1;
      pauVar33 = pauVar33 + 1;
      puVar42 = puVar42 + 2;
      local_e0 = uVar50;
      uStack_d8 = uVar51;
    } while ((ulong)uVar38 * 0x30 != lVar21);
  }
  ppuVar28 = local_220;
  puVar13 = PTR_DAT_047e4f38;
  if ((local_f8 != (undefined8 *)0x0) && (local_ec < local_f0)) {
    local_f8[2] = 0;
    local_f8[3] = 0;
    *(undefined1 *)(local_f8 + 5) = 0;
    local_f8[4] = 0xffffffff80000000;
    *local_f8 = 0;
    local_f8[1] = 0;
    local_f8 = local_f8 + 6;
    local_ec = local_ec + 1;
  }
  bVar16 = local_100 != (long *)0x0;
  bVar15 = local_ec < local_f0;
  if (local_208 == local_220) {
    local_218 = local_218 & 0xffffffff00000000;
  }
  if (local_210 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar34 = local_200 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_210 + 0x28) < uVar34) ||
       (*(long *)(local_210 + 0x38) != uVar34 + (long)local_208)) {
      if (local_208 != (undefined **)0x0) {
        if (*(ulong *)(local_210 + 0x28) < uVar34 + 0x40) {
          *(int *)(*(long *)(local_210 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_210 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_210 + 0x10) + 0x18))
                    (*(long **)(local_210 + 0x10),
                     (long)local_208 - (long)*(int *)((long)local_208 + -4),uVar34 + 0x44);
        }
        else {
          if (*(long *)(local_210 + 0x38) == uVar34 + (long)local_208) {
            *(undefined ***)(local_210 + 0x38) = local_208;
            goto LAB_030c21b4;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(undefined ***)(local_210 + 0x38) = local_208;
      if (*(undefined ***)(local_210 + 0x48) == local_208) {
LAB_030c21b4:
        FUN_031cf578();
      }
    }
  }
  uVar31 = local_218;
  uVar34 = local_218 >> 0x20;
  local_218 = uVar34 << 0x20;
  if ((ppuVar28 != (undefined **)0x0) && (-1 < (long)uVar31)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,ppuVar28,uVar34 * 0x30);
  }
  if (local_2f0 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,puVar18,uVar39);
  }
  else {
    uVar34 = uVar39 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_2f0 + 0x28) < uVar34) ||
       (*(long *)(local_2f0 + 0x38) != uVar34 + (long)puVar18)) {
      if (puVar18 != (undefined8 *)0x0) {
        if (*(ulong *)(local_2f0 + 0x28) < uVar34 + 0x40) {
          *(int *)(*(long *)(local_2f0 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_2f0 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_2f0 + 0x10) + 0x18))
                    (*(long **)(local_2f0 + 0x10),(long)puVar18 - (long)*(int *)((long)puVar18 + -4)
                     ,uVar34 + 0x44);
        }
        else {
          if (*(long *)(local_2f0 + 0x38) == uVar34 + (long)puVar18) {
            *(undefined8 **)(local_2f0 + 0x38) = puVar18;
            goto LAB_030c22c0;
          }
          FUN_031cf778(local_2f0,puVar18);
        }
      }
    }
    else {
      *(undefined8 **)(local_2f0 + 0x38) = puVar18;
      if (*(undefined8 **)(local_2f0 + 0x48) == puVar18) {
LAB_030c22c0:
        FUN_031cf578(local_2f0);
      }
    }
  }
  if (local_2f8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,pauVar17,uVar39);
  }
  else {
    uVar39 = uVar39 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_2f8 + 0x28) < uVar39) ||
       (*(undefined1 **)(local_2f8 + 0x38) != *pauVar17 + uVar39)) {
      if (pauVar17 != (undefined1 (*) [16])0x0) {
        if (*(ulong *)(local_2f8 + 0x28) < uVar39 + 0x40) {
          *(int *)(*(long *)(local_2f8 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_2f8 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_2f8 + 0x10) + 0x18))
                    (*(long **)(local_2f8 + 0x10),
                     (long)pauVar17 - (long)*(int *)(pauVar17[-1] + 0xc),uVar39 + 0x44);
        }
        else {
          if (*(undefined1 **)(local_2f8 + 0x38) == *pauVar17 + uVar39) {
            *(undefined1 (**) [16])(local_2f8 + 0x38) = pauVar17;
            goto LAB_030c2388;
          }
          FUN_031cf778(local_2f8,pauVar17);
        }
      }
    }
    else {
      *(undefined1 (**) [16])(local_2f8 + 0x38) = pauVar17;
      if (*(undefined1 (**) [16])(local_2f8 + 0x48) == pauVar17) {
LAB_030c2388:
        FUN_031cf578();
      }
    }
  }
  iVar154 = *(int *)puVar13;
  lVar21 = *(long *)(lVar3 + 0x1000b8);
  if (lVar21 == 0) {
    lVar21 = FUN_00e5d3b4();
    *(long *)(lVar3 + 0x1000b8) = lVar21;
  }
  bVar130 = bVar16 || bVar15;
  if (*(long *)(lVar21 + (long)iVar154 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
LAB_030c23bc:
  if (param_15 != (undefined8 *)0x0) {
    *param_15 = local_d0;
  }
  return bVar130 & 1;
}



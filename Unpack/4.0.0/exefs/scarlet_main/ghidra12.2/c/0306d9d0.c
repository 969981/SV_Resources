/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0306d9d0; name: FUN_0306d9d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0306d9d0(long param_1,undefined8 param_2,undefined1 (*param_3) [16],ulong param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                 undefined8 *param_9,long *param_10,long *param_11,long param_12)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ushort uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined *puVar18;
  bool bVar19;
  long lVar20;
  long lVar21;
  int *piVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  float *pfVar26;
  long lVar27;
  long lVar28;
  undefined8 *puVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  uint uVar34;
  uint uVar35;
  ulong uVar36;
  void *__s;
  void *pvVar37;
  byte bVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
  undefined1 uVar49;
  byte bVar50;
  undefined1 uVar51;
  byte bVar52;
  undefined1 uVar53;
  byte bVar54;
  undefined1 uVar55;
  byte bVar56;
  undefined1 uVar57;
  byte bVar58;
  undefined1 uVar59;
  byte bVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  float fVar66;
  int iVar67;
  float fVar69;
  int iVar70;
  float fVar71;
  int iVar72;
  undefined1 auVar68 [16];
  float fVar73;
  float fVar74;
  float fVar77;
  float fVar78;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar79;
  float fVar80;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auVar81 [16];
  float fVar86;
  float fVar88;
  float fVar89;
  undefined1 auVar87 [16];
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined8 uVar104;
  float fVar105;
  uint uVar106;
  float fVar110;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined8 uVar111;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar119;
  float fVar121;
  float fVar122;
  undefined1 auVar120 [16];
  undefined1 auVar123 [16];
  undefined4 uVar124;
  ulong uVar125;
  undefined1 auVar126 [16];
  float fVar127;
  float fVar128;
  undefined1 auVar129 [16];
  float fVar131;
  int iVar132;
  undefined1 auVar130 [16];
  long local_1d8;
  float local_160;
  float fStack_15c;
  float fStack_154;
  undefined8 local_140;
  float fStack_138;
  float fStack_134;
  long local_130;
  ulong local_128;
  long local_120;
  long local_118;
  ulong local_110;
  long local_108;
  undefined8 local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  long *local_c8;
  char local_c0;
  undefined4 local_b8 [2];
  long local_b0 [2];
  ulong local_98;
  
  local_b8[0] = (undefined4)param_4;
  lVar20 = nn::os::GetSystemTick();
  FUN_0306d784(&local_c8,param_1,local_b8);
  local_e0 = *param_8;
  uStack_d8 = (undefined1)param_8[1];
  uStack_d7 = (undefined7)((ulong)param_8[1] >> 8);
  uVar1 = (int)*(short *)(param_5 + 10) + (int)*(short *)(param_5 + 8);
  iVar67 = (int)(uVar1 + 0x1f) >> 5;
  *(uint *)(param_11 + 2) = uVar1;
  if ((int)(*(uint *)((long)param_11 + 0xc) & 0x7fffffff) < iVar67) {
    FUN_02eb1f88(param_11,PTR_PTR_047d1a50,(long)iVar67);
  }
  iVar70 = (int)param_11[1];
  if ((int)param_11[1] != iVar67) {
    *(int *)(param_11 + 1) = iVar67;
    iVar70 = iVar67;
  }
  __s = (void *)*param_11;
  uVar36 = (ulong)iVar70;
  pvVar37 = __s;
  if (((ulong)__s & 0xf) == 0) {
    uVar23 = uVar36;
  }
  else {
    uVar23 = 4 - (((ulong)__s & 0xf) >> 2);
    uVar24 = uVar36;
    if (uVar23 <= uVar36) {
      uVar24 = uVar23;
    }
    pvVar2 = (void *)((long)__s + uVar24 * 4);
    uVar23 = uVar36 - uVar24;
    if (__s < pvVar2) {
      memset(__s,0,uVar24 * 4);
      uVar24 = uVar24 * 4 - 1;
      uVar34 = ((uint)(uVar24 >> 2) & 0x3fffffff) + 1;
      if ((uVar34 & 7) != 0) {
        lVar27 = -((ulong)uVar34 & 7);
        do {
          pvVar37 = (void *)((long)pvVar37 + 4);
          bVar19 = lVar27 != -1;
          lVar27 = lVar27 + 1;
        } while (bVar19);
      }
      if (0x1b < uVar24) {
        do {
          pvVar37 = (void *)((long)pvVar37 + 0x20);
        } while (pvVar37 < pvVar2);
      }
    }
    else {
    }
  }
  if ((3 < uVar23) && (0 < (long)(uVar23 & 0xfffffffffffffffc))) {
    pvVar2 = (void *)((long)pvVar37 + (uVar23 & 0xfffffffffffffffc) * 4);
    pvVar5 = pvVar2;
    if (pvVar2 <= (void *)((long)pvVar37 + 0x10U)) {
      pvVar5 = (void *)((long)pvVar37 + 0x10U);
    }
    memset(pvVar37,0,(long)pvVar5 + ~(ulong)pvVar37 + 0x10 & 0xfffffffffffffff0);
    do {
      pvVar37 = (void *)((long)pvVar37 + 0x10);
    } while (pvVar37 < pvVar2);
  }
  if (pvVar37 < (void *)((long)__s + (long)iVar70 * 4)) {
    memset(pvVar37,0,(long)__s + ~(ulong)pvVar37 + uVar36 * 4 + 4 & 0xfffffffffffffffc);
  }
  local_108 = 0;
  local_100 = 0x8000000000000000;
  lVar27 = tpidr_el0;
  lVar25 = *(long *)(lVar27 + 0x1000b8);
  if (lVar25 == 0) {
    lVar25 = FUN_00e5d3b4();
    *(long *)(lVar27 + 0x1000b8) = lVar25;
  }
  local_f8 = *(long *)(*(long *)(lVar25 + 0x3d0) + 0x10);
  if (*(long *)(local_f8 + 8) == 0) {
    local_e8 = 0x1000;
    local_140 = 0x1000;
    if (local_f8 == 0) goto LAB_0306dc7c;
    local_130 = 0x1000;
    if (*(ulong *)(local_f8 + 0x28) < 0x1000) {
LAB_0306dc38:
      local_f0 = FUN_031cf3b4(local_f8,&local_130);
    }
    else {
      local_f0 = *(long *)(local_f8 + 0x38);
      if (*(ulong *)(local_f8 + 0x40) < local_f0 + 0x1000U) goto LAB_0306dc38;
      *(ulong *)(local_f8 + 0x38) = local_f0 + 0x1000U;
    }
  }
  else {
    local_f8 = 0;
LAB_0306dc7c:
    local_e8 = 0x1000;
    local_140 = 0x1000;
    local_f0 = (**(code **)PTR_DAT_047d1a08)(1,&local_140,0x40);
  }
  local_100 = CONCAT44(0x80000080,(int)local_100);
  local_130 = 0;
  local_128 = 0x8000000000000000;
  lVar25 = *(long *)(lVar27 + 0x1000b8);
  local_108 = local_f0;
  if (lVar25 == 0) {
    lVar25 = FUN_00e5d3b4();
    *(long *)(lVar27 + 0x1000b8) = lVar25;
  }
  local_120 = *(long *)(*(long *)(lVar25 + 0x3d0) + 0x10);
  if (*(long *)(local_120 + 8) != 0) {
    local_120 = 0;
  }
  local_110 = -(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5;
  local_98 = local_110;
  if (local_120 == 0) {
    local_118 = (**(code **)PTR_DAT_047d1a08)(1,&local_98,0x40);
  }
  else {
    local_140 = local_110 + 0x3f & 0xffffffffffffffc0;
    if (local_140 <= *(ulong *)(local_120 + 0x28)) {
      local_118 = *(long *)(local_120 + 0x38);
      if (local_140 + local_118 <= *(ulong *)(local_120 + 0x40)) {
        *(ulong *)(local_120 + 0x38) = local_140 + local_118;
        goto LAB_0306dd54;
      }
    }
    local_118 = FUN_031cf3b4(local_120,&local_140);
  }
LAB_0306dd54:
  local_128 = CONCAT44(uVar1,(int)local_128) | 0x8000000000000000;
  lVar25 = (param_4 >> 0x16 & 0x3ff) * 0x100;
  fVar9 = *(float *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + lVar25) + 0x20) +
                              0x68) + 0xb0);
  fVar105 = (float)*param_9 - fVar9;
  local_130 = local_118;
  FUN_0306a200(param_1,param_2,param_4 & 0xffffffff,param_5);
  uVar104 = NEON_fmov(0x3f800000,4);
  auVar75 = *param_3;
  fVar66 = (float)local_e0;
  fVar73 = fVar66 * auVar75._0_4_;
  fVar69 = (float)((ulong)local_e0 >> 0x20);
  fVar77 = fVar69 * auVar75._4_4_;
  fVar71 = (float)CONCAT71(uStack_d7,uStack_d8);
  fVar78 = fVar71 * auVar75._8_4_;
  fVar74 = fVar73 + fVar77 + fVar78;
  fVar78 = fVar73 + fVar77 + fVar78;
  uVar111 = *param_9;
  iVar67 = (int)local_100;
  uVar36 = local_100 & 0xffffffff;
  fVar73 = (float)((uint7)uStack_d7 >> 0x18);
  fVar77 = auVar75._0_4_ - fVar66 * fVar74;
  fVar110 = auVar75._4_4_ - fVar69 * fVar78;
  fVar74 = auVar75._8_4_ - fVar71 * fVar74;
  fVar78 = auVar75._12_4_ - fVar73 * fVar78;
  if (0 < (int)local_100) {
    pfVar26 = (float *)(local_108 + 0x10);
    do {
      fVar86 = pfVar26[-4] - *pfVar26;
      fVar88 = pfVar26[-3] - pfVar26[1];
      fVar89 = pfVar26[-2] - pfVar26[2];
      fVar79 = pfVar26[-4] - fVar77;
      fVar82 = pfVar26[-3] - fVar110;
      fVar84 = pfVar26[-2] - fVar74;
      fVar90 = fVar79 * fVar86;
      fVar93 = fVar82 * fVar88;
      fVar95 = fVar84 * fVar89;
      uVar15 = NEON_fminnm(CONCAT44((fVar90 + fVar93 + fVar95) /
                                    (fVar86 * fVar86 + fVar88 * fVar88 + fVar89 * fVar89),
                                    (fVar90 + fVar93 + fVar95) /
                                    (fVar86 * fVar86 + fVar88 * fVar88 + fVar89 * fVar89)),uVar104,4
                          );
      uVar15 = NEON_fmax(uVar15,0,4);
      fVar90 = (float)((ulong)uVar15 >> 0x20);
      fVar79 = fVar79 - fVar86 * (float)uVar15;
      fVar82 = fVar82 - fVar88 * fVar90;
      fVar84 = fVar84 - fVar89 * (float)uVar15;
      fVar86 = (pfVar26[-1] - fVar78) - (pfVar26[-1] - pfVar26[3]) * fVar90;
      auVar75._0_4_ = fVar79 * fVar79;
      auVar75._4_4_ = fVar82 * fVar82;
      auVar75._8_4_ = fVar84 * fVar84;
      auVar75._12_4_ = fVar86 * fVar86;
      auVar87 = NEON_ext(auVar75,auVar75,8,1);
      if (!(bool)(~(auVar75._0_4_ + auVar75._4_4_ + auVar87._0_4_ < fVar105 * fVar105) & 1))
      goto LAB_0306ea48;
      uVar36 = uVar36 - 1;
      pfVar26 = pfVar26 + 8;
    } while (uVar36 != 0);
  }
  sVar8 = *(short *)(param_5 + 10);
  lVar32 = (long)(int)local_128;
  lVar25 = *(long *)(*(long *)(param_1 + 0x38) + lVar25);
  uVar1 = (int)local_128 + sVar8;
  local_128 = CONCAT44(local_128._4_4_,uVar1);
  if (sVar8 != 0) {
    lVar30 = (long)*(int *)(param_5 + 4);
    lVar33 = lVar30 * 0x14;
    uVar34 = (uint)*(short *)(param_5 + 8);
    lVar28 = 0;
    uVar36 = (ulong)(uint)(int)sVar8;
    puVar29 = (undefined8 *)(local_130 + lVar32 * 0x20 + 0x10);
    lVar32 = lVar30;
    do {
      lVar21 = *(long *)(lVar25 + 0x20);
      if (lVar32 < *(int *)(lVar21 + 0x30)) {
        if (*(int *)(lVar21 + 0x78) == 0) {
          iVar70 = (int)lVar32;
        }
        else {
          iVar70 = *(int *)(*(long *)(lVar21 + 0x70) + lVar32 * 4);
        }
        if (iVar70 == -1) {
          piVar22 = (int *)(*(long *)(lVar21 + 0x28) + (lVar28 + lVar30) * 0x14);
        }
        else {
          piVar22 = (int *)(*(long *)(lVar21 + 0xc0) + (long)iVar70 * 0x14);
        }
      }
      else {
        piVar22 = (int *)(*(long *)(lVar21 + 0xe0) + (long)*(int *)(lVar21 + 0x30) * -0x14 + lVar33)
        ;
      }
      iVar132 = *(int *)(lVar21 + 0x40);
      lVar28 = lVar28 + 1;
      lVar33 = lVar33 + 0x14;
      iVar70 = *piVar22;
      iVar72 = piVar22[1];
      lVar6 = 0x38;
      if (iVar132 <= iVar70) {
        lVar6 = 0xf0;
      }
      iVar3 = 0;
      if (iVar132 <= iVar70) {
        iVar3 = iVar132;
      }
      lVar7 = 0x38;
      if (iVar132 <= iVar72) {
        lVar7 = 0xf0;
      }
      iVar4 = 0;
      if (iVar132 <= iVar72) {
        iVar4 = iVar132;
      }
      pfVar26 = (float *)(*(long *)(lVar21 + lVar7) + (long)(iVar72 - iVar4) * 0x10);
      fVar105 = *pfVar26;
      fVar79 = pfVar26[1];
      fVar82 = pfVar26[2];
      pfVar26 = (float *)(*(long *)(lVar21 + lVar6) + (long)(iVar70 - iVar3) * 0x10);
      fVar84 = *pfVar26;
      fVar86 = pfVar26[1];
      fVar88 = pfVar26[2];
      uVar35 = uVar34 | 0x3f010000;
      uVar34 = uVar34 + 1;
      lVar32 = lVar32 + 1;
      uVar36 = uVar36 - 1;
      auVar75 = *(undefined1 (*) [16])(lVar25 + 0x90);
      fVar89 = auVar75._0_4_ +
               *(float *)(lVar25 + 0x80) * fVar82 +
               *(float *)(lVar25 + 0x60) * fVar105 + *(float *)(lVar25 + 0x70) * fVar79;
      fVar90 = auVar75._4_4_ +
               *(float *)(lVar25 + 0x84) * fVar82 +
               *(float *)(lVar25 + 100) * fVar105 + *(float *)(lVar25 + 0x74) * fVar79;
      fVar105 = auVar75._8_4_ +
                *(float *)(lVar25 + 0x88) * fVar82 +
                *(float *)(lVar25 + 0x68) * fVar105 + *(float *)(lVar25 + 0x78) * fVar79;
      fVar79 = auVar75._0_4_ +
               *(float *)(lVar25 + 0x80) * fVar88 +
               *(float *)(lVar25 + 0x60) * fVar84 + *(float *)(lVar25 + 0x70) * fVar86;
      fVar82 = auVar75._4_4_ +
               *(float *)(lVar25 + 0x84) * fVar88 +
               *(float *)(lVar25 + 100) * fVar84 + *(float *)(lVar25 + 0x74) * fVar86;
      fVar93 = auVar75._8_4_ +
               *(float *)(lVar25 + 0x88) * fVar88 +
               *(float *)(lVar25 + 0x68) * fVar84 + *(float *)(lVar25 + 0x78) * fVar86;
      fVar95 = fVar66 * fVar89;
      fVar83 = fVar69 * fVar90;
      fVar85 = fVar71 * fVar105;
      fVar91 = fVar66 * fVar79;
      fVar94 = fVar69 * fVar82;
      fVar96 = fVar71 * fVar93;
      fVar80 = fVar95 + fVar83 + fVar85;
      fVar92 = fVar91 + fVar94 + fVar96;
      fVar96 = fVar91 + fVar94 + fVar96;
      auVar87._0_8_ =
           CONCAT44(fVar90 - fVar69 * (fVar95 + fVar83 + fVar85),fVar89 - fVar66 * fVar80);
      auVar87._8_4_ = fVar105 - fVar71 * fVar80;
      auVar87._12_4_ = uVar35;
      puVar29[-1] = CONCAT44((auVar75._12_4_ +
                             *(float *)(lVar25 + 0x8c) * fVar88 +
                             *(float *)(lVar25 + 0x6c) * fVar84 + *(float *)(lVar25 + 0x7c) * fVar86
                             ) - fVar73 * fVar96,fVar93 - fVar71 * fVar92);
      puVar29[-2] = CONCAT44(fVar82 - fVar69 * fVar96,fVar79 - fVar66 * fVar92);
      puVar29[1] = auVar87._8_8_;
      *puVar29 = auVar87._0_8_;
      puVar29 = puVar29 + 4;
    } while (uVar36 != 0);
  }
  lVar25 = *(long *)(lVar27 + 0x1000b8);
  if (lVar25 == 0) {
    lVar25 = FUN_00e5d3b4();
    *(long *)(lVar27 + 0x1000b8) = lVar25;
  }
  lVar25 = *(long *)(*(long *)(lVar25 + 0x3d0) + 0x10);
  if (*(long *)(lVar25 + 8) == 0) {
    lVar32 = (long)iVar67 * 0x20;
    local_b0[0] = lVar32;
    if (lVar25 == 0) goto LAB_0306e0f0;
    local_98 = lVar32 + 0x3fU & 0xffffffffffffffc0;
    if (*(ulong *)(lVar25 + 0x28) < local_98) {
LAB_0306e078:
      lVar28 = FUN_031cf3b4(lVar25,&local_98);
    }
    else {
      lVar28 = *(long *)(lVar25 + 0x38);
      if (*(ulong *)(lVar25 + 0x40) < local_98 + lVar28) goto LAB_0306e078;
      *(ulong *)(lVar25 + 0x38) = local_98 + lVar28;
    }
  }
  else {
    local_b0[0] = (long)iVar67 << 5;
LAB_0306e0f0:
    lVar32 = local_b0[0];
    lVar28 = (**(code **)PTR_DAT_047d1a08)(1,local_b0,0x40);
    lVar25 = 0;
  }
  lVar33 = *(long *)(lVar27 + 0x1000b8);
  if (lVar33 == 0) {
    lVar33 = FUN_00e5d3b4();
    *(long *)(lVar27 + 0x1000b8) = lVar33;
  }
  local_1d8 = *(long *)(*(long *)(lVar33 + 0x3d0) + 0x10);
  local_160 = (float)uVar111;
  local_b0[0] = lVar32;
  if ((*(long *)(local_1d8 + 8) == 0) && (local_1d8 != 0)) {
    local_98 = lVar32 + 0x3fU & 0xffffffffffffffc0;
    if (local_98 <= *(ulong *)(local_1d8 + 0x28)) {
      lVar27 = *(long *)(local_1d8 + 0x38);
      if (local_98 + lVar27 <= *(ulong *)(local_1d8 + 0x40)) {
        *(ulong *)(local_1d8 + 0x38) = local_98 + lVar27;
        goto LAB_0306e1e0;
      }
    }
    lVar27 = FUN_031cf3b4(local_1d8,&local_98);
  }
  else {
    lVar27 = (**(code **)PTR_DAT_047d1a08)(1,local_b0,0x40);
    local_1d8 = 0;
  }
LAB_0306e1e0:
  puVar18 = PTR_DAT_047d19e0;
  if (0 < (int)uVar1) {
    uVar36 = 0;
    do {
      pfVar26 = (float *)(local_130 + uVar36 * 0x20);
      uVar111 = *(undefined8 *)(pfVar26 + 6);
      uVar12 = (ushort)((ulong)uVar111 >> 0x20);
      if ((float)*param_9 <= *(float *)(*param_10 + (ulong)uVar12 * 8 + 4)) {
        fVar73 = *(float *)(*param_10 + (ulong)uVar12 * 8);
        fVar66 = *pfVar26 + ((float)*(undefined8 *)(pfVar26 + 4) - *pfVar26) * fVar73;
        fVar69 = pfVar26[1] +
                 ((float)((ulong)*(undefined8 *)(pfVar26 + 4) >> 0x20) - pfVar26[1]) * fVar73;
        fVar71 = pfVar26[2] + ((float)uVar111 - pfVar26[2]) * fVar73;
        fVar73 = pfVar26[3] + ((float)((ulong)uVar111 >> 0x20) - pfVar26[3]) * fVar73;
        auVar126._0_4_ = fVar77 - fVar66;
        auVar126._4_4_ = fVar110 - fVar69;
        auVar126._8_4_ = fVar74 - fVar71;
        auVar126._12_4_ = fVar78 - fVar73;
        uVar39 = (undefined1)((uint7)uStack_d7 >> 8);
        uVar41 = (undefined1)((uint7)uStack_d7 >> 0x10);
        uVar43 = (undefined1)((uint7)uStack_d7 >> 0x18);
        uVar45 = (undefined1)((uint7)uStack_d7 >> 0x20);
        uVar47 = (undefined1)((uint7)uStack_d7 >> 0x28);
        uVar49 = (undefined1)((uint7)uStack_d7 >> 0x30);
        auVar109[8] = uStack_d8;
        auVar109._0_8_ = local_e0;
        auVar76[8] = uStack_d8;
        auVar76._0_8_ = local_e0;
        auVar76[9] = (char)uStack_d7;
        auVar76[10] = uVar39;
        auVar76[0xb] = uVar41;
        auVar76[0xc] = uVar43;
        auVar76[0xd] = uVar45;
        auVar76[0xe] = uVar47;
        auVar76[0xf] = uVar49;
        auVar109[9] = (char)uStack_d7;
        auVar109[10] = uVar39;
        auVar109[0xb] = uVar41;
        auVar109[0xc] = uVar43;
        auVar109[0xd] = uVar45;
        auVar109[0xe] = uVar47;
        auVar109[0xf] = uVar49;
        auVar75 = NEON_ext(auVar76,auVar109,8,1);
        uVar111 = NEON_ext(local_e0,auVar75._0_8_,4,1);
        auVar75 = NEON_ext(auVar126,auVar126,4,1);
        fVar105 = (float)((ulong)local_e0 >> 0x20);
        auVar98._0_4_ = (float)local_e0 * auVar75._0_4_ - auVar126._0_4_ * (float)uVar111;
        auVar98._4_4_ = fVar105 * auVar75._4_4_ - auVar126._4_4_ * (float)((ulong)uVar111 >> 0x20);
        auVar98._8_4_ =
             (float)CONCAT71(uStack_d7,uStack_d8) * auVar126._0_4_ -
             auVar126._8_4_ * (float)local_e0;
        auVar98._12_4_ =
             (float)((uint7)uStack_d7 >> 0x18) * auVar126._4_4_ - auVar126._12_4_ * fVar105;
        auVar75 = NEON_ext(auVar98,auVar98,4,1);
        fVar105 = auVar75._0_4_;
        fVar79 = auVar75._4_4_;
        fVar82 = fVar105 * fVar105 + fVar79 * fVar79 + auVar98._0_4_ * auVar98._0_4_;
        fVar86 = 0.0;
        fVar88 = 0.0;
        fVar89 = 0.0;
        fVar84 = 0.0;
        if (fVar82 != 0.0) {
          fVar82 = SQRT(fVar82);
          fVar84 = SQRT(fVar105 * fVar105 + fVar79 * fVar79 + auVar98._0_4_ * auVar98._0_4_);
          fVar86 = fVar105 / fVar82;
          fVar88 = fVar79 / fVar84;
          fVar89 = auVar98._0_4_ / fVar82;
          fVar84 = 0.0 / fVar84;
        }
        fVar79 = auVar126._0_4_ * auVar126._0_4_ + auVar126._4_4_ * auVar126._4_4_ +
                 auVar126._8_4_ * auVar126._8_4_;
        fVar105 = auVar126._0_4_ * auVar126._0_4_ + auVar126._4_4_ * auVar126._4_4_ +
                  auVar126._8_4_ * auVar126._8_4_;
        auVar100._12_4_ = fVar84;
        auVar100._8_4_ = fVar89;
        auVar100._4_4_ = fVar88;
        auVar100._0_4_ = fVar86;
        lVar33 = nn::os::GetSystemTick();
        fVar82 = (float)uVar104;
        fVar105 = (float)(CONCAT17((char)((uint)fVar105 >> 0x18),
                                   CONCAT16((char)((uint)fVar105 >> 0x10),
                                            CONCAT15((char)((uint)fVar105 >> 8),
                                                     CONCAT14(SUB41(fVar105,0),fVar79)))) >> 0x20);
        if ((int)local_100 < 1) {
          uVar34 = 0;
          uVar35 = 0;
        }
        else {
          lVar30 = 0;
          uVar34 = 0;
          iVar67 = -(uint)(fVar79 == 0.0);
          iVar70 = -(uint)(fVar105 == 0.0);
          iVar72 = -(uint)(fVar79 == 0.0);
          fVar84 = auVar126._0_4_ / fVar79;
          fVar90 = auVar126._4_4_ / fVar105;
          fVar93 = auVar126._8_4_ / fVar79;
          bVar38 = SUB41(fVar84,0) & ~(byte)iVar67;
          bVar40 = (byte)((uint)fVar84 >> 8) & ~(byte)((uint)iVar67 >> 8);
          bVar42 = (byte)((uint)fVar84 >> 0x10) & ~(byte)((uint)iVar67 >> 0x10);
          bVar44 = (byte)((uint)fVar84 >> 0x18) & ~(byte)((uint)iVar67 >> 0x18);
          bVar46 = SUB41(fVar90,0) & ~(byte)iVar70;
          bVar48 = (byte)((uint)fVar90 >> 8) & ~(byte)((uint)iVar70 >> 8);
          bVar50 = (byte)((uint)fVar90 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
          bVar52 = (byte)((uint)fVar90 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
          bVar54 = SUB41(fVar93,0) & ~(byte)iVar72;
          bVar56 = (byte)((uint)fVar93 >> 8) & ~(byte)((uint)iVar72 >> 8);
          bVar58 = (byte)((uint)fVar93 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10);
          bVar60 = (byte)((uint)fVar93 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
          fVar84 = -(fVar66 * (float)CONCAT13(bVar44,CONCAT12(bVar42,CONCAT11(bVar40,bVar38))) +
                     fVar69 * (float)CONCAT13(bVar52,CONCAT12(bVar50,CONCAT11(bVar48,bVar46))) +
                    fVar71 * (float)CONCAT13(bVar60,CONCAT12(bVar58,CONCAT11(bVar56,bVar54))));
          uVar35 = 0;
          fVar90 = -(fVar66 * fVar86 + fVar69 * fVar88 + fVar71 * fVar89);
          auVar113._0_12_ = auVar100._0_12_;
          auVar113._12_4_ = fVar90;
          auVar81._0_4_ = (float)local_140 * fVar86;
          auVar81._4_4_ = local_140._4_4_ * fVar88;
          auVar81._8_4_ = fStack_138 * fVar89;
          auVar81._12_4_ = fStack_134 * fVar90;
          auVar87 = NEON_ext(auVar81,auVar81,8,1);
          auVar108._8_8_ = _UNK_03caad18;
          auVar108._0_8_ = _DAT_03caad10;
          auVar75 = a64_TBL(ZEXT816(0),auVar113,auVar108);
          auVar101[1] = bVar40;
          auVar101[0] = bVar38;
          auVar101[2] = bVar42;
          auVar101[3] = bVar44;
          auVar101[4] = bVar46;
          auVar101[5] = bVar48;
          auVar101[6] = bVar50;
          auVar101[7] = bVar52;
          auVar101[8] = bVar54;
          auVar101[9] = bVar56;
          auVar101[10] = bVar58;
          auVar101[0xb] = bVar60;
          auVar101[0xc] = SUB41(fVar84,0);
          auVar101[0xd] = (char)((uint)fVar84 >> 8);
          auVar101[0xe] = (char)((uint)fVar84 >> 0x10);
          auVar101[0xf] = (char)((uint)fVar84 >> 0x18);
          auVar76 = a64_TBL(ZEXT816(0),auVar101,auVar108);
          do {
            puVar29 = (undefined8 *)(local_108 + lVar30);
            fVar95 = (float)puVar29[1];
            fVar80 = (float)((ulong)puVar29[1] >> 0x20);
            uVar111 = *puVar29;
            fVar93 = (float)((ulong)uVar111 >> 0x20);
            auVar109 = *(undefined1 (*) [16])(puVar29 + 2);
            auVar99._0_4_ = fVar86 * auVar109._0_4_;
            auVar99._4_4_ = fVar88 * auVar109._4_4_;
            auVar99._8_4_ = fVar89 * auVar109._8_4_;
            auVar99._12_4_ = fVar90 * auVar109._12_4_;
            auVar112._0_4_ =
                 (float)CONCAT13(bVar44,CONCAT12(bVar42,CONCAT11(bVar40,bVar38))) * auVar109._0_4_;
            auVar112._4_4_ =
                 (float)CONCAT13(bVar52,CONCAT12(bVar50,CONCAT11(bVar48,bVar46))) * auVar109._4_4_;
            auVar112._8_4_ =
                 (float)CONCAT13(bVar60,CONCAT12(bVar58,CONCAT11(bVar56,bVar54))) * auVar109._8_4_;
            auVar112._12_4_ = fVar84 * auVar109._12_4_;
            auVar97._0_4_ = fVar86 * (float)uVar111;
            auVar97._4_4_ = fVar88 * fVar93;
            auVar97._8_4_ = fVar89 * fVar95;
            auVar97._12_4_ = fVar90 * fVar80;
            auVar107._0_4_ =
                 (float)CONCAT13(bVar44,CONCAT12(bVar42,CONCAT11(bVar40,bVar38))) * (float)uVar111;
            auVar107._4_4_ =
                 (float)CONCAT13(bVar52,CONCAT12(bVar50,CONCAT11(bVar48,bVar46))) * fVar93;
            auVar107._8_4_ =
                 (float)CONCAT13(bVar60,CONCAT12(bVar58,CONCAT11(bVar56,bVar54))) * fVar95;
            auVar107._12_4_ = fVar84 * fVar80;
            auVar98 = NEON_ext(auVar97,auVar97,8,1);
            auVar100 = NEON_ext(auVar99,auVar99,8,1);
            auVar108 = NEON_ext(auVar107,auVar107,8,1);
            auVar113 = NEON_ext(auVar112,auVar112,8,1);
            auVar101 = auVar76 ^ (auVar76 ^ auVar75) & *(undefined1 (*) [16])(puVar18 + 0x30);
            auVar116._0_4_ = auVar98._0_4_ + auVar97._0_4_ + auVar97._4_4_ + auVar101._0_4_;
            auVar116._4_4_ = auVar100._0_4_ + auVar99._0_4_ + auVar99._4_4_ + auVar101._4_4_;
            auVar116._8_4_ = auVar108._0_4_ + auVar107._0_4_ + auVar107._4_4_ + auVar101._8_4_;
            auVar116._12_4_ = auVar113._0_4_ + auVar112._0_4_ + auVar112._4_4_ + auVar101._12_4_;
            auVar98 = NEON_rev64(auVar116,4);
            uVar23 = CONCAT44(-(uint)(auVar116._12_4_ < auVar116._8_4_),
                              -(uint)(auVar116._12_4_ < auVar116._8_4_)) & 0x100000001;
            iVar67 = (int)uVar23;
            iVar70 = (int)(uVar23 >> 0x20);
            auVar102._0_8_ = CONCAT44((iVar70 << 0x1f) >> 0x1f,(iVar67 << 0x1f) >> 0x1f);
            auVar102._8_4_ = (iVar67 << 0x1f) >> 0x1f;
            auVar102._12_4_ = (iVar70 << 0x1f) >> 0x1f;
            auVar115._8_8_ = auVar102._8_8_;
            auVar115._0_8_ = auVar102._0_8_;
            auVar116 = auVar116 ^ (auVar116 ^ auVar98) & auVar115;
            fVar80 = auVar116._4_4_;
            uVar23 = CONCAT44(fVar80,fVar80);
            fVar83 = auVar116._12_4_;
            fVar93 = fVar80;
            if (0.0 <= fVar83) {
              fVar85 = auVar116._8_4_;
              fVar93 = auVar116._0_4_;
              uVar24 = CONCAT44(fVar93,fVar93);
              if (fVar85 <= 1.0) {
                iVar67 = -(uint)(fVar83 - fVar85 == 0.0);
                fVar91 = (float)((uint)(fVar82 / (fVar83 - fVar85)) &
                                CONCAT13(~(byte)((uint)iVar67 >> 0x18),
                                         CONCAT12(~(byte)((uint)iVar67 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar67 >> 8),~(byte)iVar67)
                                                 )));
                if (fVar85 < 0.0) {
                  uVar24 = (ulong)(uint)(fVar93 - (fVar80 - fVar93) * fVar91 * fVar85);
                }
                if (1.0 < fVar83) {
                  uVar23 = (ulong)(uint)(fVar93 + (fVar80 - fVar93) * (fVar82 - fVar85) * fVar91);
                }
                uVar31 = uVar24 & 0x7fffffff7fffffff;
                uVar106 = -(uint)((float)(uVar23 & 0x7fffffff7fffffff) < (float)uVar31);
                uVar31 = uVar31 ^ (uVar31 ^ uVar23 & 0x7fffffff7fffffff) & (ulong)uVar106;
                fVar93 = (float)CONCAT13((byte)(-(uint)((float)((uint)uVar24 ^
                                                               ((uint)uVar24 ^ (uint)uVar23) &
                                                               ~uVar106) < 0.0) >> 0x18) & 0x80 |
                                         (byte)(uVar31 >> 0x18),(int3)uVar31);
              }
            }
            if (0.0 < (float)((uint)fVar93 ^
                             ((uint)fVar93 ^
                             (uint)(fVar93 - (auVar81._0_4_ + auVar81._4_4_ + auVar87._0_4_ + fVar90
                                             ))) & -(uint)(ABS(fVar93) < local_160 * 0.007874016)))
            {
              lVar21 = (long)(int)uVar35;
              uVar35 = uVar35 + 1;
              puVar29 = (undefined8 *)(lVar28 + lVar21 * 0x20);
            }
            else {
              lVar21 = (long)(int)uVar34;
              uVar34 = uVar34 + 1;
              puVar29 = (undefined8 *)(lVar27 + lVar21 * 0x20);
            }
            lVar30 = lVar30 + 0x20;
            puVar29[1] = CONCAT44(ABS(fVar93),fVar95);
            *puVar29 = uVar111;
            puVar29[3] = auVar109._8_8_;
            puVar29[2] = auVar109._0_8_;
          } while ((local_100 & 0xffffffff) * 0x20 != lVar30);
        }
        lVar30 = nn::os::GetSystemTick();
        *(long *)(param_12 + 0x78) = (lVar30 - lVar33) + *(long *)(param_12 + 0x78);
        *(int *)(param_12 + 0x80) = *(int *)(param_12 + 0x80) + 1;
        if (uVar35 - 1 != 0 && 0 < (int)uVar35) {
          FUN_03076680(lVar28,0,uVar35 - 1);
        }
        if (1 < (int)uVar34) {
          FUN_03076680(lVar27,0,uVar34 - 1);
        }
        uVar39 = 0;
        uVar41 = 0;
        uVar43 = 0;
        uVar45 = 0;
        uVar47 = 0;
        uVar49 = 0;
        uVar51 = 0;
        uVar53 = 0;
        uVar55 = 0;
        uVar57 = 0;
        uVar59 = 0;
        uVar61 = 0;
        uVar62 = 0;
        uVar63 = 0;
        uVar64 = 0;
        uVar65 = 0;
        if (fVar79 != 0.0) {
          fVar79 = SQRT(fVar79);
          fVar105 = SQRT(fVar105);
          fVar84 = auVar126._0_4_ / fVar79;
          uVar39 = SUB41(fVar84,0);
          uVar41 = (undefined1)((uint)fVar84 >> 8);
          uVar43 = (undefined1)((uint)fVar84 >> 0x10);
          uVar45 = (undefined1)((uint)fVar84 >> 0x18);
          fVar84 = auVar126._4_4_ / fVar105;
          uVar47 = SUB41(fVar84,0);
          uVar49 = (undefined1)((uint)fVar84 >> 8);
          uVar51 = (undefined1)((uint)fVar84 >> 0x10);
          uVar53 = (undefined1)((uint)fVar84 >> 0x18);
          fVar84 = auVar126._8_4_ / fVar79;
          uVar55 = SUB41(fVar84,0);
          uVar57 = (undefined1)((uint)fVar84 >> 8);
          uVar59 = (undefined1)((uint)fVar84 >> 0x10);
          uVar61 = (undefined1)((uint)fVar84 >> 0x18);
          fVar105 = auVar126._12_4_ /
                    (float)CONCAT13((char)((uint)fVar105 >> 0x18),
                                    CONCAT12((char)((uint)fVar105 >> 0x10),
                                             (short)(CONCAT15((char)((uint)fVar105 >> 8),
                                                              CONCAT14(SUB41(fVar105,0),fVar79)) >>
                                                    0x20)));
          uVar62 = SUB41(fVar105,0);
          uVar63 = (undefined1)((uint)fVar105 >> 8);
          uVar64 = (undefined1)((uint)fVar105 >> 0x10);
          uVar65 = (undefined1)((uint)fVar105 >> 0x18);
        }
        fVar79 = (float)CONCAT13(uVar61,CONCAT12(uVar59,CONCAT11(uVar57,uVar55)));
        fVar105 = (float)CONCAT13(uVar45,CONCAT12(uVar43,CONCAT11(uVar41,uVar39)));
        lVar33 = nn::os::GetSystemTick();
        fStack_15c = (float)(CONCAT17(uVar53,CONCAT16(uVar51,CONCAT15(uVar49,CONCAT14(uVar47,fVar105
                                                                                     )))) >> 0x20);
        fStack_154 = (float)(CONCAT17(uVar65,CONCAT16(uVar64,CONCAT15(uVar63,CONCAT14(uVar62,fVar79)
                                                                     ))) >> 0x20);
        if (((uVar34 != 0) && (uVar35 != 0)) && (0 < (int)uVar35)) {
          fVar66 = fVar66 * fVar105;
          fVar69 = fVar69 * fStack_15c;
          uVar39 = (undefined1)((uint)fVar69 >> 8);
          uVar41 = (undefined1)((uint)fVar69 >> 0x10);
          uVar43 = (undefined1)((uint)fVar69 >> 0x18);
          fVar71 = fVar71 * fVar79;
          uVar45 = (undefined1)((uint)fVar71 >> 8);
          uVar47 = (undefined1)((uint)fVar71 >> 0x10);
          uVar49 = (undefined1)((uint)fVar71 >> 0x18);
          fVar73 = fVar73 * fStack_154;
          uVar51 = (undefined1)((uint)fVar73 >> 8);
          uVar53 = (undefined1)((uint)fVar73 >> 0x10);
          uVar55 = (undefined1)((uint)fVar73 >> 0x18);
          auVar10[4] = SUB41(fVar69,0);
          auVar10._0_4_ = fVar66;
          auVar10[5] = uVar39;
          auVar10[6] = uVar41;
          auVar10[7] = uVar43;
          auVar10[8] = SUB41(fVar71,0);
          auVar10[9] = uVar45;
          auVar10[10] = uVar47;
          auVar10[0xb] = uVar49;
          auVar10[0xc] = SUB41(fVar73,0);
          auVar10[0xd] = uVar51;
          auVar10[0xe] = uVar53;
          auVar10[0xf] = uVar55;
          auVar11[4] = SUB41(fVar69,0);
          auVar11._0_4_ = fVar66;
          auVar11[5] = uVar39;
          auVar11[6] = uVar41;
          auVar11[7] = uVar43;
          auVar11[8] = SUB41(fVar71,0);
          auVar11[9] = uVar45;
          auVar11[10] = uVar47;
          auVar11[0xb] = uVar49;
          auVar11[0xc] = SUB41(fVar73,0);
          auVar11[0xd] = uVar51;
          auVar11[0xe] = uVar53;
          auVar11[0xf] = uVar55;
          auVar75 = NEON_ext(auVar10,auVar11,8,1);
          auVar68._0_4_ = fVar77 * fVar105;
          auVar68._4_4_ = fVar110 * fStack_15c;
          auVar68._8_4_ = fVar74 * fVar79;
          auVar68._12_4_ = fVar78 * fStack_154;
          auVar87 = NEON_ext(auVar68,auVar68,8,1);
          fVar71 = (float)*param_9 - fVar9;
          fVar71 = fVar71 + fVar71;
          uVar23 = 0;
          do {
            auVar76 = *(undefined1 (*) [16])(lVar28 + uVar23 * 0x20);
            fVar73 = auVar76._12_4_;
            if (fVar71 < fVar73) break;
            if (0 < (int)uVar34) {
              lVar30 = lVar28 + uVar23 * 0x20;
              uVar15 = *(undefined8 *)(lVar30 + 0x18);
              uVar111 = *(undefined8 *)(lVar30 + 0x10);
              fVar84 = auVar76._0_4_;
              fVar89 = (float)uVar111 - fVar84;
              fVar86 = auVar76._4_4_;
              fVar90 = (float)((ulong)uVar111 >> 0x20) - fVar86;
              fVar88 = auVar76._8_4_;
              fVar93 = (float)uVar15 - fVar88;
              fVar95 = (float)((ulong)uVar15 >> 0x20) - fVar73;
              auVar13._4_4_ = fVar90;
              auVar13._0_4_ = fVar89;
              auVar13._8_4_ = fVar93;
              auVar13._12_4_ = fVar95;
              auVar14._4_4_ = fVar90;
              auVar14._0_4_ = fVar89;
              auVar14._8_4_ = fVar93;
              auVar14._12_4_ = fVar95;
              auVar76 = NEON_ext(auVar13,auVar14,4,1);
              auVar103._0_4_ = fVar89 * fVar89;
              auVar103._4_4_ = fVar90 * fVar90;
              auVar103._8_4_ = fVar93 * fVar93;
              auVar103._12_4_ = fVar95 * fVar95;
              auVar109 = NEON_ext(auVar103,auVar103,8,1);
              pfVar26 = (float *)(lVar27 + 0x10);
              uVar24 = (ulong)uVar34;
              do {
                auVar98 = *(undefined1 (*) [16])(pfVar26 + -4);
                fVar80 = auVar98._4_4_;
                fVar83 = auVar98._8_4_;
                fVar85 = auVar98._12_4_;
                if (fVar71 < fVar73 + fVar85) break;
                fVar96 = auVar98._0_4_;
                auVar117._0_4_ = *pfVar26 - fVar96;
                auVar117._4_4_ = pfVar26[1] - fVar80;
                auVar117._8_4_ = pfVar26[2] - fVar83;
                auVar117._12_4_ = pfVar26[3] - fVar85;
                auVar98 = NEON_ext(auVar117,auVar117,4,1);
                fVar119 = fVar96 - fVar84;
                fVar121 = fVar80 - fVar86;
                fVar122 = fVar83 - fVar88;
                fVar91 = auVar76._0_4_ * auVar117._0_4_ - fVar89 * auVar98._0_4_;
                fVar92 = auVar76._4_4_ * auVar117._4_4_ - fVar90 * auVar98._4_4_;
                uVar39 = SUB41(fVar92,0);
                uVar41 = (undefined1)((uint)fVar92 >> 8);
                uVar43 = (undefined1)((uint)fVar92 >> 0x10);
                uVar45 = (undefined1)((uint)fVar92 >> 0x18);
                fVar92 = fVar89 * auVar117._8_4_ - fVar93 * auVar117._0_4_;
                fVar94 = fVar90 * auVar117._12_4_ - fVar95 * auVar117._4_4_;
                auVar16[4] = uVar39;
                auVar16._0_4_ = fVar91;
                auVar16[5] = uVar41;
                auVar16[6] = uVar43;
                auVar16[7] = uVar45;
                auVar16._8_4_ = fVar92;
                auVar16._12_4_ = fVar94;
                auVar17[4] = uVar39;
                auVar17._0_4_ = fVar91;
                auVar17[5] = uVar41;
                auVar17[6] = uVar43;
                auVar17[7] = uVar45;
                auVar17._8_4_ = fVar92;
                auVar17._12_4_ = fVar94;
                auVar126 = NEON_ext(auVar16,auVar17,4,1);
                uVar111 = NEON_ext(auVar126._0_8_,
                                   CONCAT17(uVar45,CONCAT16(uVar43,CONCAT15(uVar41,CONCAT14(uVar39,
                                                  fVar91)))),4,1);
                fVar127 = auVar126._0_4_;
                fVar128 = auVar126._4_4_;
                fVar92 = fVar127 * fVar127 + fVar128 * fVar128 + fVar91 * fVar91;
                fVar94 = fVar127 * fVar127 + fVar128 * fVar128 + fVar91 * fVar91;
                iVar67 = -(uint)(fVar92 == 0.0);
                auVar129._0_4_ = fVar89 * fVar119;
                auVar129._4_4_ = fVar90 * fVar121;
                auVar129._8_4_ = fVar93 * fVar122;
                auVar129._12_4_ = fVar95 * (fVar85 - fVar73);
                auVar130._0_4_ = auVar117._0_4_ * auVar117._0_4_;
                auVar130._4_4_ = auVar117._4_4_ * auVar117._4_4_;
                auVar130._8_4_ = auVar117._8_4_ * auVar117._8_4_;
                auVar130._12_4_ = auVar117._12_4_ * auVar117._12_4_;
                uVar124 = CONCAT13(~(byte)((uint)iVar67 >> 0x18),
                                   CONCAT12(~(byte)((uint)iVar67 >> 0x10),
                                            CONCAT11(~(byte)((uint)iVar67 >> 8),~(byte)iVar67)));
                auVar123._0_4_ = auVar98._0_4_ * fVar127 - auVar117._0_4_ * (float)uVar111;
                auVar123._4_4_ =
                     auVar98._4_4_ * fVar128 - auVar117._4_4_ * (float)((ulong)uVar111 >> 0x20);
                auVar123._8_4_ = auVar117._0_4_ * fVar91 - auVar117._8_4_ * fVar127;
                auVar123._12_4_ = auVar117._4_4_ * 0.0 - auVar117._12_4_ * fVar128;
                auVar98 = NEON_ext(auVar123,auVar123,4,1);
                fVar127 = fVar119 * auVar98._0_4_;
                fVar128 = fVar121 * auVar98._4_4_;
                iVar67 = -(uint)(fVar92 == 0.0);
                iVar70 = -(uint)(fVar94 == 0.0);
                auVar120._0_4_ = fVar119 * auVar117._0_4_;
                auVar120._4_4_ = fVar121 * auVar117._4_4_;
                auVar120._8_4_ = fVar122 * auVar117._8_4_;
                auVar120._12_4_ = (fVar85 - fVar73) * auVar117._12_4_;
                auVar126 = NEON_ext(auVar130,auVar130,8,1);
                auVar98 = NEON_ext(auVar120,auVar120,8,1);
                uVar31 = CONCAT44((float)((ulong)uVar104 >> 0x20) / fVar94,fVar82 / fVar92) &
                         CONCAT44(uVar124,uVar124);
                fVar91 = auVar126._0_4_ + auVar130._0_4_ + auVar130._4_4_;
                fVar94 = auVar98._0_4_ + auVar120._0_4_ + auVar120._4_4_;
                uVar111 = NEON_fminnm(CONCAT44((float)(uVar31 >> 0x20) *
                                               (fVar127 + fVar128 + fVar122 * auVar123._0_4_),
                                               (float)uVar31 *
                                               (fVar127 + fVar128 + fVar122 * auVar123._0_4_)),
                                      uVar104,4);
                fVar119 = fVar93 * auVar117._8_4_ +
                          fVar89 * auVar117._0_4_ + fVar90 * auVar117._4_4_;
                fVar121 = fVar93 * auVar117._8_4_ +
                          fVar89 * auVar117._0_4_ + fVar90 * auVar117._4_4_;
                auVar98 = NEON_ext(auVar129,auVar129,8,1);
                fVar92 = auVar109._0_4_ + auVar103._0_4_ + auVar103._4_4_;
                fVar127 = auVar98._0_4_ + auVar129._0_4_ + auVar129._4_4_;
                auVar98 = NEON_fmov(0x3f800000,4);
                uVar31 = NEON_fmax(uVar111,0,4);
                iVar72 = -(uint)(fVar92 == 0.0);
                iVar132 = -(uint)(fVar91 == 0.0);
                fVar92 = auVar98._0_4_ / fVar92;
                fVar91 = auVar98._8_4_ / fVar91;
                fVar122 = (float)CONCAT13((byte)((uint)fVar92 >> 0x18) &
                                          ~(byte)((uint)iVar72 >> 0x18),
                                          CONCAT12((byte)((uint)fVar92 >> 0x10) &
                                                   ~(byte)((uint)iVar72 >> 0x10),
                                                   CONCAT11((byte)((uint)fVar92 >> 8) &
                                                            ~(byte)((uint)iVar72 >> 8),
                                                            SUB41(fVar92,0) & ~(byte)iVar72)));
                fVar91 = (float)CONCAT13((byte)((uint)fVar91 >> 0x18) &
                                         ~(byte)((uint)iVar132 >> 0x18),
                                         CONCAT12((byte)((uint)fVar91 >> 0x10) &
                                                  ~(byte)((uint)iVar132 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar91 >> 8) &
                                                           ~(byte)((uint)iVar132 >> 8),
                                                           SUB41(fVar91,0) & ~(byte)iVar132)));
                fVar92 = ((float)uVar31 * fVar119 - fVar94) * fVar91;
                fVar91 = ((float)(uVar31 >> 0x20) * fVar121 - fVar94) * fVar91;
                uVar111 = NEON_fminnm(CONCAT44(fVar91,fVar92),uVar104,4);
                uVar111 = NEON_fmax(uVar111,0,4);
                fVar128 = (float)uVar111;
                fVar131 = (float)((ulong)uVar111 >> 0x20);
                iVar72 = -(uint)(fVar128 == fVar92);
                iVar132 = -(uint)(fVar131 == fVar91);
                uVar111 = NEON_fminnm(CONCAT44((fVar127 + fVar131 * fVar121) * fVar122,
                                               (fVar127 + fVar128 * fVar119) * fVar122),uVar104,4);
                uVar125 = NEON_fmax(uVar111,0,4);
                uVar31 = uVar31 ^ (uVar31 ^ uVar125) &
                                  CONCAT17(~(byte)((uint)iVar132 >> 0x18) |
                                           (byte)((uint)iVar70 >> 0x18),
                                           CONCAT16(~(byte)((uint)iVar132 >> 0x10) |
                                                    (byte)((uint)iVar70 >> 0x10),
                                                    CONCAT15(~(byte)((uint)iVar132 >> 8) |
                                                             (byte)((uint)iVar70 >> 8),
                                                             CONCAT14(~(byte)iVar132 | (byte)iVar70,
                                                                      CONCAT13(~(byte)((uint)iVar72
                                                                                      >> 0x18) |
                                                                               (byte)((uint)iVar67
                                                                                     >> 0x18),
                                                                               CONCAT12(~(byte)((
                                                  uint)iVar72 >> 0x10) |
                                                  (byte)((uint)iVar67 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar72 >> 8) |
                                                           (byte)((uint)iVar67 >> 8),
                                                           ~(byte)iVar72 | (byte)iVar67)))))));
                fVar94 = (float)uVar31;
                fVar121 = (float)(uVar31 >> 0x20);
                fVar91 = fVar84 + fVar89 * fVar94;
                fVar92 = fVar86 + fVar90 * fVar121;
                fVar119 = fVar88 + fVar93 * fVar94;
                fVar121 = fVar73 + fVar95 * fVar121;
                fVar94 = fVar91 - (fVar96 + auVar117._0_4_ * fVar128);
                fVar80 = fVar92 - (fVar80 + auVar117._4_4_ * fVar131);
                fVar83 = fVar119 - (fVar83 + auVar117._8_4_ * fVar128);
                fVar85 = fVar121 - (fVar85 + auVar117._12_4_ * fVar131);
                auVar118._0_4_ = fVar94 * fVar94;
                auVar118._4_4_ = fVar80 * fVar80;
                auVar118._8_4_ = fVar83 * fVar83;
                auVar118._12_4_ = fVar85 * fVar85;
                auVar98 = NEON_ext(auVar118,auVar118,8,1);
                if ((auVar118._0_4_ + auVar118._4_4_ + auVar98._0_4_ < fVar71 * fVar71) &&
                   (auVar114._0_4_ = fVar105 * (fVar91 + fVar94 * -0.5),
                   auVar114._4_4_ = fStack_15c * (fVar92 + fVar80 * -0.5),
                   auVar114._8_4_ = fVar79 * (fVar119 + fVar83 * -0.5),
                   auVar114._12_4_ = fStack_154 * (fVar121 + fVar85 * -0.5),
                   auVar98 = NEON_ext(auVar114,auVar114,8,1),
                   fVar80 = auVar98._0_4_ + auVar114._0_4_ + auVar114._4_4_,
                   !(bool)((~(fVar66 + fVar69 + auVar75._0_4_ < fVar80) |
                           ~(fVar80 < auVar68._0_4_ + auVar68._4_4_ + auVar87._0_4_)) & 1))) {
                  lVar30 = nn::os::GetSystemTick();
                  *(long *)(param_12 + 0x90) = (lVar30 - lVar33) + *(long *)(param_12 + 0x90);
                  *(int *)(param_12 + 0x98) = *(int *)(param_12 + 0x98) + 1;
                  goto LAB_0306e898;
                }
                uVar24 = uVar24 - 1;
                pfVar26 = pfVar26 + 8;
              } while (uVar24 != 0);
            }
            uVar23 = uVar23 + 1;
          } while (uVar23 != uVar35);
        }
        lVar30 = nn::os::GetSystemTick();
        *(long *)(param_12 + 0x90) = (lVar30 - lVar33) + *(long *)(param_12 + 0x90);
        *(int *)(param_12 + 0x98) = *(int *)(param_12 + 0x98) + 1;
        *(uint *)(*param_11 + (ulong)(uVar12 >> 5) * 4) =
             *(uint *)(*param_11 + (ulong)(uVar12 >> 5) * 4) | 1 << (ulong)(uVar12 & 0x1f);
      }
LAB_0306e898:
      uVar36 = uVar36 + 1;
    } while (uVar36 != uVar1);
  }
  if (local_1d8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar27,lVar32);
joined_r0x0306ea18:
    if (lVar25 != 0) goto LAB_0306e978;
LAB_0306ea1c:
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar28,lVar32);
  }
  else {
    uVar36 = lVar32 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_1d8 + 0x28) < uVar36) || (*(long *)(local_1d8 + 0x38) != uVar36 + lVar27))
    {
      if (lVar27 != 0) {
        if (*(ulong *)(local_1d8 + 0x28) < uVar36 + 0x40) {
          *(int *)(*(long *)(local_1d8 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_1d8 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_1d8 + 0x10) + 0x18))
                    (*(long **)(local_1d8 + 0x10),lVar27 - *(int *)(lVar27 + -4),uVar36 + 0x44);
        }
        else {
          if (*(long *)(local_1d8 + 0x38) == uVar36 + lVar27) {
            *(long *)(local_1d8 + 0x38) = lVar27;
            goto LAB_0306ea14;
          }
          FUN_031cf778(local_1d8,lVar27);
        }
        goto joined_r0x0306ea18;
      }
    }
    else {
      *(long *)(local_1d8 + 0x38) = lVar27;
      if (*(long *)(local_1d8 + 0x48) == lVar27) {
LAB_0306ea14:
        FUN_031cf578();
        goto joined_r0x0306ea18;
      }
    }
    if (lVar25 == 0) goto LAB_0306ea1c;
LAB_0306e978:
    uVar36 = lVar32 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(lVar25 + 0x28) < uVar36) || (*(long *)(lVar25 + 0x38) != uVar36 + lVar28)) {
      if (lVar28 != 0) {
        if (*(ulong *)(lVar25 + 0x28) < uVar36 + 0x40) {
          *(int *)(*(long *)(lVar25 + 0x30) + 0x20) = *(int *)(*(long *)(lVar25 + 0x30) + 0x20) + -1
          ;
          (**(code **)(**(long **)(lVar25 + 0x10) + 0x18))
                    (*(long **)(lVar25 + 0x10),lVar28 - *(int *)(lVar28 + -4),uVar36 + 0x44);
        }
        else {
          if (*(long *)(lVar25 + 0x38) == uVar36 + lVar28) {
            *(long *)(lVar25 + 0x38) = lVar28;
            goto LAB_0306ea40;
          }
          FUN_031cf778(lVar25,lVar28);
        }
      }
    }
    else {
      *(long *)(lVar25 + 0x38) = lVar28;
      if (*(long *)(lVar25 + 0x48) == lVar28) {
LAB_0306ea40:
        FUN_031cf578(lVar25);
      }
    }
  }
LAB_0306ea48:
  lVar27 = local_130;
  if (local_118 == local_130) {
    local_128 = local_128 & 0xffffffff00000000;
  }
  if (local_120 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar36 = local_110 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_120 + 0x28) < uVar36) ||
       (*(long *)(local_120 + 0x38) != uVar36 + local_118)) {
      if (local_118 != 0) {
        if (*(ulong *)(local_120 + 0x28) < uVar36 + 0x40) {
          *(int *)(*(long *)(local_120 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_120 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_120 + 0x10) + 0x18))
                    (*(long **)(local_120 + 0x10),local_118 - *(int *)(local_118 + -4),uVar36 + 0x44
                    );
        }
        else {
          if (*(long *)(local_120 + 0x38) == uVar36 + local_118) {
            *(long *)(local_120 + 0x38) = local_118;
            goto LAB_0306eb10;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(long *)(local_120 + 0x38) = local_118;
      if (*(long *)(local_120 + 0x48) == local_118) {
LAB_0306eb10:
        FUN_031cf578();
      }
    }
  }
  uVar23 = local_128;
  uVar36 = local_128 >> 0x20;
  local_128 = uVar36 << 0x20;
  if ((lVar27 != 0) && (-1 < (long)uVar23)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar27,uVar36 << 5);
  }
  lVar27 = local_108;
  if (local_f0 == local_108) {
    local_100 = local_100 & 0xffffffff00000000;
  }
  if (local_f8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_0306ec0c;
  }
  uVar36 = local_e8 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_f8 + 0x28) < uVar36) || (*(long *)(local_f8 + 0x38) != uVar36 + local_f0)) {
    if (local_f0 == 0) goto LAB_0306ec0c;
    if (*(ulong *)(local_f8 + 0x28) < uVar36 + 0x40) {
      *(int *)(*(long *)(local_f8 + 0x30) + 0x20) = *(int *)(*(long *)(local_f8 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_f8 + 0x10) + 0x18))
                (*(long **)(local_f8 + 0x10),local_f0 - *(int *)(local_f0 + -4),uVar36 + 0x44);
      goto LAB_0306ec0c;
    }
    if (*(long *)(local_f8 + 0x38) != uVar36 + local_f0) {
      FUN_031cf778();
      goto LAB_0306ec0c;
    }
    *(long *)(local_f8 + 0x38) = local_f0;
  }
  else {
    *(long *)(local_f8 + 0x38) = local_f0;
    if (*(long *)(local_f8 + 0x48) != local_f0) goto LAB_0306ec0c;
  }
  FUN_031cf578();
LAB_0306ec0c:
  uVar23 = local_100;
  uVar36 = local_100 >> 0x20;
  local_100 = uVar36 << 0x20;
  if ((lVar27 != 0) && (-1 < (long)uVar23)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar27,uVar36 << 5);
  }
  if ((local_c8 != (long *)0x0) && (local_c0 != '\0')) {
    lVar27 = *local_c8;
    if (((*(byte *)(lVar27 + 0x38) & 1) != 0) && (local_c8[6] != 0)) {
      puVar29 = (undefined8 *)local_c8[2];
      uVar36 = (long)puVar29 + 0x17U & 0xfffffffffffffff8;
      if ((uVar36 <= (ulong)local_c8[3]) && (local_c8[2] = uVar36, puVar29 != (undefined8 *)0x0)) {
        *puVar29 = &DAT_03c4e575;
        puVar29[1] = *(undefined8 *)(local_c8[6] + 8);
      }
    }
    puVar29 = (undefined8 *)local_c8[2];
    uVar36 = (long)puVar29 + 0x17U & 0xfffffffffffffff8;
    if ((uVar36 <= (ulong)local_c8[3]) && (local_c8[2] = uVar36, puVar29 != (undefined8 *)0x0)) {
      *puVar29 = &DAT_03c2d363;
      uVar104 = nn::os::GetSystemTick();
      puVar29[1] = uVar104;
    }
    if (*(code **)(lVar27 + 0x20) != (code *)0x0) {
      (**(code **)(lVar27 + 0x20))(*(undefined8 *)(lVar27 + 0x28));
    }
  }
  lVar27 = nn::os::GetSystemTick();
  *(long *)(param_12 + 8) = (lVar27 - lVar20) + *(long *)(param_12 + 8);
  *(int *)(param_12 + 0x10) = *(int *)(param_12 + 0x10) + 1;
  return;
}



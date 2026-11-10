/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0306ed40; name: FUN_0306ed40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0306ed40(long param_1,undefined8 param_2,float *param_3,ulong param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 *param_8,undefined8 *param_9,
                 long *param_10,long param_11)

{
  uint uVar1;
  void *pvVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  ushort uVar9;
  short sVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined *puVar21;
  bool bVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  float *pfVar30;
  long lVar31;
  long lVar32;
  undefined8 *puVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  uint uVar39;
  void *__s;
  uint uVar40;
  void *pvVar41;
  ulong uVar42;
  byte bVar43;
  undefined1 uVar44;
  byte bVar45;
  undefined1 uVar46;
  byte bVar47;
  undefined1 uVar48;
  byte bVar49;
  undefined1 uVar50;
  byte bVar51;
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  undefined1 uVar56;
  byte bVar57;
  undefined1 uVar58;
  byte bVar59;
  undefined1 uVar60;
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  undefined1 uVar64;
  byte bVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  float fVar71;
  float fVar73;
  float fVar74;
  int iVar75;
  float fVar76;
  int iVar77;
  undefined1 auVar72 [16];
  float fVar78;
  float fVar79;
  float fVar82;
  float fVar83;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar84;
  float fVar85;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar86 [16];
  float fVar91;
  float fVar93;
  float fVar94;
  undefined1 auVar92 [16];
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar102 [12];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined8 uVar109;
  float fVar110;
  uint uVar111;
  undefined8 uVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar123;
  float fVar125;
  float fVar126;
  undefined1 auVar124 [16];
  undefined1 auVar127 [16];
  undefined4 uVar128;
  ulong uVar129;
  undefined1 auVar130 [16];
  float fVar131;
  float fVar132;
  undefined1 auVar133 [16];
  float fVar135;
  int iVar136;
  undefined1 auVar134 [16];
  long local_240;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a4;
  float local_194;
  ulong local_190;
  float fStack_188;
  ushort uStack_184;
  undefined2 uStack_182;
  undefined8 local_180;
  undefined8 local_178;
  ulong local_170;
  ulong uStack_168;
  ulong local_160;
  float local_158;
  undefined8 local_150;
  float fStack_148;
  float fStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
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
  undefined4 local_b8 [6];
  
  local_b8[0] = (undefined4)param_4;
  lVar24 = nn::os::GetSystemTick();
  FUN_0306d784(&local_c8,param_1,local_b8);
  local_e0 = *param_8;
  uStack_d8 = (undefined1)param_8[1];
  uStack_d7 = (undefined7)((ulong)param_8[1] >> 8);
  uVar1 = (int)*(short *)(param_5 + 10) + (int)*(short *)(param_5 + 8);
  iVar23 = (int)(uVar1 + 0x1f) >> 5;
  *(uint *)(param_10 + 2) = uVar1;
  if ((int)(*(uint *)((long)param_10 + 0xc) & 0x7fffffff) < iVar23) {
    FUN_02eb1f88(param_10,PTR_PTR_047d1a50,(long)iVar23);
  }
  iVar75 = (int)param_10[1];
  if ((int)param_10[1] != iVar23) {
    *(int *)(param_10 + 1) = iVar23;
    iVar75 = iVar23;
  }
  __s = (void *)*param_10;
  uVar42 = (ulong)iVar75;
  pvVar41 = __s;
  if (((ulong)__s & 0xf) == 0) {
    uVar27 = uVar42;
  }
  else {
    uVar27 = 4 - (((ulong)__s & 0xf) >> 2);
    uVar28 = uVar42;
    if (uVar27 <= uVar42) {
      uVar28 = uVar27;
    }
    pvVar2 = (void *)((long)__s + uVar28 * 4);
    uVar27 = uVar42 - uVar28;
    if (__s < pvVar2) {
      memset(__s,0,uVar28 * 4);
      uVar28 = uVar28 * 4 - 1;
      uVar39 = ((uint)(uVar28 >> 2) & 0x3fffffff) + 1;
      if ((uVar39 & 7) != 0) {
        lVar31 = -((ulong)uVar39 & 7);
        do {
          pvVar41 = (void *)((long)pvVar41 + 4);
          bVar22 = lVar31 != -1;
          lVar31 = lVar31 + 1;
        } while (bVar22);
      }
      if (0x1b < uVar28) {
        do {
          pvVar41 = (void *)((long)pvVar41 + 0x20);
        } while (pvVar41 < pvVar2);
      }
    }
    else {
    }
  }
  if ((3 < uVar27) && (0 < (long)(uVar27 & 0xfffffffffffffffc))) {
    pvVar2 = (void *)((long)pvVar41 + (uVar27 & 0xfffffffffffffffc) * 4);
    pvVar6 = pvVar2;
    if (pvVar2 <= (void *)((long)pvVar41 + 0x10U)) {
      pvVar6 = (void *)((long)pvVar41 + 0x10U);
    }
    memset(pvVar41,0,(long)pvVar6 + ~(ulong)pvVar41 + 0x10 & 0xfffffffffffffff0);
    do {
      pvVar41 = (void *)((long)pvVar41 + 0x10);
    } while (pvVar41 < pvVar2);
  }
  if (pvVar41 < (void *)((long)__s + (long)iVar75 * 4)) {
    memset(pvVar41,0,(long)__s + ~(ulong)pvVar41 + uVar42 * 4 + 4 & 0xfffffffffffffffc);
  }
  local_108 = 0;
  local_100 = 0x8000000000000000;
  lVar31 = tpidr_el0;
  lVar29 = *(long *)(lVar31 + 0x1000b8);
  if (lVar29 == 0) {
    lVar29 = FUN_00e5d3b4();
    *(long *)(lVar31 + 0x1000b8) = lVar29;
  }
  local_f8 = *(long *)(*(long *)(lVar29 + 0x3d0) + 0x10);
  if (*(long *)(local_f8 + 8) == 0) {
    local_e8 = 0x1000;
    local_170 = 0x1000;
    if (local_f8 == 0) goto LAB_0306efe4;
    local_130 = 0x1000;
    if (*(ulong *)(local_f8 + 0x28) < 0x1000) {
LAB_0306ef9c:
      local_f0 = FUN_031cf3b4(local_f8,&local_130);
    }
    else {
      local_f0 = *(long *)(local_f8 + 0x38);
      if (*(ulong *)(local_f8 + 0x40) < local_f0 + 0x1000U) goto LAB_0306ef9c;
      *(ulong *)(local_f8 + 0x38) = local_f0 + 0x1000U;
    }
  }
  else {
    local_f8 = 0;
LAB_0306efe4:
    local_e8 = 0x1000;
    local_170 = 0x1000;
    local_f0 = (**(code **)PTR_DAT_047d1a08)(1,&local_170,0x40);
  }
  local_100 = CONCAT44(0x80000080,(int)local_100);
  local_130 = 0;
  local_128 = 0x8000000000000000;
  lVar29 = *(long *)(lVar31 + 0x1000b8);
  local_108 = local_f0;
  if (lVar29 == 0) {
    lVar29 = FUN_00e5d3b4();
    *(long *)(lVar31 + 0x1000b8) = lVar29;
  }
  local_120 = *(long *)(*(long *)(lVar29 + 0x3d0) + 0x10);
  if (*(long *)(local_120 + 8) != 0) {
    local_120 = 0;
  }
  local_150 = -(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5;
  local_110 = local_150;
  if (local_120 == 0) {
    local_118 = (**(code **)PTR_DAT_047d1a08)(1,&local_150,0x40);
  }
  else {
    local_170 = local_150 + 0x3f & 0xffffffffffffffc0;
    if (local_170 <= *(ulong *)(local_120 + 0x28)) {
      local_118 = *(long *)(local_120 + 0x38);
      if (local_170 + local_118 <= *(ulong *)(local_120 + 0x40)) {
        *(ulong *)(local_120 + 0x38) = local_170 + local_118;
        goto LAB_0306f0bc;
      }
    }
    local_118 = FUN_031cf3b4(local_120,&local_170);
  }
LAB_0306f0bc:
  local_128 = CONCAT44(uVar1,(int)local_128) | 0x8000000000000000;
  lVar29 = (param_4 >> 0x16 & 0x3ff) * 0x100;
  fVar11 = *(float *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + lVar29) + 0x20) +
                               0x68) + 0xb0);
  uStack_138 = CONCAT44(fVar11,fVar11);
  fVar110 = (float)*param_9 - fVar11;
  local_140 = CONCAT44((float)((ulong)*param_9 >> 0x20) - fVar11,fVar110);
  local_130 = local_118;
  FUN_0306a200(param_1,param_2,param_4 & 0xffffffff,param_5);
  uVar109 = NEON_fmov(0x3f800000,4);
  fVar71 = (float)local_e0;
  fVar78 = fVar71 * *param_3;
  fVar74 = (float)((ulong)local_e0 >> 0x20);
  fVar82 = fVar74 * param_3[1];
  fVar76 = (float)CONCAT71(uStack_d7,uStack_d8);
  fVar83 = fVar76 * param_3[2];
  fVar79 = fVar78 + fVar82 + fVar83;
  fVar83 = fVar78 + fVar82 + fVar83;
  uVar112 = *param_9;
  iVar23 = (int)local_100;
  uVar42 = local_100 & 0xffffffff;
  fVar78 = (float)((uint7)uStack_d7 >> 0x18);
  fVar82 = *param_3 - fVar71 * fVar79;
  fVar73 = param_3[1] - fVar74 * fVar83;
  fVar79 = param_3[2] - fVar76 * fVar79;
  fVar83 = param_3[3] - fVar78 * fVar83;
  if (0 < (int)local_100) {
    pfVar30 = (float *)(local_108 + 0x10);
    do {
      fVar91 = pfVar30[-4] - *pfVar30;
      fVar93 = pfVar30[-3] - pfVar30[1];
      fVar94 = pfVar30[-2] - pfVar30[2];
      fVar84 = pfVar30[-4] - fVar82;
      fVar87 = pfVar30[-3] - fVar73;
      fVar89 = pfVar30[-2] - fVar79;
      fVar95 = fVar84 * fVar91;
      fVar98 = fVar87 * fVar93;
      fVar100 = fVar89 * fVar94;
      uVar16 = NEON_fminnm(CONCAT44((fVar95 + fVar98 + fVar100) /
                                    (fVar91 * fVar91 + fVar93 * fVar93 + fVar94 * fVar94),
                                    (fVar95 + fVar98 + fVar100) /
                                    (fVar91 * fVar91 + fVar93 * fVar93 + fVar94 * fVar94)),uVar109,4
                          );
      uVar16 = NEON_fmax(uVar16,0,4);
      fVar95 = (float)((ulong)uVar16 >> 0x20);
      fVar84 = fVar84 - fVar91 * (float)uVar16;
      fVar87 = fVar87 - fVar93 * fVar95;
      fVar89 = fVar89 - fVar94 * (float)uVar16;
      fVar91 = (pfVar30[-1] - fVar83) - (pfVar30[-1] - pfVar30[3]) * fVar95;
      auVar80._0_4_ = fVar84 * fVar84;
      auVar80._4_4_ = fVar87 * fVar87;
      auVar80._8_4_ = fVar89 * fVar89;
      auVar80._12_4_ = fVar91 * fVar91;
      auVar92 = NEON_ext(auVar80,auVar80,8,1);
      if (!(bool)(~(auVar80._0_4_ + auVar80._4_4_ + auVar92._0_4_ < fVar110 * fVar110) & 1))
      goto LAB_0306fe04;
      uVar42 = uVar42 - 1;
      pfVar30 = pfVar30 + 8;
    } while (uVar42 != 0);
  }
  sVar10 = *(short *)(param_5 + 10);
  lVar37 = (long)(int)local_128;
  lVar29 = *(long *)(*(long *)(param_1 + 0x38) + lVar29);
  uVar1 = (int)local_128 + sVar10;
  local_128 = CONCAT44(local_128._4_4_,uVar1);
  if (sVar10 != 0) {
    lVar34 = (long)*(int *)(param_5 + 4);
    lVar38 = lVar34 * 0x14;
    uVar39 = (uint)*(short *)(param_5 + 8);
    lVar32 = 0;
    uVar42 = (ulong)(uint)(int)sVar10;
    puVar33 = (undefined8 *)(local_130 + lVar37 * 0x20 + 0x10);
    lVar37 = lVar34;
    do {
      lVar25 = *(long *)(lVar29 + 0x20);
      if (lVar37 < *(int *)(lVar25 + 0x30)) {
        if (*(int *)(lVar25 + 0x78) == 0) {
          iVar75 = (int)lVar37;
        }
        else {
          iVar75 = *(int *)(*(long *)(lVar25 + 0x70) + lVar37 * 4);
        }
        if (iVar75 == -1) {
          piVar26 = (int *)(*(long *)(lVar25 + 0x28) + (lVar32 + lVar34) * 0x14);
        }
        else {
          piVar26 = (int *)(*(long *)(lVar25 + 0xc0) + (long)iVar75 * 0x14);
        }
      }
      else {
        piVar26 = (int *)(*(long *)(lVar25 + 0xe0) + (long)*(int *)(lVar25 + 0x30) * -0x14 + lVar38)
        ;
      }
      iVar136 = *(int *)(lVar25 + 0x40);
      lVar32 = lVar32 + 1;
      lVar38 = lVar38 + 0x14;
      iVar75 = *piVar26;
      iVar77 = piVar26[1];
      lVar7 = 0x38;
      if (iVar136 <= iVar75) {
        lVar7 = 0xf0;
      }
      iVar4 = 0;
      if (iVar136 <= iVar75) {
        iVar4 = iVar136;
      }
      lVar8 = 0x38;
      if (iVar136 <= iVar77) {
        lVar8 = 0xf0;
      }
      iVar5 = 0;
      if (iVar136 <= iVar77) {
        iVar5 = iVar136;
      }
      pfVar30 = (float *)(*(long *)(lVar25 + lVar8) + (long)(iVar77 - iVar5) * 0x10);
      fVar110 = *pfVar30;
      fVar84 = pfVar30[1];
      fVar87 = pfVar30[2];
      pfVar30 = (float *)(*(long *)(lVar25 + lVar7) + (long)(iVar75 - iVar4) * 0x10);
      fVar89 = *pfVar30;
      fVar91 = pfVar30[1];
      fVar93 = pfVar30[2];
      uVar40 = uVar39 | 0x3f010000;
      uVar39 = uVar39 + 1;
      lVar37 = lVar37 + 1;
      uVar42 = uVar42 - 1;
      auVar80 = *(undefined1 (*) [16])(lVar29 + 0x90);
      fVar94 = auVar80._0_4_ +
               *(float *)(lVar29 + 0x80) * fVar87 +
               *(float *)(lVar29 + 0x60) * fVar110 + *(float *)(lVar29 + 0x70) * fVar84;
      fVar95 = auVar80._4_4_ +
               *(float *)(lVar29 + 0x84) * fVar87 +
               *(float *)(lVar29 + 100) * fVar110 + *(float *)(lVar29 + 0x74) * fVar84;
      fVar110 = auVar80._8_4_ +
                *(float *)(lVar29 + 0x88) * fVar87 +
                *(float *)(lVar29 + 0x68) * fVar110 + *(float *)(lVar29 + 0x78) * fVar84;
      fVar84 = auVar80._0_4_ +
               *(float *)(lVar29 + 0x80) * fVar93 +
               *(float *)(lVar29 + 0x60) * fVar89 + *(float *)(lVar29 + 0x70) * fVar91;
      fVar87 = auVar80._4_4_ +
               *(float *)(lVar29 + 0x84) * fVar93 +
               *(float *)(lVar29 + 100) * fVar89 + *(float *)(lVar29 + 0x74) * fVar91;
      fVar98 = auVar80._8_4_ +
               *(float *)(lVar29 + 0x88) * fVar93 +
               *(float *)(lVar29 + 0x68) * fVar89 + *(float *)(lVar29 + 0x78) * fVar91;
      fVar100 = fVar71 * fVar94;
      fVar88 = fVar74 * fVar95;
      fVar90 = fVar76 * fVar110;
      fVar96 = fVar71 * fVar84;
      fVar99 = fVar74 * fVar87;
      fVar101 = fVar76 * fVar98;
      fVar85 = fVar100 + fVar88 + fVar90;
      fVar97 = fVar96 + fVar99 + fVar101;
      fVar101 = fVar96 + fVar99 + fVar101;
      auVar92._0_8_ =
           CONCAT44(fVar95 - fVar74 * (fVar100 + fVar88 + fVar90),fVar94 - fVar71 * fVar85);
      auVar92._8_4_ = fVar110 - fVar76 * fVar85;
      auVar92._12_4_ = uVar40;
      puVar33[-1] = CONCAT44((auVar80._12_4_ +
                             *(float *)(lVar29 + 0x8c) * fVar93 +
                             *(float *)(lVar29 + 0x6c) * fVar89 + *(float *)(lVar29 + 0x7c) * fVar91
                             ) - fVar78 * fVar101,fVar98 - fVar76 * fVar97);
      puVar33[-2] = CONCAT44(fVar87 - fVar74 * fVar101,fVar84 - fVar71 * fVar97);
      puVar33[1] = auVar92._8_8_;
      *puVar33 = auVar92._0_8_;
      puVar33 = puVar33 + 4;
    } while (uVar42 != 0);
  }
  lVar29 = *(long *)(lVar31 + 0x1000b8);
  if (lVar29 == 0) {
    lVar29 = FUN_00e5d3b4();
    *(long *)(lVar31 + 0x1000b8) = lVar29;
  }
  lVar29 = *(long *)(*(long *)(lVar29 + 0x3d0) + 0x10);
  if (*(long *)(lVar29 + 8) == 0) {
    uVar42 = (long)iVar23 * 0x20;
    local_180 = uVar42;
    if (lVar29 == 0) goto LAB_0306f45c;
    local_170 = uVar42 + 0x3f & 0xffffffffffffffc0;
    if (*(ulong *)(lVar29 + 0x28) < local_170) {
LAB_0306f3e4:
      lVar37 = FUN_031cf3b4(lVar29,&local_170);
    }
    else {
      lVar37 = *(long *)(lVar29 + 0x38);
      if (*(ulong *)(lVar29 + 0x40) < local_170 + lVar37) goto LAB_0306f3e4;
      *(ulong *)(lVar29 + 0x38) = local_170 + lVar37;
    }
  }
  else {
    local_180 = (long)iVar23 << 5;
LAB_0306f45c:
    uVar42 = local_180;
    lVar37 = (**(code **)PTR_DAT_047d1a08)(1,&local_180,0x40);
    lVar29 = 0;
  }
  lVar32 = *(long *)(lVar31 + 0x1000b8);
  if (lVar32 == 0) {
    lVar32 = FUN_00e5d3b4();
    *(long *)(lVar31 + 0x1000b8) = lVar32;
  }
  local_240 = *(long *)(*(long *)(lVar32 + 0x3d0) + 0x10);
  local_180 = uVar42;
  if ((*(long *)(local_240 + 8) == 0) && (local_240 != 0)) {
    local_170 = uVar42 + 0x3f & 0xffffffffffffffc0;
    if (local_170 <= *(ulong *)(local_240 + 0x28)) {
      lVar31 = *(long *)(local_240 + 0x38);
      if (local_170 + lVar31 <= *(ulong *)(local_240 + 0x40)) {
        *(ulong *)(local_240 + 0x38) = local_170 + lVar31;
        goto LAB_0306f540;
      }
    }
    lVar31 = FUN_031cf3b4(local_240,&local_170);
  }
  else {
    lVar31 = (**(code **)PTR_DAT_047d1a08)(1,&local_180,0x40);
    local_240 = 0;
  }
LAB_0306f540:
  puVar21 = PTR_DAT_047d19e0;
  uVar20 = _UNK_03caad18;
  uVar16 = _DAT_03caad10;
  local_1b0 = (float)uVar112;
  if (0 < (int)uVar1) {
    uVar27 = 0;
    do {
      puVar3 = (ulong *)(local_130 + uVar27 * 0x20);
      fStack_188 = *(float *)(puVar3 + 3);
      uStack_168 = puVar3[1];
      local_190 = puVar3[2];
      local_170 = *puVar3;
      local_178 = puVar3[1];
      uVar9 = *(ushort *)((long)puVar3 + 0x1c);
      uStack_182 = *(undefined2 *)((long)puVar3 + 0x1e);
      local_180 = *puVar3;
      uStack_184 = uVar9;
      local_160 = local_190;
      local_158 = fStack_188;
      iVar23 = FUN_03070100(&local_180,&local_190,param_9,&uStack_138,&local_e0,&local_108,
                            &local_194,param_11 + 0x58);
      if (iVar23 != 0) {
        auVar102 = SUB1612(ZEXT816(0),0);
        fVar71 = (float)local_180 + ((float)local_190 - (float)local_180) * local_194;
        fVar74 = local_180._4_4_ + ((float)(local_190 >> 0x20) - local_180._4_4_) * local_194;
        fVar76 = (float)local_178 + (fStack_188 - (float)local_178) * local_194;
        fVar78 = local_178._4_4_ +
                 ((float)(CONCAT26(uStack_182,CONCAT24(uStack_184,fStack_188)) >> 0x20) -
                 local_178._4_4_) * local_194;
        auVar130._0_4_ = fVar82 - fVar71;
        auVar130._4_4_ = fVar73 - fVar74;
        auVar130._8_4_ = fVar79 - fVar76;
        auVar130._12_4_ = fVar83 - fVar78;
        uVar44 = (undefined1)((uint7)uStack_d7 >> 8);
        uVar46 = (undefined1)((uint7)uStack_d7 >> 0x10);
        uVar48 = (undefined1)((uint7)uStack_d7 >> 0x18);
        uVar50 = (undefined1)((uint7)uStack_d7 >> 0x20);
        uVar52 = (undefined1)((uint7)uStack_d7 >> 0x28);
        uVar54 = (undefined1)((uint7)uStack_d7 >> 0x30);
        auVar115[8] = uStack_d8;
        auVar115._0_8_ = local_e0;
        auVar81[8] = uStack_d8;
        auVar81._0_8_ = local_e0;
        auVar81[9] = (char)uStack_d7;
        auVar81[10] = uVar44;
        auVar81[0xb] = uVar46;
        auVar81[0xc] = uVar48;
        auVar81[0xd] = uVar50;
        auVar81[0xe] = uVar52;
        auVar81[0xf] = uVar54;
        auVar115[9] = (char)uStack_d7;
        auVar115[10] = uVar44;
        auVar115[0xb] = uVar46;
        auVar115[0xc] = uVar48;
        auVar115[0xd] = uVar50;
        auVar115[0xe] = uVar52;
        auVar115[0xf] = uVar54;
        auVar80 = NEON_ext(auVar81,auVar115,8,1);
        uVar112 = NEON_ext(local_e0,auVar80._0_8_,4,1);
        auVar80 = NEON_ext(auVar130,auVar130,4,1);
        fVar110 = (float)((ulong)local_e0 >> 0x20);
        auVar104._0_4_ = (float)local_e0 * auVar80._0_4_ - auVar130._0_4_ * (float)uVar112;
        auVar104._4_4_ = fVar110 * auVar80._4_4_ - auVar130._4_4_ * (float)((ulong)uVar112 >> 0x20);
        auVar104._8_4_ =
             (float)CONCAT71(uStack_d7,uStack_d8) * auVar130._0_4_ -
             auVar130._8_4_ * (float)local_e0;
        auVar104._12_4_ =
             (float)((uint7)uStack_d7 >> 0x18) * auVar130._4_4_ - auVar130._12_4_ * fVar110;
        auVar80 = NEON_ext(auVar104,auVar104,4,1);
        fVar110 = auVar80._0_4_;
        fVar84 = auVar80._4_4_;
        fVar87 = fVar110 * fVar110 + fVar84 * fVar84 + auVar104._0_4_ * auVar104._0_4_;
        if (fVar87 != 0.0) {
          fVar87 = SQRT(fVar87);
          auVar102._0_4_ = fVar110 / fVar87;
          auVar102._4_4_ =
               fVar84 / SQRT(fVar110 * fVar110 + fVar84 * fVar84 + auVar104._0_4_ * auVar104._0_4_);
          auVar102._8_4_ = auVar104._0_4_ / fVar87;
        }
        fVar84 = auVar130._0_4_ * auVar130._0_4_ + auVar130._4_4_ * auVar130._4_4_ +
                 auVar130._8_4_ * auVar130._8_4_;
        fVar110 = auVar130._0_4_ * auVar130._0_4_ + auVar130._4_4_ * auVar130._4_4_ +
                  auVar130._8_4_ * auVar130._8_4_;
        lVar32 = nn::os::GetSystemTick();
        fVar87 = (float)uVar109;
        fVar110 = (float)(CONCAT17((char)((uint)fVar110 >> 0x18),
                                   CONCAT16((char)((uint)fVar110 >> 0x10),
                                            CONCAT15((char)((uint)fVar110 >> 8),
                                                     CONCAT14(SUB41(fVar110,0),fVar84)))) >> 0x20);
        if ((int)local_100 < 1) {
          uVar39 = 0;
          uVar40 = 0;
        }
        else {
          lVar38 = 0;
          uVar39 = 0;
          iVar23 = -(uint)(fVar84 == 0.0);
          iVar75 = -(uint)(fVar110 == 0.0);
          iVar77 = -(uint)(fVar84 == 0.0);
          fVar89 = auVar130._0_4_ / fVar84;
          fVar91 = auVar130._4_4_ / fVar110;
          fVar93 = auVar130._8_4_ / fVar84;
          bVar43 = SUB41(fVar89,0) & ~(byte)iVar23;
          bVar45 = (byte)((uint)fVar89 >> 8) & ~(byte)((uint)iVar23 >> 8);
          bVar47 = (byte)((uint)fVar89 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
          bVar49 = (byte)((uint)fVar89 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
          bVar51 = SUB41(fVar91,0) & ~(byte)iVar75;
          bVar53 = (byte)((uint)fVar91 >> 8) & ~(byte)((uint)iVar75 >> 8);
          bVar55 = (byte)((uint)fVar91 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10);
          bVar57 = (byte)((uint)fVar91 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18);
          bVar59 = SUB41(fVar93,0) & ~(byte)iVar77;
          bVar61 = (byte)((uint)fVar93 >> 8) & ~(byte)((uint)iVar77 >> 8);
          bVar63 = (byte)((uint)fVar93 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
          bVar65 = (byte)((uint)fVar93 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
          uVar40 = 0;
          fVar89 = -(fVar71 * (float)CONCAT13(bVar49,CONCAT12(bVar47,CONCAT11(bVar45,bVar43))) +
                     fVar74 * (float)CONCAT13(bVar57,CONCAT12(bVar55,CONCAT11(bVar53,bVar51))) +
                    fVar76 * (float)CONCAT13(bVar65,CONCAT12(bVar63,CONCAT11(bVar61,bVar59))));
          fVar93 = auVar102._0_4_;
          fVar94 = auVar102._4_4_;
          fVar95 = auVar102._8_4_;
          fVar91 = -(fVar71 * fVar93 + fVar74 * fVar94 + fVar76 * fVar95);
          auVar114._12_4_ = fVar91;
          auVar114._0_12_ = auVar102;
          auVar86._0_4_ = (float)local_150 * fVar93;
          auVar86._4_4_ = local_150._4_4_ * fVar94;
          auVar86._8_4_ = fStack_148 * fVar95;
          auVar86._12_4_ = fStack_144 * fVar91;
          auVar92 = NEON_ext(auVar86,auVar86,8,1);
          auVar107._8_8_ = uVar20;
          auVar107._0_8_ = uVar16;
          auVar80 = a64_TBL(ZEXT816(0),auVar114,auVar107);
          auVar106[1] = bVar45;
          auVar106[0] = bVar43;
          auVar106[2] = bVar47;
          auVar106[3] = bVar49;
          auVar106[4] = bVar51;
          auVar106[5] = bVar53;
          auVar106[6] = bVar55;
          auVar106[7] = bVar57;
          auVar106[8] = bVar59;
          auVar106[9] = bVar61;
          auVar106[10] = bVar63;
          auVar106[0xb] = bVar65;
          auVar106[0xc] = SUB41(fVar89,0);
          auVar106[0xd] = (char)((uint)fVar89 >> 8);
          auVar106[0xe] = (char)((uint)fVar89 >> 0x10);
          auVar106[0xf] = (char)((uint)fVar89 >> 0x18);
          auVar81 = a64_TBL(ZEXT816(0),auVar106,auVar107);
          do {
            puVar33 = (undefined8 *)(local_108 + lVar38);
            fVar100 = (float)puVar33[1];
            fVar85 = (float)((ulong)puVar33[1] >> 0x20);
            uVar112 = *puVar33;
            fVar98 = (float)((ulong)uVar112 >> 0x20);
            auVar115 = *(undefined1 (*) [16])(puVar33 + 2);
            auVar105._0_4_ = fVar93 * auVar115._0_4_;
            auVar105._4_4_ = fVar94 * auVar115._4_4_;
            auVar105._8_4_ = fVar95 * auVar115._8_4_;
            auVar105._12_4_ = fVar91 * auVar115._12_4_;
            auVar116._0_4_ =
                 (float)CONCAT13(bVar49,CONCAT12(bVar47,CONCAT11(bVar45,bVar43))) * auVar115._0_4_;
            auVar116._4_4_ =
                 (float)CONCAT13(bVar57,CONCAT12(bVar55,CONCAT11(bVar53,bVar51))) * auVar115._4_4_;
            auVar116._8_4_ =
                 (float)CONCAT13(bVar65,CONCAT12(bVar63,CONCAT11(bVar61,bVar59))) * auVar115._8_4_;
            auVar116._12_4_ = fVar89 * auVar115._12_4_;
            auVar103._0_4_ = fVar93 * (float)uVar112;
            auVar103._4_4_ = fVar94 * fVar98;
            auVar103._8_4_ = fVar95 * fVar100;
            auVar103._12_4_ = fVar91 * fVar85;
            auVar113._0_4_ =
                 (float)CONCAT13(bVar49,CONCAT12(bVar47,CONCAT11(bVar45,bVar43))) * (float)uVar112;
            auVar113._4_4_ =
                 (float)CONCAT13(bVar57,CONCAT12(bVar55,CONCAT11(bVar53,bVar51))) * fVar98;
            auVar113._8_4_ =
                 (float)CONCAT13(bVar65,CONCAT12(bVar63,CONCAT11(bVar61,bVar59))) * fVar100;
            auVar113._12_4_ = fVar89 * fVar85;
            auVar104 = NEON_ext(auVar103,auVar103,8,1);
            auVar106 = NEON_ext(auVar105,auVar105,8,1);
            auVar114 = NEON_ext(auVar113,auVar113,8,1);
            auVar117 = NEON_ext(auVar116,auVar116,8,1);
            auVar107 = auVar81 ^ (auVar81 ^ auVar80) & *(undefined1 (*) [16])(puVar21 + 0x30);
            auVar120._0_4_ = auVar104._0_4_ + auVar103._0_4_ + auVar103._4_4_ + auVar107._0_4_;
            auVar120._4_4_ = auVar106._0_4_ + auVar105._0_4_ + auVar105._4_4_ + auVar107._4_4_;
            auVar120._8_4_ = auVar114._0_4_ + auVar113._0_4_ + auVar113._4_4_ + auVar107._8_4_;
            auVar120._12_4_ = auVar117._0_4_ + auVar116._0_4_ + auVar116._4_4_ + auVar107._12_4_;
            auVar104 = NEON_rev64(auVar120,4);
            uVar28 = CONCAT44(-(uint)(auVar120._12_4_ < auVar120._8_4_),
                              -(uint)(auVar120._12_4_ < auVar120._8_4_)) & 0x100000001;
            iVar23 = (int)uVar28;
            iVar75 = (int)(uVar28 >> 0x20);
            auVar117._0_8_ = CONCAT44((iVar75 << 0x1f) >> 0x1f,(iVar23 << 0x1f) >> 0x1f);
            auVar117._8_4_ = (iVar23 << 0x1f) >> 0x1f;
            auVar117._12_4_ = (iVar75 << 0x1f) >> 0x1f;
            auVar119._8_8_ = auVar117._8_8_;
            auVar119._0_8_ = auVar117._0_8_;
            auVar120 = auVar120 ^ (auVar120 ^ auVar104) & auVar119;
            fVar85 = auVar120._4_4_;
            uVar28 = CONCAT44(fVar85,fVar85);
            fVar88 = auVar120._12_4_;
            fVar98 = fVar85;
            if (0.0 <= fVar88) {
              fVar90 = auVar120._8_4_;
              fVar98 = auVar120._0_4_;
              uVar35 = CONCAT44(fVar98,fVar98);
              if (fVar90 <= 1.0) {
                iVar23 = -(uint)(fVar88 - fVar90 == 0.0);
                fVar96 = (float)((uint)(fVar87 / (fVar88 - fVar90)) &
                                CONCAT13(~(byte)((uint)iVar23 >> 0x18),
                                         CONCAT12(~(byte)((uint)iVar23 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar23 >> 8),~(byte)iVar23)
                                                 )));
                if (fVar90 < 0.0) {
                  uVar35 = (ulong)(uint)(fVar98 - (fVar85 - fVar98) * fVar96 * fVar90);
                }
                if (1.0 < fVar88) {
                  uVar28 = (ulong)(uint)(fVar98 + (fVar85 - fVar98) * (fVar87 - fVar90) * fVar96);
                }
                uVar36 = uVar35 & 0x7fffffff7fffffff;
                uVar111 = -(uint)((float)(uVar28 & 0x7fffffff7fffffff) < (float)uVar36);
                uVar36 = uVar36 ^ (uVar36 ^ uVar28 & 0x7fffffff7fffffff) & (ulong)uVar111;
                fVar98 = (float)CONCAT13((byte)(-(uint)((float)((uint)uVar35 ^
                                                               ((uint)uVar35 ^ (uint)uVar28) &
                                                               ~uVar111) < 0.0) >> 0x18) & 0x80 |
                                         (byte)(uVar36 >> 0x18),(int3)uVar36);
              }
            }
            if (0.0 < (float)((uint)fVar98 ^
                             ((uint)fVar98 ^
                             (uint)(fVar98 - (auVar86._0_4_ + auVar86._4_4_ + auVar92._0_4_ + fVar91
                                             ))) & -(uint)(ABS(fVar98) < local_1b0 * 0.007874016)))
            {
              lVar34 = (long)(int)uVar40;
              uVar40 = uVar40 + 1;
              puVar33 = (undefined8 *)(lVar37 + lVar34 * 0x20);
            }
            else {
              lVar34 = (long)(int)uVar39;
              uVar39 = uVar39 + 1;
              puVar33 = (undefined8 *)(lVar31 + lVar34 * 0x20);
            }
            lVar38 = lVar38 + 0x20;
            puVar33[1] = CONCAT44(ABS(fVar98),fVar100);
            *puVar33 = uVar112;
            puVar33[3] = auVar115._8_8_;
            puVar33[2] = auVar115._0_8_;
          } while ((local_100 & 0xffffffff) * 0x20 != lVar38);
        }
        lVar38 = nn::os::GetSystemTick();
        *(long *)(param_11 + 0x78) = (lVar38 - lVar32) + *(long *)(param_11 + 0x78);
        *(int *)(param_11 + 0x80) = *(int *)(param_11 + 0x80) + 1;
        if (uVar40 - 1 != 0 && 0 < (int)uVar40) {
          FUN_03076680(lVar37,0,uVar40 - 1);
        }
        if (1 < (int)uVar39) {
          FUN_03076680(lVar31,0,uVar39 - 1);
        }
        uVar44 = 0;
        uVar46 = 0;
        uVar48 = 0;
        uVar50 = 0;
        uVar52 = 0;
        uVar54 = 0;
        uVar56 = 0;
        uVar58 = 0;
        uVar60 = 0;
        uVar62 = 0;
        uVar64 = 0;
        uVar66 = 0;
        uVar67 = 0;
        uVar68 = 0;
        uVar69 = 0;
        uVar70 = 0;
        if (fVar84 != 0.0) {
          fVar84 = SQRT(fVar84);
          fVar110 = SQRT(fVar110);
          fVar89 = auVar130._0_4_ / fVar84;
          uVar44 = SUB41(fVar89,0);
          uVar46 = (undefined1)((uint)fVar89 >> 8);
          uVar48 = (undefined1)((uint)fVar89 >> 0x10);
          uVar50 = (undefined1)((uint)fVar89 >> 0x18);
          fVar89 = auVar130._4_4_ / fVar110;
          uVar52 = SUB41(fVar89,0);
          uVar54 = (undefined1)((uint)fVar89 >> 8);
          uVar56 = (undefined1)((uint)fVar89 >> 0x10);
          uVar58 = (undefined1)((uint)fVar89 >> 0x18);
          fVar89 = auVar130._8_4_ / fVar84;
          uVar60 = SUB41(fVar89,0);
          uVar62 = (undefined1)((uint)fVar89 >> 8);
          uVar64 = (undefined1)((uint)fVar89 >> 0x10);
          uVar66 = (undefined1)((uint)fVar89 >> 0x18);
          fVar110 = auVar130._12_4_ /
                    (float)CONCAT13((char)((uint)fVar110 >> 0x18),
                                    CONCAT12((char)((uint)fVar110 >> 0x10),
                                             (short)(CONCAT15((char)((uint)fVar110 >> 8),
                                                              CONCAT14(SUB41(fVar110,0),fVar84)) >>
                                                    0x20)));
          uVar67 = SUB41(fVar110,0);
          uVar68 = (undefined1)((uint)fVar110 >> 8);
          uVar69 = (undefined1)((uint)fVar110 >> 0x10);
          uVar70 = (undefined1)((uint)fVar110 >> 0x18);
        }
        fVar84 = (float)CONCAT13(uVar66,CONCAT12(uVar64,CONCAT11(uVar62,uVar60)));
        fVar110 = (float)CONCAT13(uVar50,CONCAT12(uVar48,CONCAT11(uVar46,uVar44)));
        lVar32 = nn::os::GetSystemTick();
        fStack_1ac = (float)(CONCAT17(uVar58,CONCAT16(uVar56,CONCAT15(uVar54,CONCAT14(uVar52,fVar110
                                                                                     )))) >> 0x20);
        fStack_1a4 = (float)(CONCAT17(uVar70,CONCAT16(uVar69,CONCAT15(uVar68,CONCAT14(uVar67,fVar84)
                                                                     ))) >> 0x20);
        if (((uVar39 != 0) && (uVar40 != 0)) && (0 < (int)uVar40)) {
          fVar71 = fVar71 * fVar110;
          fVar74 = fVar74 * fStack_1ac;
          uVar44 = (undefined1)((uint)fVar74 >> 8);
          uVar46 = (undefined1)((uint)fVar74 >> 0x10);
          uVar48 = (undefined1)((uint)fVar74 >> 0x18);
          fVar76 = fVar76 * fVar84;
          uVar50 = (undefined1)((uint)fVar76 >> 8);
          uVar52 = (undefined1)((uint)fVar76 >> 0x10);
          uVar54 = (undefined1)((uint)fVar76 >> 0x18);
          fVar78 = fVar78 * fStack_1a4;
          uVar56 = (undefined1)((uint)fVar78 >> 8);
          uVar58 = (undefined1)((uint)fVar78 >> 0x10);
          uVar60 = (undefined1)((uint)fVar78 >> 0x18);
          auVar12[4] = SUB41(fVar74,0);
          auVar12._0_4_ = fVar71;
          auVar12[5] = uVar44;
          auVar12[6] = uVar46;
          auVar12[7] = uVar48;
          auVar12[8] = SUB41(fVar76,0);
          auVar12[9] = uVar50;
          auVar12[10] = uVar52;
          auVar12[0xb] = uVar54;
          auVar12[0xc] = SUB41(fVar78,0);
          auVar12[0xd] = uVar56;
          auVar12[0xe] = uVar58;
          auVar12[0xf] = uVar60;
          auVar13[4] = SUB41(fVar74,0);
          auVar13._0_4_ = fVar71;
          auVar13[5] = uVar44;
          auVar13[6] = uVar46;
          auVar13[7] = uVar48;
          auVar13[8] = SUB41(fVar76,0);
          auVar13[9] = uVar50;
          auVar13[10] = uVar52;
          auVar13[0xb] = uVar54;
          auVar13[0xc] = SUB41(fVar78,0);
          auVar13[0xd] = uVar56;
          auVar13[0xe] = uVar58;
          auVar13[0xf] = uVar60;
          auVar80 = NEON_ext(auVar12,auVar13,8,1);
          auVar72._0_4_ = fVar82 * fVar110;
          auVar72._4_4_ = fVar73 * fStack_1ac;
          auVar72._8_4_ = fVar79 * fVar84;
          auVar72._12_4_ = fVar83 * fStack_1a4;
          auVar92 = NEON_ext(auVar72,auVar72,8,1);
          fVar76 = (float)*param_9 - fVar11;
          fVar76 = fVar76 + fVar76;
          uVar28 = 0;
          do {
            auVar81 = *(undefined1 (*) [16])(lVar37 + uVar28 * 0x20);
            fVar78 = auVar81._12_4_;
            if (fVar76 < fVar78) break;
            if (0 < (int)uVar39) {
              lVar38 = lVar37 + uVar28 * 0x20;
              uVar17 = *(undefined8 *)(lVar38 + 0x18);
              uVar112 = *(undefined8 *)(lVar38 + 0x10);
              fVar89 = auVar81._0_4_;
              fVar94 = (float)uVar112 - fVar89;
              fVar91 = auVar81._4_4_;
              fVar95 = (float)((ulong)uVar112 >> 0x20) - fVar91;
              fVar93 = auVar81._8_4_;
              fVar98 = (float)uVar17 - fVar93;
              fVar100 = (float)((ulong)uVar17 >> 0x20) - fVar78;
              auVar14._4_4_ = fVar95;
              auVar14._0_4_ = fVar94;
              auVar14._8_4_ = fVar98;
              auVar14._12_4_ = fVar100;
              auVar15._4_4_ = fVar95;
              auVar15._0_4_ = fVar94;
              auVar15._8_4_ = fVar98;
              auVar15._12_4_ = fVar100;
              auVar81 = NEON_ext(auVar14,auVar15,4,1);
              auVar108._0_4_ = fVar94 * fVar94;
              auVar108._4_4_ = fVar95 * fVar95;
              auVar108._8_4_ = fVar98 * fVar98;
              auVar108._12_4_ = fVar100 * fVar100;
              auVar115 = NEON_ext(auVar108,auVar108,8,1);
              pfVar30 = (float *)(lVar31 + 0x10);
              uVar35 = (ulong)uVar39;
              do {
                auVar104 = *(undefined1 (*) [16])(pfVar30 + -4);
                fVar85 = auVar104._4_4_;
                fVar88 = auVar104._8_4_;
                fVar90 = auVar104._12_4_;
                if (fVar76 < fVar78 + fVar90) break;
                fVar101 = auVar104._0_4_;
                auVar121._0_4_ = *pfVar30 - fVar101;
                auVar121._4_4_ = pfVar30[1] - fVar85;
                auVar121._8_4_ = pfVar30[2] - fVar88;
                auVar121._12_4_ = pfVar30[3] - fVar90;
                auVar104 = NEON_ext(auVar121,auVar121,4,1);
                fVar123 = fVar101 - fVar89;
                fVar125 = fVar85 - fVar91;
                fVar126 = fVar88 - fVar93;
                fVar96 = auVar81._0_4_ * auVar121._0_4_ - fVar94 * auVar104._0_4_;
                fVar97 = auVar81._4_4_ * auVar121._4_4_ - fVar95 * auVar104._4_4_;
                uVar44 = SUB41(fVar97,0);
                uVar46 = (undefined1)((uint)fVar97 >> 8);
                uVar48 = (undefined1)((uint)fVar97 >> 0x10);
                uVar50 = (undefined1)((uint)fVar97 >> 0x18);
                fVar97 = fVar94 * auVar121._8_4_ - fVar98 * auVar121._0_4_;
                fVar99 = fVar95 * auVar121._12_4_ - fVar100 * auVar121._4_4_;
                auVar18[4] = uVar44;
                auVar18._0_4_ = fVar96;
                auVar18[5] = uVar46;
                auVar18[6] = uVar48;
                auVar18[7] = uVar50;
                auVar18._8_4_ = fVar97;
                auVar18._12_4_ = fVar99;
                auVar19[4] = uVar44;
                auVar19._0_4_ = fVar96;
                auVar19[5] = uVar46;
                auVar19[6] = uVar48;
                auVar19[7] = uVar50;
                auVar19._8_4_ = fVar97;
                auVar19._12_4_ = fVar99;
                auVar130 = NEON_ext(auVar18,auVar19,4,1);
                uVar112 = NEON_ext(auVar130._0_8_,
                                   CONCAT17(uVar50,CONCAT16(uVar48,CONCAT15(uVar46,CONCAT14(uVar44,
                                                  fVar96)))),4,1);
                fVar131 = auVar130._0_4_;
                fVar132 = auVar130._4_4_;
                fVar97 = fVar131 * fVar131 + fVar132 * fVar132 + fVar96 * fVar96;
                fVar99 = fVar131 * fVar131 + fVar132 * fVar132 + fVar96 * fVar96;
                iVar23 = -(uint)(fVar97 == 0.0);
                auVar133._0_4_ = fVar94 * fVar123;
                auVar133._4_4_ = fVar95 * fVar125;
                auVar133._8_4_ = fVar98 * fVar126;
                auVar133._12_4_ = fVar100 * (fVar90 - fVar78);
                auVar134._0_4_ = auVar121._0_4_ * auVar121._0_4_;
                auVar134._4_4_ = auVar121._4_4_ * auVar121._4_4_;
                auVar134._8_4_ = auVar121._8_4_ * auVar121._8_4_;
                auVar134._12_4_ = auVar121._12_4_ * auVar121._12_4_;
                uVar128 = CONCAT13(~(byte)((uint)iVar23 >> 0x18),
                                   CONCAT12(~(byte)((uint)iVar23 >> 0x10),
                                            CONCAT11(~(byte)((uint)iVar23 >> 8),~(byte)iVar23)));
                auVar127._0_4_ = auVar104._0_4_ * fVar131 - auVar121._0_4_ * (float)uVar112;
                auVar127._4_4_ =
                     auVar104._4_4_ * fVar132 - auVar121._4_4_ * (float)((ulong)uVar112 >> 0x20);
                auVar127._8_4_ = auVar121._0_4_ * fVar96 - auVar121._8_4_ * fVar131;
                auVar127._12_4_ = auVar121._4_4_ * 0.0 - auVar121._12_4_ * fVar132;
                auVar104 = NEON_ext(auVar127,auVar127,4,1);
                fVar131 = fVar123 * auVar104._0_4_;
                fVar132 = fVar125 * auVar104._4_4_;
                iVar23 = -(uint)(fVar97 == 0.0);
                iVar75 = -(uint)(fVar99 == 0.0);
                auVar124._0_4_ = fVar123 * auVar121._0_4_;
                auVar124._4_4_ = fVar125 * auVar121._4_4_;
                auVar124._8_4_ = fVar126 * auVar121._8_4_;
                auVar124._12_4_ = (fVar90 - fVar78) * auVar121._12_4_;
                auVar130 = NEON_ext(auVar134,auVar134,8,1);
                auVar104 = NEON_ext(auVar124,auVar124,8,1);
                uVar36 = CONCAT44((float)((ulong)uVar109 >> 0x20) / fVar99,fVar87 / fVar97) &
                         CONCAT44(uVar128,uVar128);
                fVar96 = auVar130._0_4_ + auVar134._0_4_ + auVar134._4_4_;
                fVar99 = auVar104._0_4_ + auVar124._0_4_ + auVar124._4_4_;
                uVar112 = NEON_fminnm(CONCAT44((float)(uVar36 >> 0x20) *
                                               (fVar131 + fVar132 + fVar126 * auVar127._0_4_),
                                               (float)uVar36 *
                                               (fVar131 + fVar132 + fVar126 * auVar127._0_4_)),
                                      uVar109,4);
                fVar123 = fVar98 * auVar121._8_4_ +
                          fVar94 * auVar121._0_4_ + fVar95 * auVar121._4_4_;
                fVar125 = fVar98 * auVar121._8_4_ +
                          fVar94 * auVar121._0_4_ + fVar95 * auVar121._4_4_;
                auVar104 = NEON_ext(auVar133,auVar133,8,1);
                fVar97 = auVar115._0_4_ + auVar108._0_4_ + auVar108._4_4_;
                fVar131 = auVar104._0_4_ + auVar133._0_4_ + auVar133._4_4_;
                auVar104 = NEON_fmov(0x3f800000,4);
                uVar36 = NEON_fmax(uVar112,0,4);
                iVar77 = -(uint)(fVar97 == 0.0);
                iVar136 = -(uint)(fVar96 == 0.0);
                fVar97 = auVar104._0_4_ / fVar97;
                fVar96 = auVar104._8_4_ / fVar96;
                fVar126 = (float)CONCAT13((byte)((uint)fVar97 >> 0x18) &
                                          ~(byte)((uint)iVar77 >> 0x18),
                                          CONCAT12((byte)((uint)fVar97 >> 0x10) &
                                                   ~(byte)((uint)iVar77 >> 0x10),
                                                   CONCAT11((byte)((uint)fVar97 >> 8) &
                                                            ~(byte)((uint)iVar77 >> 8),
                                                            SUB41(fVar97,0) & ~(byte)iVar77)));
                fVar96 = (float)CONCAT13((byte)((uint)fVar96 >> 0x18) &
                                         ~(byte)((uint)iVar136 >> 0x18),
                                         CONCAT12((byte)((uint)fVar96 >> 0x10) &
                                                  ~(byte)((uint)iVar136 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar96 >> 8) &
                                                           ~(byte)((uint)iVar136 >> 8),
                                                           SUB41(fVar96,0) & ~(byte)iVar136)));
                fVar97 = ((float)uVar36 * fVar123 - fVar99) * fVar96;
                fVar96 = ((float)(uVar36 >> 0x20) * fVar125 - fVar99) * fVar96;
                uVar112 = NEON_fminnm(CONCAT44(fVar96,fVar97),uVar109,4);
                uVar112 = NEON_fmax(uVar112,0,4);
                fVar132 = (float)uVar112;
                fVar135 = (float)((ulong)uVar112 >> 0x20);
                iVar77 = -(uint)(fVar132 == fVar97);
                iVar136 = -(uint)(fVar135 == fVar96);
                uVar112 = NEON_fminnm(CONCAT44((fVar131 + fVar135 * fVar125) * fVar126,
                                               (fVar131 + fVar132 * fVar123) * fVar126),uVar109,4);
                uVar129 = NEON_fmax(uVar112,0,4);
                uVar36 = uVar36 ^ (uVar36 ^ uVar129) &
                                  CONCAT17(~(byte)((uint)iVar136 >> 0x18) |
                                           (byte)((uint)iVar75 >> 0x18),
                                           CONCAT16(~(byte)((uint)iVar136 >> 0x10) |
                                                    (byte)((uint)iVar75 >> 0x10),
                                                    CONCAT15(~(byte)((uint)iVar136 >> 8) |
                                                             (byte)((uint)iVar75 >> 8),
                                                             CONCAT14(~(byte)iVar136 | (byte)iVar75,
                                                                      CONCAT13(~(byte)((uint)iVar77
                                                                                      >> 0x18) |
                                                                               (byte)((uint)iVar23
                                                                                     >> 0x18),
                                                                               CONCAT12(~(byte)((
                                                  uint)iVar77 >> 0x10) |
                                                  (byte)((uint)iVar23 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar77 >> 8) |
                                                           (byte)((uint)iVar23 >> 8),
                                                           ~(byte)iVar77 | (byte)iVar23)))))));
                fVar99 = (float)uVar36;
                fVar125 = (float)(uVar36 >> 0x20);
                fVar96 = fVar89 + fVar94 * fVar99;
                fVar97 = fVar91 + fVar95 * fVar125;
                fVar123 = fVar93 + fVar98 * fVar99;
                fVar125 = fVar78 + fVar100 * fVar125;
                fVar99 = fVar96 - (fVar101 + auVar121._0_4_ * fVar132);
                fVar85 = fVar97 - (fVar85 + auVar121._4_4_ * fVar135);
                fVar88 = fVar123 - (fVar88 + auVar121._8_4_ * fVar132);
                fVar90 = fVar125 - (fVar90 + auVar121._12_4_ * fVar135);
                auVar122._0_4_ = fVar99 * fVar99;
                auVar122._4_4_ = fVar85 * fVar85;
                auVar122._8_4_ = fVar88 * fVar88;
                auVar122._12_4_ = fVar90 * fVar90;
                auVar104 = NEON_ext(auVar122,auVar122,8,1);
                if ((auVar122._0_4_ + auVar122._4_4_ + auVar104._0_4_ < fVar76 * fVar76) &&
                   (auVar118._0_4_ = fVar110 * (fVar96 + fVar99 * -0.5),
                   auVar118._4_4_ = fStack_1ac * (fVar97 + fVar85 * -0.5),
                   auVar118._8_4_ = fVar84 * (fVar123 + fVar88 * -0.5),
                   auVar118._12_4_ = fStack_1a4 * (fVar125 + fVar90 * -0.5),
                   auVar104 = NEON_ext(auVar118,auVar118,8,1),
                   fVar85 = auVar104._0_4_ + auVar118._0_4_ + auVar118._4_4_,
                   !(bool)((~(fVar71 + fVar74 + auVar80._0_4_ < fVar85) |
                           ~(fVar85 < auVar72._0_4_ + auVar72._4_4_ + auVar92._0_4_)) & 1))) {
                  lVar38 = nn::os::GetSystemTick();
                  *(long *)(param_11 + 0x90) = (lVar38 - lVar32) + *(long *)(param_11 + 0x90);
                  *(int *)(param_11 + 0x98) = *(int *)(param_11 + 0x98) + 1;
                  goto LAB_0306fc50;
                }
                uVar35 = uVar35 - 1;
                pfVar30 = pfVar30 + 8;
              } while (uVar35 != 0);
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 != uVar40);
        }
        lVar38 = nn::os::GetSystemTick();
        *(long *)(param_11 + 0x90) = (lVar38 - lVar32) + *(long *)(param_11 + 0x90);
        *(int *)(param_11 + 0x98) = *(int *)(param_11 + 0x98) + 1;
        uVar28 = (ulong)(uVar9 >> 3) & 0x1ffc;
        *(uint *)(*param_10 + uVar28) = *(uint *)(*param_10 + uVar28) | 1 << (ulong)(uVar9 & 0x1f);
      }
LAB_0306fc50:
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar1);
  }
  if (local_240 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar31,uVar42);
joined_r0x0306fdd4:
    if (lVar29 != 0) goto LAB_0306fd34;
LAB_0306fdd8:
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar37,uVar42);
  }
  else {
    uVar27 = uVar42 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_240 + 0x28) < uVar27) || (*(long *)(local_240 + 0x38) != uVar27 + lVar31))
    {
      if (lVar31 != 0) {
        if (*(ulong *)(local_240 + 0x28) < uVar27 + 0x40) {
          *(int *)(*(long *)(local_240 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_240 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_240 + 0x10) + 0x18))
                    (*(long **)(local_240 + 0x10),lVar31 - *(int *)(lVar31 + -4),uVar27 + 0x44);
        }
        else {
          if (*(long *)(local_240 + 0x38) == uVar27 + lVar31) {
            *(long *)(local_240 + 0x38) = lVar31;
            goto LAB_0306fdd0;
          }
          FUN_031cf778(local_240,lVar31);
        }
        goto joined_r0x0306fdd4;
      }
    }
    else {
      *(long *)(local_240 + 0x38) = lVar31;
      if (*(long *)(local_240 + 0x48) == lVar31) {
LAB_0306fdd0:
        FUN_031cf578();
        goto joined_r0x0306fdd4;
      }
    }
    if (lVar29 == 0) goto LAB_0306fdd8;
LAB_0306fd34:
    uVar42 = uVar42 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(lVar29 + 0x28) < uVar42) || (*(long *)(lVar29 + 0x38) != uVar42 + lVar37)) {
      if (lVar37 != 0) {
        if (*(ulong *)(lVar29 + 0x28) < uVar42 + 0x40) {
          *(int *)(*(long *)(lVar29 + 0x30) + 0x20) = *(int *)(*(long *)(lVar29 + 0x30) + 0x20) + -1
          ;
          (**(code **)(**(long **)(lVar29 + 0x10) + 0x18))
                    (*(long **)(lVar29 + 0x10),lVar37 - *(int *)(lVar37 + -4),uVar42 + 0x44);
        }
        else {
          if (*(long *)(lVar29 + 0x38) == uVar42 + lVar37) {
            *(long *)(lVar29 + 0x38) = lVar37;
            goto LAB_0306fdfc;
          }
          FUN_031cf778(lVar29,lVar37);
        }
      }
    }
    else {
      *(long *)(lVar29 + 0x38) = lVar37;
      if (*(long *)(lVar29 + 0x48) == lVar37) {
LAB_0306fdfc:
        FUN_031cf578(lVar29);
      }
    }
  }
LAB_0306fe04:
  lVar31 = local_130;
  if (local_118 == local_130) {
    local_128 = local_128 & 0xffffffff00000000;
  }
  if (local_120 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar42 = local_110 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_120 + 0x28) < uVar42) ||
       (*(long *)(local_120 + 0x38) != uVar42 + local_118)) {
      if (local_118 != 0) {
        if (*(ulong *)(local_120 + 0x28) < uVar42 + 0x40) {
          *(int *)(*(long *)(local_120 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_120 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_120 + 0x10) + 0x18))
                    (*(long **)(local_120 + 0x10),local_118 - *(int *)(local_118 + -4),uVar42 + 0x44
                    );
        }
        else {
          if (*(long *)(local_120 + 0x38) == uVar42 + local_118) {
            *(long *)(local_120 + 0x38) = local_118;
            goto LAB_0306fecc;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(long *)(local_120 + 0x38) = local_118;
      if (*(long *)(local_120 + 0x48) == local_118) {
LAB_0306fecc:
        FUN_031cf578();
      }
    }
  }
  uVar27 = local_128;
  uVar42 = local_128 >> 0x20;
  local_128 = uVar42 << 0x20;
  if ((lVar31 != 0) && (-1 < (long)uVar27)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar31,uVar42 << 5);
  }
  lVar31 = local_108;
  if (local_f0 == local_108) {
    local_100 = local_100 & 0xffffffff00000000;
  }
  if (local_f8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_0306ffc8;
  }
  uVar42 = local_e8 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_f8 + 0x28) < uVar42) || (*(long *)(local_f8 + 0x38) != uVar42 + local_f0)) {
    if (local_f0 == 0) goto LAB_0306ffc8;
    if (*(ulong *)(local_f8 + 0x28) < uVar42 + 0x40) {
      *(int *)(*(long *)(local_f8 + 0x30) + 0x20) = *(int *)(*(long *)(local_f8 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_f8 + 0x10) + 0x18))
                (*(long **)(local_f8 + 0x10),local_f0 - *(int *)(local_f0 + -4),uVar42 + 0x44);
      goto LAB_0306ffc8;
    }
    if (*(long *)(local_f8 + 0x38) != uVar42 + local_f0) {
      FUN_031cf778();
      goto LAB_0306ffc8;
    }
    *(long *)(local_f8 + 0x38) = local_f0;
  }
  else {
    *(long *)(local_f8 + 0x38) = local_f0;
    if (*(long *)(local_f8 + 0x48) != local_f0) goto LAB_0306ffc8;
  }
  FUN_031cf578();
LAB_0306ffc8:
  uVar27 = local_100;
  uVar42 = local_100 >> 0x20;
  local_100 = uVar42 << 0x20;
  if ((lVar31 != 0) && (-1 < (long)uVar27)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar31,uVar42 << 5);
  }
  if ((local_c8 != (long *)0x0) && (local_c0 != '\0')) {
    lVar31 = *local_c8;
    if (((*(byte *)(lVar31 + 0x38) & 1) != 0) && (local_c8[6] != 0)) {
      puVar33 = (undefined8 *)local_c8[2];
      uVar42 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
      if ((uVar42 <= (ulong)local_c8[3]) && (local_c8[2] = uVar42, puVar33 != (undefined8 *)0x0)) {
        *puVar33 = &DAT_03c4e575;
        puVar33[1] = *(undefined8 *)(local_c8[6] + 8);
      }
    }
    puVar33 = (undefined8 *)local_c8[2];
    uVar42 = (long)puVar33 + 0x17U & 0xfffffffffffffff8;
    if ((uVar42 <= (ulong)local_c8[3]) && (local_c8[2] = uVar42, puVar33 != (undefined8 *)0x0)) {
      *puVar33 = &DAT_03c2d363;
      uVar109 = nn::os::GetSystemTick();
      puVar33[1] = uVar109;
    }
    if (*(code **)(lVar31 + 0x20) != (code *)0x0) {
      (**(code **)(lVar31 + 0x20))(*(undefined8 *)(lVar31 + 0x28));
    }
  }
  lVar31 = nn::os::GetSystemTick();
  *(long *)(param_11 + 8) = (lVar31 - lVar24) + *(long *)(param_11 + 8);
  *(int *)(param_11 + 0x10) = *(int *)(param_11 + 0x10) + 1;
  return;
}



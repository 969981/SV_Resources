/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03070780; name: FUN_03070780
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_03070780(long param_1,long *param_2,uint param_3,int *param_4,ulong param_5,int *param_6,
                 undefined8 param_7,undefined8 param_8,undefined8 *param_9,float *param_10,
                 long *param_11,long param_12)

{
  uint uVar1;
  void *pvVar2;
  ulong *puVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  ushort uVar8;
  short sVar9;
  float *pfVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined *puVar24;
  bool bVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  int *piVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  undefined8 *puVar37;
  long lVar38;
  ulong uVar39;
  float *pfVar40;
  ulong uVar41;
  long lVar42;
  long lVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  long lVar47;
  void *__s;
  ulong uVar48;
  void *pvVar49;
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
  byte bVar62;
  undefined1 uVar63;
  byte bVar64;
  undefined1 uVar65;
  byte bVar66;
  undefined1 uVar67;
  byte bVar68;
  undefined1 uVar69;
  byte bVar70;
  undefined1 uVar71;
  byte bVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar82;
  float fVar83;
  int iVar84;
  float fVar85;
  float fVar86;
  int iVar87;
  undefined1 auVar81 [16];
  float fVar88;
  undefined8 uVar89;
  float fVar93;
  float fVar94;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar95;
  float fVar96;
  float fVar98;
  float fVar99;
  undefined1 auVar97 [16];
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  undefined1 auVar108 [12];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined8 uVar116;
  uint uVar117;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar127;
  float fVar128;
  float fVar130;
  float fVar131;
  undefined1 auVar129 [16];
  undefined1 auVar132 [16];
  undefined4 uVar133;
  ulong uVar134;
  undefined1 auVar135 [16];
  float fVar136;
  float fVar137;
  undefined1 auVar138 [16];
  float fVar140;
  int iVar141;
  undefined1 auVar139 [16];
  long *plVar142;
  long *plVar143;
  float fStack_1ac;
  float fStack_1a4;
  float local_194;
  ulong local_190;
  float fStack_188;
  ushort uStack_184;
  undefined2 uStack_182;
  ulong local_180;
  ulong uStack_178;
  ulong local_170;
  float local_168;
  undefined8 local_160;
  undefined8 uStack_158;
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
  
  local_b8[0] = (undefined4)param_5;
  lVar27 = nn::os::GetSystemTick();
  FUN_0306d784(&local_c8,param_1,local_b8);
  local_e0 = *param_9;
  uStack_d8 = (undefined1)param_9[1];
  uStack_d7 = (undefined7)((ulong)param_9[1] >> 8);
  iVar26 = param_6[2];
  sVar9 = *(short *)((long)param_6 + 10);
  __s = (void *)*param_11;
  uVar48 = (ulong)(int)param_11[1];
  pvVar49 = __s;
  if (((ulong)__s & 0xf) == 0) {
    uVar33 = uVar48;
  }
  else {
    uVar33 = 4 - (((ulong)__s & 0xf) >> 2);
    uVar34 = uVar48;
    if (uVar33 <= uVar48) {
      uVar34 = uVar33;
    }
    pvVar2 = (void *)((long)__s + uVar34 * 4);
    uVar33 = uVar48 - uVar34;
    if (__s < pvVar2) {
      memset(__s,0,uVar34 * 4);
      uVar34 = uVar34 * 4 - 1;
      uVar1 = ((uint)(uVar34 >> 2) & 0x3fffffff) + 1;
      if ((uVar1 & 7) != 0) {
        lVar35 = -((ulong)uVar1 & 7);
        do {
          pvVar49 = (void *)((long)pvVar49 + 4);
          bVar25 = lVar35 != -1;
          lVar35 = lVar35 + 1;
        } while (bVar25);
      }
      if (0x1b < uVar34) {
        do {
          pvVar49 = (void *)((long)pvVar49 + 0x20);
        } while (pvVar49 < pvVar2);
      }
    }
    else {
    }
  }
  if ((3 < uVar33) && (0 < (long)(uVar33 & 0xfffffffffffffffc))) {
    pvVar2 = (void *)((long)pvVar49 + (uVar33 & 0xfffffffffffffffc) * 4);
    pvVar5 = pvVar2;
    if (pvVar2 <= (void *)((long)pvVar49 + 0x10U)) {
      pvVar5 = (void *)((long)pvVar49 + 0x10U);
    }
    memset(pvVar49,0,(long)pvVar5 + ~(ulong)pvVar49 + 0x10 & 0xfffffffffffffff0);
    do {
      pvVar49 = (void *)((long)pvVar49 + 0x10);
    } while (pvVar49 < pvVar2);
  }
  if (pvVar49 < (void *)((long)__s + uVar48 * 4)) {
    memset(pvVar49,0,(long)__s + ~(ulong)pvVar49 + uVar48 * 4 + 4 & 0xfffffffffffffffc);
  }
  if (param_2 != (long *)0x0) {
    lVar35 = nn::os::GetSystemTick();
    lVar28 = nn::os::GetSystemTick();
    uVar48 = (**(code **)(*param_2 + 0x20))
                       (param_2,param_1,param_5 & 0xffffffff,param_6,param_7,param_8);
    lVar29 = nn::os::GetSystemTick();
    *(long *)(param_12 + 0x38) = (lVar29 - lVar28) + *(long *)(param_12 + 0x38);
    *(int *)(param_12 + 0x40) = *(int *)(param_12 + 0x40) + 1;
    lVar28 = nn::os::GetSystemTick();
    *(long *)(param_12 + 0x20) = (lVar28 - lVar35) + *(long *)(param_12 + 0x20);
    *(int *)(param_12 + 0x28) = *(int *)(param_12 + 0x28) + 1;
    if ((uVar48 & 1) == 0) goto LAB_03071b44;
  }
  local_108 = 0;
  local_100 = 0x8000000000000000;
  lVar35 = tpidr_el0;
  lVar28 = *(long *)(lVar35 + 0x1000b8);
  if (lVar28 == 0) {
    lVar28 = FUN_00e5d3b4();
    *(long *)(lVar35 + 0x1000b8) = lVar28;
  }
  local_f8 = *(long *)(*(long *)(lVar28 + 0x3d0) + 0x10);
  if (*(long *)(local_f8 + 8) == 0) {
    local_e8 = 0x1000;
    local_180 = 0x1000;
    if (local_f8 == 0) goto LAB_03070a68;
    local_130 = 0x1000;
    if (*(ulong *)(local_f8 + 0x28) < 0x1000) {
LAB_03070a20:
      local_f0 = FUN_031cf3b4(local_f8,&local_130);
    }
    else {
      local_f0 = *(long *)(local_f8 + 0x38);
      if (*(ulong *)(local_f8 + 0x40) < local_f0 + 0x1000U) goto LAB_03070a20;
      *(ulong *)(local_f8 + 0x38) = local_f0 + 0x1000U;
    }
  }
  else {
    local_f8 = 0;
LAB_03070a68:
    local_e8 = 0x1000;
    local_180 = 0x1000;
    local_f0 = (**(code **)PTR_DAT_047d1a08)(1,&local_180,0x40);
  }
  local_100 = CONCAT44(0x80000080,(int)local_100);
  local_130 = 0;
  local_128 = 0x8000000000000000;
  lVar28 = *(long *)(lVar35 + 0x1000b8);
  local_108 = local_f0;
  if (lVar28 == 0) {
    lVar28 = FUN_00e5d3b4();
    *(long *)(lVar35 + 0x1000b8) = lVar28;
  }
  local_120 = *(long *)(*(long *)(lVar28 + 0x3d0) + 0x10);
  uVar1 = (int)sVar9 + (int)(short)iVar26;
  if (*(long *)(local_120 + 8) != 0) {
    local_120 = 0;
  }
  local_150 = -(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5;
  local_110 = local_150;
  if (local_120 == 0) {
    local_118 = (**(code **)PTR_DAT_047d1a08)(1,&local_150,0x40);
  }
  else {
    local_180 = local_150 + 0x3f & 0xffffffffffffffc0;
    if (local_180 <= *(ulong *)(local_120 + 0x28)) {
      local_118 = *(long *)(local_120 + 0x38);
      if (local_180 + local_118 <= *(ulong *)(local_120 + 0x40)) {
        *(ulong *)(local_120 + 0x38) = local_180 + local_118;
        goto LAB_03070b40;
      }
    }
    local_118 = FUN_031cf3b4(local_120,&local_180);
  }
LAB_03070b40:
  lVar47 = (param_5 >> 0x16 & 0x3ff) * 0x100;
  local_128 = CONCAT44(uVar1,(int)local_128) | 0x8000000000000000;
  puVar37 = &local_150;
  fVar11 = *(float *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + lVar47) + 0x20) +
                               0x68) + 0xb0);
  uStack_138 = CONCAT44(fVar11,fVar11);
  lVar28 = param_12 + 0x18;
  fVar14 = (float)((ulong)*(undefined8 *)param_10 >> 0x20) - fVar11;
  plVar143 = &local_130;
  plVar142 = &local_108;
  local_140 = CONCAT17((char)((uint)fVar14 >> 0x18),
                       CONCAT16((char)((uint)fVar14 >> 0x10),
                                CONCAT15((char)((uint)fVar14 >> 8),
                                         CONCAT14(SUB41(fVar14,0),
                                                  (float)*(undefined8 *)param_10 - fVar11))));
  local_130 = local_118;
  FUN_0306a200(param_1,param_2,param_5 & 0xffffffff,param_6);
  lVar36 = *(long *)(param_1 + 0x38);
  sVar9 = *(short *)((long)param_6 + 10);
  lVar42 = (long)(int)local_128;
  uVar1 = (int)local_128 + sVar9;
  lVar29 = *(long *)(lVar36 + (param_5 >> 0xe & 0x3ff00));
  local_128 = CONCAT44(local_128._4_4_,uVar1);
  fVar15 = (float)((uint7)uStack_d7 >> 0x18);
  fVar14 = (float)local_e0;
  fVar79 = (float)((ulong)local_e0 >> 0x20);
  fVar16 = (float)CONCAT71(uStack_d7,uStack_d8);
  if (sVar9 != 0) {
    lVar38 = (long)param_6[1];
    lVar43 = lVar38 * 0x14;
    uVar44 = (uint)(short)param_6[2];
    lVar36 = 0;
    uVar48 = (ulong)(uint)(int)sVar9;
    pfVar40 = (float *)(local_130 + lVar42 * 0x20 + 0x10);
    lVar42 = lVar38;
    do {
      lVar31 = *(long *)(lVar29 + 0x20);
      if (lVar42 < *(int *)(lVar31 + 0x30)) {
        if (*(int *)(lVar31 + 0x78) == 0) {
          iVar26 = (int)lVar42;
        }
        else {
          iVar26 = *(int *)(*(long *)(lVar31 + 0x70) + lVar42 * 4);
        }
        if (iVar26 == -1) {
          piVar32 = (int *)(*(long *)(lVar31 + 0x28) + (lVar36 + lVar38) * 0x14);
        }
        else {
          piVar32 = (int *)(*(long *)(lVar31 + 0xc0) + (long)iVar26 * 0x14);
        }
      }
      else {
        piVar32 = (int *)(*(long *)(lVar31 + 0xe0) + (long)*(int *)(lVar31 + 0x30) * -0x14 + lVar43)
        ;
      }
      iVar87 = *(int *)(lVar31 + 0x40);
      lVar36 = lVar36 + 1;
      lVar43 = lVar43 + 0x14;
      iVar26 = *piVar32;
      iVar84 = piVar32[1];
      fVar94 = (float)*(undefined8 *)(lVar29 + 0x78);
      fVar88 = (float)*(undefined8 *)(lVar29 + 0x70);
      fVar93 = (float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20);
      lVar6 = 0x38;
      if (iVar87 <= iVar26) {
        lVar6 = 0xf0;
      }
      iVar141 = 0;
      if (iVar87 <= iVar26) {
        iVar141 = iVar87;
      }
      lVar7 = 0x38;
      if (iVar87 <= iVar84) {
        lVar7 = 0xf0;
      }
      iVar4 = 0;
      if (iVar87 <= iVar84) {
        iVar4 = iVar87;
      }
      pfVar10 = (float *)(*(long *)(lVar31 + lVar7) + (long)(iVar84 - iVar4) * 0x10);
      fVar85 = *pfVar10;
      fVar95 = pfVar10[1];
      fVar96 = pfVar10[2];
      pfVar10 = (float *)(*(long *)(lVar31 + lVar6) + (long)(iVar26 - iVar141) * 0x10);
      fVar80 = *pfVar10;
      fVar83 = pfVar10[1];
      fVar86 = pfVar10[2];
      fVar102 = (float)(uVar44 | 0x3f010000);
      uVar44 = uVar44 + 1;
      lVar42 = lVar42 + 1;
      uVar48 = uVar48 - 1;
      fVar103 = (float)*(undefined8 *)(lVar29 + 0x88);
      fVar98 = (float)*(undefined8 *)(lVar29 + 0x80);
      fVar99 = (float)((ulong)*(undefined8 *)(lVar29 + 0x80) >> 0x20);
      fVar78 = *(float *)(lVar29 + 0x90) +
               fVar98 * fVar96 + *(float *)(lVar29 + 0x60) * fVar85 + fVar88 * fVar95;
      fVar82 = *(float *)(lVar29 + 0x94) +
               fVar99 * fVar96 + *(float *)(lVar29 + 100) * fVar85 + fVar93 * fVar95;
      fVar85 = *(float *)(lVar29 + 0x98) +
               fVar103 * fVar96 + *(float *)(lVar29 + 0x68) * fVar85 + fVar94 * fVar95;
      fVar88 = *(float *)(lVar29 + 0x90) +
               fVar98 * fVar86 + *(float *)(lVar29 + 0x60) * fVar80 + fVar88 * fVar83;
      fVar93 = *(float *)(lVar29 + 0x94) +
               fVar99 * fVar86 + *(float *)(lVar29 + 100) * fVar80 + fVar93 * fVar83;
      fVar94 = *(float *)(lVar29 + 0x98) +
               fVar103 * fVar86 + *(float *)(lVar29 + 0x68) * fVar80 + fVar94 * fVar83;
      fVar95 = fVar14 * fVar78;
      fVar98 = fVar79 * fVar82;
      fVar99 = fVar16 * fVar85;
      fVar103 = fVar14 * fVar88;
      fVar105 = fVar79 * fVar93;
      fVar107 = fVar16 * fVar94;
      fVar96 = fVar95 + fVar98 + fVar99;
      fVar104 = fVar103 + fVar105 + fVar107;
      fVar107 = fVar103 + fVar105 + fVar107;
      *(ulong *)(pfVar40 + -2) =
           CONCAT44((*(float *)(lVar29 + 0x9c) +
                    (float)((ulong)*(undefined8 *)(lVar29 + 0x88) >> 0x20) * fVar86 +
                    *(float *)(lVar29 + 0x6c) * fVar80 +
                    (float)((ulong)*(undefined8 *)(lVar29 + 0x78) >> 0x20) * fVar83) -
                    fVar15 * fVar107,fVar94 - fVar16 * fVar104);
      *(ulong *)(pfVar40 + -4) = CONCAT44(fVar93 - fVar79 * fVar107,fVar88 - fVar14 * fVar104);
      pfVar40[2] = fVar85 - fVar16 * fVar96;
      pfVar40[3] = fVar102;
      *pfVar40 = fVar78 - fVar14 * fVar96;
      pfVar40[1] = fVar82 - fVar79 * (fVar95 + fVar98 + fVar99);
      pfVar40 = pfVar40 + 8;
    } while (uVar48 != 0);
    lVar36 = *(long *)(param_1 + 0x38);
  }
  lVar29 = *(long *)(lVar36 + lVar47);
  lVar36 = *(long *)(lVar29 + 0x20);
  iVar84 = *param_4;
  iVar87 = param_4[1];
  fVar94 = (float)*(undefined8 *)(lVar29 + 0x78);
  fVar102 = (float)((ulong)*(undefined8 *)(lVar29 + 0x78) >> 0x20);
  fVar88 = (float)*(undefined8 *)(lVar29 + 0x70);
  fVar93 = (float)((ulong)*(undefined8 *)(lVar29 + 0x70) >> 0x20);
  auVar90 = *(undefined1 (*) [16])(lVar29 + 0x80);
  auVar91 = *(undefined1 (*) [16])(lVar29 + 0x90);
  iVar141 = *(int *)(lVar36 + 0x40);
  iVar26 = 0;
  if (iVar141 <= iVar84) {
    iVar26 = iVar141;
  }
  lVar42 = 0x38;
  if (iVar141 <= iVar84) {
    lVar42 = 0xf0;
  }
  lVar47 = 0x38;
  if (iVar141 <= iVar87) {
    lVar47 = 0xf0;
  }
  iVar4 = 0;
  if (iVar141 <= iVar87) {
    iVar4 = iVar141;
  }
  pfVar40 = (float *)(*(long *)(lVar36 + lVar42) + (long)(iVar84 - iVar26) * 0x10);
  fVar96 = *pfVar40;
  fVar80 = pfVar40[1];
  fVar83 = pfVar40[2];
  pfVar40 = (float *)(*(long *)(lVar36 + lVar47) + (long)(iVar87 - iVar4) * 0x10);
  fVar86 = *pfVar40;
  fVar78 = pfVar40[1];
  fVar82 = pfVar40[2];
  fVar85 = auVar91._0_4_ +
           auVar90._0_4_ * fVar83 + *(float *)(lVar29 + 0x60) * fVar96 + fVar88 * fVar80;
  fVar95 = auVar91._4_4_ +
           auVar90._4_4_ * fVar83 + *(float *)(lVar29 + 100) * fVar96 + fVar93 * fVar80;
  fVar98 = auVar91._8_4_ +
           auVar90._8_4_ * fVar83 + *(float *)(lVar29 + 0x68) * fVar96 + fVar94 * fVar80;
  fVar88 = auVar91._0_4_ +
           auVar90._0_4_ * fVar82 + *(float *)(lVar29 + 0x60) * fVar86 + fVar88 * fVar78;
  fVar93 = auVar91._4_4_ +
           auVar90._4_4_ * fVar82 + *(float *)(lVar29 + 100) * fVar86 + fVar93 * fVar78;
  fVar94 = auVar91._8_4_ +
           auVar90._8_4_ * fVar82 + *(float *)(lVar29 + 0x68) * fVar86 + fVar94 * fVar78;
  fVar99 = fVar14 * fVar85;
  fVar104 = fVar79 * fVar95;
  fVar105 = fVar16 * fVar98;
  fVar107 = fVar14 * fVar88;
  fVar100 = fVar79 * fVar93;
  fVar101 = fVar16 * fVar94;
  fVar103 = fVar99 + fVar104 + fVar105;
  fVar105 = fVar99 + fVar104 + fVar105;
  fVar99 = fVar107 + fVar100 + fVar101;
  fVar101 = fVar107 + fVar100 + fVar101;
  fVar85 = fVar85 - fVar14 * fVar103;
  fVar95 = fVar95 - fVar79 * fVar105;
  auVar92._0_8_ = CONCAT44(fVar95,fVar85);
  auVar92._8_4_ = fVar98 - fVar16 * fVar103;
  auVar92._12_4_ =
       (auVar91._12_4_ +
       auVar90._12_4_ * fVar83 + *(float *)(lVar29 + 0x6c) * fVar96 + fVar102 * fVar80) -
       fVar15 * fVar105;
  fVar88 = fVar88 - fVar14 * fVar99;
  fVar93 = fVar93 - fVar79 * fVar101;
  uVar51 = (undefined1)((uint)fVar93 >> 8);
  uVar53 = (undefined1)((uint)fVar93 >> 0x10);
  uVar55 = (undefined1)((uint)fVar93 >> 0x18);
  fVar94 = fVar94 - fVar16 * fVar99;
  fVar14 = (auVar91._12_4_ +
           auVar90._12_4_ * fVar82 + *(float *)(lVar29 + 0x6c) * fVar86 + fVar102 * fVar78) -
           fVar15 * fVar101;
  uVar57 = (undefined1)((uint)fVar14 >> 8);
  uVar59 = (undefined1)((uint)fVar14 >> 0x10);
  uVar61 = (undefined1)((uint)fVar14 >> 0x18);
  uStack_178 = auVar92._8_8_;
  uStack_158 = CONCAT17(uVar61,CONCAT16(uVar59,CONCAT15(uVar57,CONCAT14(SUB41(fVar14,0),fVar94))));
  local_160 = CONCAT17(uVar55,CONCAT16(uVar53,CONCAT15(uVar51,CONCAT14(SUB41(fVar93,0),fVar88))));
  local_180 = auVar92._0_8_;
  iVar26 = FUN_03070100(&local_180,&local_160,param_10,&uStack_138,&local_e0,&local_108,&local_190,
                        param_12 + 0x58,plVar142,plVar143,puVar37,lVar28);
  if (iVar26 != 0) {
    fVar79 = (float)local_190;
    lVar29 = (long)(int)local_100;
    lVar28 = *(long *)(lVar35 + 0x1000b8);
    if (lVar28 == 0) {
      lVar28 = FUN_00e5d3b4();
      *(long *)(lVar35 + 0x1000b8) = lVar28;
    }
    lVar28 = *(long *)(*(long *)(lVar28 + 0x3d0) + 0x10);
    if (*(long *)(lVar28 + 8) == 0) {
      uVar48 = lVar29 * 0x20;
      local_160 = uVar48;
      if (lVar28 == 0) goto LAB_03070f1c;
      local_180 = uVar48 + 0x3f & 0xffffffffffffffc0;
      if (*(ulong *)(lVar28 + 0x28) < local_180) {
LAB_03070ea4:
        lVar29 = FUN_031cf3b4(lVar28,&local_180);
      }
      else {
        lVar29 = *(long *)(lVar28 + 0x38);
        if (*(ulong *)(lVar28 + 0x40) < local_180 + lVar29) goto LAB_03070ea4;
        *(ulong *)(lVar28 + 0x38) = local_180 + lVar29;
      }
    }
    else {
      local_160 = lVar29 << 5;
LAB_03070f1c:
      uVar48 = local_160;
      lVar29 = (**(code **)PTR_DAT_047d1a08)(1,&local_160,0x40);
      lVar28 = 0;
    }
    lVar36 = *(long *)(lVar35 + 0x1000b8);
    if (lVar36 == 0) {
      lVar36 = FUN_00e5d3b4();
      *(long *)(lVar35 + 0x1000b8) = lVar36;
    }
    lVar35 = *(long *)(*(long *)(lVar36 + 0x3d0) + 0x10);
    local_160 = uVar48;
    if ((*(long *)(lVar35 + 8) == 0) && (lVar35 != 0)) {
      local_180 = uVar48 + 0x3f & 0xffffffffffffffc0;
      if (local_180 <= *(ulong *)(lVar35 + 0x28)) {
        lVar36 = *(long *)(lVar35 + 0x38);
        if (local_180 + lVar36 <= *(ulong *)(lVar35 + 0x40)) {
          *(ulong *)(lVar35 + 0x38) = local_180 + lVar36;
          goto LAB_03071004;
        }
      }
      lVar36 = FUN_031cf3b4(lVar35,&local_180);
    }
    else {
      lVar36 = (**(code **)PTR_DAT_047d1a08)(1,&local_160,0x40);
      lVar35 = 0;
    }
LAB_03071004:
    if ((*(byte *)(param_4 + 4) >> 4 & 1) == 0) {
      uVar44 = (param_3 & 0x3fffff) - *param_6;
    }
    else {
      uVar44 = ((param_3 & 0x3fffff) - param_6[1]) + (int)(short)param_6[2];
    }
    *(uint *)(*param_11 + (long)((int)uVar44 >> 5) * 4) =
         *(uint *)(*param_11 + (long)((int)uVar44 >> 5) * 4) | 1 << (ulong)(uVar44 & 0x1f);
    puVar24 = PTR_DAT_047d19e0;
    uVar23 = _UNK_03caad18;
    uVar30 = _DAT_03caad10;
    if (0 < (int)uVar1) {
      fVar85 = fVar85 + (fVar88 - fVar85) * fVar79;
      fVar95 = fVar95 + ((float)(CONCAT17(uVar55,CONCAT16(uVar53,CONCAT15(uVar51,CONCAT14(SUB41(
                                                  fVar93,0),fVar88)))) >> 0x20) - fVar95) * fVar79;
      fVar16 = auVar92._8_4_ + (fVar94 - auVar92._8_4_) * fVar79;
      fVar14 = auVar92._12_4_ +
               ((float)(CONCAT17(uVar61,CONCAT16(uVar59,CONCAT15(uVar57,CONCAT14(SUB41(fVar14,0),
                                                                                 fVar94)))) >> 0x20)
               - auVar92._12_4_) * fVar79;
      fVar79 = *param_10;
      uVar116 = NEON_fmov(0x3f800000,4);
      uVar33 = 0;
      do {
        puVar3 = (ulong *)(local_130 + uVar33 * 0x20);
        local_180 = *puVar3;
        uStack_178 = puVar3[1];
        local_170 = puVar3[2];
        local_168 = *(float *)(puVar3 + 3);
        uVar8 = *(ushort *)((long)puVar3 + 0x1c);
        if (uVar44 != uVar8) {
          uStack_182 = *(undefined2 *)((long)puVar3 + 0x1e);
          local_190 = local_170;
          fStack_188 = local_168;
          uStack_184 = uVar8;
          local_160 = local_180;
          uStack_158 = uStack_178;
          iVar26 = FUN_03070100(&local_160,&local_190,param_10,&uStack_138,&local_e0,&local_108,
                                &local_194,param_12 + 0x58);
          if (iVar26 != 0) {
            auVar108 = SUB1612(ZEXT816(0),0);
            fVar80 = (float)local_160 + ((float)local_190 - (float)local_160) * local_194;
            fVar83 = local_160._4_4_ + ((float)(local_190 >> 0x20) - local_160._4_4_) * local_194;
            fVar86 = (float)uStack_158 + (fStack_188 - (float)uStack_158) * local_194;
            fVar78 = uStack_158._4_4_ +
                     ((float)(CONCAT26(uStack_182,CONCAT24(uStack_184,fStack_188)) >> 0x20) -
                     uStack_158._4_4_) * local_194;
            fVar93 = fVar80 - fVar85;
            fVar15 = (float)(CONCAT17((char)((uint)fVar95 >> 0x18),
                                      CONCAT16((char)((uint)fVar95 >> 0x10),
                                               CONCAT15((char)((uint)fVar95 >> 8),
                                                        CONCAT14(SUB41(fVar95,0),fVar85)))) >> 0x20)
            ;
            fVar94 = fVar83 - fVar15;
            fVar102 = fVar86 - fVar16;
            fVar88 = (float)(CONCAT17((char)((uint)fVar14 >> 0x18),
                                      CONCAT16((char)((uint)fVar14 >> 0x10),
                                               CONCAT15((char)((uint)fVar14 >> 8),
                                                        CONCAT14(SUB41(fVar14,0),fVar16)))) >> 0x20)
            ;
            fVar96 = fVar78 - fVar88;
            uVar51 = (undefined1)((uint7)uStack_d7 >> 8);
            uVar53 = (undefined1)((uint7)uStack_d7 >> 0x10);
            uVar55 = (undefined1)((uint7)uStack_d7 >> 0x18);
            uVar57 = (undefined1)((uint7)uStack_d7 >> 0x20);
            uVar59 = (undefined1)((uint7)uStack_d7 >> 0x28);
            uVar61 = (undefined1)((uint7)uStack_d7 >> 0x30);
            auVar91[8] = uStack_d8;
            auVar91._0_8_ = local_e0;
            auVar90[8] = uStack_d8;
            auVar90._0_8_ = local_e0;
            auVar90[9] = (char)uStack_d7;
            auVar90[10] = uVar51;
            auVar90[0xb] = uVar53;
            auVar90[0xc] = uVar55;
            auVar90[0xd] = uVar57;
            auVar90[0xe] = uVar59;
            auVar90[0xf] = uVar61;
            auVar91[9] = (char)uStack_d7;
            auVar91[10] = uVar51;
            auVar91[0xb] = uVar53;
            auVar91[0xc] = uVar55;
            auVar91[0xd] = uVar57;
            auVar91[0xe] = uVar59;
            auVar91[0xf] = uVar61;
            auVar90 = NEON_ext(auVar90,auVar91,8,1);
            uVar89 = NEON_ext(local_e0,auVar90._0_8_,4,1);
            auVar110._4_4_ = fVar94;
            auVar110._0_4_ = fVar93;
            auVar110._8_4_ = fVar102;
            auVar110._12_4_ = fVar96;
            auVar112._4_4_ = fVar94;
            auVar112._0_4_ = fVar93;
            auVar112._8_4_ = fVar102;
            auVar112._12_4_ = fVar96;
            auVar90 = NEON_ext(auVar110,auVar112,4,1);
            fVar82 = (float)((ulong)local_e0 >> 0x20);
            auVar113._0_4_ = (float)local_e0 * auVar90._0_4_ - fVar93 * (float)uVar89;
            auVar113._4_4_ = fVar82 * auVar90._4_4_ - fVar94 * (float)((ulong)uVar89 >> 0x20);
            auVar113._8_4_ =
                 (float)CONCAT71(uStack_d7,uStack_d8) * fVar93 - fVar102 * (float)local_e0;
            auVar113._12_4_ = (float)((uint7)uStack_d7 >> 0x18) * fVar94 - fVar96 * fVar82;
            auVar90 = NEON_ext(auVar113,auVar113,4,1);
            fVar82 = auVar90._0_4_;
            fVar98 = auVar90._4_4_;
            fVar99 = fVar82 * fVar82 + fVar98 * fVar98 + auVar113._0_4_ * auVar113._0_4_;
            if (fVar99 != 0.0) {
              fVar99 = SQRT(fVar99);
              auVar108._0_4_ = fVar82 / fVar99;
              auVar108._4_4_ =
                   fVar98 / SQRT(fVar82 * fVar82 + fVar98 * fVar98 + auVar113._0_4_ * auVar113._0_4_
                                );
              auVar108._8_4_ = auVar113._0_4_ / fVar99;
            }
            fVar98 = fVar93 * fVar93 + fVar94 * fVar94 + fVar102 * fVar102;
            fVar82 = fVar93 * fVar93 + fVar94 * fVar94 + fVar102 * fVar102;
            lVar42 = nn::os::GetSystemTick();
            fVar99 = (float)uVar116;
            fVar82 = (float)(CONCAT17((char)((uint)fVar82 >> 0x18),
                                      CONCAT16((char)((uint)fVar82 >> 0x10),
                                               CONCAT15((char)((uint)fVar82 >> 8),
                                                        CONCAT14(SUB41(fVar82,0),fVar98)))) >> 0x20)
            ;
            if ((int)local_100 < 1) {
              uVar45 = 0;
              uVar46 = 0;
            }
            else {
              lVar47 = 0;
              uVar45 = 0;
              iVar26 = -(uint)(fVar98 == 0.0);
              iVar84 = -(uint)(fVar82 == 0.0);
              iVar87 = -(uint)(fVar98 == 0.0);
              fVar103 = fVar93 / fVar98;
              fVar104 = fVar94 / fVar82;
              fVar105 = fVar102 / fVar98;
              bVar50 = SUB41(fVar103,0) & ~(byte)iVar26;
              bVar52 = (byte)((uint)fVar103 >> 8) & ~(byte)((uint)iVar26 >> 8);
              bVar54 = (byte)((uint)fVar103 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10);
              bVar56 = (byte)((uint)fVar103 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18);
              bVar58 = SUB41(fVar104,0) & ~(byte)iVar84;
              bVar60 = (byte)((uint)fVar104 >> 8) & ~(byte)((uint)iVar84 >> 8);
              bVar62 = (byte)((uint)fVar104 >> 0x10) & ~(byte)((uint)iVar84 >> 0x10);
              bVar64 = (byte)((uint)fVar104 >> 0x18) & ~(byte)((uint)iVar84 >> 0x18);
              bVar66 = SUB41(fVar105,0) & ~(byte)iVar87;
              bVar68 = (byte)((uint)fVar105 >> 8) & ~(byte)((uint)iVar87 >> 8);
              bVar70 = (byte)((uint)fVar105 >> 0x10) & ~(byte)((uint)iVar87 >> 0x10);
              bVar72 = (byte)((uint)fVar105 >> 0x18) & ~(byte)((uint)iVar87 >> 0x18);
              uVar46 = 0;
              fVar103 = -(fVar85 * (float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50)))
                          + fVar15 * (float)CONCAT13(bVar64,CONCAT12(bVar62,CONCAT11(bVar60,bVar58))
                                                    ) +
                         fVar16 * (float)CONCAT13(bVar72,CONCAT12(bVar70,CONCAT11(bVar68,bVar66))));
              fVar105 = auVar108._0_4_;
              fVar107 = auVar108._4_4_;
              fVar100 = auVar108._8_4_;
              fVar104 = -(fVar85 * fVar105 + fVar15 * fVar107 + fVar16 * fVar100);
              auVar135._12_4_ = fVar104;
              auVar135._0_12_ = auVar108;
              auVar97._0_4_ = (float)local_150 * fVar105;
              auVar97._4_4_ = local_150._4_4_ * fVar107;
              auVar97._8_4_ = fStack_148 * fVar100;
              auVar97._12_4_ = fStack_144 * fVar104;
              auVar91 = NEON_ext(auVar97,auVar97,8,1);
              auVar121._8_8_ = uVar23;
              auVar121._0_8_ = uVar30;
              auVar90 = a64_TBL(ZEXT816(0),auVar135,auVar121);
              auVar119[1] = bVar52;
              auVar119[0] = bVar50;
              auVar119[2] = bVar54;
              auVar119[3] = bVar56;
              auVar119[4] = bVar58;
              auVar119[5] = bVar60;
              auVar119[6] = bVar62;
              auVar119[7] = bVar64;
              auVar119[8] = bVar66;
              auVar119[9] = bVar68;
              auVar119[10] = bVar70;
              auVar119[0xb] = bVar72;
              auVar119[0xc] = SUB41(fVar103,0);
              auVar119[0xd] = (char)((uint)fVar103 >> 8);
              auVar119[0xe] = (char)((uint)fVar103 >> 0x10);
              auVar119[0xf] = (char)((uint)fVar103 >> 0x18);
              auVar92 = a64_TBL(ZEXT816(0),auVar119,auVar121);
              do {
                puVar37 = (undefined8 *)(local_108 + lVar47);
                fVar128 = (float)puVar37[1];
                fVar130 = (float)((ulong)puVar37[1] >> 0x20);
                uVar20 = *puVar37;
                fVar106 = (float)((ulong)uVar20 >> 0x20);
                uVar17 = puVar37[3];
                fVar127 = (float)((ulong)uVar17 >> 0x20);
                uVar89 = puVar37[2];
                fVar101 = (float)((ulong)uVar89 >> 0x20);
                auVar111._0_4_ = fVar105 * (float)uVar89;
                auVar111._4_4_ = fVar107 * fVar101;
                auVar111._8_4_ = fVar100 * (float)uVar17;
                auVar111._12_4_ = fVar104 * fVar127;
                auVar120._0_4_ =
                     (float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50))) *
                     (float)uVar89;
                auVar120._4_4_ =
                     (float)CONCAT13(bVar64,CONCAT12(bVar62,CONCAT11(bVar60,bVar58))) * fVar101;
                auVar120._8_4_ =
                     (float)CONCAT13(bVar72,CONCAT12(bVar70,CONCAT11(bVar68,bVar66))) *
                     (float)uVar17;
                auVar120._12_4_ = fVar103 * fVar127;
                auVar109._0_4_ = fVar105 * (float)uVar20;
                auVar109._4_4_ = fVar107 * fVar106;
                auVar109._8_4_ = fVar100 * fVar128;
                auVar109._12_4_ = fVar104 * fVar130;
                auVar118._0_4_ =
                     (float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50))) *
                     (float)uVar20;
                auVar118._4_4_ =
                     (float)CONCAT13(bVar64,CONCAT12(bVar62,CONCAT11(bVar60,bVar58))) * fVar106;
                auVar118._8_4_ =
                     (float)CONCAT13(bVar72,CONCAT12(bVar70,CONCAT11(bVar68,bVar66))) * fVar128;
                auVar118._12_4_ = fVar103 * fVar130;
                auVar110 = NEON_ext(auVar109,auVar109,8,1);
                auVar112 = NEON_ext(auVar111,auVar111,8,1);
                auVar119 = NEON_ext(auVar118,auVar118,8,1);
                auVar121 = NEON_ext(auVar120,auVar120,8,1);
                auVar113 = auVar92 ^ (auVar92 ^ auVar90) & *(undefined1 (*) [16])(puVar24 + 0x30);
                auVar124._0_4_ = auVar110._0_4_ + auVar109._0_4_ + auVar109._4_4_ + auVar113._0_4_;
                auVar124._4_4_ = auVar112._0_4_ + auVar111._0_4_ + auVar111._4_4_ + auVar113._4_4_;
                auVar124._8_4_ = auVar119._0_4_ + auVar118._0_4_ + auVar118._4_4_ + auVar113._8_4_;
                auVar124._12_4_ = auVar121._0_4_ + auVar120._0_4_ + auVar120._4_4_ + auVar113._12_4_
                ;
                auVar110 = NEON_rev64(auVar124,4);
                uVar34 = CONCAT44(-(uint)(auVar124._12_4_ < auVar124._8_4_),
                                  -(uint)(auVar124._12_4_ < auVar124._8_4_)) & 0x100000001;
                iVar26 = (int)uVar34;
                iVar84 = (int)(uVar34 >> 0x20);
                auVar114._0_8_ = CONCAT44((iVar84 << 0x1f) >> 0x1f,(iVar26 << 0x1f) >> 0x1f);
                auVar114._8_4_ = (iVar26 << 0x1f) >> 0x1f;
                auVar114._12_4_ = (iVar84 << 0x1f) >> 0x1f;
                auVar123._8_8_ = auVar114._8_8_;
                auVar123._0_8_ = auVar114._0_8_;
                auVar124 = auVar124 ^ (auVar124 ^ auVar110) & auVar123;
                fVar127 = auVar124._4_4_;
                uVar34 = CONCAT44(fVar127,fVar127);
                fVar106 = auVar124._12_4_;
                fVar101 = fVar127;
                if (0.0 <= fVar106) {
                  fVar130 = auVar124._8_4_;
                  fVar101 = auVar124._0_4_;
                  uVar39 = CONCAT44(fVar101,fVar101);
                  if (fVar130 <= 1.0) {
                    iVar26 = -(uint)(fVar106 - fVar130 == 0.0);
                    fVar131 = (float)((uint)(fVar99 / (fVar106 - fVar130)) &
                                     CONCAT13(~(byte)((uint)iVar26 >> 0x18),
                                              CONCAT12(~(byte)((uint)iVar26 >> 0x10),
                                                       CONCAT11(~(byte)((uint)iVar26 >> 8),
                                                                ~(byte)iVar26))));
                    if (fVar130 < 0.0) {
                      uVar39 = (ulong)(uint)(fVar101 - (fVar127 - fVar101) * fVar131 * fVar130);
                    }
                    if (1.0 < fVar106) {
                      uVar34 = (ulong)(uint)(fVar101 +
                                            (fVar127 - fVar101) * (fVar99 - fVar130) * fVar131);
                    }
                    uVar41 = uVar39 & 0x7fffffff7fffffff;
                    uVar117 = -(uint)((float)(uVar34 & 0x7fffffff7fffffff) < (float)uVar41);
                    uVar41 = uVar41 ^ (uVar41 ^ uVar34 & 0x7fffffff7fffffff) & (ulong)uVar117;
                    fVar101 = (float)CONCAT13((byte)(-(uint)((float)((uint)uVar39 ^
                                                                    ((uint)uVar39 ^ (uint)uVar34) &
                                                                    ~uVar117) < 0.0) >> 0x18) & 0x80
                                              | (byte)(uVar41 >> 0x18),(int3)uVar41);
                  }
                }
                if (0.0 < (float)((uint)fVar101 ^
                                 ((uint)fVar101 ^
                                 (uint)(fVar101 -
                                       (auVar97._0_4_ + auVar97._4_4_ + auVar91._0_4_ + fVar104))) &
                                 -(uint)(ABS(fVar101) < fVar79 * 0.007874016))) {
                  lVar43 = (long)(int)uVar46;
                  uVar46 = uVar46 + 1;
                  puVar37 = (undefined8 *)(lVar29 + lVar43 * 0x20);
                }
                else {
                  lVar43 = (long)(int)uVar45;
                  uVar45 = uVar45 + 1;
                  puVar37 = (undefined8 *)(lVar36 + lVar43 * 0x20);
                }
                lVar47 = lVar47 + 0x20;
                puVar37[1] = CONCAT44(ABS(fVar101),fVar128);
                *puVar37 = uVar20;
                puVar37[3] = uVar17;
                puVar37[2] = uVar89;
              } while ((local_100 & 0xffffffff) * 0x20 != lVar47);
            }
            lVar47 = nn::os::GetSystemTick();
            *(long *)(param_12 + 0x78) = (lVar47 - lVar42) + *(long *)(param_12 + 0x78);
            *(int *)(param_12 + 0x80) = *(int *)(param_12 + 0x80) + 1;
            if (uVar46 - 1 != 0 && 0 < (int)uVar46) {
              FUN_03076680(lVar29,0,uVar46 - 1);
            }
            if (1 < (int)uVar45) {
              FUN_03076680(lVar36,0,uVar45 - 1);
            }
            uVar51 = 0;
            uVar53 = 0;
            uVar55 = 0;
            uVar57 = 0;
            uVar59 = 0;
            uVar61 = 0;
            uVar63 = 0;
            uVar65 = 0;
            uVar67 = 0;
            uVar69 = 0;
            uVar71 = 0;
            uVar73 = 0;
            uVar74 = 0;
            uVar75 = 0;
            uVar76 = 0;
            uVar77 = 0;
            if (fVar98 != 0.0) {
              fVar98 = SQRT(fVar98);
              fVar82 = SQRT(fVar82);
              fVar93 = fVar93 / fVar98;
              uVar51 = SUB41(fVar93,0);
              uVar53 = (undefined1)((uint)fVar93 >> 8);
              uVar55 = (undefined1)((uint)fVar93 >> 0x10);
              uVar57 = (undefined1)((uint)fVar93 >> 0x18);
              fVar94 = fVar94 / fVar82;
              uVar59 = SUB41(fVar94,0);
              uVar61 = (undefined1)((uint)fVar94 >> 8);
              uVar63 = (undefined1)((uint)fVar94 >> 0x10);
              uVar65 = (undefined1)((uint)fVar94 >> 0x18);
              fVar102 = fVar102 / fVar98;
              uVar67 = SUB41(fVar102,0);
              uVar69 = (undefined1)((uint)fVar102 >> 8);
              uVar71 = (undefined1)((uint)fVar102 >> 0x10);
              uVar73 = (undefined1)((uint)fVar102 >> 0x18);
              fVar96 = fVar96 / (float)CONCAT13((char)((uint)fVar82 >> 0x18),
                                                CONCAT12((char)((uint)fVar82 >> 0x10),
                                                         (short)(CONCAT15((char)((uint)fVar82 >> 8),
                                                                          CONCAT14(SUB41(fVar82,0),
                                                                                   fVar98)) >> 0x20)
                                                        ));
              uVar74 = SUB41(fVar96,0);
              uVar75 = (undefined1)((uint)fVar96 >> 8);
              uVar76 = (undefined1)((uint)fVar96 >> 0x10);
              uVar77 = (undefined1)((uint)fVar96 >> 0x18);
            }
            fVar94 = (float)CONCAT13(uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar67)));
            fVar93 = (float)CONCAT13(uVar57,CONCAT12(uVar55,CONCAT11(uVar53,uVar51)));
            lVar42 = nn::os::GetSystemTick();
            fStack_1ac = (float)(CONCAT17(uVar65,CONCAT16(uVar63,CONCAT15(uVar61,CONCAT14(uVar59,
                                                  fVar93)))) >> 0x20);
            fStack_1a4 = (float)(CONCAT17(uVar77,CONCAT16(uVar76,CONCAT15(uVar75,CONCAT14(uVar74,
                                                  fVar94)))) >> 0x20);
            if (((uVar45 != 0) && (uVar46 != 0)) && (0 < (int)uVar46)) {
              fVar102 = fVar85 * fVar93;
              fVar15 = fVar15 * fStack_1ac;
              uVar51 = (undefined1)((uint)fVar15 >> 8);
              uVar53 = (undefined1)((uint)fVar15 >> 0x10);
              uVar55 = (undefined1)((uint)fVar15 >> 0x18);
              fVar96 = fVar16 * fVar94;
              uVar57 = (undefined1)((uint)fVar96 >> 8);
              uVar59 = (undefined1)((uint)fVar96 >> 0x10);
              uVar61 = (undefined1)((uint)fVar96 >> 0x18);
              fVar88 = fVar88 * fStack_1a4;
              uVar63 = (undefined1)((uint)fVar88 >> 8);
              uVar65 = (undefined1)((uint)fVar88 >> 0x10);
              uVar67 = (undefined1)((uint)fVar88 >> 0x18);
              auVar12[4] = SUB41(fVar15,0);
              auVar12._0_4_ = fVar102;
              auVar12[5] = uVar51;
              auVar12[6] = uVar53;
              auVar12[7] = uVar55;
              auVar12[8] = SUB41(fVar96,0);
              auVar12[9] = uVar57;
              auVar12[10] = uVar59;
              auVar12[0xb] = uVar61;
              auVar12[0xc] = SUB41(fVar88,0);
              auVar12[0xd] = uVar63;
              auVar12[0xe] = uVar65;
              auVar12[0xf] = uVar67;
              auVar13[4] = SUB41(fVar15,0);
              auVar13._0_4_ = fVar102;
              auVar13[5] = uVar51;
              auVar13[6] = uVar53;
              auVar13[7] = uVar55;
              auVar13[8] = SUB41(fVar96,0);
              auVar13[9] = uVar57;
              auVar13[10] = uVar59;
              auVar13[0xb] = uVar61;
              auVar13[0xc] = SUB41(fVar88,0);
              auVar13[0xd] = uVar63;
              auVar13[0xe] = uVar65;
              auVar13[0xf] = uVar67;
              auVar90 = NEON_ext(auVar12,auVar13,8,1);
              auVar81._0_4_ = fVar80 * fVar93;
              auVar81._4_4_ = fVar83 * fStack_1ac;
              auVar81._8_4_ = fVar86 * fVar94;
              auVar81._12_4_ = fVar78 * fStack_1a4;
              auVar91 = NEON_ext(auVar81,auVar81,8,1);
              fVar88 = (float)*(undefined8 *)param_10 - fVar11;
              fVar88 = fVar88 + fVar88;
              uVar34 = 0;
              do {
                puVar37 = (undefined8 *)(lVar29 + uVar34 * 0x20);
                uVar89 = puVar37[1];
                fVar83 = (float)uVar89;
                fVar86 = (float)((ulong)uVar89 >> 0x20);
                uVar89 = *puVar37;
                fVar96 = (float)uVar89;
                fVar80 = (float)((ulong)uVar89 >> 0x20);
                if (fVar88 < fVar86) break;
                if (0 < (int)uVar45) {
                  lVar47 = lVar29 + uVar34 * 0x20;
                  uVar17 = *(undefined8 *)(lVar47 + 0x18);
                  uVar89 = *(undefined8 *)(lVar47 + 0x10);
                  fVar78 = (float)uVar89 - fVar96;
                  fVar82 = (float)((ulong)uVar89 >> 0x20) - fVar80;
                  fVar98 = (float)uVar17 - fVar83;
                  fVar103 = (float)((ulong)uVar17 >> 0x20) - fVar86;
                  auVar18._4_4_ = fVar82;
                  auVar18._0_4_ = fVar78;
                  auVar18._8_4_ = fVar98;
                  auVar18._12_4_ = fVar103;
                  auVar19._4_4_ = fVar82;
                  auVar19._0_4_ = fVar78;
                  auVar19._8_4_ = fVar98;
                  auVar19._12_4_ = fVar103;
                  auVar92 = NEON_ext(auVar18,auVar19,4,1);
                  auVar115._0_4_ = fVar78 * fVar78;
                  auVar115._4_4_ = fVar82 * fVar82;
                  auVar115._8_4_ = fVar98 * fVar98;
                  auVar115._12_4_ = fVar103 * fVar103;
                  auVar110 = NEON_ext(auVar115,auVar115,8,1);
                  pfVar40 = (float *)(lVar36 + 0x10);
                  uVar39 = (ulong)uVar45;
                  do {
                    auVar112 = *(undefined1 (*) [16])(pfVar40 + -4);
                    fVar104 = auVar112._4_4_;
                    fVar105 = auVar112._8_4_;
                    fVar107 = auVar112._12_4_;
                    if (fVar88 < fVar86 + fVar107) break;
                    fVar106 = auVar112._0_4_;
                    auVar125._0_4_ = *pfVar40 - fVar106;
                    auVar125._4_4_ = pfVar40[1] - fVar104;
                    auVar125._8_4_ = pfVar40[2] - fVar105;
                    auVar125._12_4_ = pfVar40[3] - fVar107;
                    auVar112 = NEON_ext(auVar125,auVar125,4,1);
                    fVar128 = fVar106 - fVar96;
                    fVar130 = fVar104 - fVar80;
                    fVar131 = fVar105 - fVar83;
                    fVar100 = auVar92._0_4_ * auVar125._0_4_ - fVar78 * auVar112._0_4_;
                    fVar101 = auVar92._4_4_ * auVar125._4_4_ - fVar82 * auVar112._4_4_;
                    uVar51 = SUB41(fVar101,0);
                    uVar53 = (undefined1)((uint)fVar101 >> 8);
                    uVar55 = (undefined1)((uint)fVar101 >> 0x10);
                    uVar57 = (undefined1)((uint)fVar101 >> 0x18);
                    fVar101 = fVar78 * auVar125._8_4_ - fVar98 * auVar125._0_4_;
                    fVar127 = fVar82 * auVar125._12_4_ - fVar103 * auVar125._4_4_;
                    auVar21[4] = uVar51;
                    auVar21._0_4_ = fVar100;
                    auVar21[5] = uVar53;
                    auVar21[6] = uVar55;
                    auVar21[7] = uVar57;
                    auVar21._8_4_ = fVar101;
                    auVar21._12_4_ = fVar127;
                    auVar22[4] = uVar51;
                    auVar22._0_4_ = fVar100;
                    auVar22[5] = uVar53;
                    auVar22[6] = uVar55;
                    auVar22[7] = uVar57;
                    auVar22._8_4_ = fVar101;
                    auVar22._12_4_ = fVar127;
                    auVar113 = NEON_ext(auVar21,auVar22,4,1);
                    uVar89 = NEON_ext(auVar113._0_8_,
                                      CONCAT17(uVar57,CONCAT16(uVar55,CONCAT15(uVar53,CONCAT14(
                                                  uVar51,fVar100)))),4,1);
                    fVar136 = auVar113._0_4_;
                    fVar137 = auVar113._4_4_;
                    fVar101 = fVar136 * fVar136 + fVar137 * fVar137 + fVar100 * fVar100;
                    fVar127 = fVar136 * fVar136 + fVar137 * fVar137 + fVar100 * fVar100;
                    iVar26 = -(uint)(fVar101 == 0.0);
                    auVar138._0_4_ = fVar78 * fVar128;
                    auVar138._4_4_ = fVar82 * fVar130;
                    auVar138._8_4_ = fVar98 * fVar131;
                    auVar138._12_4_ = fVar103 * (fVar107 - fVar86);
                    auVar139._0_4_ = auVar125._0_4_ * auVar125._0_4_;
                    auVar139._4_4_ = auVar125._4_4_ * auVar125._4_4_;
                    auVar139._8_4_ = auVar125._8_4_ * auVar125._8_4_;
                    auVar139._12_4_ = auVar125._12_4_ * auVar125._12_4_;
                    uVar133 = CONCAT13(~(byte)((uint)iVar26 >> 0x18),
                                       CONCAT12(~(byte)((uint)iVar26 >> 0x10),
                                                CONCAT11(~(byte)((uint)iVar26 >> 8),~(byte)iVar26)))
                    ;
                    auVar132._0_4_ = auVar112._0_4_ * fVar136 - auVar125._0_4_ * (float)uVar89;
                    auVar132._4_4_ =
                         auVar112._4_4_ * fVar137 - auVar125._4_4_ * (float)((ulong)uVar89 >> 0x20);
                    auVar132._8_4_ = auVar125._0_4_ * fVar100 - auVar125._8_4_ * fVar136;
                    auVar132._12_4_ = auVar125._4_4_ * 0.0 - auVar125._12_4_ * fVar137;
                    auVar112 = NEON_ext(auVar132,auVar132,4,1);
                    fVar136 = fVar128 * auVar112._0_4_;
                    fVar137 = fVar130 * auVar112._4_4_;
                    iVar26 = -(uint)(fVar101 == 0.0);
                    iVar84 = -(uint)(fVar127 == 0.0);
                    auVar129._0_4_ = fVar128 * auVar125._0_4_;
                    auVar129._4_4_ = fVar130 * auVar125._4_4_;
                    auVar129._8_4_ = fVar131 * auVar125._8_4_;
                    auVar129._12_4_ = (fVar107 - fVar86) * auVar125._12_4_;
                    auVar113 = NEON_ext(auVar139,auVar139,8,1);
                    auVar112 = NEON_ext(auVar129,auVar129,8,1);
                    uVar41 = CONCAT44((float)((ulong)uVar116 >> 0x20) / fVar127,fVar99 / fVar101) &
                             CONCAT44(uVar133,uVar133);
                    fVar100 = auVar113._0_4_ + auVar139._0_4_ + auVar139._4_4_;
                    fVar127 = auVar112._0_4_ + auVar129._0_4_ + auVar129._4_4_;
                    uVar89 = NEON_fminnm(CONCAT44((float)(uVar41 >> 0x20) *
                                                  (fVar136 + fVar137 + fVar131 * auVar132._0_4_),
                                                  (float)uVar41 *
                                                  (fVar136 + fVar137 + fVar131 * auVar132._0_4_)),
                                         uVar116,4);
                    fVar128 = fVar98 * auVar125._8_4_ +
                              fVar78 * auVar125._0_4_ + fVar82 * auVar125._4_4_;
                    fVar130 = fVar98 * auVar125._8_4_ +
                              fVar78 * auVar125._0_4_ + fVar82 * auVar125._4_4_;
                    auVar112 = NEON_ext(auVar138,auVar138,8,1);
                    fVar101 = auVar110._0_4_ + auVar115._0_4_ + auVar115._4_4_;
                    fVar136 = auVar112._0_4_ + auVar138._0_4_ + auVar138._4_4_;
                    auVar112 = NEON_fmov(0x3f800000,4);
                    uVar41 = NEON_fmax(uVar89,0,4);
                    iVar87 = -(uint)(fVar101 == 0.0);
                    iVar141 = -(uint)(fVar100 == 0.0);
                    fVar101 = auVar112._0_4_ / fVar101;
                    fVar100 = auVar112._8_4_ / fVar100;
                    fVar131 = (float)CONCAT13((byte)((uint)fVar101 >> 0x18) &
                                              ~(byte)((uint)iVar87 >> 0x18),
                                              CONCAT12((byte)((uint)fVar101 >> 0x10) &
                                                       ~(byte)((uint)iVar87 >> 0x10),
                                                       CONCAT11((byte)((uint)fVar101 >> 8) &
                                                                ~(byte)((uint)iVar87 >> 8),
                                                                SUB41(fVar101,0) & ~(byte)iVar87)));
                    fVar100 = (float)CONCAT13((byte)((uint)fVar100 >> 0x18) &
                                              ~(byte)((uint)iVar141 >> 0x18),
                                              CONCAT12((byte)((uint)fVar100 >> 0x10) &
                                                       ~(byte)((uint)iVar141 >> 0x10),
                                                       CONCAT11((byte)((uint)fVar100 >> 8) &
                                                                ~(byte)((uint)iVar141 >> 8),
                                                                SUB41(fVar100,0) & ~(byte)iVar141)))
                    ;
                    fVar101 = ((float)uVar41 * fVar128 - fVar127) * fVar100;
                    fVar100 = ((float)(uVar41 >> 0x20) * fVar130 - fVar127) * fVar100;
                    uVar89 = NEON_fminnm(CONCAT44(fVar100,fVar101),uVar116,4);
                    uVar89 = NEON_fmax(uVar89,0,4);
                    fVar137 = (float)uVar89;
                    fVar140 = (float)((ulong)uVar89 >> 0x20);
                    iVar87 = -(uint)(fVar137 == fVar101);
                    iVar141 = -(uint)(fVar140 == fVar100);
                    uVar89 = NEON_fminnm(CONCAT44((fVar136 + fVar140 * fVar130) * fVar131,
                                                  (fVar136 + fVar137 * fVar128) * fVar131),uVar116,4
                                        );
                    uVar134 = NEON_fmax(uVar89,0,4);
                    uVar41 = uVar41 ^ (uVar41 ^ uVar134) &
                                      CONCAT17(~(byte)((uint)iVar141 >> 0x18) |
                                               (byte)((uint)iVar84 >> 0x18),
                                               CONCAT16(~(byte)((uint)iVar141 >> 0x10) |
                                                        (byte)((uint)iVar84 >> 0x10),
                                                        CONCAT15(~(byte)((uint)iVar141 >> 8) |
                                                                 (byte)((uint)iVar84 >> 8),
                                                                 CONCAT14(~(byte)iVar141 |
                                                                          (byte)iVar84,
                                                                          CONCAT13(~(byte)((uint)
                                                  iVar87 >> 0x18) | (byte)((uint)iVar26 >> 0x18),
                                                  CONCAT12(~(byte)((uint)iVar87 >> 0x10) |
                                                           (byte)((uint)iVar26 >> 0x10),
                                                           CONCAT11(~(byte)((uint)iVar87 >> 8) |
                                                                    (byte)((uint)iVar26 >> 8),
                                                                    ~(byte)iVar87 | (byte)iVar26))))
                                                  )));
                    fVar127 = (float)uVar41;
                    fVar130 = (float)(uVar41 >> 0x20);
                    fVar100 = fVar96 + fVar78 * fVar127;
                    fVar101 = fVar80 + fVar82 * fVar130;
                    fVar128 = fVar83 + fVar98 * fVar127;
                    fVar130 = fVar86 + fVar103 * fVar130;
                    fVar127 = fVar100 - (fVar106 + auVar125._0_4_ * fVar137);
                    fVar104 = fVar101 - (fVar104 + auVar125._4_4_ * fVar140);
                    fVar105 = fVar128 - (fVar105 + auVar125._8_4_ * fVar137);
                    fVar107 = fVar130 - (fVar107 + auVar125._12_4_ * fVar140);
                    auVar126._0_4_ = fVar127 * fVar127;
                    auVar126._4_4_ = fVar104 * fVar104;
                    auVar126._8_4_ = fVar105 * fVar105;
                    auVar126._12_4_ = fVar107 * fVar107;
                    auVar112 = NEON_ext(auVar126,auVar126,8,1);
                    if ((auVar126._0_4_ + auVar126._4_4_ + auVar112._0_4_ < fVar88 * fVar88) &&
                       (auVar122._0_4_ = fVar93 * (fVar100 + fVar127 * -0.5),
                       auVar122._4_4_ = fStack_1ac * (fVar101 + fVar104 * -0.5),
                       auVar122._8_4_ = fVar94 * (fVar128 + fVar105 * -0.5),
                       auVar122._12_4_ = fStack_1a4 * (fVar130 + fVar107 * -0.5),
                       auVar112 = NEON_ext(auVar122,auVar122,8,1),
                       fVar104 = auVar112._0_4_ + auVar122._0_4_ + auVar122._4_4_,
                       !(bool)((~(fVar102 + fVar15 + auVar90._0_4_ < fVar104) |
                               ~(fVar104 < auVar81._0_4_ + auVar81._4_4_ + auVar91._0_4_)) & 1))) {
                      lVar47 = nn::os::GetSystemTick();
                      *(long *)(param_12 + 0x90) = (lVar47 - lVar42) + *(long *)(param_12 + 0x90);
                      *(int *)(param_12 + 0x98) = *(int *)(param_12 + 0x98) + 1;
                      goto LAB_030717a4;
                    }
                    uVar39 = uVar39 - 1;
                    pfVar40 = pfVar40 + 8;
                  } while (uVar39 != 0);
                }
                uVar34 = uVar34 + 1;
              } while (uVar34 != uVar46);
            }
            lVar47 = nn::os::GetSystemTick();
            *(long *)(param_12 + 0x90) = (lVar47 - lVar42) + *(long *)(param_12 + 0x90);
            *(int *)(param_12 + 0x98) = *(int *)(param_12 + 0x98) + 1;
            uVar34 = (ulong)(uVar8 >> 3) & 0x1ffc;
            *(uint *)(*param_11 + uVar34) =
                 *(uint *)(*param_11 + uVar34) | 1 << (ulong)(uVar8 & 0x1f);
          }
        }
LAB_030717a4:
        uVar33 = uVar33 + 1;
      } while (uVar33 != uVar1);
    }
    if (lVar35 == 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar36,uVar48);
    }
    else {
      uVar33 = uVar48 + 0x3f & 0xffffffffffffffc0;
      if ((*(ulong *)(lVar35 + 0x28) < uVar33) || (*(long *)(lVar35 + 0x38) != uVar33 + lVar36)) {
        if (lVar36 != 0) {
          if (*(ulong *)(lVar35 + 0x28) < uVar33 + 0x40) {
            *(int *)(*(long *)(lVar35 + 0x30) + 0x20) =
                 *(int *)(*(long *)(lVar35 + 0x30) + 0x20) + -1;
            (**(code **)(**(long **)(lVar35 + 0x10) + 0x18))
                      (*(long **)(lVar35 + 0x10),lVar36 - *(int *)(lVar36 + -4),uVar33 + 0x44);
          }
          else {
            if (*(long *)(lVar35 + 0x38) == uVar33 + lVar36) {
              *(long *)(lVar35 + 0x38) = lVar36;
              goto LAB_03071920;
            }
            FUN_031cf778(lVar35,lVar36);
          }
        }
      }
      else {
        *(long *)(lVar35 + 0x38) = lVar36;
        if (*(long *)(lVar35 + 0x48) == lVar36) {
LAB_03071920:
          FUN_031cf578();
        }
      }
    }
    if (lVar28 == 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar29,uVar48);
    }
    else {
      uVar48 = uVar48 + 0x3f & 0xffffffffffffffc0;
      if ((*(ulong *)(lVar28 + 0x28) < uVar48) || (*(long *)(lVar28 + 0x38) != uVar48 + lVar29)) {
        if (lVar29 != 0) {
          if (*(ulong *)(lVar28 + 0x28) < uVar48 + 0x40) {
            *(int *)(*(long *)(lVar28 + 0x30) + 0x20) =
                 *(int *)(*(long *)(lVar28 + 0x30) + 0x20) + -1;
            (**(code **)(**(long **)(lVar28 + 0x10) + 0x18))
                      (*(long **)(lVar28 + 0x10),lVar29 - *(int *)(lVar29 + -4),uVar48 + 0x44);
          }
          else {
            if (*(long *)(lVar28 + 0x38) == uVar48 + lVar29) {
              *(long *)(lVar28 + 0x38) = lVar29;
              goto LAB_0307194c;
            }
            FUN_031cf778(lVar28,lVar29);
          }
        }
      }
      else {
        *(long *)(lVar28 + 0x38) = lVar29;
        if (*(long *)(lVar28 + 0x48) == lVar29) {
LAB_0307194c:
          FUN_031cf578(lVar28);
        }
      }
    }
  }
  lVar35 = local_130;
  if (local_118 == local_130) {
    local_128 = local_128 & 0xffffffff00000000;
  }
  if (local_120 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar48 = local_110 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_120 + 0x28) < uVar48) ||
       (*(long *)(local_120 + 0x38) != uVar48 + local_118)) {
      if (local_118 != 0) {
        if (*(ulong *)(local_120 + 0x28) < uVar48 + 0x40) {
          *(int *)(*(long *)(local_120 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_120 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_120 + 0x10) + 0x18))
                    (*(long **)(local_120 + 0x10),local_118 - *(int *)(local_118 + -4),uVar48 + 0x44
                    );
        }
        else {
          if (*(long *)(local_120 + 0x38) == uVar48 + local_118) {
            *(long *)(local_120 + 0x38) = local_118;
            goto LAB_03071a1c;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(long *)(local_120 + 0x38) = local_118;
      if (*(long *)(local_120 + 0x48) == local_118) {
LAB_03071a1c:
        FUN_031cf578();
      }
    }
  }
  uVar33 = local_128;
  puVar24 = PTR_PTR_047d1a50;
  uVar48 = local_128 >> 0x20;
  local_128 = uVar48 << 0x20;
  if ((lVar35 != 0) && (-1 < (long)uVar33)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,lVar35,uVar48 << 5);
  }
  lVar35 = local_108;
  if (local_f0 == local_108) {
    local_100 = local_100 & 0xffffffff00000000;
  }
  if (local_f8 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar48 = local_e8 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_f8 + 0x28) < uVar48) || (*(long *)(local_f8 + 0x38) != uVar48 + local_f0))
    {
      if (local_f0 != 0) {
        if (*(ulong *)(local_f8 + 0x28) < uVar48 + 0x40) {
          *(int *)(*(long *)(local_f8 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_f8 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_f8 + 0x10) + 0x18))
                    (*(long **)(local_f8 + 0x10),local_f0 - *(int *)(local_f0 + -4),uVar48 + 0x44);
        }
        else {
          if (*(long *)(local_f8 + 0x38) == uVar48 + local_f0) {
            *(long *)(local_f8 + 0x38) = local_f0;
            goto LAB_03071b18;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(long *)(local_f8 + 0x38) = local_f0;
      if (*(long *)(local_f8 + 0x48) == local_f0) {
LAB_03071b18:
        FUN_031cf578();
      }
    }
  }
  uVar33 = local_100;
  uVar48 = local_100 >> 0x20;
  local_100 = uVar48 << 0x20;
  if ((lVar35 != 0) && (-1 < (long)uVar33)) {
    (**(code **)(*(long *)puVar24 + 0x20))(puVar24,lVar35,uVar48 << 5);
  }
LAB_03071b44:
  if ((local_c8 != (long *)0x0) && (local_c0 != '\0')) {
    lVar35 = *local_c8;
    if (((*(byte *)(lVar35 + 0x38) & 1) != 0) && (local_c8[6] != 0)) {
      puVar37 = (undefined8 *)local_c8[2];
      uVar48 = (long)puVar37 + 0x17U & 0xfffffffffffffff8;
      if ((uVar48 <= (ulong)local_c8[3]) && (local_c8[2] = uVar48, puVar37 != (undefined8 *)0x0)) {
        *puVar37 = &DAT_03c4e575;
        puVar37[1] = *(undefined8 *)(local_c8[6] + 8);
      }
    }
    puVar37 = (undefined8 *)local_c8[2];
    uVar48 = (long)puVar37 + 0x17U & 0xfffffffffffffff8;
    if ((uVar48 <= (ulong)local_c8[3]) && (local_c8[2] = uVar48, puVar37 != (undefined8 *)0x0)) {
      *puVar37 = &DAT_03c2d363;
      uVar30 = nn::os::GetSystemTick();
      puVar37[1] = uVar30;
    }
    if (*(code **)(lVar35 + 0x20) != (code *)0x0) {
      (**(code **)(lVar35 + 0x20))(*(undefined8 *)(lVar35 + 0x28));
    }
  }
  lVar35 = nn::os::GetSystemTick();
  *(long *)(param_12 + 8) = (lVar35 - lVar27) + *(long *)(param_12 + 8);
  *(int *)(param_12 + 0x10) = *(int *)(param_12 + 0x10) + 1;
  return;
}



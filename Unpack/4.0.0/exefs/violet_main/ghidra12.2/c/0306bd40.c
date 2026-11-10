/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0306bd40; name: FUN_0306bd40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0306bd40(long param_1,long *param_2,ulong param_3,int *param_4,undefined8 param_5,
            undefined8 param_6,undefined8 *param_7,undefined8 *param_8,long *param_9,long *param_10,
            long *param_11,long param_12)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  long lVar4;
  short sVar5;
  ushort uVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined *puVar12;
  long lVar13;
  long lVar14;
  undefined4 *puVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  ulong uVar22;
  ushort *puVar23;
  ulong uVar24;
  int iVar25;
  undefined4 *puVar26;
  ulong uVar27;
  int iVar28;
  long lVar29;
  undefined8 *puVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  bool bVar37;
  uint uVar38;
  ulong uVar39;
  ulong uVar40;
  uint uVar41;
  ulong uVar42;
  long *plVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  int iVar47;
  float fVar51;
  float fVar53;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  int iVar52;
  int iVar54;
  undefined1 auVar50 [16];
  float fVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  float fVar59;
  float fVar60;
  undefined1 auVar58 [16];
  float fVar61;
  float fVar62;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar69 [12];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  float fVar75;
  float fVar76;
  undefined1 auVar74 [16];
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar81;
  undefined8 uVar80;
  undefined1 in_q6 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 in_register_000051e8;
  uint uVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  float fVar103;
  float fVar105;
  undefined1 auVar104 [16];
  float fVar106;
  float fVar108;
  float fVar109;
  undefined1 auVar107 [16];
  ulong uVar110;
  undefined1 auVar111 [16];
  float fVar113;
  ulong uVar112;
  float fVar114;
  float fVar115;
  undefined1 auVar116 [16];
  int iVar118;
  undefined1 auVar117 [16];
  ulong *puVar119;
  long local_278;
  long local_258;
  float local_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float local_220;
  float fStack_21c;
  long local_1f8;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  float local_180;
  ulong local_170 [2];
  long local_160;
  ulong local_158;
  long local_150;
  long local_148;
  ulong local_140;
  long local_138;
  undefined8 local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long *local_100;
  char local_f8;
  undefined8 local_f0;
  undefined4 local_e8 [2];
  undefined4 *local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined4 *local_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0 [2];
  
  local_e8[0] = (undefined4)param_3;
  lVar13 = nn::os::GetSystemTick();
  uVar44 = *(undefined4 *)
            (*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) +
                                          (param_3 >> 0x16 & 0x3ff) * 0x100) + 0x20) + 0x68) + 0xb0)
  ;
  local_f0 = CONCAT44(uVar44,uVar44);
  FUN_0306d784(&local_100,param_1,local_e8);
  iVar28 = param_4[2];
  uVar39 = (param_3 & 0xffffffff) >> 0xe;
  sVar5 = *(short *)((long)param_4 + 10);
  *(int *)(param_9 + 1) = (int)(short)iVar28;
  uVar6 = *(ushort *)(param_4 + 2);
  if (0 < (short)uVar6) {
    lVar33 = (long)*param_4;
    lVar29 = 0;
    lVar31 = 0;
    lVar35 = *(long *)(*(long *)(param_1 + 0x38) + (uVar39 & 0x3ff00));
    lVar36 = lVar33 * 0x14;
    lVar17 = lVar33;
    do {
      lVar14 = *(long *)(lVar35 + 0x20);
      if (lVar17 < *(int *)(lVar14 + 0x30)) {
        if (*(int *)(lVar14 + 0x78) == 0) {
          iVar25 = (int)lVar17;
        }
        else {
          iVar25 = *(int *)(*(long *)(lVar14 + 0x70) + lVar17 * 4);
        }
        if (iVar25 == -1) {
          puVar15 = (undefined4 *)(*(long *)(lVar14 + 0x28) + (lVar31 + lVar33) * 0x14);
        }
        else {
          puVar15 = (undefined4 *)(*(long *)(lVar14 + 0xc0) + (long)iVar25 * 0x14);
        }
      }
      else {
        puVar15 = (undefined4 *)
                  (*(long *)(lVar14 + 0xe0) + (long)*(int *)(lVar14 + 0x30) * -0x14 + lVar36);
      }
      lVar31 = lVar31 + 1;
      lVar36 = lVar36 + 0x14;
      *(undefined4 *)(*param_9 + lVar29) = *puVar15;
      lVar14 = *param_9 + lVar29;
      lVar29 = lVar29 + 8;
      lVar17 = lVar17 + 1;
      *(undefined4 *)(lVar14 + 4) = uVar44;
    } while ((ulong)uVar6 * 8 != lVar29);
  }
  uVar38 = (int)sVar5 + (int)(short)iVar28;
  *(undefined4 *)(param_10 + 1) = 0;
  if ((int)uVar38 < 1) {
    if ((int)uVar38 < 0) {
      *(uint *)(param_10 + 1) = uVar38;
    }
  }
  else {
    puVar15 = (undefined4 *)*param_10;
    *(uint *)(param_10 + 1) = uVar38;
    uVar41 = uVar38 & 3;
    if (2 < uVar38 - 1) {
      iVar28 = -(uVar38 & 0xfffffffc);
      puVar26 = puVar15;
      do {
        puVar15 = puVar26 + 8;
        *puVar26 = 0;
        iVar28 = iVar28 + 4;
        puVar26[1] = uVar44;
        puVar26[2] = 0;
        puVar26[3] = uVar44;
        puVar26[4] = 0;
        puVar26[5] = uVar44;
        puVar26[6] = 0;
        puVar26[7] = uVar44;
        puVar26 = puVar15;
      } while (iVar28 != 0);
    }
    for (; uVar41 != 0; uVar41 = uVar41 - 1) {
      *puVar15 = 0;
      puVar15[1] = uVar44;
      puVar15 = puVar15 + 2;
    }
  }
  iVar28 = *(int *)PTR_DAT_047e4f38;
  lVar31 = tpidr_el0;
  lVar36 = *(long *)(lVar31 + 0x1000b8);
  if (lVar36 == 0) {
    lVar36 = FUN_00e5d3b4();
    *(long *)(lVar31 + 0x1000b8) = lVar36;
  }
  if (*(long *)(lVar36 + (long)iVar28 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (param_2 != (long *)0x0) {
    lVar36 = nn::os::GetSystemTick();
    lVar29 = nn::os::GetSystemTick();
    uVar16 = (**(code **)(*param_2 + 0x20))
                       (param_2,param_1,param_3 & 0xffffffff,param_4,param_5,param_6);
    lVar17 = nn::os::GetSystemTick();
    *(long *)(param_12 + 0x38) = (lVar17 - lVar29) + *(long *)(param_12 + 0x38);
    *(int *)(param_12 + 0x40) = *(int *)(param_12 + 0x40) + 1;
    lVar29 = nn::os::GetSystemTick();
    *(long *)(param_12 + 0x20) = (lVar29 - lVar36) + *(long *)(param_12 + 0x20);
    *(int *)(param_12 + 0x28) = *(int *)(param_12 + 0x28) + 1;
    if ((uVar16 & 1) == 0) {
      uVar89 = 0;
      goto LAB_0306d650;
    }
  }
  uStack_108 = param_7[1];
  local_110 = *param_7;
  local_138 = 0;
  local_130 = 0x8000000000000000;
  lVar36 = *(long *)(lVar31 + 0x1000b8);
  if (lVar36 == 0) {
    lVar36 = FUN_00e5d3b4();
    *(long *)(lVar31 + 0x1000b8) = lVar36;
  }
  local_128 = *(long *)(*(long *)(lVar36 + 0x3d0) + 0x10);
  if (*(long *)(local_128 + 8) == 0) {
    local_118 = 0x1000;
    local_160 = 0x1000;
    if (local_128 == 0) goto LAB_0306c134;
    local_e0 = (undefined4 *)0x1000;
    if (*(ulong *)(local_128 + 0x28) < 0x1000) {
LAB_0306c0c4:
      local_120 = FUN_031cf3b4(local_128,&local_e0);
    }
    else {
      local_120 = *(long *)(local_128 + 0x38);
      if (*(ulong *)(local_128 + 0x40) < local_120 + 0x1000U) goto LAB_0306c0c4;
      *(ulong *)(local_128 + 0x38) = local_120 + 0x1000U;
    }
  }
  else {
    local_128 = 0;
LAB_0306c134:
    local_118 = 0x1000;
    local_160 = 0x1000;
    local_120 = (**(code **)PTR_DAT_047d1a08)(1,&local_160,0x40);
  }
  local_130 = CONCAT44(0x80000080,(int)local_130);
  local_160 = 0;
  local_158 = 0x8000000000000000;
  lVar36 = *(long *)(lVar31 + 0x1000b8);
  local_138 = local_120;
  if (lVar36 == 0) {
    lVar36 = FUN_00e5d3b4();
    *(long *)(lVar31 + 0x1000b8) = lVar36;
  }
  local_150 = *(long *)(*(long *)(lVar36 + 0x3d0) + 0x10);
  if (*(long *)(local_150 + 8) != 0) {
    local_150 = 0;
  }
  local_170[0] = -(ulong)(uVar38 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar38 << 5;
  local_140 = local_170[0];
  if (local_150 == 0) {
    local_148 = (**(code **)PTR_DAT_047d1a08)(1,local_170,0x40);
  }
  else {
    local_e0 = (undefined4 *)(local_170[0] + 0x3f & 0xffffffffffffffc0);
    if (local_e0 <= *(undefined4 **)(local_150 + 0x28)) {
      local_148 = *(long *)(local_150 + 0x38);
      if ((ulong)((long)local_e0 + local_148) <= *(ulong *)(local_150 + 0x40)) {
        *(long *)(local_150 + 0x38) = (long)local_e0 + local_148;
        goto LAB_0306c200;
      }
    }
    local_148 = FUN_031cf3b4(local_150,&local_e0);
  }
LAB_0306c200:
  local_158 = CONCAT44(uVar38,(int)local_158) | 0x8000000000000000;
  local_e0 = (undefined4 *)
             CONCAT44((float)((ulong)*param_8 >> 0x20) - (float)((ulong)local_f0 >> 0x20),
                      (float)*param_8 - (float)local_f0);
  lVar36 = param_12 + 0x18;
  puVar119 = local_170;
  plVar43 = &local_160;
  local_160 = local_148;
  FUN_0306a200(param_1,param_2,param_3 & 0xffffffff,param_4);
  uVar89 = local_110;
  uVar42 = local_158;
  lVar17 = local_160;
  iVar28 = (int)local_158;
  lVar29 = (long)(int)local_158;
  sVar5 = *(short *)((long)param_4 + 10);
  uVar16 = (ulong)sVar5;
  fStack_1d8 = (float)uStack_108;
  fStack_1d4 = (float)((ulong)uStack_108 >> 0x20);
  local_1e0 = (float)local_110;
  fStack_1dc = (float)((ulong)local_110 >> 0x20);
  lVar33 = *(long *)(*(long *)(param_1 + 0x38) + (uVar39 & 0x3ff00));
  uVar39 = lVar29 + uVar16;
  iVar25 = (int)uVar39;
  local_158 = CONCAT44(local_158._4_4_,iVar25);
  if (uVar16 != 0) {
    lVar32 = (long)param_4[1];
    uVar38 = (uint)(short)param_4[2];
    puVar30 = (undefined8 *)(local_160 + lVar29 * 0x20 + 0x10);
    lVar35 = 0;
    uVar16 = uVar16 & 0xffffffff;
    lVar14 = lVar32 * 0x14;
    lVar19 = lVar32;
    do {
      lVar20 = *(long *)(lVar33 + 0x20);
      if (lVar19 < *(int *)(lVar20 + 0x30)) {
        if (*(int *)(lVar20 + 0x78) == 0) {
          iVar18 = (int)lVar19;
        }
        else {
          iVar18 = *(int *)(*(long *)(lVar20 + 0x70) + lVar19 * 4);
        }
        if (iVar18 == -1) {
          piVar21 = (int *)(*(long *)(lVar20 + 0x28) + (lVar35 + lVar32) * 0x14);
        }
        else {
          piVar21 = (int *)(*(long *)(lVar20 + 0xc0) + (long)iVar18 * 0x14);
        }
      }
      else {
        piVar21 = (int *)(*(long *)(lVar20 + 0xe0) + (long)*(int *)(lVar20 + 0x30) * -0x14 + lVar14)
        ;
      }
      iVar52 = *(int *)(lVar20 + 0x40);
      lVar35 = lVar35 + 1;
      lVar14 = lVar14 + 0x14;
      iVar18 = *piVar21;
      iVar47 = piVar21[1];
      fVar46 = *(float *)(lVar33 + 0x6c);
      fVar68 = *(float *)(lVar33 + 0x7c);
      lVar3 = 0x38;
      if (iVar52 <= iVar18) {
        lVar3 = 0xf0;
      }
      iVar54 = 0;
      if (iVar52 <= iVar18) {
        iVar54 = iVar52;
      }
      lVar4 = 0x38;
      if (iVar52 <= iVar47) {
        lVar4 = 0xf0;
      }
      iVar118 = 0;
      if (iVar52 <= iVar47) {
        iVar118 = iVar52;
      }
      pfVar7 = (float *)(*(long *)(lVar20 + lVar4) + (long)(iVar47 - iVar118) * 0x10);
      fVar53 = *pfVar7;
      fVar55 = pfVar7[1];
      fVar59 = pfVar7[2];
      pfVar7 = (float *)(*(long *)(lVar20 + lVar3) + (long)(iVar18 - iVar54) * 0x10);
      fVar81 = *pfVar7;
      fVar77 = pfVar7[1];
      fVar78 = pfVar7[2];
      uVar41 = uVar38 | 0x3f010000;
      uVar38 = uVar38 + 1;
      lVar19 = lVar19 + 1;
      uVar16 = uVar16 - 1;
      fVar79 = *(float *)(lVar33 + 0x8c);
      in_q6 = *(undefined1 (*) [16])(lVar33 + 0x90);
      fVar45 = in_q6._0_4_ +
               *(float *)(lVar33 + 0x80) * fVar59 +
               *(float *)(lVar33 + 0x60) * fVar53 + *(float *)(lVar33 + 0x70) * fVar55;
      fVar51 = in_q6._4_4_ +
               *(float *)(lVar33 + 0x84) * fVar59 +
               *(float *)(lVar33 + 100) * fVar53 + *(float *)(lVar33 + 0x74) * fVar55;
      fVar53 = in_q6._8_4_ +
               *(float *)(lVar33 + 0x88) * fVar59 +
               *(float *)(lVar33 + 0x68) * fVar53 + *(float *)(lVar33 + 0x78) * fVar55;
      fVar55 = in_q6._0_4_ +
               *(float *)(lVar33 + 0x80) * fVar78 +
               *(float *)(lVar33 + 0x60) * fVar81 + *(float *)(lVar33 + 0x70) * fVar77;
      fVar59 = in_q6._4_4_ +
               *(float *)(lVar33 + 0x84) * fVar78 +
               *(float *)(lVar33 + 100) * fVar81 + *(float *)(lVar33 + 0x74) * fVar77;
      fVar60 = in_q6._8_4_ +
               *(float *)(lVar33 + 0x88) * fVar78 +
               *(float *)(lVar33 + 0x68) * fVar81 + *(float *)(lVar33 + 0x78) * fVar77;
      fVar61 = local_1e0 * fVar45;
      fVar66 = fStack_1dc * fVar51;
      fVar67 = fStack_1d8 * fVar53;
      fVar72 = local_1e0 * fVar55;
      fVar75 = fStack_1dc * fVar59;
      fVar76 = fStack_1d8 * fVar60;
      fVar62 = fVar61 + fVar66 + fVar67;
      fVar73 = fVar72 + fVar75 + fVar76;
      fVar76 = fVar72 + fVar75 + fVar76;
      auVar58._0_8_ =
           CONCAT44(fVar51 - fStack_1dc * (fVar61 + fVar66 + fVar67),fVar45 - local_1e0 * fVar62);
      auVar58._8_4_ = fVar53 - fStack_1d8 * fVar62;
      auVar58._12_4_ = uVar41;
      *(float *)(puVar30 + -1) = fVar60 - fStack_1d8 * fVar73;
      *(float *)((long)puVar30 + -4) =
           (in_q6._12_4_ + fVar79 * fVar78 + fVar46 * fVar81 + fVar68 * fVar77) -
           fStack_1d4 * fVar76;
      *(float *)(puVar30 + -2) = fVar55 - local_1e0 * fVar73;
      *(float *)((long)puVar30 + -0xc) = fVar59 - fStack_1dc * fVar76;
      puVar30[1] = auVar58._8_8_;
      *puVar30 = auVar58._0_8_;
      puVar30 = puVar30 + 4;
    } while (uVar16 != 0);
  }
  iVar18 = *(int *)PTR_DAT_047e4f38;
  lVar33 = *(long *)(lVar31 + 0x1000b8);
  if (lVar33 == 0) {
    lVar33 = FUN_00e5d3b4();
    *(long *)(lVar31 + 0x1000b8) = lVar33;
  }
  if (*(long *)(lVar33 + (long)iVar18 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if (0 < iVar28) {
    uVar42 = uVar42 & 0xffffffff;
    lVar33 = lVar17 + 0x10;
    do {
      FUN_03068e70(lVar33 + -0x10,lVar33,param_8,&local_f0,&local_110,&local_138,
                   *param_10 + (ulong)*(ushort *)(lVar33 + 0xc) * 8,
                   *param_9 + (ulong)*(ushort *)(lVar33 + 0xc) * 8 + 4,param_12 + 0x58,plVar43,
                   puVar119,lVar36);
      uVar42 = uVar42 - 1;
      lVar33 = lVar33 + 0x20;
    } while (uVar42 != 0);
  }
  if (0 < sVar5) {
    lVar36 = lVar17 + lVar29 * 0x20 + 0x10;
    do {
      FUN_03068e70(lVar36 + -0x10,lVar36,param_8,&local_f0,&local_110,&local_138,
                   *param_10 + (ulong)*(ushort *)(lVar36 + 0xc) * 8,0,param_12 + 0x58);
      lVar29 = lVar29 + 1;
      lVar36 = lVar36 + 0x20;
    } while (lVar29 < (long)uVar39);
  }
  puVar12 = PTR_PTR_047d1a50;
  iVar28 = iVar25 + -1;
  plVar43 = (long *)PTR_PTR_047d1a50;
  if (iVar28 != 0 && 0 < iVar25) {
    iVar18 = *(int *)PTR_DAT_047e4f38;
    lVar36 = *(long *)(lVar31 + 0x1000b8);
    if (lVar36 == 0) {
      lVar36 = FUN_00e5d3b4();
      *(long *)(lVar31 + 0x1000b8) = lVar36;
    }
    if (*(long *)(lVar36 + (long)iVar18 * 8 + 1000) != 0) {
      FUN_03231bdc();
    }
    iVar18 = iVar28 * iVar25 >> 1;
    local_180 = (float)*param_8;
    if ((int)(*(uint *)((long)param_11 + 0xc) & 0x7fffffff) < iVar18) {
      FUN_03048290(param_11,puVar12 + 0x20,(long)iVar18);
    }
    lVar36 = nn::os::GetSystemTick();
    uVar16 = local_170[0];
    lVar29 = (long)(int)local_130;
    if ((int)param_11[1] != iVar18) {
      *(int *)(param_11 + 1) = iVar18;
    }
    lVar33 = *(long *)(lVar31 + 0x1000b8);
    if (lVar33 == 0) {
      lVar33 = FUN_00e5d3b4();
      *(long *)(lVar31 + 0x1000b8) = lVar33;
    }
    uVar42 = lVar29 * 0x20;
    local_258 = *(long *)(*(long *)(lVar33 + 0x3d0) + 0x10);
    local_b0[0] = uVar42;
    if ((*(long *)(local_258 + 8) == 0) && (local_258 != 0)) {
      local_e0 = (undefined4 *)(uVar42 + 0x3f & 0xffffffffffffffc0);
      if (local_e0 <= *(undefined4 **)(local_258 + 0x28)) {
        lVar29 = *(long *)(local_258 + 0x38);
        if ((ulong)((long)local_e0 + lVar29) <= *(ulong *)(local_258 + 0x40)) {
          *(long *)(local_258 + 0x38) = (long)local_e0 + lVar29;
          goto LAB_0306c6d0;
        }
      }
      lVar29 = FUN_031cf3b4(local_258,&local_e0);
    }
    else {
      lVar29 = (**(code **)PTR_DAT_047d1a08)(1,local_b0,0x40);
      local_258 = 0;
    }
LAB_0306c6d0:
    lVar33 = *(long *)(lVar31 + 0x1000b8);
    if (lVar33 == 0) {
      lVar33 = FUN_00e5d3b4();
      *(long *)(lVar31 + 0x1000b8) = lVar33;
    }
    local_278 = *(long *)(*(long *)(lVar33 + 0x3d0) + 0x10);
    if ((*(long *)(local_278 + 8) == 0) && (local_278 != 0)) {
      local_e0 = (undefined4 *)(uVar42 + 0x3f & 0xffffffffffffffc0);
      if (local_e0 <= *(undefined4 **)(local_278 + 0x28)) {
        local_1f8 = *(long *)(local_278 + 0x38);
        if ((ulong)((long)local_e0 + local_1f8) <= *(ulong *)(local_278 + 0x40)) {
          *(long *)(local_278 + 0x38) = (long)local_e0 + local_1f8;
          local_b0[0] = uVar42;
          goto LAB_0306c790;
        }
      }
      local_b0[0] = uVar42;
      local_1f8 = FUN_031cf3b4(local_278,&local_e0);
    }
    else {
      local_b0[0] = uVar42;
      local_1f8 = (**(code **)PTR_DAT_047d1a08)(1,local_b0,0x40);
      local_278 = 0;
    }
LAB_0306c790:
    uVar40 = uVar39 & 0xffffffff;
    lVar33 = (**(code **)(*(long *)(puVar12 + 0x20) + 0x18))(puVar12 + 0x20,uVar40 << 2);
    uVar22 = uVar39 & 3;
    if (uVar40 - 1 < 3) {
      uVar27 = 0;
    }
    else {
      uVar27 = 0;
      piVar21 = (int *)(lVar33 + 8);
      do {
        iVar18 = (int)uVar27;
        piVar21[-2] = iVar18;
        piVar21[-1] = iVar18 + 1;
        uVar27 = uVar27 + 4;
        *piVar21 = iVar18 + 2;
        piVar21[1] = iVar18 + 3;
        piVar21 = piVar21 + 4;
      } while ((uVar39 & 0xfffffffc) != uVar27);
    }
    for (; uVar22 != 0; uVar22 = uVar22 - 1) {
      *(int *)(lVar33 + uVar27 * 4) = (int)uVar27;
      uVar27 = uVar27 + 1;
    }
    local_e0 = (undefined4 *)0x0;
    local_d8 = 0x8000000000000000;
    lVar35 = *(long *)(lVar31 + 0x1000b8);
    if (lVar35 == 0) {
      lVar35 = FUN_00e5d3b4();
      *(long *)(lVar31 + 0x1000b8) = lVar35;
    }
    local_d0 = *(long *)(*(long *)(lVar35 + 0x3d0) + 0x10);
    if (*(long *)(local_d0 + 8) != 0) {
      local_d0 = 0;
    }
    local_c0 = -(uVar39 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar39 & 0xffffffff) << 2;
    uStack_b8 = local_c0;
    if (local_d0 == 0) {
      local_c8 = (undefined4 *)(**(code **)PTR_DAT_047d1a08)(1,&uStack_b8,0x40);
    }
    else {
      local_b0[0] = local_c0 + 0x3f & 0xffffffffffffffc0;
      if (local_b0[0] <= *(ulong *)(local_d0 + 0x28)) {
        local_c8 = *(undefined4 **)(local_d0 + 0x38);
        if (local_b0[0] + (long)local_c8 <= *(ulong *)(local_d0 + 0x40)) {
          *(ulong *)(local_d0 + 0x38) = local_b0[0] + (long)local_c8;
          goto LAB_0306c8a0;
        }
      }
      local_c8 = (undefined4 *)FUN_031cf3b4(local_d0,local_b0);
    }
LAB_0306c8a0:
    iVar18 = (int)local_d8;
    local_d8 = CONCAT44(iVar25,(int)local_d8) | 0x8000000000000000;
    if (iVar18 != iVar25) {
      local_d8 = CONCAT44(local_d8._4_4_,iVar25);
    }
    *local_c8 = *(undefined4 *)(*param_10 + (ulong)*(ushort *)(local_160 + 0x1c) * 8 + 4);
    local_e0 = local_c8;
    if (iVar25 != 1) {
      uVar39 = 1;
      puVar23 = (ushort *)(local_160 + 0x3c);
      do {
        local_c8[uVar39] = *(undefined4 *)(*param_10 + (ulong)*puVar23 * 8 + 4);
        uVar39 = uVar39 + 1;
        puVar23 = puVar23 + 0x10;
      } while (uVar40 != uVar39);
      FUN_030765a0(lVar33,0,iVar28,&local_e0);
    }
    if (local_c8 == local_e0) {
      local_d8 = local_d8 & 0xffffffff00000000;
    }
    if (local_d0 == 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(1);
      goto LAB_0306ca08;
    }
    uVar39 = local_c0 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_d0 + 0x28) < uVar39) ||
       (*(long *)(local_d0 + 0x38) != uVar39 + (long)local_c8)) {
      if (local_c8 == (undefined4 *)0x0) goto LAB_0306ca08;
      if (*(ulong *)(local_d0 + 0x28) < uVar39 + 0x40) {
        *(int *)(*(long *)(local_d0 + 0x30) + 0x20) =
             *(int *)(*(long *)(local_d0 + 0x30) + 0x20) + -1;
        (**(code **)(**(long **)(local_d0 + 0x10) + 0x18))
                  (*(long **)(local_d0 + 0x10),(long)local_c8 - (long)(int)local_c8[-1],
                   uVar39 + 0x44);
        goto LAB_0306ca08;
      }
      if (*(long *)(local_d0 + 0x38) != uVar39 + (long)local_c8) {
        FUN_031cf778();
        goto LAB_0306ca08;
      }
      *(undefined4 **)(local_d0 + 0x38) = local_c8;
    }
    else {
      *(undefined4 **)(local_d0 + 0x38) = local_c8;
      if (*(undefined4 **)(local_d0 + 0x48) != local_c8) goto LAB_0306ca08;
    }
    FUN_031cf578();
LAB_0306ca08:
    uVar39 = local_d8;
    uVar22 = (ulong)local_d8._4_4_;
    local_d8 = (ulong)local_d8._4_4_ << 0x20;
    if ((-1 < (long)uVar39) && (local_e0 != (undefined4 *)0x0)) {
      (**(code **)(*(long *)puVar12 + 0x20))(puVar12,local_e0,uVar22 << 2);
    }
    puVar12 = PTR_DAT_047d19e0;
    auVar48._8_4_ = fStack_1d8;
    auVar48._0_8_ = uVar89;
    auVar48._12_4_ = fStack_1d4;
    auVar58 = NEON_ext(auVar48,auVar48,4,1);
    uVar89 = NEON_fmov(0x3f800000,4);
    uVar39 = 1;
    bVar37 = true;
LAB_0306caa0:
    iVar28 = *(int *)(lVar33 + uVar39 * 4);
    uVar22 = 0;
    pfVar1 = (float *)(local_160 + (long)iVar28 * 0x20);
    fVar68 = *pfVar1;
    fVar53 = pfVar1[1];
    fVar55 = pfVar1[2];
    fVar59 = pfVar1[3];
    fVar81 = pfVar1[7];
    lVar31 = *param_10;
    auVar49._0_4_ = ABS(pfVar1[4]);
    auVar49._4_4_ = ABS(pfVar1[5]);
    auVar49._8_4_ = ABS(pfVar1[6]);
    auVar49._12_4_ = ABS(fVar81);
    pfVar7 = (float *)(lVar31 + (ulong)SUB42(fVar81,0) * 8);
    fVar46 = *pfVar7;
    fVar77 = fVar68 + (pfVar1[4] - fVar68) * fVar46;
    fVar78 = fVar53 + (pfVar1[5] - fVar53) * fVar46;
    fVar79 = fVar55 + (pfVar1[6] - fVar55) * fVar46;
    fVar81 = fVar59 + (fVar81 - fVar59) * fVar46;
    auVar64._0_4_ = ABS(fVar68);
    auVar64._4_4_ = ABS(fVar53);
    auVar64._8_4_ = ABS(fVar55);
    auVar64._12_4_ = ABS(fVar59);
    fVar46 = pfVar7[1];
    uVar90 = CONCAT44(fVar46,fVar46);
    auVar48 = NEON_fmax(auVar64,auVar49,4);
    uVar56 = NEON_fmaxp(auVar48._0_8_,auVar48._0_8_,4);
    uVar56 = NEON_fmax(CONCAT44(auVar48._8_4_,auVar48._8_4_),uVar56,4);
    auVar48 = in_q6;
    do {
      iVar18 = *(int *)(lVar33 + uVar22 * 4);
      pauVar2 = (undefined1 (*) [16])(local_160 + (long)iVar18 * 0x20);
      auVar49 = *pauVar2;
      auVar64 = pauVar2[1];
      pfVar7 = (float *)(lVar31 + (ulong)auVar64._12_2_ * 8);
      fVar68 = *pfVar7;
      fVar46 = pfVar7[1];
      in_q6._8_8_ = auVar48._8_8_;
      in_q6._0_8_ = NEON_fmin(uVar90,CONCAT44(fVar46,fVar46),4);
      if ((uVar22 == 0) || (!bVar37)) {
        fVar46 = auVar49._0_4_;
        fVar53 = auVar49._4_4_;
        fVar55 = auVar49._8_4_;
        fVar59 = auVar49._12_4_;
        auVar86._0_4_ = ABS(auVar64._0_4_);
        auVar86._4_4_ = ABS(auVar64._4_4_);
        auVar86._8_4_ = ABS(auVar64._8_4_);
        auVar86._12_4_ = ABS(auVar64._12_4_);
        fVar45 = fVar46 + (auVar64._0_4_ - fVar46) * fVar68;
        fVar51 = fVar53 + (auVar64._4_4_ - fVar53) * fVar68;
        fVar60 = fVar55 + (auVar64._8_4_ - fVar55) * fVar68;
        fVar68 = fVar59 + (auVar64._12_4_ - fVar59) * fVar68;
        auVar83._0_4_ = ABS(fVar46);
        auVar83._4_4_ = ABS(fVar53);
        auVar83._8_4_ = ABS(fVar55);
        auVar83._12_4_ = ABS(fVar59);
        auVar49 = NEON_fmax(auVar86,auVar83,4);
        uVar57 = NEON_fmaxp(auVar49._0_8_,auVar49._0_8_,4);
        uVar57 = NEON_fmax(CONCAT44(auVar49._8_4_,auVar49._8_4_),uVar57,4);
        uVar57 = NEON_fmax(uVar56,uVar57,4);
        fVar46 = (float)uVar57 * 7.1525574e-07;
        iVar47 = -(uint)(ABS(fVar77 - fVar45) <= fVar46);
        iVar52 = -(uint)(ABS(fVar78 - fVar51) <= (float)((ulong)uVar57 >> 0x20) * 7.1525574e-07);
        iVar54 = -(uint)(ABS(fVar79 - fVar60) <= fVar46);
        if (CONCAT13((byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar47 >> 0x18) &
                     (byte)((uint)iVar54 >> 0x18),
                     CONCAT12((byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar47 >> 0x10) &
                              (byte)((uint)iVar54 >> 0x10),
                              CONCAT11((byte)((uint)iVar52 >> 8) & (byte)((uint)iVar47 >> 8) &
                                       (byte)((uint)iVar54 >> 8),
                                       (byte)iVar52 & (byte)iVar47 & (byte)iVar54))) == 0) {
          fVar46 = (float)in_q6._0_8_;
          if (uVar22 != 0) {
            uVar27 = 0;
            do {
              iVar52 = *(int *)(lVar33 + uVar27 * 4);
              iVar47 = iVar52;
              if (iVar52 <= iVar28) {
                iVar47 = iVar28;
              }
              iVar54 = iVar28;
              if (iVar52 <= iVar28) {
                iVar54 = iVar52;
              }
              iVar118 = iVar18;
              if (iVar52 <= iVar18) {
                iVar118 = iVar52;
                iVar52 = iVar18;
              }
              fVar53 = *(float *)(*param_11 + (long)(iVar54 + ((iVar47 + -1) * iVar47 >> 1)) * 4);
              fVar55 = *(float *)(*param_11 + (long)(iVar118 + ((iVar52 + -1) * iVar52 >> 1)) * 4);
              if (fVar55 <= fVar53) {
                fVar53 = fVar55;
              }
              if (fVar46 <= fVar53 * 1.01) {
                *(int *)(param_12 + 0xe0) = *(int *)(param_12 + 0xe0) + 1;
                goto LAB_0306d224;
              }
              uVar27 = uVar27 + 1;
            } while (uVar22 != uVar27);
          }
          auVar63._0_4_ = fVar45 - fVar77;
          auVar63._4_4_ = fVar51 - fVar78;
          auVar63._8_4_ = fVar60 - fVar79;
          auVar63._12_4_ = fVar68 - fVar81;
          auVar49 = NEON_ext(auVar63,auVar63,4,1);
          uStack_188 = auVar48._8_4_;
          uStack_184 = auVar48._12_4_;
          fStack_18c = (float)((ulong)in_q6._0_8_ >> 0x20);
          local_220 = auVar58._0_4_;
          fStack_21c = auVar58._4_4_;
          auVar87._0_4_ = local_1e0 * auVar49._0_4_ - local_220 * auVar63._0_4_;
          auVar87._4_4_ = fStack_1dc * auVar49._4_4_ - fStack_21c * auVar63._4_4_;
          auVar87._8_4_ = fStack_1d8 * auVar63._0_4_ - local_1e0 * auVar63._8_4_;
          auVar87._12_4_ = fStack_1d4 * auVar63._4_4_ - fStack_1dc * auVar63._12_4_;
          auVar48 = NEON_ext(auVar87,auVar87,4,1);
          fVar53 = auVar48._0_4_;
          fVar55 = auVar48._4_4_;
          fVar59 = auVar87._0_4_ * auVar87._0_4_ + fVar53 * fVar53 + fVar55 * fVar55;
          auVar69 = SUB1612(ZEXT816(0),0);
          if (fVar59 != 0.0) {
            fVar59 = SQRT(fVar59);
            auVar69._0_4_ = fVar53 / fVar59;
            auVar69._4_4_ =
                 fVar55 / SQRT(auVar87._0_4_ * auVar87._0_4_ + fVar53 * fVar53 + fVar55 * fVar55);
            auVar69._8_4_ = auVar87._0_4_ / fVar59;
          }
          lVar31 = nn::os::GetSystemTick();
          fVar53 = (float)uVar89;
          if ((int)local_130 < 1) {
            uVar38 = 0;
            uVar41 = 0;
          }
          else {
            fVar61 = auVar69._0_4_;
            fVar62 = auVar69._4_4_;
            fVar66 = auVar69._8_4_;
            fVar59 = -(fVar77 * fVar61 + fVar78 * fVar62 + fVar79 * fVar66);
            fVar55 = auVar63._8_4_ * auVar63._8_4_ +
                     auVar63._0_4_ * auVar63._0_4_ + auVar63._4_4_ * auVar63._4_4_;
            auVar96._12_4_ = fVar59;
            auVar96._0_12_ = auVar69;
            lVar35 = 0;
            uVar38 = 0;
            auVar50._0_4_ = auVar63._0_4_ / fVar55;
            auVar50._4_4_ =
                 auVar63._4_4_ /
                 (auVar63._8_4_ * auVar63._8_4_ +
                 auVar63._0_4_ * auVar63._0_4_ + auVar63._4_4_ * auVar63._4_4_);
            auVar50._8_4_ = auVar63._8_4_ / fVar55;
            uVar41 = 0;
            fVar55 = -(fVar77 * auVar50._0_4_ + fVar78 * auVar50._4_4_ + fVar79 * auVar50._8_4_);
            auVar50._12_4_ = fVar55;
            local_230 = (float)uVar16;
            fStack_22c = (float)(uVar16 >> 0x20);
            fStack_228 = (float)local_170[1];
            fStack_224 = (float)(local_170[1] >> 0x20);
            auVar70._0_4_ = local_230 * fVar61;
            auVar70._4_4_ = fStack_22c * fVar62;
            auVar70._8_4_ = fStack_228 * fVar66;
            auVar70._12_4_ = fStack_224 * fVar59;
            auVar49 = NEON_ext(auVar70,auVar70,8,1);
            auVar93._8_8_ = _UNK_03caad18;
            auVar93._0_8_ = _DAT_03caad10;
            auVar48 = a64_TBL(ZEXT816(0),auVar96,auVar93);
            auVar64 = a64_TBL(ZEXT816(0),auVar50,auVar93);
            do {
              puVar30 = (undefined8 *)(local_138 + lVar35);
              uVar57 = *puVar30;
              fVar67 = *(float *)(puVar30 + 2);
              fVar72 = *(float *)((long)puVar30 + 0x14);
              fVar73 = *(float *)(puVar30 + 3);
              fVar75 = *(float *)((long)puVar30 + 0x1c);
              auVar85._0_4_ = fVar61 * fVar67;
              auVar85._4_4_ = fVar62 * fVar72;
              auVar85._8_4_ = fVar66 * fVar73;
              auVar85._12_4_ = fVar59 * fVar75;
              auVar95._0_4_ = auVar50._0_4_ * fVar67;
              auVar95._4_4_ = auVar50._4_4_ * fVar72;
              auVar95._8_4_ = auVar50._8_4_ * fVar73;
              auVar95._12_4_ = fVar55 * fVar75;
              auVar82._0_4_ = fVar61 * (float)uVar57;
              fVar76 = (float)((ulong)uVar57 >> 0x20);
              auVar82._4_4_ = fVar62 * fVar76;
              fVar103 = (float)puVar30[1];
              auVar82._8_4_ = fVar66 * fVar103;
              fVar105 = (float)((ulong)puVar30[1] >> 0x20);
              auVar82._12_4_ = fVar59 * fVar105;
              auVar92._0_4_ = auVar50._0_4_ * (float)uVar57;
              auVar92._4_4_ = auVar50._4_4_ * fVar76;
              auVar92._8_4_ = auVar50._8_4_ * fVar103;
              auVar92._12_4_ = fVar55 * fVar105;
              auVar83 = NEON_ext(auVar82,auVar82,8,1);
              auVar86 = NEON_ext(auVar85,auVar85,8,1);
              auVar93 = NEON_ext(auVar92,auVar92,8,1);
              auVar96 = NEON_ext(auVar95,auVar95,8,1);
              auVar87 = auVar64 ^ (auVar64 ^ auVar48) & *(undefined1 (*) [16])(puVar12 + 0x30);
              auVar98._0_4_ = auVar83._0_4_ + auVar82._0_4_ + auVar82._4_4_ + auVar87._0_4_;
              auVar98._4_4_ = auVar86._0_4_ + auVar85._0_4_ + auVar85._4_4_ + auVar87._4_4_;
              auVar98._8_4_ = auVar93._0_4_ + auVar92._0_4_ + auVar92._4_4_ + auVar87._8_4_;
              auVar98._12_4_ = auVar96._0_4_ + auVar95._0_4_ + auVar95._4_4_ + auVar87._12_4_;
              auVar83 = NEON_rev64(auVar98,4);
              uVar27 = CONCAT44(-(uint)(auVar98._12_4_ < auVar98._8_4_),
                                -(uint)(auVar98._12_4_ < auVar98._8_4_)) & 0x100000001;
              iVar47 = (int)uVar27;
              iVar52 = (int)(uVar27 >> 0x20);
              auVar88._0_8_ = CONCAT44((iVar52 << 0x1f) >> 0x1f,(iVar47 << 0x1f) >> 0x1f);
              auVar88._8_4_ = (iVar47 << 0x1f) >> 0x1f;
              auVar88._12_4_ = (iVar52 << 0x1f) >> 0x1f;
              auVar97._8_8_ = auVar88._8_8_;
              auVar97._0_8_ = auVar88._0_8_;
              auVar98 = auVar98 ^ (auVar98 ^ auVar83) & auVar97;
              fVar105 = auVar98._4_4_;
              uVar27 = CONCAT44(fVar105,fVar105);
              fVar106 = auVar98._12_4_;
              fVar76 = fVar105;
              if (0.0 <= fVar106) {
                fVar108 = auVar98._8_4_;
                fVar76 = auVar98._0_4_;
                uVar24 = CONCAT44(fVar76,fVar76);
                if (fVar108 <= 1.0) {
                  iVar47 = -(uint)(fVar106 - fVar108 == 0.0);
                  fVar109 = (float)((uint)(fVar53 / (fVar106 - fVar108)) &
                                   CONCAT13(~(byte)((uint)iVar47 >> 0x18),
                                            CONCAT12(~(byte)((uint)iVar47 >> 0x10),
                                                     CONCAT11(~(byte)((uint)iVar47 >> 8),
                                                              ~(byte)iVar47))));
                  if (fVar108 < 0.0) {
                    uVar24 = (ulong)(uint)(fVar76 - (fVar105 - fVar76) * fVar109 * fVar108);
                  }
                  if (1.0 < fVar106) {
                    uVar27 = (ulong)(uint)(fVar76 + (fVar105 - fVar76) *
                                                    (fVar53 - fVar108) * fVar109);
                  }
                  uVar34 = uVar24 & 0x7fffffff7fffffff;
                  uVar91 = -(uint)((float)(uVar27 & 0x7fffffff7fffffff) < (float)uVar34);
                  uVar34 = uVar34 ^ (uVar34 ^ uVar27 & 0x7fffffff7fffffff) & (ulong)uVar91;
                  fVar76 = (float)CONCAT13((byte)(-(uint)((float)((uint)uVar24 ^
                                                                 ((uint)uVar24 ^ (uint)uVar27) &
                                                                 ~uVar91) < 0.0) >> 0x18) & 0x80 |
                                           (byte)(uVar34 >> 0x18),(int3)uVar34);
                }
              }
              if (0.0 < (float)((uint)fVar76 ^
                               ((uint)fVar76 ^
                               (uint)(fVar76 - (auVar70._0_4_ + auVar70._4_4_ +
                                               auVar49._0_4_ + fVar59))) &
                               -(uint)(ABS(fVar76) < local_180 * 0.007874016))) {
                lVar14 = (long)(int)uVar41;
                uVar41 = uVar41 + 1;
                puVar30 = (undefined8 *)(lVar29 + lVar14 * 0x20);
              }
              else {
                lVar14 = (long)(int)uVar38;
                uVar38 = uVar38 + 1;
                puVar30 = (undefined8 *)(local_1f8 + lVar14 * 0x20);
              }
              lVar35 = lVar35 + 0x20;
              puVar30[1] = CONCAT44(ABS(fVar76),fVar103);
              *puVar30 = uVar57;
              *(float *)(puVar30 + 3) = fVar73;
              *(float *)((long)puVar30 + 0x1c) = fVar75;
              *(float *)(puVar30 + 2) = fVar67;
              *(float *)((long)puVar30 + 0x14) = fVar72;
            } while ((local_130 & 0xffffffff) * 0x20 != lVar35);
          }
          lVar35 = nn::os::GetSystemTick();
          *(long *)(param_12 + 0x98) = (lVar35 - lVar31) + *(long *)(param_12 + 0x98);
          *(int *)(param_12 + 0xa0) = *(int *)(param_12 + 0xa0) + 1;
          if (uVar41 - 1 != 0 && 0 < (int)uVar41) {
            FUN_03076680(lVar29,0,uVar41 - 1);
          }
          if (1 < (int)uVar38) {
            FUN_03076680(local_1f8,0,uVar38 - 1);
          }
          lVar31 = nn::os::GetSystemTick();
          fVar55 = fVar46;
          if ((uVar38 != 0) && (uVar41 != 0)) {
            fVar55 = fVar46 - (float)local_f0;
            fVar59 = (float)((ulong)local_f0 >> 0x20);
            fStack_18c = fStack_18c - fVar59;
            fVar55 = fVar55 + fVar55;
            fStack_18c = fStack_18c + fStack_18c;
            uVar27 = CONCAT44(fStack_18c,fVar55);
            if (0 < (int)uVar41) {
              auVar65._0_4_ = fVar77 * auVar63._0_4_;
              auVar65._4_4_ = fVar78 * auVar63._4_4_;
              auVar65._8_4_ = fVar79 * auVar63._8_4_;
              auVar65._12_4_ = fVar81 * auVar63._12_4_;
              auVar48 = NEON_ext(auVar65,auVar65,8,1);
              auVar71._0_4_ = fVar45 * auVar63._0_4_;
              auVar71._4_4_ = fVar51 * auVar63._4_4_;
              auVar71._8_4_ = fVar60 * auVar63._8_4_;
              auVar71._12_4_ = fVar68 * auVar63._12_4_;
              auVar49 = NEON_ext(auVar71,auVar71,8,1);
              auVar74._0_4_ = fVar55 * fVar55;
              auVar74._4_4_ = fStack_18c * fStack_18c;
              auVar74._8_8_ = 0;
              uVar24 = 0;
              do {
                puVar30 = (undefined8 *)(lVar29 + uVar24 * 0x20);
                uVar80 = puVar30[1];
                uVar57 = *puVar30;
                fVar68 = (float)((ulong)uVar80 >> 0x20);
                if ((float)uVar27 < fVar68) break;
                if (0 < (int)uVar38) {
                  lVar35 = lVar29 + uVar24 * 0x20;
                  fVar55 = (float)uVar57;
                  auVar84._0_4_ = *(float *)(lVar35 + 0x10) - fVar55;
                  fVar45 = (float)((ulong)uVar57 >> 0x20);
                  auVar84._4_4_ = *(float *)(lVar35 + 0x14) - fVar45;
                  fVar51 = (float)uVar80;
                  auVar84._8_4_ = *(float *)(lVar35 + 0x18) - fVar51;
                  auVar84._12_4_ = *(float *)(lVar35 + 0x1c) - fVar68;
                  auVar64 = NEON_ext(auVar84,auVar84,4,1);
                  auVar94._0_4_ = auVar84._0_4_ * auVar84._0_4_;
                  auVar94._4_4_ = auVar84._4_4_ * auVar84._4_4_;
                  auVar94._8_4_ = auVar84._8_4_ * auVar84._8_4_;
                  auVar94._12_4_ = auVar84._12_4_ * auVar84._12_4_;
                  auVar83 = NEON_ext(auVar94,auVar94,8,1);
                  puVar30 = (undefined8 *)(local_1f8 + 0x10);
                  uVar34 = (ulong)uVar38;
                  do {
                    auVar86 = *(undefined1 (*) [16])(puVar30 + -2);
                    fVar60 = auVar86._12_4_;
                    if ((float)uVar27 < fVar68 + fVar60) break;
                    fVar67 = auVar86._0_4_;
                    fVar61 = (float)*puVar30 - fVar67;
                    fVar72 = auVar86._4_4_;
                    fVar62 = (float)((ulong)*puVar30 >> 0x20) - fVar72;
                    uVar99 = SUB41(fVar62,0);
                    uVar100 = (undefined1)((uint)fVar62 >> 8);
                    uVar101 = (undefined1)((uint)fVar62 >> 0x10);
                    uVar102 = (undefined1)((uint)fVar62 >> 0x18);
                    fVar73 = auVar86._8_4_;
                    fVar75 = (float)puVar30[1] - fVar73;
                    fVar76 = (float)((ulong)puVar30[1] >> 0x20) - fVar60;
                    auVar8[4] = uVar99;
                    auVar8._0_4_ = fVar61;
                    auVar8[5] = uVar100;
                    auVar8[6] = uVar101;
                    auVar8[7] = uVar102;
                    auVar8._8_4_ = fVar75;
                    auVar8._12_4_ = fVar76;
                    auVar9[4] = uVar99;
                    auVar9._0_4_ = fVar61;
                    auVar9[5] = uVar100;
                    auVar9[6] = uVar101;
                    auVar9[7] = uVar102;
                    auVar9._8_4_ = fVar75;
                    auVar9._12_4_ = fVar76;
                    auVar86 = NEON_ext(auVar8,auVar9,4,1);
                    fVar114 = (float)(CONCAT17(uVar102,CONCAT16(uVar101,CONCAT15(uVar100,CONCAT14(
                                                  uVar99,fVar61)))) >> 0x20);
                    fVar106 = fVar67 - fVar55;
                    fVar108 = fVar72 - fVar45;
                    fVar109 = fVar73 - fVar51;
                    fVar66 = auVar64._0_4_ * fVar61 - auVar84._0_4_ * auVar86._0_4_;
                    auVar104._0_8_ =
                         CONCAT44(auVar64._4_4_ * fVar62 - auVar84._4_4_ * auVar86._4_4_,fVar66);
                    auVar104._8_4_ = auVar84._0_4_ * fVar75 - auVar84._8_4_ * fVar61;
                    auVar104._12_4_ = auVar84._4_4_ * fVar76 - auVar84._12_4_ * fVar114;
                    auVar87 = NEON_ext(auVar104,auVar104,4,1);
                    uVar57 = NEON_ext(auVar87._0_8_,auVar104._0_8_,4,1);
                    fVar115 = auVar87._0_4_;
                    fVar113 = auVar87._4_4_;
                    fVar103 = fVar115 * fVar115 + fVar113 * fVar113 + fVar66 * fVar66;
                    fVar105 = fVar115 * fVar115 + fVar113 * fVar113 + fVar66 * fVar66;
                    iVar47 = -(uint)(fVar103 == 0.0);
                    auVar116._0_4_ = auVar84._0_4_ * fVar106;
                    auVar116._4_4_ = auVar84._4_4_ * fVar108;
                    auVar116._8_4_ = auVar84._8_4_ * fVar109;
                    auVar116._12_4_ = auVar84._12_4_ * (fVar60 - fVar68);
                    auVar117._0_4_ = fVar61 * fVar61;
                    auVar117._4_4_ = fVar62 * fVar62;
                    auVar117._8_4_ = fVar75 * fVar75;
                    auVar117._12_4_ = fVar76 * fVar76;
                    uVar44 = CONCAT13(~(byte)((uint)iVar47 >> 0x18),
                                      CONCAT12(~(byte)((uint)iVar47 >> 0x10),
                                               CONCAT11(~(byte)((uint)iVar47 >> 8),~(byte)iVar47)));
                    auVar111._0_4_ = auVar86._0_4_ * fVar115 - fVar61 * (float)uVar57;
                    auVar111._4_4_ =
                         auVar86._4_4_ * fVar113 - fVar62 * (float)((ulong)uVar57 >> 0x20);
                    auVar111._8_4_ = fVar61 * fVar66 - fVar75 * fVar115;
                    auVar111._12_4_ = fVar114 * 0.0 - fVar76 * fVar113;
                    auVar86 = NEON_ext(auVar111,auVar111,4,1);
                    fVar114 = fVar106 * auVar86._0_4_;
                    fVar115 = fVar108 * auVar86._4_4_;
                    iVar47 = -(uint)(fVar103 == 0.0);
                    iVar52 = -(uint)(fVar105 == 0.0);
                    auVar107._0_4_ = fVar106 * fVar61;
                    auVar107._4_4_ = fVar108 * fVar62;
                    auVar107._8_4_ = fVar109 * fVar75;
                    auVar107._12_4_ = (fVar60 - fVar68) * fVar76;
                    auVar87 = NEON_ext(auVar117,auVar117,8,1);
                    auVar86 = NEON_ext(auVar107,auVar107,8,1);
                    uVar110 = CONCAT44((float)((ulong)uVar89 >> 0x20) / fVar105,fVar53 / fVar103) &
                              CONCAT44(uVar44,uVar44);
                    fVar66 = auVar87._0_4_ + auVar117._0_4_ + auVar117._4_4_;
                    fVar105 = auVar86._0_4_ + auVar107._0_4_ + auVar107._4_4_;
                    uVar57 = NEON_fminnm(CONCAT44((float)(uVar110 >> 0x20) *
                                                  (fVar114 + fVar115 + fVar109 * auVar111._0_4_),
                                                  (float)uVar110 *
                                                  (fVar114 + fVar115 + fVar109 * auVar111._0_4_)),
                                         uVar89,4);
                    fVar106 = auVar84._8_4_ * fVar75 +
                              auVar84._0_4_ * fVar61 + auVar84._4_4_ * fVar62;
                    fVar108 = auVar84._8_4_ * fVar75 +
                              auVar84._0_4_ * fVar61 + auVar84._4_4_ * fVar62;
                    auVar86 = NEON_ext(auVar116,auVar116,8,1);
                    fVar103 = auVar83._0_4_ + auVar94._0_4_ + auVar94._4_4_;
                    fVar114 = auVar86._0_4_ + auVar116._0_4_ + auVar116._4_4_;
                    auVar86 = NEON_fmov(0x3f800000,4);
                    uVar110 = NEON_fmax(uVar57,0,4);
                    iVar54 = -(uint)(fVar103 == 0.0);
                    iVar118 = -(uint)(fVar66 == 0.0);
                    fVar103 = auVar86._0_4_ / fVar103;
                    fVar66 = auVar86._8_4_ / fVar66;
                    fVar109 = (float)CONCAT13((byte)((uint)fVar103 >> 0x18) &
                                              ~(byte)((uint)iVar54 >> 0x18),
                                              CONCAT12((byte)((uint)fVar103 >> 0x10) &
                                                       ~(byte)((uint)iVar54 >> 0x10),
                                                       CONCAT11((byte)((uint)fVar103 >> 8) &
                                                                ~(byte)((uint)iVar54 >> 8),
                                                                SUB41(fVar103,0) & ~(byte)iVar54)));
                    fVar66 = (float)CONCAT13((byte)((uint)fVar66 >> 0x18) &
                                             ~(byte)((uint)iVar118 >> 0x18),
                                             CONCAT12((byte)((uint)fVar66 >> 0x10) &
                                                      ~(byte)((uint)iVar118 >> 0x10),
                                                      CONCAT11((byte)((uint)fVar66 >> 8) &
                                                               ~(byte)((uint)iVar118 >> 8),
                                                               SUB41(fVar66,0) & ~(byte)iVar118)));
                    fVar103 = ((float)uVar110 * fVar106 - fVar105) * fVar66;
                    fVar66 = ((float)(uVar110 >> 0x20) * fVar108 - fVar105) * fVar66;
                    uVar57 = NEON_fminnm(CONCAT44(fVar66,fVar103),uVar89,4);
                    uVar57 = NEON_fmax(uVar57,0,4);
                    fVar115 = (float)uVar57;
                    fVar113 = (float)((ulong)uVar57 >> 0x20);
                    iVar54 = -(uint)(fVar115 == fVar103);
                    iVar118 = -(uint)(fVar113 == fVar66);
                    uVar57 = NEON_fminnm(CONCAT44((fVar114 + fVar113 * fVar108) * fVar109,
                                                  (fVar114 + fVar115 * fVar106) * fVar109),uVar89,4)
                    ;
                    uVar112 = NEON_fmax(uVar57,0,4);
                    uVar110 = uVar110 ^ (uVar110 ^ uVar112) &
                                        CONCAT17(~(byte)((uint)iVar118 >> 0x18) |
                                                 (byte)((uint)iVar52 >> 0x18),
                                                 CONCAT16(~(byte)((uint)iVar118 >> 0x10) |
                                                          (byte)((uint)iVar52 >> 0x10),
                                                          CONCAT15(~(byte)((uint)iVar118 >> 8) |
                                                                   (byte)((uint)iVar52 >> 8),
                                                                   CONCAT14(~(byte)iVar118 |
                                                                            (byte)iVar52,
                                                                            CONCAT13(~(byte)((uint)
                                                  iVar54 >> 0x18) | (byte)((uint)iVar47 >> 0x18),
                                                  CONCAT12(~(byte)((uint)iVar54 >> 0x10) |
                                                           (byte)((uint)iVar47 >> 0x10),
                                                           CONCAT11(~(byte)((uint)iVar54 >> 8) |
                                                                    (byte)((uint)iVar47 >> 8),
                                                                    ~(byte)iVar54 | (byte)iVar47))))
                                                  )));
                    fVar66 = (float)uVar110;
                    fVar105 = (float)(uVar110 >> 0x20);
                    fVar103 = fVar55 + auVar84._0_4_ * fVar66;
                    fVar106 = fVar45 + auVar84._4_4_ * fVar105;
                    fVar108 = fVar51 + auVar84._8_4_ * fVar66;
                    fVar105 = fVar68 + auVar84._12_4_ * fVar105;
                    fVar61 = fVar103 - (fVar67 + fVar61 * fVar115);
                    fVar62 = fVar106 - (fVar72 + fVar62 * fVar113);
                    fVar72 = fVar108 - (fVar73 + fVar75 * fVar115);
                    fVar66 = fVar61 * fVar61 + fVar62 * fVar62 + fVar72 * fVar72;
                    fVar67 = fVar61 * fVar61 + fVar62 * fVar62 + fVar72 * fVar72;
                    if (fVar66 < auVar74._0_4_) {
                      fVar61 = auVar63._0_4_ * (fVar103 + fVar61 * -0.5);
                      fVar62 = auVar63._4_4_ * (fVar106 + fVar62 * -0.5);
                      uVar99 = (undefined1)((uint)fVar62 >> 8);
                      uVar100 = (undefined1)((uint)fVar62 >> 0x10);
                      uVar101 = (undefined1)((uint)fVar62 >> 0x18);
                      fVar72 = auVar63._8_4_ * (fVar108 + fVar72 * -0.5);
                      fVar60 = auVar63._12_4_ *
                               (fVar105 + (fVar105 - (fVar60 + fVar76 * fVar113)) * -0.5);
                      auVar10[4] = SUB41(fVar62,0);
                      auVar10._0_4_ = fVar61;
                      auVar10[5] = uVar99;
                      auVar10[6] = uVar100;
                      auVar10[7] = uVar101;
                      auVar10._8_4_ = fVar72;
                      auVar10._12_4_ = fVar60;
                      auVar11[4] = SUB41(fVar62,0);
                      auVar11._0_4_ = fVar61;
                      auVar11[5] = uVar99;
                      auVar11[6] = uVar100;
                      auVar11[7] = uVar101;
                      auVar11._8_4_ = fVar72;
                      auVar11._12_4_ = fVar60;
                      auVar86 = NEON_ext(auVar10,auVar11,8,1);
                      fVar60 = auVar86._0_4_ + fVar61 + fVar62;
                      iVar47 = -(uint)((~(auVar48._0_4_ + auVar65._0_4_ + auVar65._4_4_ < fVar60) |
                                       ~(fVar60 < auVar49._0_4_ + auVar71._0_4_ + auVar71._4_4_)) &
                                      1);
                      uVar99 = (undefined1)((uint)iVar47 >> 8);
                      uVar100 = (undefined1)((uint)iVar47 >> 0x10);
                      uVar101 = (undefined1)((uint)iVar47 >> 0x18);
                      auVar74._0_8_ =
                           auVar74._0_8_ ^
                           (auVar74._0_8_ ^ CONCAT44(fVar67,fVar66)) &
                           ~CONCAT17(uVar101,CONCAT16(uVar100,CONCAT15(uVar99,CONCAT14((char)iVar47,
                                                                                       iVar47))));
                      uVar27 = uVar27 ^ (uVar27 ^ CONCAT44(SQRT(fVar67),SQRT(fVar66))) &
                                        ~CONCAT17(uVar101,CONCAT16(uVar100,CONCAT15(uVar99,CONCAT14(
                                                  (char)iVar47,iVar47))));
                    }
                    uVar34 = uVar34 - 1;
                    puVar30 = puVar30 + 4;
                  } while (uVar34 != 0);
                }
                uVar24 = uVar24 + 1;
              } while (uVar24 != uVar41);
            }
            fVar55 = (float)local_f0 + (float)uVar27 * 0.5;
            fStack_18c = fVar59 + (float)(uVar27 >> 0x20) * 0.5;
            uStack_188 = 0;
            uStack_184 = 0;
          }
          lVar35 = nn::os::GetSystemTick();
          in_q6._4_4_ = fStack_18c;
          in_q6._0_4_ = fVar55;
          in_q6._8_4_ = uStack_188;
          in_q6._12_4_ = uStack_184;
          *(long *)(param_12 + 0xb0) = (lVar35 - lVar31) + *(long *)(param_12 + 0xb0);
          *(int *)(param_12 + 0xb8) = *(int *)(param_12 + 0xb8) + 1;
          bVar37 = (bool)(bVar37 & fVar46 <= fVar55 * 1.01);
          *(int *)(param_12 + 0xe4) = *(int *)(param_12 + 0xe4) + 1;
        }
        else {
          *(int *)(param_12 + 0xdc) = *(int *)(param_12 + 0xdc) + 1;
          in_q6._8_8_ = in_register_000051e8;
          in_q6._0_8_ = uVar90;
        }
      }
      else {
        *(int *)(param_12 + 0xd8) = *(int *)(param_12 + 0xd8) + 1;
      }
LAB_0306d224:
      iVar47 = iVar18;
      if (iVar18 <= iVar28) {
        iVar47 = iVar28;
      }
      iVar52 = iVar28;
      if (iVar18 <= iVar28) {
        iVar52 = iVar18;
      }
      uVar22 = uVar22 + 1;
      *(int *)(*param_11 + (long)(iVar52 + ((iVar47 + -1) * iVar47 >> 1)) * 4) = in_q6._0_4_;
      plVar43 = (long *)PTR_PTR_047d1a50;
      if (uVar22 == uVar39) goto LAB_0306d25c;
      lVar31 = *param_10;
      auVar48 = in_q6;
    } while( true );
  }
LAB_0306d45c:
  if (local_148 == lVar17) {
    local_158 = local_158 & 0xffffffff00000000;
  }
  if (local_150 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar39 = local_140 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_150 + 0x28) < uVar39) ||
       (*(long *)(local_150 + 0x38) != uVar39 + local_148)) {
      if (local_148 != 0) {
        if (*(ulong *)(local_150 + 0x28) < uVar39 + 0x40) {
          *(int *)(*(long *)(local_150 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_150 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_150 + 0x10) + 0x18))
                    (*(long **)(local_150 + 0x10),local_148 - *(int *)(local_148 + -4),uVar39 + 0x44
                    );
        }
        else {
          if (*(long *)(local_150 + 0x38) == uVar39 + local_148) {
            *(long *)(local_150 + 0x38) = local_148;
            goto LAB_0306d52c;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(long *)(local_150 + 0x38) = local_148;
      if (*(long *)(local_150 + 0x48) == local_148) {
LAB_0306d52c:
        FUN_031cf578();
      }
    }
  }
  uVar16 = local_158;
  uVar39 = local_158 >> 0x20;
  local_158 = uVar39 << 0x20;
  if ((lVar17 != 0) && (-1 < (long)uVar16)) {
    (**(code **)(*plVar43 + 0x20))(plVar43,lVar17,uVar39 << 5);
  }
  lVar31 = local_138;
  if (local_120 == local_138) {
    local_130 = local_130 & 0xffffffff00000000;
  }
  if (local_128 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar39 = local_118 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_128 + 0x28) < uVar39) ||
       (*(long *)(local_128 + 0x38) != uVar39 + local_120)) {
      if (local_120 != 0) {
        if (*(ulong *)(local_128 + 0x28) < uVar39 + 0x40) {
          *(int *)(*(long *)(local_128 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_128 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_128 + 0x10) + 0x18))
                    (*(long **)(local_128 + 0x10),local_120 - *(int *)(local_120 + -4),uVar39 + 0x44
                    );
        }
        else {
          if (*(long *)(local_128 + 0x38) == uVar39 + local_120) {
            *(long *)(local_128 + 0x38) = local_120;
            goto LAB_0306d620;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(long *)(local_128 + 0x38) = local_120;
      if (*(long *)(local_128 + 0x48) == local_120) {
LAB_0306d620:
        FUN_031cf578();
      }
    }
  }
  uVar16 = local_130;
  uVar39 = local_130 >> 0x20;
  local_130 = uVar39 << 0x20;
  if ((lVar31 != 0) && (-1 < (long)uVar16)) {
    (**(code **)(*plVar43 + 0x20))(plVar43,lVar31,uVar39 << 5);
  }
  uVar89 = 1;
LAB_0306d650:
  if ((local_100 != (long *)0x0) && (local_f8 != '\0')) {
    lVar31 = *local_100;
    if (((*(byte *)(lVar31 + 0x38) & 1) != 0) && (local_100[6] != 0)) {
      puVar30 = (undefined8 *)local_100[2];
      uVar39 = (long)puVar30 + 0x17U & 0xfffffffffffffff8;
      if ((uVar39 <= (ulong)local_100[3]) && (local_100[2] = uVar39, puVar30 != (undefined8 *)0x0))
      {
        *puVar30 = &DAT_03c4e575;
        puVar30[1] = *(undefined8 *)(local_100[6] + 8);
      }
    }
    puVar30 = (undefined8 *)local_100[2];
    uVar39 = (long)puVar30 + 0x17U & 0xfffffffffffffff8;
    if ((uVar39 <= (ulong)local_100[3]) && (local_100[2] = uVar39, puVar30 != (undefined8 *)0x0)) {
      *puVar30 = &DAT_03c2d363;
      uVar56 = nn::os::GetSystemTick();
      puVar30[1] = uVar56;
    }
    if (*(code **)(lVar31 + 0x20) != (code *)0x0) {
      (**(code **)(lVar31 + 0x20))(*(undefined8 *)(lVar31 + 0x28));
    }
  }
  lVar31 = nn::os::GetSystemTick();
  *(long *)(param_12 + 8) = (lVar31 - lVar13) + *(long *)(param_12 + 8);
  *(int *)(param_12 + 0x10) = *(int *)(param_12 + 0x10) + 1;
  return uVar89;
LAB_0306d25c:
  uVar39 = uVar39 + 1;
  if (uVar39 == uVar40) goto code_r0x0306d26c;
  goto LAB_0306caa0;
code_r0x0306d26c:
  if ((-1 < iVar25) && (lVar33 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,lVar33,uVar40 << 2);
  }
  if (local_278 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,local_1f8,uVar42);
  }
  else {
    uVar39 = uVar42 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_278 + 0x28) < uVar39) ||
       (*(long *)(local_278 + 0x38) != uVar39 + local_1f8)) {
      if (local_1f8 != 0) {
        if (*(ulong *)(local_278 + 0x28) < uVar39 + 0x40) {
          *(int *)(*(long *)(local_278 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_278 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_278 + 0x10) + 0x18))
                    (*(long **)(local_278 + 0x10),local_1f8 - *(int *)(local_1f8 + -4),uVar39 + 0x44
                    );
        }
        else {
          if (*(long *)(local_278 + 0x38) == uVar39 + local_1f8) {
            *(long *)(local_278 + 0x38) = local_1f8;
            goto LAB_0306d36c;
          }
          FUN_031cf778(local_278);
        }
      }
    }
    else {
      *(long *)(local_278 + 0x38) = local_1f8;
      if (*(long *)(local_278 + 0x48) == local_1f8) {
LAB_0306d36c:
        FUN_031cf578(local_278);
      }
    }
  }
  if (local_258 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar29,uVar42);
  }
  else {
    uVar39 = uVar42 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulong *)(local_258 + 0x28) < uVar39) || (*(long *)(local_258 + 0x38) != uVar39 + lVar29))
    {
      if (lVar29 != 0) {
        if (*(ulong *)(local_258 + 0x28) < uVar39 + 0x40) {
          *(int *)(*(long *)(local_258 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_258 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_258 + 0x10) + 0x18))
                    (*(long **)(local_258 + 0x10),lVar29 - *(int *)(lVar29 + -4),uVar39 + 0x44);
        }
        else {
          if (*(long *)(local_258 + 0x38) == uVar39 + lVar29) {
            *(long *)(local_258 + 0x38) = lVar29;
            goto LAB_0306d434;
          }
          FUN_031cf778(local_258,lVar29);
        }
      }
    }
    else {
      *(long *)(local_258 + 0x38) = lVar29;
      if (*(long *)(local_258 + 0x48) == lVar29) {
LAB_0306d434:
        FUN_031cf578();
      }
    }
  }
  lVar31 = nn::os::GetSystemTick();
  *(long *)(param_12 + 0x80) = (lVar31 - lVar36) + *(long *)(param_12 + 0x80);
  *(int *)(param_12 + 0x88) = *(int *)(param_12 + 0x88) + 1;
  goto LAB_0306d45c;
}



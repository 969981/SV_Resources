/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033388c8; name: FUN_033388c8
 */


undefined8 * FUN_033388c8(long *param_1,long *param_2,int param_3,ulong *param_4)

{
  size_t sVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  long *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong *puVar11;
  char *pcVar12;
  size_t sVar13;
  long lVar14;
  void *pvVar15;
  void *pvVar16;
  ThreadType *pTVar17;
  char *pcVar18;
  undefined8 uVar19;
  long lVar20;
  byte bVar21;
  ulong *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  byte *pbVar28;
  long lVar29;
  undefined4 *puVar30;
  long *plVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  undefined4 uVar34;
  undefined **ppuVar35;
  long lVar36;
  undefined **ppuVar37;
  long *plVar38;
  long *local_4b8;
  char *local_4a0;
  undefined8 uStack_498;
  undefined8 *local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  char *local_478;
  undefined8 local_470;
  char *local_468;
  undefined8 local_460;
  undefined8 uStack_458;
  char local_450 [256];
  byte *local_350;
  char *local_348;
  undefined8 local_340;
  char acStack_338 [128];
  undefined4 local_2b8;
  undefined **local_2b0;
  undefined8 local_2a8;
  undefined *local_2a0;
  ulong local_298;
  long local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  ulong local_250;
  undefined8 local_248 [3];
  ulong local_230;
  long local_228;
  undefined4 local_220;
  undefined8 local_1d0;
  long *local_1b0;
  undefined8 local_1a8;
  undefined8 local_190;
  long *local_178;
  long *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 *local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 auStack_110 [32];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [24];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  long *local_90;
  undefined8 local_88;
  ulong *local_80;
  undefined8 local_78;
  ulong local_70 [2];
  
  local_70[0] = 0;
  iVar10 = 0;
  if (param_3 != -1) {
    iVar10 = param_3;
  }
  if (*param_2 == param_2[1]) {
    local_2b0 = &local_2a0;
    local_2a8 = (undefined **)0x8000008000000001;
    local_220 = 1;
    local_2a0 = (undefined *)((ulong)local_2a0 & 0xffffffffffffff00);
    pcVar12 = (char *)FUN_031e12d8(param_4,&local_2b0,0,0);
    uVar26 = local_70[0];
    if (pcVar12 != (char *)(local_70[0] & 0xfffffffffffffffe)) {
      if (pcVar12 == (char *)0x0) {
        local_70[0] = 0;
      }
      else {
        sVar13 = strlen(pcVar12);
        sVar13 = (size_t)((int)sVar13 + 1);
        pvVar15 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar13);
        memcpy(pvVar15,pcVar12,sVar13);
        local_70[0] = (ulong)pvVar15 | 1;
      }
      if ((uVar26 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar26 - 1,0);
      }
    }
    plVar31 = param_1 + 0x23;
    puVar11 = param_4;
    do {
      uVar26 = *puVar11;
      if (((uint)uVar26 >> 4 & 1) != 0) {
        uVar34 = (undefined4)puVar11[(ulong)(byte)POPCOUNT((byte)uVar26 & 0xf) + 2];
        goto LAB_03338adc;
      }
    } while (((uVar26 & 9) == 0) && (puVar11 = (ulong *)puVar11[1], puVar11 != (ulong *)0x0));
    uVar34 = 0;
LAB_03338adc:
    uVar9 = FUN_03341604(plVar31,local_70);
    if (*(uint *)(param_1 + 0x24) == uVar9) {
      uVar25 = uVar9;
      if ((int)(*(uint *)((long)param_1 + 0x124) & 0x7fffffff) <= (int)uVar9) {
        FUN_0334108c(plVar31,PTR_PTR_047d1a50,(long)(int)(uVar9 + 1));
        uVar25 = *(uint *)(param_1 + 0x24);
      }
      lVar14 = *plVar31;
      puVar11 = (ulong *)(lVar14 + (long)(int)uVar25 * 0x10);
      *puVar11 = 0;
      pcVar12 = (char *)(local_70[0] & 0xfffffffffffffffe);
      if (pcVar12 != (char *)0x0) {
        sVar13 = strlen(pcVar12);
        sVar13 = (size_t)((int)sVar13 + 1);
        pvVar15 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar13);
        memcpy(pvVar15,pcVar12,sVar13);
        *puVar11 = (ulong)pvVar15 | 1;
      }
      *(undefined4 *)(lVar14 + (long)(int)uVar25 * 0x10 + 8) = uVar34;
      *(uint *)(param_1 + 0x24) = uVar9 + 1;
    }
    uVar26 = (ulong)local_2a8;
    iVar10 = *(int *)(*plVar31 + ((long)((ulong)uVar9 << 0x20) >> 0x1c) + 8);
    local_2a8 = (undefined **)((ulong)local_2a8 & 0xffffffff00000000);
    if ((-1 < (long)uVar26) && (local_2b0 != (undefined **)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
  }
  else {
    FUN_031ca644(local_70);
    plVar31 = (long *)param_1[0x21];
    FUN_031ca554(&local_2b0,*param_2,param_2[1]);
    ppuVar35 = local_2b0;
    puVar11 = (ulong *)(**(code **)(*plVar31 + 0x20))(plVar31,(ulong)local_2b0 & 0xfffffffffffffffe)
    ;
    if (((ulong)ppuVar35 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)ppuVar35 + -1),0);
    }
    if (puVar11 != (ulong *)0x0) {
      puVar22 = puVar11;
      do {
        uVar26 = *puVar22;
        if (((uint)uVar26 >> 3 & 1) != 0) {
          pcVar12 = (char *)puVar22[(ulong)(byte)POPCOUNT((byte)uVar26 & 7) + 2];
          goto LAB_03338a3c;
        }
      } while (((uVar26 & 1) == 0) && (puVar22 = (ulong *)puVar22[1], puVar22 != (ulong *)0x0));
      pcVar12 = (char *)0x0;
LAB_03338a3c:
      iVar8 = strcmp(pcVar12,"hkHalf16");
      if (iVar8 != 0) {
        puVar22 = puVar11;
        while (uVar26 = *puVar22, ((uint)uVar26 >> 3 & 1) == 0) {
          if (((uVar26 & 1) != 0) || (puVar22 = (ulong *)puVar22[1], puVar22 == (ulong *)0x0))
          goto LAB_03338c0c;
        }
        if (puVar22 != (ulong *)0x0) {
          pcVar12 = (char *)puVar22[(ulong)(byte)POPCOUNT((byte)uVar26 & 7) + 2];
          goto LAB_03338c10;
        }
LAB_03338c0c:
        pcVar12 = (char *)0x0;
LAB_03338c10:
        iVar8 = strcmp(pcVar12,"hkPropertyBag");
        if (iVar8 != 0) {
          for (; (*puVar11 & 1) == 0; puVar11 = (ulong *)puVar11[1]) {
          }
          if ((puVar11[2] & 0x1f) != 7) {
            puVar32 = (undefined8 *)0x0;
            goto LAB_03339da4;
          }
        }
      }
    }
  }
  ppuVar35 = (undefined **)(local_70[0] & 0xfffffffffffffffe);
  if (ppuVar35 == (undefined **)0x0) {
    iVar8 = 0;
  }
  else {
    sVar13 = strlen((char *)ppuVar35);
    iVar8 = (int)sVar13;
  }
  local_2a8 = (undefined **)((long)ppuVar35 + (long)iVar8);
  local_2b0 = ppuVar35;
  lVar14 = FUN_03342334(*(undefined8 *)(*(long *)(param_1[0x20] + 0x68) + 0x90),&local_2b0,iVar10);
  uVar9 = *(uint *)((long)param_1 + 100);
  plVar31 = param_1 + 0xb;
  if (0 < (int)uVar9) {
    uVar25 = (int)lVar14 * -0x61c8864f;
    uVar25 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
    uVar3 = uVar25 >> 0x10 | uVar25 << 0x10;
    uVar25 = (int)((ulong)lVar14 >> 0x20) * -0x61c8864f;
    uVar25 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
    uVar25 = uVar25 >> 0x10 | uVar25 << 0x10;
    uVar26 = (ulong)((uVar3 + (uVar3 >> 2) + uVar25 * 0x40 + 0x9e3779b9 ^ uVar25) & uVar9);
    lVar27 = *plVar31;
    lVar29 = *(long *)(lVar27 + uVar26 * 0x10);
    if (lVar29 != -1) {
      if (lVar29 != lVar14) {
        do {
          uVar26 = (ulong)((int)uVar26 + 1U & uVar9);
          lVar29 = *(long *)(lVar27 + uVar26 * 0x10);
          if (lVar29 == -1) goto LAB_03338d2c;
        } while (lVar29 != lVar14);
      }
      uVar26 = *(ulong *)(lVar27 + uVar26 * 0x10 + 8);
      iVar8 = (int)uVar26;
      if (((-1 < iVar8) && (iVar8 != 0x50000000)) &&
         (puVar32 = *(undefined8 **)(param_1[9] + (uVar26 & 0xffffffff) * 8),
         puVar32 != (undefined8 *)0x0)) goto LAB_03339da4;
    }
  }
LAB_03338d2c:
  pcVar12 = (char *)(local_70[0] & 0xfffffffffffffffe);
  if (pcVar12 == (char *)0x0) {
    iVar8 = 0;
  }
  else {
    sVar13 = strlen(pcVar12);
    iVar8 = (int)sVar13;
  }
  if (iVar8 == 0) {
    pvVar15 = (void *)0x0;
  }
  else {
    pvVar15 = memchr(pcVar12,0x3c,(long)iVar8);
  }
  puVar6 = PTR_PTR_047d1a50;
  local_80 = (ulong *)0x0;
  local_78 = 0x8000000000000000;
  FUN_03055ddc(&local_80,PTR_PTR_047d1a50,1);
  puVar11 = local_80;
  lVar14 = (long)(int)local_78;
  local_80[lVar14] = 0;
  pcVar12 = (char *)(local_70[0] & 0xfffffffffffffffe);
  ppuVar35 = (undefined **)0x0;
  if (pcVar12 != (char *)0x0) {
    sVar13 = strlen(pcVar12);
    sVar13 = (size_t)((int)sVar13 + 1);
    pvVar16 = (void *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,sVar13);
    memcpy(pvVar16,pcVar12,sVar13);
    puVar11[lVar14] = (ulong)pvVar16 | 1;
    ppuVar35 = (undefined **)(local_70[0] & 0xfffffffffffffffe);
  }
  local_78 = CONCAT44(local_78._4_4_,1);
  local_90 = (long *)0x0;
  local_88 = 0x8000000000000000;
  lVar14 = param_1[0x20];
  if (ppuVar35 == (undefined **)0x0) {
    iVar8 = 0;
  }
  else {
    sVar13 = strlen((char *)ppuVar35);
    iVar8 = (int)sVar13;
  }
  puVar6 = PTR_PTR_047d1a50;
  local_2a8 = (undefined **)((long)ppuVar35 + (long)iVar8);
  local_2b0 = ppuVar35;
  lVar14 = FUN_03342334(*(undefined8 *)(*(long *)(lVar14 + 0x68) + 0x90),&local_2b0,iVar10);
  FUN_033413e0(&local_90,1);
  plVar7 = local_90;
  local_4b8 = local_90;
  local_90[(int)(uint)local_88] = lVar14;
  local_88 = CONCAT44(local_88._4_4_,1);
  local_2a0 = puVar6 + 0x20;
  local_298 = 0x4000;
  local_288 = 0;
  local_280 = 0;
  local_2a8 = (undefined **)(PTR_DAT_047e5b60 + 0x10);
  local_2b0 = (undefined **)(PTR_DAT_047e5b58 + 0x10);
  local_120 = auStack_110;
  local_290 = CONCAT44(local_290._4_4_,0xffffffff);
  local_270 = 0;
  local_260 = 0;
  local_140 = 0;
  local_130 = 0;
  local_118 = 0;
  local_278 = 0x8000000000000000;
  local_268 = 0x8000000000000000;
  local_258 = 0;
  local_138 = 0x8000000000000000;
  local_128 = 0x8000000000000000;
  local_114 = 0x80000002;
  local_e0 = auStack_d0;
  local_f0 = 0;
  local_e8 = 0x8000000000000000;
  local_d8 = 0x8000000300000000;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0x8000000000000000;
  local_a0 = 0;
  local_98 = 1;
  local_96 = 0;
  memset(local_248,0,0x100);
  local_250 = 0x4000000;
  local_348 = acStack_338;
  local_340 = 0x8000008000000000;
  local_2b8 = 1;
  local_178 = param_1;
  local_148 = param_1;
  FUN_031c6afc(&local_348,*local_80 & 0xfffffffffffffffe,0xffffffff);
  pcVar12 = local_348;
  if (local_348 == (char *)0x0) {
    uVar26 = 0;
  }
  else {
    sVar13 = strlen(local_348);
    sVar13 = (size_t)((int)sVar13 + 1);
    pvVar16 = (void *)(**(code **)(*(long *)puVar6 + 0x18))(puVar6,sVar13);
    memcpy(pvVar16,pcVar12,sVar13);
    uVar26 = (ulong)pvVar16 | 1;
  }
  iVar8 = (int)param_1[0xe];
  lVar29 = (long)iVar8;
  lVar27 = lVar29 + 1;
  if ((int)(*(uint *)((long)param_1 + 0x74) & 0x7fffffff) <= iVar8) {
    FUN_03055ddc(param_1 + 0xd,PTR_PTR_047d1a50,lVar27);
    iVar8 = (int)param_1[0xe];
  }
  *(ulong *)(param_1[0xd] + (long)iVar8 * 8) = uVar26;
  *(int *)(param_1 + 0xe) = (int)lVar27;
  plVar38 = (long *)PTR_PTR_047d1a50;
  local_248[0] = 7;
  uVar23 = local_250 | 0x800001;
  local_258 = 0;
  local_190 = 0;
  uVar26 = *(ulong *)(param_1[0xd] + lVar29 * 8) & 0xfffffffffffffffe;
  if (uVar26 != 0) {
    uVar23 = local_250 | 0x800009;
    local_230 = uVar26;
  }
  local_1b0 = param_1 + 0xf;
  local_228 = (long)iVar10;
  local_250 = uVar23 | 0x180010;
  local_1a8 = 0;
  if (pvVar15 != (void *)0x0) {
    local_250 = uVar23 | 0x188010;
    local_1d0 = 0;
  }
  iVar8 = FUN_031d8d9c(&local_2b0,param_1,&local_350);
  if (iVar8 < 0) {
    if (DAT_0488d698 == '\0') {
      if (DAT_046aaf68 != '\0') goto LAB_03339df8;
    }
    else {
      if (DAT_046aaf68 == '\0') {
        local_4a0 = (char *)0x0;
        local_490 = &DAT_0488d648;
        uStack_488 = 1;
        pTVar17 = (ThreadType *)nn::os::GetCurrentThread();
        local_480 = nn::os::GetThreadId(pTVar17);
        local_478 = (char *)0x0;
        local_470 = 0;
        local_468 = (char *)0x0;
        local_460 = 0;
        uStack_458 = 0;
        FUN_0322c554(&local_4a0,"Failed to allocate type from builder",PTR_DAT_047d1b38);
        local_468 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkModifiableTypeSet.cpp"
        ;
        local_460 = 0x6d7;
        FUN_0322c8e0(&local_4a0);
      }
      else {
LAB_03339df8:
        local_4a0 = (char *)0x0;
        local_490 = &DAT_0488d648;
        uStack_488 = 1;
        pTVar17 = (ThreadType *)nn::os::GetCurrentThread();
        local_480 = nn::os::GetThreadId(pTVar17);
        local_470 = 0;
        local_468 = (char *)0x0;
        local_460 = 0;
        uStack_458 = 0;
        local_450[0] = '\0';
        uStack_498 = 0x10000000000;
        local_4a0 = local_450;
        local_478 = local_450;
        FUN_0322c554(&local_4a0,"Failed to allocate type from builder",PTR_DAT_047d1b38);
        local_468 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkModifiableTypeSet.cpp"
        ;
        local_460 = 0x6d7;
        if (local_450[0] != '\0') {
          sVar13 = strlen(local_450);
          (local_450 + (int)((int)sVar13 - (uint)((int)sVar13 == 0xff)))[0] = '\n';
          (local_450 + (int)((int)sVar13 - (uint)((int)sVar13 == 0xff)))[1] = '\0';
          printf("%s",local_450);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
      }
      if (((ulong)local_478 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_478 + -1,0);
      }
    }
    pbVar28 = (byte *)0x0;
    bVar5 = false;
  }
  else {
    pbVar28 = local_350;
    if ((*local_350 & 1) == 0) {
      do {
        pbVar28 = *(byte **)(pbVar28 + 8);
      } while ((*pbVar28 & 1) == 0);
    }
    if ((*(ulong *)(pbVar28 + 0x10) & 0x1f) != 7) {
      local_350 = (byte *)0x0;
    }
    bVar5 = true;
    pbVar28 = local_350;
  }
  uVar26 = local_340;
  local_340 = local_340 & 0xffffffff00000000;
  if ((-1 < (long)uVar26) && (local_348 != (char *)0x0)) {
    (**(code **)(*(long *)((long)plVar38 + 0x20) + 0x20))();
  }
  FUN_031d798c(&local_2b0);
  if (bVar5) {
    puVar32 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,0x78);
    *puVar32 = pbVar28;
    puVar32[1] = param_4;
    *(int *)(puVar32 + 2) = iVar10;
    *(undefined4 *)((long)puVar32 + 0x14) = 0;
    puVar32[3] = param_1;
    puVar32[4] = 0;
    *(undefined4 *)(puVar32 + 0xd) = 1;
    puVar32[0xe] = lVar14;
    puVar32[5] = 0x8000000000000000;
    puVar32[6] = 0;
    puVar32[7] = 0x8000000000000000;
    puVar32[8] = 0;
    puVar32[9] = 0x8000000000000000;
    puVar32[10] = 0;
    puVar32[0xb] = 0x8000000000000000;
    puVar32[0xc] = 0;
    iVar8 = (int)param_1[10];
    lVar14 = (long)iVar8;
    if ((int)(*(uint *)((long)param_1 + 0x54) & 0x7fffffff) <= iVar8) {
      FUN_03340784(param_1 + 9,PTR_PTR_047d1a50,lVar14 + 1);
      iVar8 = (int)param_1[10];
    }
    *(undefined8 **)(param_1[9] + (long)iVar8 * 8) = puVar32;
    *(int *)(param_1 + 10) = (int)(lVar14 + 1);
    lVar27 = *plVar7;
    uVar9 = *(uint *)((long)param_1 + 100);
    if ((int)uVar9 < (int)param_1[0xc] * 2) {
      FUN_02ef5fd4(plVar31,PTR_PTR_047d1a50,uVar9 * 2 + 2);
      uVar9 = *(uint *)((long)param_1 + 100);
    }
    uVar25 = (int)lVar27 * -0x61c8864f;
    uVar25 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
    uVar3 = uVar25 >> 0x10 | uVar25 << 0x10;
    uVar25 = (int)((ulong)lVar27 >> 0x20) * -0x61c8864f;
    uVar25 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
    uVar25 = uVar25 >> 0x10 | uVar25 << 0x10;
    uVar25 = uVar3 + (uVar3 >> 2) + uVar25 * 0x40 + 0x9e3779b9 ^ uVar25;
    while( true ) {
      uVar25 = uVar9 & uVar25;
      lVar29 = *(long *)(*plVar31 + (ulong)uVar25 * 0x10);
      if (lVar29 == -1) break;
      if (lVar29 == lVar27) {
        iVar8 = 0;
        goto LAB_033392c4;
      }
      uVar25 = uVar25 + 1;
    }
    iVar8 = 1;
LAB_033392c4:
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + iVar8;
    *(long *)(*plVar31 + (-(ulong)(uVar25 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar25 << 4)) =
         lVar27;
    *(long *)(param_1[0xb] + (long)(int)uVar25 * 0x10 + 8) = lVar14;
    lVar27 = param_1[0x20];
    ppuVar35 = (undefined **)(local_70[0] & 0xfffffffffffffffe);
    if (ppuVar35 == (undefined **)0x0) {
      lVar29 = 0;
    }
    else {
      sVar13 = strlen((char *)ppuVar35);
      lVar29 = (long)(int)sVar13;
    }
    local_2a8 = (undefined **)((long)ppuVar35 + lVar29);
    local_2b0 = ppuVar35;
    lVar27 = FUN_03346e24(lVar27,&local_2b0,iVar10);
    local_348 = (char *)0x0;
    local_340 = -0x8000000000000000;
    if (lVar27 == 0) {
      ppuVar35 = (undefined **)(local_70[0] & 0xfffffffffffffffe);
      lVar27 = param_1[0x20];
      if (ppuVar35 == (undefined **)0x0) {
        lVar29 = 0;
      }
      else {
        sVar13 = strlen((char *)ppuVar35);
        lVar29 = (long)(int)sVar13;
      }
      local_2a8 = (undefined **)((long)ppuVar35 + lVar29);
      local_2b0 = ppuVar35;
      lVar27 = FUN_03346c00(lVar27,&local_2b0,iVar10);
      if ((lVar27 != 0) && (*(char *)(lVar27 + 0x34) == '\0')) {
        plVar38 = (long *)PTR_PTR_047d1a50;
        goto LAB_03339338;
      }
      uVar9 = 1;
LAB_033395d0:
      plVar7 = local_90;
      puVar6 = PTR_PTR_047d1a50;
      uVar26 = 0;
      do {
        uVar25 = *(uint *)((long)param_1 + 100);
        lVar27 = plVar7[uVar26];
        if ((int)uVar25 < (int)param_1[0xc] * 2) {
          FUN_02ef5fd4(plVar31,puVar6,uVar25 * 2 + 2);
          uVar25 = *(uint *)((long)param_1 + 100);
        }
        uVar3 = (int)lVar27 * -0x61c8864f;
        uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar4 = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar3 = (int)((ulong)lVar27 >> 0x20) * -0x61c8864f;
        uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
        uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar3 = uVar4 + (uVar4 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3;
        while( true ) {
          uVar3 = uVar25 & uVar3;
          lVar29 = *(long *)(*plVar31 + (ulong)uVar3 * 0x10);
          if (lVar29 == -1) break;
          if (lVar29 == lVar27) {
            iVar10 = 0;
            goto LAB_0333966c;
          }
          uVar3 = uVar3 + 1;
        }
        iVar10 = 1;
LAB_0333966c:
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + iVar10;
        *(long *)(*plVar31 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4)) =
             lVar27;
        uVar26 = uVar26 + 1;
        *(long *)(param_1[0xb] + (long)(int)uVar3 * 0x10 + 8) = lVar14;
      } while (uVar26 != uVar9);
    }
    else {
LAB_03339338:
      uVar9 = 1;
      do {
        lVar29 = (long)(int)local_340;
        if ((int)(local_340._4_4_ & 0x7fffffff) <= (int)local_340) {
          FUN_033414f4(&local_348,plVar38,lVar29 + 1);
        }
        *(long *)(local_348 + (long)(int)local_340 * 8) = lVar27;
        local_340 = CONCAT44(local_340._4_4_,(int)(lVar29 + 1));
        uVar25 = *(uint *)(lVar27 + 0x30);
        if (0 < (int)uVar25) {
          lVar29 = (ulong)uVar25 + 1;
          lVar36 = (ulong)uVar25 << 4;
          do {
            lVar20 = *(long *)(lVar27 + 0x28) + lVar36;
            if (((*(char *)(lVar20 + -0x10) == '\a') &&
                (lVar20 = *(long *)(lVar20 + -8), lVar20 != 0)) &&
               (lVar20 = FUN_033388c8(param_1,lVar20,*(undefined4 *)(lVar20 + 0x10),0), lVar20 == 0)
               ) {
              puVar32 = (undefined8 *)0x0;
              goto LAB_03339cec;
            }
            lVar29 = lVar29 + -1;
            lVar36 = lVar36 + -0x10;
          } while (1 < lVar29);
        }
        ppuVar35 = *(undefined ***)(lVar27 + 0x10);
        ppuVar37 = *(undefined ***)(lVar27 + 0x18);
        if (ppuVar35 == ppuVar37) {
          local_2a8 = ppuVar35;
        }
        else {
          pcVar12 = (char *)(local_70[0] & 0xfffffffffffffffe);
          if (pcVar12 != (char *)0x0) {
            sVar13 = strlen(pcVar12);
            if (((long)ppuVar37 - (long)ppuVar35 != (long)(int)sVar13) ||
               (iVar10 = memcmp(ppuVar35,pcVar12,(long)ppuVar37 - (long)ppuVar35), iVar10 != 0)) {
              FUN_031ca644(local_70,ppuVar35,ppuVar37);
              lVar29 = (long)(int)local_78;
              if ((int)(local_78._4_4_ & 0x7fffffff) <= (int)local_78) {
                FUN_03055ddc(&local_80,plVar38,lVar29 + 1);
              }
              puVar11 = local_80;
              local_80[(int)local_78] = 0;
              pcVar12 = (char *)(local_70[0] & 0xfffffffffffffffe);
              if (pcVar12 != (char *)0x0) {
                lVar36 = (long)(int)local_78;
                sVar13 = strlen(pcVar12);
                sVar13 = (size_t)((int)sVar13 + 1);
                pvVar15 = (void *)(**(code **)(*plVar38 + 0x18))(plVar38,sVar13);
                memcpy(pvVar15,pcVar12,sVar13);
                plVar38 = (long *)PTR_PTR_047d1a50;
                puVar11[lVar36] = (ulong)pvVar15 | 1;
              }
              local_78 = CONCAT44(local_78._4_4_,(int)(lVar29 + 1));
              ppuVar35 = *(undefined ***)(lVar27 + 0x10);
              ppuVar37 = *(undefined ***)(lVar27 + 0x18);
            }
          }
          local_2a8 = ppuVar37;
          if (ppuVar35 != ppuVar37) {
            local_2b0 = ppuVar35;
            lVar29 = FUN_03342334(*(undefined8 *)(*(long *)(param_1[0x20] + 0x68) + 0x90),&local_2b0
                                  ,*(undefined4 *)(lVar27 + 0x24));
            uVar25 = uVar9 + 1;
            if ((int)(local_88._4_4_ & 0x7fffffff) <= (int)uVar9) {
              FUN_033413e0(&local_90,(long)(int)uVar25);
              local_4b8 = local_90;
              uVar9 = (uint)local_88;
            }
            local_4b8[(int)uVar9] = lVar29;
            local_88 = CONCAT44(local_88._4_4_,uVar25);
            ppuVar35 = *(undefined ***)(lVar27 + 0x10);
            local_2a8 = *(undefined ***)(lVar27 + 0x18);
            uVar9 = uVar25;
          }
        }
        local_2b0 = ppuVar35;
        lVar27 = FUN_03346c00(param_1[0x20],&local_2b0,*(undefined4 *)(lVar27 + 0x24));
      } while ((lVar27 != 0) && (*(char *)(lVar27 + 0x34) == '\0'));
      if (0 < (int)uVar9) goto LAB_033395d0;
    }
    if ((int)local_340 < 1) {
      plVar38 = (long *)PTR_PTR_047d1a50;
    }
    else {
      lVar14 = 0;
      do {
        lVar27 = *(long *)(local_348 + lVar14 * 8);
        local_2a8 = (undefined **)0x8000000000000000;
        local_2b0 = (undefined **)0x0;
        local_298 = local_298 & 0xffffffff00000000;
        local_2a0 = &DAT_03d7702c;
        local_290 = lVar27;
        FUN_0334026c(&local_2b0,lVar27);
        if (0 < *(int *)(lVar27 + 0x30)) {
          lVar29 = 0;
LAB_033396f0:
          lVar36 = *(long *)(lVar27 + 0x28);
          switch(*(undefined1 *)(lVar36 + lVar29 * 0x10)) {
          case 1:
            puVar33 = *(undefined8 **)(lVar36 + lVar29 * 0x10 + 8);
            if (puVar33 != (undefined8 *)0x0) {
              uVar34 = *(undefined4 *)(puVar33 + 2);
              puVar24 = puVar33 + 3;
              uVar2 = *(undefined4 *)(puVar33 + 5);
              uVar19 = 0;
LAB_03339b7c:
              FUN_0333dadc(puVar32,puVar33,uVar34,puVar24,uVar2,uVar19,&local_2b0);
            }
            break;
          case 2:
            puVar33 = *(undefined8 **)(lVar36 + lVar29 * 0x10 + 8);
            if ((puVar33 != (undefined8 *)0x0) && (uVar9 = *(uint *)(puVar32 + 5), 0 < (int)uVar9))
            {
              uVar26 = 0;
              lVar36 = puVar32[4];
              do {
                pcVar12 = (char *)**(undefined8 **)(lVar36 + uVar26 * 8);
                if (pcVar12 != (char *)0x0) {
                  if (*pcVar12 == '#') {
                    do {
                      pcVar12 = pcVar12 + 1;
                    } while (*pcVar12 == '#');
                    bVar5 = true;
                  }
                  else {
                    bVar5 = false;
                  }
                  sVar13 = strlen(pcVar12);
                  pcVar18 = (char *)*puVar33;
                  if (pcVar18 == pcVar12) {
                    if ((char *)puVar33[1] == pcVar12 + sVar13) goto LAB_03339ad0;
                  }
                  else {
                    uVar23 = puVar33[1] - (long)pcVar18;
                    sVar1 = uVar23;
                    if (sVar13 <= uVar23) {
                      sVar1 = sVar13;
                    }
                    iVar10 = memcmp(pcVar18,pcVar12,sVar1);
                    if ((iVar10 == 0) && (uVar23 == sVar13)) goto LAB_03339ad0;
                  }
                }
                uVar26 = uVar26 + 1;
              } while (uVar26 != uVar9);
            }
            break;
          case 3:
            puVar33 = *(undefined8 **)(lVar36 + lVar29 * 0x10 + 8);
            if ((puVar33 != (undefined8 *)0x0) && (uVar9 = *(uint *)(puVar32 + 5), 0 < (int)uVar9))
            {
              uVar26 = 0;
              lVar36 = puVar32[4];
              do {
                pcVar12 = (char *)**(undefined8 **)(lVar36 + uVar26 * 8);
                if (pcVar12 != (char *)0x0) {
                  if (*pcVar12 == '#') {
                    do {
                      pcVar12 = pcVar12 + 1;
                    } while (*pcVar12 == '#');
                    bVar5 = true;
                  }
                  else {
                    bVar5 = false;
                  }
                  sVar13 = strlen(pcVar12);
                  pcVar18 = (char *)*puVar33;
                  if (pcVar18 == pcVar12) {
                    if ((char *)puVar33[1] == pcVar12 + sVar13) goto LAB_03339af8;
                  }
                  else {
                    uVar23 = puVar33[1] - (long)pcVar18;
                    sVar1 = uVar23;
                    if (sVar13 <= uVar23) {
                      sVar1 = sVar13;
                    }
                    iVar10 = memcmp(pcVar18,pcVar12,sVar1);
                    if ((iVar10 == 0) && (uVar23 == sVar13)) {
LAB_03339af8:
                      if (bVar5) {
                        **(undefined8 **)(lVar36 + (uVar26 & 0xffffffff) * 8) = pcVar12;
                        lVar36 = puVar32[4];
                      }
                      puVar24 = *(undefined8 **)(lVar36 + (uVar26 & 0xffffffff) * 8);
                      if (puVar24 != (undefined8 *)0x0) {
                        uVar19 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,puVar33[2],
                                              *(int *)(puVar33 + 3) - (int)puVar33[2],1);
                        *puVar24 = uVar19;
                      }
                      break;
                    }
                  }
                }
                uVar26 = uVar26 + 1;
              } while (uVar26 != uVar9);
            }
            break;
          case 8:
            lVar36 = *(long *)(lVar36 + lVar29 * 0x10 + 8);
            if ((lVar36 != 0) && (*(long *)(lVar36 + 0x10) != *(long *)(lVar36 + 0x18))) {
              local_4a0 = *(char **)(lVar36 + 0x10);
              uStack_498 = *(undefined8 *)(lVar36 + 0x18);
              iVar10 = FUN_0333d8d0(&local_2b0,&local_4a0);
              if (-1 < iVar10) {
                lVar20 = puVar32[3];
                iVar8 = *(int *)(lVar20 + 0xd0);
                lVar36 = (long)iVar8;
                if ((int)(*(uint *)(lVar20 + 0xd4) & 0x7fffffff) <= iVar8) {
                  FUN_03340d50(lVar20 + 200,lVar36 + 1);
                  iVar8 = *(int *)(lVar20 + 0xd0);
                }
                puVar33 = (undefined8 *)(*(long *)(lVar20 + 200) + (long)iVar8 * 0x20);
                *(int *)(lVar20 + 0xd0) = (int)(lVar36 + 1);
                *puVar33 = 0;
                lVar36 = FUN_031ca644(puVar33,local_4a0,uStack_498);
                *(int *)(lVar36 + 8) = iVar10;
                *(undefined8 **)(lVar36 + 0x10) = puVar32;
                *(undefined8 *)(lVar36 + 0x18) = 0;
              }
            }
            break;
          case 10:
            lVar36 = *(long *)(lVar36 + lVar29 * 0x10 + 8);
            if (lVar36 != 0) {
              FUN_0333dcf8(puVar32,lVar36,*(undefined8 *)(lVar36 + 0x10));
            }
            break;
          case 0xb:
            puVar33 = *(undefined8 **)(lVar36 + lVar29 * 0x10 + 8);
            if ((puVar33 != (undefined8 *)0x0) && (uVar9 = *(uint *)(puVar32 + 5), 0 < (int)uVar9))
            {
              uVar26 = 0;
              lVar36 = puVar32[4];
              do {
                pcVar12 = (char *)**(undefined8 **)(lVar36 + uVar26 * 8);
                if (pcVar12 != (char *)0x0) {
                  if (*pcVar12 == '#') {
                    do {
                      pcVar12 = pcVar12 + 1;
                    } while (*pcVar12 == '#');
                    bVar5 = true;
                  }
                  else {
                    bVar5 = false;
                  }
                  sVar13 = strlen(pcVar12);
                  pcVar18 = (char *)*puVar33;
                  if (pcVar18 == pcVar12) {
                    if ((char *)puVar33[1] == pcVar12 + sVar13) goto LAB_03339ad0;
                  }
                  else {
                    uVar23 = puVar33[1] - (long)pcVar18;
                    sVar1 = uVar23;
                    if (sVar13 <= uVar23) {
                      sVar1 = sVar13;
                    }
                    iVar10 = memcmp(pcVar18,pcVar12,sVar1);
                    if ((iVar10 == 0) && (uVar23 == sVar13)) goto LAB_03339ad0;
                  }
                }
                uVar26 = uVar26 + 1;
              } while (uVar26 != uVar9);
            }
            break;
          case 0xc:
            puVar33 = *(undefined8 **)(lVar36 + lVar29 * 0x10 + 8);
            if (puVar33 != (undefined8 *)0x0) {
              uVar9 = *(uint *)(puVar32 + 5);
              if (0 < (int)uVar9) {
                uVar26 = 0;
                lVar36 = puVar32[4];
                do {
                  pcVar12 = (char *)**(undefined8 **)(lVar36 + uVar26 * 8);
                  if (pcVar12 != (char *)0x0) {
                    if (*pcVar12 == '#') {
                      do {
                        pcVar12 = pcVar12 + 1;
                      } while (*pcVar12 == '#');
                      bVar5 = true;
                    }
                    else {
                      bVar5 = false;
                    }
                    sVar13 = strlen(pcVar12);
                    pcVar18 = (char *)*puVar33;
                    if (pcVar18 == pcVar12) {
                      if ((char *)puVar33[1] == pcVar12 + sVar13) goto LAB_03339b40;
                    }
                    else {
                      uVar23 = puVar33[1] - (long)pcVar18;
                      sVar1 = uVar23;
                      if (sVar13 <= uVar23) {
                        sVar1 = sVar13;
                      }
                      iVar10 = memcmp(pcVar18,pcVar12,sVar1);
                      if ((iVar10 == 0) && (uVar23 == sVar13)) {
LAB_03339b40:
                        if (bVar5) {
                          **(undefined8 **)(lVar36 + (uVar26 & 0xffffffff) * 8) = pcVar12;
                          lVar36 = puVar32[4];
                        }
                        puVar24 = *(undefined8 **)(lVar36 + (uVar26 & 0xffffffff) * 8);
                        if (puVar24 != (undefined8 *)0x0) {
                          *puVar24 = 0;
                        }
                        break;
                      }
                    }
                  }
                  uVar26 = uVar26 + 1;
                } while (uVar26 != uVar9);
              }
              uVar34 = *(undefined4 *)((long)puVar33 + 0x2c);
              puVar24 = puVar33 + 6;
              uVar2 = *(undefined4 *)(puVar33 + 8);
              uVar19 = 0xffffffff;
              goto LAB_03339b7c;
            }
          }
          goto switchD_0333971c_caseD_4;
        }
LAB_03339b94:
        puVar30 = (undefined4 *)*puVar32;
        if (*(long *)(lVar27 + 0x10) == *(long *)(lVar27 + 0x18)) {
          bVar21 = (byte)*puVar30 & 0xf;
          uVar19 = 0x80000000;
        }
        else {
          *(long *)(puVar30 + (ulong)(byte)POPCOUNT((byte)*puVar30 & 0xf) * 2 + 4) =
               (long)*(int *)(lVar27 + 0x24);
          puVar30 = (undefined4 *)*puVar32;
          uVar19 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,*(undefined8 *)(lVar27 + 0x10),
                                *(int *)(lVar27 + 0x18) - (int)*(undefined8 *)(lVar27 + 0x10),1);
          bVar21 = (byte)*puVar30 & 7;
        }
        plVar38 = (long *)PTR_PTR_047d1a50;
        puVar6 = PTR_DAT_047d1a08;
        *(undefined8 *)(puVar30 + (ulong)(byte)POPCOUNT(bVar21) * 2 + 4) = uVar19;
        if ((local_2a0 != (undefined *)0x0) && (*(int *)(local_2a0 + 4) != -2)) {
          (**(code **)(puVar6 + 8))(*(undefined1 *)((long)plVar38 + 8),local_2a0,0);
          local_2a0 = &DAT_03d7702c;
          local_298 = local_298 & 0xffffffff00000000;
        }
        ppuVar35 = local_2b0;
        if ((int)local_2a8 != 0) {
          lVar27 = (long)(int)local_2a8 << 4;
          do {
            uVar26 = *(ulong *)((long)ppuVar35 + lVar27 + -0x10);
            if ((uVar26 & 1) != 0) {
              (**(code **)(puVar6 + 8))(0,uVar26 - 1,0);
            }
            lVar27 = lVar27 + -0x10;
          } while (lVar27 != 0);
        }
        lVar27 = (long)local_2a8;
        uVar26 = (ulong)local_2a8._4_4_;
        local_2a8 = (undefined **)((ulong)local_2a8._4_4_ << 0x20);
        if ((-1 < lVar27) && (local_2b0 != (undefined **)0x0)) {
          (**(code **)(*plVar38 + 0x20))(plVar38,local_2b0,uVar26 << 4);
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < (int)local_340);
    }
LAB_03339cec:
    lVar14 = local_340;
    uVar26 = (ulong)local_340._4_4_;
    local_340 = (ulong)local_340._4_4_ << 0x20;
    if ((-1 < lVar14) && (local_348 != (char *)0x0)) {
      (**(code **)(*plVar38 + 0x20))(plVar38,local_348,uVar26 << 3);
    }
  }
  else {
    puVar32 = (undefined8 *)0x0;
  }
  lVar14 = local_88;
  uVar26 = (ulong)local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_90 != (long *)0x0)) {
    (**(code **)(*plVar38 + 0x20))(plVar38,local_90,uVar26 << 3);
  }
  puVar11 = local_80;
  puVar6 = PTR_DAT_047d1a08;
  if ((int)local_78 != 0) {
    lVar14 = (long)(int)local_78 << 3;
    do {
      uVar26 = *(ulong *)((long)puVar11 + lVar14 + -8);
      if ((uVar26 & 1) != 0) {
        (**(code **)(puVar6 + 8))(0,uVar26 - 1,0);
      }
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  lVar14 = local_78;
  uVar26 = (ulong)local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar14) && (local_80 != (ulong *)0x0)) {
    (**(code **)(*plVar38 + 0x20))(plVar38,local_80,uVar26 << 3);
  }
LAB_03339da4:
  if ((local_70[0] & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_70[0] - 1,0);
  }
  return puVar32;
LAB_03339ad0:
  if (bVar5) {
    **(undefined8 **)(lVar36 + (uVar26 & 0xffffffff) * 8) = pcVar12;
    lVar36 = puVar32[4];
  }
  puVar33 = *(undefined8 **)(lVar36 + (uVar26 & 0xffffffff) * 8);
  if (puVar33 != (undefined8 *)0x0) {
    *puVar33 = 0;
  }
switchD_0333971c_caseD_4:
  lVar29 = lVar29 + 1;
  if (*(int *)(lVar27 + 0x30) <= lVar29) goto LAB_03339b94;
  goto LAB_033396f0;
}



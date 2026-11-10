/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033364d4; name: FUN_033364d4
 */


undefined8 * FUN_033364d4(long *param_1,long *param_2,undefined4 param_3,ulong *param_4)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [8];
  uint uVar10;
  int iVar12;
  int iVar13;
  int iVar11;
  long lVar14;
  long *plVar15;
  long lVar16;
  size_t sVar17;
  void *pvVar18;
  undefined8 uVar19;
  ulong *puVar20;
  ThreadType *pTVar21;
  char *pcVar22;
  char *pcVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long *plVar26;
  size_t sVar27;
  undefined8 uVar28;
  uint uVar29;
  code *pcVar30;
  ulong *puVar31;
  short *psVar32;
  long *plVar33;
  undefined4 *puVar34;
  bool bVar35;
  ushort uVar36;
  ulong uVar37;
  long lVar38;
  byte *pbVar39;
  ulong uVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  undefined4 uVar45;
  undefined *puVar46;
  ulong *puVar47;
  undefined8 **ppuVar48;
  ulong uVar49;
  undefined8 **ppuVar50;
  char *__s;
  undefined1 auVar51 [16];
  undefined8 *local_578;
  ulong *local_568;
  undefined1 local_560 [8];
  undefined8 local_558;
  undefined8 *local_550;
  ulong local_548;
  long local_540;
  char *local_538;
  undefined8 local_530;
  char *local_528;
  undefined8 local_520;
  undefined8 uStack_518;
  char local_510 [64];
  undefined4 local_4d0;
  byte *local_410;
  char *local_408;
  int local_400;
  uint local_3fc;
  char acStack_3f8 [128];
  int local_378;
  undefined8 **local_370;
  undefined8 **local_368;
  undefined8 *local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 **local_348;
  undefined8 local_340;
  char *local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 *local_320;
  undefined8 local_318;
  ulong local_310;
  undefined8 local_308 [3];
  ulong local_2f0;
  long local_2e8;
  undefined4 local_2e0;
  undefined8 local_290;
  long *local_270;
  undefined8 local_268;
  undefined8 local_250;
  long *local_238;
  long *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined1 auStack_1d0 [32];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 *local_1a0;
  undefined8 local_198;
  undefined1 auStack_190 [24];
  undefined4 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined2 local_158;
  undefined1 local_156;
  long local_150;
  undefined8 local_148;
  ulong *local_140;
  undefined8 local_138;
  ulong local_130;
  long local_128;
  undefined8 local_120;
  int local_114;
  char *local_110;
  char *pcStack_108;
  undefined1 *local_100;
  ulong local_f8;
  undefined1 local_f0 [128];
  undefined4 local_70;
  
  local_f0[0] = 0;
  local_100 = local_f0;
  local_f8 = 0x8000008000000001;
  local_70 = 1;
  local_110 = (char *)0x0;
  pcStack_108 = (char *)0x0;
  if (*param_2 == param_2[1]) {
    pcVar23 = (char *)FUN_031e12d8(param_4,&local_100,0,0);
    if (pcVar23 == (char *)0x0) {
      pcStack_108 = (char *)0x0;
    }
    else {
      sVar17 = strlen(pcVar23);
      pcStack_108 = pcVar23 + sVar17;
    }
    puVar20 = param_4;
    do {
      uVar37 = *puVar20;
      if (((uint)uVar37 >> 4 & 1) != 0) {
        uVar45 = (undefined4)puVar20[(ulong)(byte)POPCOUNT((byte)uVar37 & 0xf) + 2];
        goto LAB_03336628;
      }
    } while (((uVar37 & 9) == 0) && (puVar20 = (ulong *)puVar20[1], puVar20 != (ulong *)0x0));
    uVar45 = 0;
LAB_03336628:
    local_110 = pcVar23;
    uVar10 = FUN_03340ed4(param_1 + 0x23,&local_110);
    if (*(uint *)(param_1 + 0x24) == uVar10) {
      uVar29 = uVar10;
      if ((int)(*(uint *)((long)param_1 + 0x124) & 0x7fffffff) <= (int)uVar10) {
        FUN_0334108c(param_1 + 0x23,PTR_PTR_047d1a50,(long)(int)(uVar10 + 1));
        uVar29 = *(uint *)(param_1 + 0x24);
      }
      lVar14 = param_1[0x23] + (long)(int)uVar29 * 0x10;
      FUN_031ca554(lVar14,local_110,pcStack_108);
      *(undefined4 *)(lVar14 + 8) = uVar45;
      *(uint *)(param_1 + 0x24) = uVar10 + 1;
    }
  }
  else {
    local_110 = (char *)*param_2;
    pcStack_108 = (char *)param_2[1];
    uVar10 = FUN_03340ed4(param_1 + 0x23,&local_110);
    if (*(uint *)(param_1 + 0x24) == uVar10) {
      uVar29 = uVar10;
      if ((int)(*(uint *)((long)param_1 + 0x124) & 0x7fffffff) <= (int)uVar10) {
        FUN_0334108c(param_1 + 0x23,PTR_PTR_047d1a50,(long)(int)(uVar10 + 1));
        uVar29 = *(uint *)(param_1 + 0x24);
      }
      lVar14 = param_1[0x23] + (long)(int)uVar29 * 0x10;
      FUN_031ca554(lVar14,local_110,pcStack_108);
      *(undefined4 *)(lVar14 + 8) = param_3;
      *(uint *)(param_1 + 0x24) = uVar10 + 1;
    }
  }
  iVar13 = *(int *)(param_1[0x23] + ((long)((ulong)uVar10 << 0x20) >> 0x1c) + 8);
  lVar14 = FUN_03342334(*(undefined8 *)(*(long *)(param_1[0x20] + 0x68) + 0x90),&local_110,iVar13);
  auVar8._8_8_ = local_558;
  auVar8._0_8_ = local_560;
  uVar10 = *(uint *)((long)param_1 + 100);
  plVar33 = param_1 + 0xb;
  iVar12 = (int)((ulong)lVar14 >> 0x20);
  if ((int)uVar10 < 1) {
LAB_03336744:
    uVar37 = (ulong)(uVar10 + 1);
  }
  else {
    uVar29 = (int)lVar14 * -0x61c8864f;
    uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
    uVar4 = uVar29 >> 0x10 | uVar29 << 0x10;
    uVar29 = iVar12 * -0x61c8864f;
    uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
    uVar29 = uVar29 >> 0x10 | uVar29 << 0x10;
    uVar37 = (ulong)((uVar4 + (uVar4 >> 2) + uVar29 * 0x40 + 0x9e3779b9 ^ uVar29) & uVar10);
    lVar41 = *(long *)(*plVar33 + uVar37 * 0x10);
    if (lVar41 == -1) goto LAB_03336744;
    if (lVar41 != lVar14) {
      do {
        uVar37 = (ulong)((int)uVar37 + 1U & uVar10);
        lVar41 = *(long *)(*plVar33 + uVar37 * 0x10);
        if (lVar41 == -1) goto LAB_03336744;
      } while (lVar41 != lVar14);
    }
  }
  if ((int)uVar37 <= (int)uVar10) {
    uVar37 = *(ulong *)(*plVar33 + ((long)(uVar37 << 0x20) >> 0x1c) + 8);
    if ((int)uVar37 == 0x50000000) {
      local_568 = (undefined8 *)0x0;
      _local_560 = auVar8;
    }
    else {
      local_568 = *(ulong **)
                   (param_1[9] +
                   (-(uVar37 >> 0x1f & 1) & 0xfffffff800000000 | (uVar37 & 0xffffffff) << 3));
    }
    goto LAB_033386d8;
  }
  if ((int)uVar10 < (int)param_1[0xc] * 2) {
    FUN_02ef5fd4(plVar33,PTR_PTR_047d1a50,uVar10 * 2 + 2);
    uVar10 = *(uint *)((long)param_1 + 100);
  }
  uVar29 = (int)lVar14 * -0x61c8864f;
  uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
  uVar4 = uVar29 >> 0x10 | uVar29 << 0x10;
  uVar29 = iVar12 * -0x61c8864f;
  uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
  uVar29 = uVar29 >> 0x10 | uVar29 << 0x10;
  uVar29 = uVar4 + (uVar4 >> 2) + uVar29 * 0x40 + 0x9e3779b9 ^ uVar29;
  while( true ) {
    uVar29 = uVar10 & uVar29;
    lVar41 = *(long *)(*plVar33 + (ulong)uVar29 * 0x10);
    if (lVar41 == -1) break;
    if (lVar41 == lVar14) {
      iVar12 = 0;
      goto LAB_0333680c;
    }
    uVar29 = uVar29 + 1;
  }
  iVar12 = 1;
LAB_0333680c:
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + iVar12;
  *(long *)(*plVar33 + (-(ulong)(uVar29 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar29 << 4)) =
       lVar14;
  *(undefined8 *)(param_1[0xb] + (long)(int)uVar29 * 0x10 + 8) = 0x50000000;
  plVar15 = (long *)FUN_03346c00(param_1[0x20],&local_110,iVar13);
  if ((plVar15 == (long *)0x0) || (*(char *)((long)plVar15 + 0x34) != '\0')) {
    plVar15 = (long *)0x0;
  }
  local_128 = 0;
  local_120 = 0x8000000000000000;
  local_114 = iVar13;
  FUN_031ca554(&local_130,local_110,pcStack_108);
  local_140 = (ulong *)0x0;
  local_138 = 0x8000000000000000;
  local_150 = 0;
  local_148 = 0x8000000000000000;
  FUN_03341240(&local_140,1);
  local_568 = local_140;
  FUN_031ca554(local_140 + (int)local_138,local_110,pcStack_108);
  local_138 = CONCAT44(local_138._4_4_,1);
  FUN_033413e0(&local_150,1);
  *(long *)(local_150 + (long)(int)local_148 * 8) = lVar14;
  puVar46 = PTR_PTR_047d1a50;
  local_148 = CONCAT44(local_148._4_4_,1);
  if (plVar15 != (long *)0x0) {
    do {
      if (*plVar15 != plVar15[1]) {
        lVar41 = (long)(int)local_120;
        if ((int)(local_120._4_4_ & 0x7fffffff) <= (int)local_120) {
          FUN_033414f4(&local_128,puVar46,lVar41 + 1);
        }
        *(long **)(local_128 + (long)(int)local_120 * 8) = plVar15;
        local_120 = CONCAT44(local_120._4_4_,(int)(lVar41 + 1));
      }
      local_370 = (undefined8 **)plVar15[2];
      local_368 = (undefined8 **)plVar15[3];
      if (local_370 != local_368) {
        lVar41 = FUN_03342334(*(undefined8 *)(*(long *)(param_1[0x20] + 0x68) + 0x90),&local_370,
                              *(undefined4 *)((long)plVar15 + 0x24));
        uVar10 = *(uint *)((long)param_1 + 100);
        if ((int)uVar10 < (int)param_1[0xc] * 2) {
          FUN_02ef5fd4(plVar33,puVar46,uVar10 * 2 + 2);
          uVar10 = *(uint *)((long)param_1 + 100);
        }
        uVar29 = (int)lVar41 * -0x61c8864f;
        uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
        uVar4 = uVar29 >> 0x10 | uVar29 << 0x10;
        uVar29 = (int)((ulong)lVar41 >> 0x20) * -0x61c8864f;
        uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
        uVar29 = uVar29 >> 0x10 | uVar29 << 0x10;
        uVar29 = uVar4 + (uVar4 >> 2) + uVar29 * 0x40 + 0x9e3779b9 ^ uVar29;
        while( true ) {
          uVar29 = uVar10 & uVar29;
          lVar42 = *(long *)(*plVar33 + (ulong)uVar29 * 0x10);
          if (lVar42 == -1) break;
          if (lVar42 == lVar41) {
            iVar12 = 0;
            goto LAB_033369c8;
          }
          uVar29 = uVar29 + 1;
        }
        iVar12 = 1;
LAB_033369c8:
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + iVar12;
        *(long *)(*plVar33 + (-(ulong)(uVar29 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar29 << 4)) =
             lVar41;
        *(undefined8 *)(param_1[0xb] + (long)(int)uVar29 * 0x10 + 8) = 0x50000000;
        local_370 = (undefined8 **)plVar15[2];
        local_368 = (undefined8 **)plVar15[3];
      }
      plVar15 = (long *)FUN_03346c00(param_1[0x20],&local_370,*(undefined4 *)((long)plVar15 + 0x24))
      ;
    } while ((plVar15 != (long *)0x0) && (*(char *)((long)plVar15 + 0x34) == '\0'));
  }
  if ((int)local_120 < 1) {
    bVar35 = false;
  }
  else {
    lVar41 = 0;
    iVar12 = 1;
    bVar35 = false;
    do {
      lVar42 = *(long *)(local_128 + lVar41 * 8);
      uVar37 = (ulong)*(uint *)(lVar42 + 0x30);
      if (0 < (int)*(uint *)(lVar42 + 0x30)) {
        do {
          uVar49 = uVar37 - 1;
          if ((*(char *)(*(long *)(lVar42 + 0x28) + uVar49 * 0x10) == '\a') &&
             (plVar15 = *(long **)(*(long *)(lVar42 + 0x28) + uVar49 * 0x10 + 8),
             plVar15 != (long *)0x0)) {
            local_370 = (undefined8 **)*plVar15;
            local_368 = (undefined8 **)plVar15[1];
            lVar16 = FUN_03342334(*(undefined8 *)(*(long *)(param_1[0x20] + 0x68) + 0x90),&local_370
                                  ,(int)plVar15[2]);
            uVar10 = *(uint *)((long)param_1 + 100);
            if (0 < (int)uVar10) {
              uVar29 = (int)lVar16 * -0x61c8864f;
              uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
              uVar4 = uVar29 >> 0x10 | uVar29 << 0x10;
              uVar29 = (int)((ulong)lVar16 >> 0x20) * -0x61c8864f;
              uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
              uVar29 = uVar29 >> 0x10 | uVar29 << 0x10;
              uVar40 = (ulong)((uVar4 + (uVar4 >> 2) + uVar29 * 0x40 + 0x9e3779b9 ^ uVar29) & uVar10
                              );
              lVar38 = *plVar33;
              lVar43 = *(long *)(lVar38 + uVar40 * 0x10);
              if (lVar43 != -1) {
                if (lVar43 != lVar16) {
                  do {
                    uVar40 = (ulong)((int)uVar40 + 1U & uVar10);
                    lVar43 = *(long *)(lVar38 + uVar40 * 0x10);
                    if (lVar43 == -1) goto LAB_03336b18;
                  } while (lVar43 != lVar16);
                }
                if (*(int *)(lVar38 + uVar40 * 0x10 + 8) != -1) goto LAB_03336b30;
              }
            }
LAB_03336b18:
            lVar16 = FUN_033364d4(param_1,&local_370,(int)plVar15[2],0);
            if (lVar16 == 0) goto LAB_033385f4;
          }
LAB_03336b30:
          bVar1 = 1 < (long)uVar37;
          uVar37 = uVar49;
        } while (bVar1);
      }
      ppuVar48 = *(undefined8 ***)(lVar42 + 0x10);
      ppuVar50 = *(undefined8 ***)(lVar42 + 0x18);
      if (ppuVar48 != ppuVar50) {
        pcVar23 = (char *)(local_130 & 0xfffffffffffffffe);
        if (pcVar23 != (char *)0x0) {
          sVar17 = strlen(pcVar23);
          if (((long)ppuVar50 - (long)ppuVar48 != sVar17) ||
             (iVar11 = memcmp(ppuVar48,pcVar23,(long)ppuVar50 - (long)ppuVar48), iVar11 != 0)) {
            FUN_031ca644(&local_130,ppuVar48,ppuVar50);
            iVar11 = iVar12 + 1;
            if ((int)(local_138._4_4_ & 0x7fffffff) <= iVar12) {
              FUN_03341240(&local_140,(long)iVar11);
              local_568 = local_140;
              iVar12 = (int)local_138;
            }
            local_568[iVar12] = 0;
            pcVar23 = (char *)(local_130 & 0xfffffffffffffffe);
            if (pcVar23 != (char *)0x0) {
              sVar17 = strlen(pcVar23);
              sVar17 = (size_t)((int)sVar17 + 1);
              pvVar18 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                          (PTR_PTR_047d1a50,sVar17);
              memcpy(pvVar18,pcVar23,sVar17);
              local_568[iVar12] = (ulong)pvVar18 | 1;
            }
            local_138 = CONCAT44(local_138._4_4_,iVar11);
            ppuVar48 = *(undefined8 ***)(lVar42 + 0x10);
            ppuVar50 = *(undefined8 ***)(lVar42 + 0x18);
            bVar35 = true;
            iVar12 = iVar11;
          }
        }
        if (ppuVar48 != ppuVar50) {
          local_370 = ppuVar48;
          local_368 = ppuVar50;
          uVar19 = FUN_03342334(*(undefined8 *)(*(long *)(param_1[0x20] + 0x68) + 0x90),&local_370,
                                *(undefined4 *)(lVar42 + 0x24));
          lVar16 = (long)(int)local_148;
          if ((int)(local_148._4_4_ & 0x7fffffff) <= (int)local_148) {
            FUN_033413e0(&local_150,lVar16 + 1);
          }
          *(undefined8 *)(local_150 + (long)(int)local_148 * 8) = uVar19;
          local_148 = CONCAT44(local_148._4_4_,(int)(lVar16 + 1));
        }
      }
      lVar41 = lVar41 + 1;
      local_114 = *(int *)(lVar42 + 0x24);
    } while (lVar41 < (int)local_120);
  }
  if (local_114 < 0) {
LAB_03336dd4:
    puVar20 = (ulong *)0x0;
LAB_03336e98:
    local_348 = (undefined8 **)0x0;
    local_340 = 0;
    local_370 = (undefined8 **)(PTR_DAT_047e5b58 + 0x10);
    local_350 = CONCAT44(local_350._4_4_,0xffffffff);
    local_368 = (undefined8 **)(PTR_DAT_047e5b60 + 0x10);
    local_358 = 0x4000;
    local_330 = 0;
    local_320._0_4_ = 0;
    local_318 = 0;
    local_310 = 0;
    local_360 = (undefined8 *)(PTR_PTR_047d1a50 + 0x20);
    local_1e0 = auStack_1d0;
    local_338 = (char *)0x8000000000000000;
    local_328 = 0x8000000000000000;
    local_200 = 0;
    local_1f8 = 0x8000000000000000;
    local_1f0 = 0;
    local_1e8 = 0x8000000000000000;
    local_1d8 = 0;
    local_1d4 = 0x80000002;
    local_1a0 = auStack_190;
    local_1a8 = 0x8000000000000000;
    local_168 = 0x8000000000000000;
    local_1b0 = 0;
    local_198 = 0x8000000300000000;
    local_178 = 0;
    local_170 = 0;
    local_160 = 0;
    local_158 = 1;
    local_156 = 0;
    memset(local_308,0,0x100);
    if (param_1 == (long *)0x0) {
      local_310 = 0;
    }
    else {
      local_310 = 0x4000000;
      local_238 = param_1;
    }
    local_408 = acStack_3f8;
    local_400 = 0;
    local_3fc = 0x80000080;
    local_378 = 1;
    local_208 = param_1;
    FUN_031c6afc(&local_408,*local_140 & 0xfffffffffffffffe,0xffffffff);
    iVar12 = local_400;
    pcVar23 = local_408;
    if (local_400 < 1) {
LAB_03337078:
      pcVar23 = local_408;
    }
    else {
      pcVar22 = strchr(local_408,0x3c);
      if (pcVar22 != (char *)0x0) {
        uVar10 = (int)pcVar22 - (int)pcVar23;
        if ((-1 < (int)uVar10) && (uVar10 = iVar12 + ~uVar10, 0 < (int)uVar10)) {
          uVar10 = iVar12 + ~uVar10;
          uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
          uVar4 = (local_3fc & 0x7fffffff) - 1;
          uVar29 = uVar10;
          if ((int)uVar4 <= (int)uVar10) {
            uVar29 = uVar4;
          }
          if (local_378 != 0) {
            uVar29 = uVar10;
          }
          iVar11 = uVar29 + 1;
          if ((int)(local_3fc & 0x7fffffff) <= (int)uVar29) {
            FUN_030b4a20(&local_408,PTR_PTR_047d1a50 + 0x20,iVar11);
            iVar12 = local_400;
          }
          if ((iVar12 <= (int)uVar29) || (iVar11 < iVar12)) {
            local_400 = iVar11;
          }
          local_408[(int)uVar29] = '\0';
        }
        goto LAB_03337078;
      }
    }
    if (pcVar23 == (char *)0x0) {
      uVar37 = 0;
    }
    else {
      sVar17 = strlen(pcVar23);
      sVar17 = (size_t)((int)sVar17 + 1);
      pvVar18 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar17);
      memcpy(pvVar18,pcVar23,sVar17);
      uVar37 = (ulong)pvVar18 | 1;
    }
    iVar12 = (int)param_1[0xe];
    lVar42 = (long)iVar12;
    lVar41 = lVar42 + 1;
    if ((int)(*(uint *)((long)param_1 + 0x74) & 0x7fffffff) <= iVar12) {
      FUN_03055ddc(param_1 + 0xd,PTR_PTR_047d1a50,lVar41);
      iVar12 = (int)param_1[0xe];
    }
    auVar7._8_8_ = local_558;
    auVar7._0_8_ = local_560;
    *(ulong *)(param_1[0xd] + (long)iVar12 * 8) = uVar37;
    *(int *)(param_1 + 0xe) = (int)lVar41;
    local_2e8 = (long)iVar13;
    uVar37 = *(ulong *)(param_1[0xd] + lVar42 * 8) & 0xfffffffffffffffe;
    local_308[0] = 7;
    uVar49 = local_310 | 0x800001;
    local_318 = 0;
    local_250 = 0;
    if (uVar37 != 0) {
      uVar49 = local_310 | 0x800009;
      local_2f0 = uVar37;
    }
    local_270 = param_1 + 0xf;
    local_310 = uVar49 | 0x180010;
    local_268 = 0;
    if (puVar20 != (ulong *)0x0) {
      uVar37 = puVar20[1];
      _local_560 = auVar7;
      if (uVar37 != 0) {
        local_578 = (undefined8 *)0x0;
        puVar25 = (undefined8 *)0x0;
        do {
          puVar31 = (ulong *)(**(code **)(*(long *)param_1[0x21] + 0x30))
                                       ((long *)param_1[0x21],uVar37);
          puVar24 = puVar25;
          if (puVar31 != (ulong *)0x0) {
            local_550 = (undefined8 *)((ulong)local_550 & 0xffffffffffffff00);
            local_558 = (undefined *)0x8000008000000001;
            local_4d0 = 1;
            local_560 = (undefined1  [8])&local_550;
            pcVar23 = (char *)FUN_031e12d8(puVar31,local_560,0,0);
            sVar17 = strlen(pcVar23);
            sVar17 = (size_t)((int)sVar17 + 1);
            pvVar18 = (void *)(**(code **)(*param_1 + 0x18))(param_1,sVar17);
            memcpy(pvVar18,pcVar23,sVar17);
            do {
              uVar49 = *puVar31;
              if (((uint)uVar49 >> 4 & 1) != 0) {
                uVar45 = (undefined4)puVar31[(ulong)(byte)POPCOUNT((byte)uVar49 & 0xf) + 2];
                goto LAB_03337260;
              }
            } while (((uVar49 & 9) == 0) && (puVar31 = (ulong *)puVar31[1], puVar31 != (ulong *)0x0)
                    );
            uVar45 = 0;
LAB_03337260:
            puVar24 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,0x18);
            uVar49 = (ulong)local_558;
            *puVar24 = pvVar18;
            *(undefined4 *)(puVar24 + 1) = uVar45;
            puVar24[2] = 0;
            if (puVar25 == (undefined8 *)0x0) {
              local_578 = puVar24;
            }
            else {
              puVar25[2] = puVar24;
            }
            local_558 = (undefined *)((ulong)local_558 & 0xffffffff00000000);
            if ((-1 < (long)uVar49) && (local_560 != (undefined1  [8])0x0)) {
              (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
            }
          }
          uVar37 = *(ulong *)(uVar37 + 8);
          puVar25 = puVar24;
        } while (uVar37 != 0);
        if (local_578 != (undefined8 *)0x0) {
          puVar25 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,8);
          *puVar25 = local_578;
          auVar51._8_8_ = PTR_DAT_047e66f0;
          auVar51._0_8_ = puVar25;
          local_558 = (undefined *)0x0;
          local_550 = (undefined8 *)0x0;
          if (puVar25 == (undefined8 *)0x0) {
            puVar25 = (undefined8 *)0x0;
            auVar51 = ZEXT816(0);
LAB_03337418:
            _local_560 = auVar51;
          }
          else {
            puVar25 = (undefined8 *)PTR_DAT_047e66f0;
            do {
              uVar10 = (uint)*puVar25;
              if ((uVar10 >> 0xb & 1) != 0) {
                uVar37 = CONCAT44(uVar10,uVar10) & 0x7ff000007ff;
                if ((code *)puVar25[(ulong)(byte)(POPCOUNT((char)uVar37) +
                                                 POPCOUNT((char)(uVar37 >> 8))) + 2] != (code *)0x0)
                {
                  auVar51 = (*(code *)puVar25[(ulong)(byte)(POPCOUNT((char)uVar37) +
                                                           POPCOUNT((char)(uVar37 >> 8))) + 2])();
                  local_558 = auVar51._8_8_;
                  if (local_558 != (undefined *)0x0) goto LAB_0333735c;
                  puVar25 = (undefined8 *)0x0;
                  goto LAB_03337418;
                }
                break;
              }
              puVar25 = (undefined8 *)puVar25[1];
            } while (puVar25 != (undefined8 *)0x0);
            local_558 = PTR_DAT_047e66f0;
LAB_0333735c:
            do {
              puVar31 = auVar51._8_8_;
              local_560 = auVar51._0_8_;
              uVar37 = *puVar31;
              if (((uint)uVar37 >> 2 & 1) != 0) {
                puVar25 = (undefined8 *)puVar31[(uVar37 >> 1 & 1) + (uVar37 & 1) + 2];
                goto LAB_03337414;
              }
              auVar51._8_8_ = puVar31[1];
              auVar51._0_8_ = local_560;
            } while (puVar31[1] != 0);
            puVar25 = (undefined8 *)0x0;
LAB_03337414:
            auVar51 = _local_560;
            if (((ulong)puVar25 & 1) == 0) goto LAB_03337418;
            piVar2 = (int *)(((ulong)puVar25 & 0xfffffffffffffffe) + 8);
            do {
              cVar5 = '\x01';
              bVar35 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar35) {
                *piVar2 = *piVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (((ulong)local_550 & 1) != 0) {
              plVar26 = (long *)((ulong)local_550 & 0xfffffffffffffffe);
              plVar15 = plVar26 + 1;
              do {
                lVar41 = *plVar15;
                cVar5 = '\x01';
                bVar35 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar35) {
                  *(int *)plVar15 = (int)lVar41 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if ((plVar26 != (long *)0x0) && ((int)lVar41 == 1)) {
                local_550 = puVar25;
                (**(code **)(*plVar26 + 8))();
                puVar25 = local_550;
              }
            }
          }
          local_550 = puVar25;
          FUN_031d7cac(&local_370,local_560);
          if (((ulong)local_550 & 1) != 0) {
            plVar26 = (long *)((ulong)local_550 & 0xfffffffffffffffe);
            plVar15 = plVar26 + 1;
            do {
              lVar41 = *plVar15;
              cVar5 = '\x01';
              bVar35 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar35) {
                *(int *)plVar15 = (int)lVar41 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((plVar26 != (long *)0x0) && ((int)lVar41 == 1)) {
              (**(code **)(*plVar26 + 8))();
            }
          }
        }
      }
    }
    if ((long)pcStack_108 - (long)local_110 != 0) {
      pvVar18 = memchr(local_110,0x3c,(long)pcStack_108 - (long)local_110);
      if (pvVar18 != (void *)0x0) {
        local_310 = local_310 | 0x8000;
        local_290 = 0;
      }
    }
    iVar12 = FUN_031d8d9c(&local_370,param_1,&local_410);
    if (iVar12 < 0) {
      if (DAT_0488d698 == 0) {
        if (DAT_046aaf68 != '\0') goto LAB_03338444;
      }
      else if (DAT_046aaf68 == '\0') {
        local_560 = (undefined1  [8])0x0;
        local_550 = &DAT_0488d648;
        local_548 = 1;
        pTVar21 = (ThreadType *)nn::os::GetCurrentThread();
        local_540 = nn::os::GetThreadId(pTVar21);
        local_538 = (char *)0x0;
        local_530 = 0;
        local_528 = (char *)0x0;
        local_520 = 0;
        uStack_518 = 0;
        FUN_0322c554(local_560,"Failed to allocate type from builder",PTR_DAT_047d1b38);
        local_528 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkModifiableTypeSet.cpp"
        ;
        local_520 = 0x640;
        FUN_0322c8e0(local_560);
        if (((ulong)local_538 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_538 + -1,0);
        }
      }
      else {
LAB_03338444:
        local_560 = (undefined1  [8])0x0;
        local_550 = &DAT_0488d648;
        local_548 = 1;
        pTVar21 = (ThreadType *)nn::os::GetCurrentThread();
        local_540 = nn::os::GetThreadId(pTVar21);
        local_530 = 0;
        local_528 = (char *)0x0;
        local_520 = 0;
        uStack_518 = 0;
        local_510[0] = '\0';
        local_558 = (undefined *)0x10000000000;
        local_560 = (undefined1  [8])local_510;
        local_538 = local_510;
        FUN_0322c554(local_560,"Failed to allocate type from builder",PTR_DAT_047d1b38);
        local_528 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkModifiableTypeSet.cpp"
        ;
        local_520 = 0x640;
        if (local_510[0] != '\0') {
          sVar17 = strlen(local_510);
          (local_510 + (int)((int)sVar17 - (uint)((int)sVar17 == 0xff)))[0] = '\n';
          (local_510 + (int)((int)sVar17 - (uint)((int)sVar17 == 0xff)))[1] = '\0';
          printf("%s",local_510);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
        if (((ulong)local_538 & 1) != 0) {
          (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_538 + -1,0);
        }
      }
      pbVar39 = (byte *)0x0;
      bVar35 = false;
    }
    else {
      pbVar39 = local_410;
      if ((*local_410 & 1) == 0) {
        do {
          pbVar39 = *(byte **)(pbVar39 + 8);
        } while ((*pbVar39 & 1) == 0);
      }
      if ((*(ulong *)(pbVar39 + 0x10) & 0x1f) != 7) {
        local_410 = (byte *)0x0;
      }
      bVar35 = true;
      pbVar39 = local_410;
    }
    local_400 = 0;
    if ((-1 < (int)local_3fc) && (local_408 != (char *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
    FUN_031d798c(&local_370);
    if (bVar35) {
      lVar41 = param_1[10];
      local_568 = (ulong *)(**(code **)(*param_1 + 0x18))(param_1,0x78);
      *(int *)(local_568 + 2) = iVar13;
      *(undefined4 *)((long)local_568 + 0x14) = 0;
      *local_568 = (ulong)pbVar39;
      local_568[1] = (ulong)param_4;
      local_568[9] = 0x8000000000000000;
      local_568[3] = (ulong)param_1;
      local_568[4] = 0;
      local_568[5] = 0x8000000000000000;
      local_568[6] = 0;
      local_568[7] = 0x8000000000000000;
      local_568[8] = 0;
      plVar15 = (long *)(local_568 + 10);
      *plVar15 = 0;
      *(undefined4 *)(local_568 + 0xd) = 1;
      local_568[0xb] = 0x8000000000000000;
      local_568[0xc] = 0;
      local_568[0xe] = lVar14;
      iVar13 = (int)param_1[10];
      lVar14 = (long)iVar13;
      if ((int)(*(uint *)((long)param_1 + 0x54) & 0x7fffffff) <= iVar13) {
        FUN_03340784(param_1 + 9,PTR_PTR_047d1a50,lVar14 + 1);
        iVar13 = (int)param_1[10];
      }
      lVar42 = local_150;
      *(ulong **)(param_1[9] + (long)iVar13 * 8) = local_568;
      *(int *)(param_1 + 10) = (int)(lVar14 + 1);
      puVar46 = PTR_PTR_047d1a50;
      uVar37 = local_148 & 0xffffffff;
      if (0 < (int)local_148) {
        uVar49 = 0;
        do {
          uVar10 = *(uint *)((long)param_1 + 100);
          lVar14 = *(long *)(lVar42 + uVar49 * 8);
          if ((int)uVar10 < (int)param_1[0xc] * 2) {
            FUN_02ef5fd4(plVar33,puVar46,uVar10 * 2 + 2);
            uVar10 = *(uint *)((long)param_1 + 100);
          }
          uVar29 = (int)lVar14 * -0x61c8864f;
          uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
          uVar4 = uVar29 >> 0x10 | uVar29 << 0x10;
          uVar29 = (int)((ulong)lVar14 >> 0x20) * -0x61c8864f;
          uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
          uVar29 = uVar29 >> 0x10 | uVar29 << 0x10;
          uVar29 = uVar4 + (uVar4 >> 2) + uVar29 * 0x40 + 0x9e3779b9 ^ uVar29;
          while( true ) {
            uVar29 = uVar10 & uVar29;
            lVar16 = *(long *)(*plVar33 + (ulong)uVar29 * 0x10);
            if (lVar16 == -1) break;
            if (lVar16 == lVar14) {
              iVar13 = 0;
              goto LAB_033376ec;
            }
            uVar29 = uVar29 + 1;
          }
          iVar13 = 1;
LAB_033376ec:
          *(int *)(param_1 + 0xc) = (int)param_1[0xc] + iVar13;
          *(long *)(*plVar33 + (-(ulong)(uVar29 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar29 << 4))
               = lVar14;
          uVar49 = uVar49 + 1;
          *(long *)(param_1[0xb] + (long)(int)uVar29 * 0x10 + 8) = (long)(int)lVar41;
        } while (uVar49 != uVar37);
      }
      if ((puVar20 != (ulong *)0x0) && (-1 < local_114)) {
        puVar31 = puVar20;
        if ((*puVar20 & 1) == 0) {
          do {
            puVar31 = (ulong *)puVar31[1];
          } while ((*puVar31 & 1) == 0);
        }
        if ((puVar31[2] & 0x1f) != 7) {
          puVar20 = (ulong *)0x0;
        }
        puVar31 = puVar20;
        while( true ) {
          uVar10 = (uint)*puVar31;
          if ((uVar10 >> 0x17 & 1) != 0) break;
          if (((*puVar31 & 1) != 0) || (puVar31 = (ulong *)puVar31[1], puVar31 == (ulong *)0x0))
          goto LAB_033378fc;
        }
        if (puVar31 != (ulong *)0x0) {
          uVar10 = uVar10 & 0x7fffff;
          psVar32 = (short *)puVar31[(ulong)(byte)(POPCOUNT((char)uVar10) +
                                                   POPCOUNT((char)(uVar10 >> 8)) +
                                                  POPCOUNT((char)(uVar10 >> 0x10))) + 2];
          if ((psVar32 != (short *)0x0) && (0 < (int)psVar32[1] + (int)*psVar32)) {
            lVar14 = 0;
            goto LAB_033377b0;
          }
        }
LAB_033378fc:
        puVar31 = puVar20;
        while( true ) {
          uVar10 = (uint)*puVar31;
          if ((uVar10 >> 0xf & 1) != 0) break;
          if (((*puVar31 & 9) != 0) || (puVar31 = (ulong *)puVar31[1], puVar31 == (ulong *)0x0))
          goto LAB_03337a88;
        }
        uVar10 = uVar10 & 0x7fff;
        uVar37 = puVar31[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8))) + 2];
        if ((uVar37 != 0) && (uVar36 = *(ushort *)(uVar37 + 8), uVar36 != 0)) {
          uVar49 = 0;
          do {
            puVar25 = (undefined8 *)(uVar37 + 0x10 + uVar49 * 0x10);
            pcVar23 = (char *)puVar25[1];
            if (pcVar23 == (char *)0x0) {
              pcVar22 = (char *)0x0;
            }
            else {
              sVar17 = strlen(pcVar23);
              pcVar22 = pcVar23 + sVar17;
            }
            uVar19 = *puVar25;
            uVar10 = *(uint *)(local_568 + 0xb);
            uVar40 = (ulong)uVar10;
            if (0 < (int)uVar10) {
              sVar17 = (long)pcVar22 - (long)pcVar23;
              puVar25 = (undefined8 *)(*plVar15 + 8);
              do {
                __s = (char *)*puVar25;
                if (__s == (char *)0x0) {
                  if (sVar17 == 0) goto LAB_03337a7c;
                }
                else {
                  sVar27 = strlen(__s);
                  if (sVar27 == sVar17) {
                    iVar13 = memcmp(pcVar23,__s,sVar17);
                    if (iVar13 == 0) goto LAB_03337a7c;
                  }
                }
                uVar40 = uVar40 - 1;
                puVar25 = puVar25 + 2;
              } while (uVar40 != 0);
            }
            if ((int)(*(uint *)((long)local_568 + 0x5c) & 0x7fffffff) <= (int)uVar10) {
              FUN_03341778(plVar15,PTR_PTR_047d1a50,(long)(int)(uVar10 + 1));
            }
            *(uint *)(local_568 + 0xb) = uVar10 + 1;
            uVar28 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,pcVar23,
                                  (int)pcVar22 - (int)pcVar23,1);
            *(undefined8 *)(local_568[10] + (long)*(int *)(local_568 + 0xb) * 0x10 + -8) = uVar28;
            *(undefined8 *)(local_568[10] + (long)*(int *)(local_568 + 0xb) * 0x10 + -0x10) = uVar19
            ;
            uVar36 = *(ushort *)(uVar37 + 8);
LAB_03337a7c:
            uVar49 = uVar49 + 1;
          } while (uVar49 < uVar36);
        }
LAB_03337a88:
        do {
          uVar37 = *puVar20;
          puVar20 = (ulong *)puVar20[1];
        } while ((uVar37 & 1) == 0);
        if (puVar20 != (ulong *)0x0) {
          iVar13 = (int)param_1[0x1a];
          lVar14 = (long)iVar13;
          if ((int)(*(uint *)((long)param_1 + 0xd4) & 0x7fffffff) <= iVar13) {
            FUN_03340d50(param_1 + 0x19,lVar14 + 1);
            iVar13 = (int)param_1[0x1a];
          }
          puVar31 = (ulong *)(param_1[0x19] + (long)iVar13 * 0x20);
          *(int *)(param_1 + 0x1a) = (int)(lVar14 + 1);
          *puVar31 = 0;
          uVar37 = (**(code **)(*(long *)param_1[0x21] + 0x30))((long *)param_1[0x21],puVar20);
          if ((*puVar31 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,*puVar31 - 1,0);
          }
          *(undefined4 *)(puVar31 + 1) = 0xffffffff;
          *puVar31 = 0;
          puVar31[2] = (ulong)local_568;
          puVar31[3] = uVar37;
        }
      }
      if (0 < (int)local_120) {
        uVar37 = local_120 & 0xffffffff;
        do {
          lVar14 = *(long *)(local_128 + (uVar37 - 1) * 8);
          local_560 = (undefined1  [8])0x0;
          local_558 = (undefined *)0x8000000000000000;
          local_548 = local_548 & 0xffffffff00000000;
          local_550 = (undefined8 *)&DAT_03d7702c;
          local_540 = lVar14;
          FUN_0334026c(local_560,lVar14);
          uVar49 = (ulong)*(uint *)(lVar14 + 0x30);
          if (0 < (int)*(uint *)(lVar14 + 0x30)) {
            do {
              lVar41 = *(long *)(lVar14 + 0x28);
              uVar40 = uVar49 - 1;
              switch(*(undefined1 *)(lVar41 + uVar40 * 0x10)) {
              case 1:
                puVar25 = *(undefined8 **)(lVar41 + uVar40 * 0x10 + 8);
                if ((puVar25 != (undefined8 *)0x0) &&
                   (uVar10 = *(uint *)(local_568 + 5), 0 < (int)uVar10)) {
                  lVar41 = 0;
                  lVar42 = local_568[4];
                  pvVar18 = (void *)*puVar25;
                  sVar17 = puVar25[1] - (long)pvVar18;
                  do {
                    pcVar23 = (char *)**(undefined8 **)(lVar42 + lVar41);
                    if (pcVar23 == (char *)0x0) {
                      pcVar22 = (char *)0x0;
                    }
                    else {
                      sVar27 = strlen(pcVar23);
                      pcVar22 = pcVar23 + sVar27;
                    }
                    if ((sVar17 == (long)pcVar22 - (long)pcVar23) &&
                       (iVar13 = memcmp(pvVar18,pcVar23,sVar17), iVar13 == 0)) {
                      local_2e0 = 1;
                      local_368 = (undefined8 **)0x8000008000000002;
                      local_360 = (undefined8 *)CONCAT62(local_360._2_6_,0x23);
                      pcVar23 = (char *)*puVar25;
                      if (pcVar23 == (char *)0x0) {
                        lVar42 = local_568[3];
                        plVar33 = (long *)(lVar42 + 0x68);
                        local_370 = &local_360;
LAB_03337d0c:
                        ppuVar48 = local_370;
                        sVar17 = strlen((char *)local_370);
                        sVar17 = (size_t)((int)sVar17 + 1);
                        pvVar18 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                                    (PTR_PTR_047d1a50,sVar17);
                        memcpy(pvVar18,ppuVar48,sVar17);
                        uVar44 = (ulong)pvVar18 | 1;
                      }
                      else {
                        iVar13 = *(int *)(puVar25 + 1) - (int)pcVar23;
                        local_370 = &local_360;
                        if (iVar13 < 0) {
                          sVar17 = strlen(pcVar23);
                          iVar13 = (int)sVar17;
                        }
                        iVar12 = iVar13 + 2;
                        if (iVar13 < 0x7f) {
                          iVar11 = 2;
                        }
                        else {
                          FUN_030b4a20(&local_370,PTR_PTR_047d1a50 + 0x20,(long)iVar12);
                          iVar11 = (int)local_368;
                        }
                        if ((iVar11 <= (int)((long)iVar13 + 1)) || (iVar12 < iVar11)) {
                          local_368 = (undefined8 **)CONCAT44(local_368._4_4_,iVar12);
                        }
                        *(undefined1 *)((long)local_370 + (long)iVar13 + 1) = 0;
                        memmove((undefined *)((long)local_370 + 1),pcVar23,
                                (long)((int)local_368 + -2));
                        lVar42 = local_568[3];
                        plVar33 = (long *)(lVar42 + 0x68);
                        if (local_370 != (undefined8 **)0x0) goto LAB_03337d0c;
                        uVar44 = 0;
                      }
                      iVar13 = *(int *)(lVar42 + 0x70);
                      lVar16 = (long)iVar13;
                      if ((int)(*(uint *)(lVar42 + 0x74) & 0x7fffffff) <= iVar13) {
                        FUN_03055ddc(plVar33,PTR_PTR_047d1a50,lVar16 + 1);
                        iVar13 = *(int *)(lVar42 + 0x70);
                      }
                      ppuVar48 = local_368;
                      *(ulong *)(*plVar33 + (long)iVar13 * 8) = uVar44;
                      *(int *)(lVar42 + 0x70) = (int)(lVar16 + 1);
                      **(ulong **)(local_568[4] + lVar41) =
                           *(ulong *)(*(long *)(local_568[3] + 0x68) +
                                      (long)*(int *)(local_568[3] + 0x70) * 8 + -8) &
                           0xfffffffffffffffe;
                      local_368 = (undefined8 **)((ulong)local_368 & 0xffffffff00000000);
                      if ((-1 < (long)ppuVar48) && (local_370 != (undefined8 **)0x0)) {
                        (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
                      }
                      break;
                    }
                    lVar41 = lVar41 + 8;
                  } while ((ulong)uVar10 * 8 != lVar41);
                }
                break;
              case 2:
                puVar25 = *(undefined8 **)(lVar41 + uVar40 * 0x10 + 8);
                if (puVar25 != (undefined8 *)0x0) {
                  uVar3 = *(undefined4 *)(puVar25 + 2);
                  uVar45 = *(undefined4 *)(puVar25 + 5);
LAB_033381b8:
                  FUN_0333dadc(local_568,puVar25,uVar3,puVar25 + 3,uVar45,0,local_560);
                }
                break;
              case 3:
                puVar25 = *(undefined8 **)(lVar41 + uVar40 * 0x10 + 8);
                if ((puVar25 != (undefined8 *)0x0) &&
                   (uVar10 = *(uint *)(local_568 + 5), 0 < (int)uVar10)) {
                  lVar41 = 0;
                  lVar42 = local_568[4];
                  pvVar18 = (void *)puVar25[2];
                  sVar17 = puVar25[3] - (long)pvVar18;
                  do {
                    pcVar23 = (char *)**(undefined8 **)(lVar42 + lVar41);
                    if (pcVar23 == (char *)0x0) {
                      pcVar22 = (char *)0x0;
                    }
                    else {
                      sVar27 = strlen(pcVar23);
                      pcVar22 = pcVar23 + sVar27;
                    }
                    if ((sVar17 == (long)pcVar22 - (long)pcVar23) &&
                       (iVar13 = memcmp(pvVar18,pcVar23,sVar17), iVar13 == 0)) {
                      uVar19 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,*puVar25,
                                            *(int *)(puVar25 + 1) - (int)*puVar25,1);
                      **(undefined8 **)(local_568[4] + lVar41) = uVar19;
                      break;
                    }
                    lVar41 = lVar41 + 8;
                  } while ((ulong)uVar10 * 8 != lVar41);
                }
                break;
              case 8:
                plVar33 = *(long **)(lVar41 + uVar40 * 0x10 + 8);
                if ((plVar33 != (long *)0x0) && (*plVar33 != plVar33[1])) {
                  local_370 = (undefined8 **)*plVar33;
                  local_368 = (undefined8 **)plVar33[1];
                  iVar13 = FUN_0333d8d0(local_560,&local_370);
                  if (-1 < iVar13) {
                    lVar42 = local_568[3];
                    iVar12 = *(int *)(lVar42 + 0xd0);
                    lVar41 = (long)iVar12;
                    if ((int)(*(uint *)(lVar42 + 0xd4) & 0x7fffffff) <= iVar12) {
                      FUN_03340d50(lVar42 + 200,lVar41 + 1);
                      iVar12 = *(int *)(lVar42 + 0xd0);
                    }
                    puVar25 = (undefined8 *)(*(long *)(lVar42 + 200) + (long)iVar12 * 0x20);
                    *(int *)(lVar42 + 0xd0) = (int)(lVar41 + 1);
                    *puVar25 = 0;
                    lVar41 = FUN_031ca644(puVar25,local_370,local_368);
                    *(int *)(lVar41 + 8) = iVar13;
                    *(ulong **)(lVar41 + 0x10) = local_568;
                    *(undefined8 *)(lVar41 + 0x18) = 0;
                  }
                }
                break;
              case 0xb:
                lVar41 = *(long *)(lVar41 + uVar40 * 0x10 + 8);
                if (lVar41 != 0) {
                  FUN_0333dcf8(local_568,lVar41,*(undefined8 *)(lVar41 + 0x10));
                }
                break;
              case 0xc:
                puVar25 = *(undefined8 **)(lVar41 + uVar40 * 0x10 + 8);
                if (puVar25 != (undefined8 *)0x0) {
                  uVar10 = *(uint *)(local_568 + 5);
                  if (0 < (int)uVar10) {
                    lVar41 = 0;
                    lVar42 = local_568[4];
                    pvVar18 = (void *)*puVar25;
                    sVar17 = puVar25[1] - (long)pvVar18;
                    do {
                      pcVar23 = (char *)**(undefined8 **)(lVar42 + lVar41);
                      if (pcVar23 == (char *)0x0) {
                        pcVar22 = (char *)0x0;
                      }
                      else {
                        sVar27 = strlen(pcVar23);
                        pcVar22 = pcVar23 + sVar27;
                      }
                      if ((sVar17 == (long)pcVar22 - (long)pcVar23) &&
                         (iVar13 = memcmp(pvVar18,pcVar23,sVar17), iVar13 == 0)) {
                        local_2e0 = 1;
                        local_368 = (undefined8 **)0x8000008000000002;
                        local_360 = (undefined8 *)CONCAT62(local_360._2_6_,0x23);
                        pcVar23 = (char *)*puVar25;
                        if (pcVar23 == (char *)0x0) {
                          lVar42 = local_568[3];
                          plVar33 = (long *)(lVar42 + 0x68);
                          local_370 = &local_360;
LAB_03337db4:
                          ppuVar48 = local_370;
                          sVar17 = strlen((char *)local_370);
                          sVar17 = (size_t)((int)sVar17 + 1);
                          pvVar18 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                                      (PTR_PTR_047d1a50,sVar17);
                          memcpy(pvVar18,ppuVar48,sVar17);
                          uVar44 = (ulong)pvVar18 | 1;
                        }
                        else {
                          iVar13 = *(int *)(puVar25 + 1) - (int)pcVar23;
                          local_370 = &local_360;
                          if (iVar13 < 0) {
                            sVar17 = strlen(pcVar23);
                            iVar13 = (int)sVar17;
                          }
                          iVar12 = iVar13 + 2;
                          if (iVar13 < 0x7f) {
                            iVar11 = 2;
                          }
                          else {
                            FUN_030b4a20(&local_370,PTR_PTR_047d1a50 + 0x20,(long)iVar12);
                            iVar11 = (int)local_368;
                          }
                          if ((iVar11 <= (int)((long)iVar13 + 1)) || (iVar12 < iVar11)) {
                            local_368 = (undefined8 **)CONCAT44(local_368._4_4_,iVar12);
                          }
                          *(undefined1 *)((long)local_370 + (long)iVar13 + 1) = 0;
                          memmove((undefined *)((long)local_370 + 1),pcVar23,
                                  (long)((int)local_368 + -2));
                          lVar42 = local_568[3];
                          plVar33 = (long *)(lVar42 + 0x68);
                          if (local_370 != (undefined8 **)0x0) goto LAB_03337db4;
                          uVar44 = 0;
                        }
                        iVar13 = *(int *)(lVar42 + 0x70);
                        lVar16 = (long)iVar13;
                        if ((int)(*(uint *)(lVar42 + 0x74) & 0x7fffffff) <= iVar13) {
                          FUN_03055ddc(plVar33,PTR_PTR_047d1a50,lVar16 + 1);
                          iVar13 = *(int *)(lVar42 + 0x70);
                        }
                        ppuVar48 = local_368;
                        *(ulong *)(*plVar33 + (long)iVar13 * 8) = uVar44;
                        *(int *)(lVar42 + 0x70) = (int)(lVar16 + 1);
                        **(ulong **)(local_568[4] + lVar41) =
                             *(ulong *)(*(long *)(local_568[3] + 0x68) +
                                        (long)*(int *)(local_568[3] + 0x70) * 8 + -8) &
                             0xfffffffffffffffe;
                        local_368 = (undefined8 **)((ulong)local_368 & 0xffffffff00000000);
                        if ((-1 < (long)ppuVar48) && (local_370 != (undefined8 **)0x0)) {
                          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
                        }
                        break;
                      }
                      lVar41 = lVar41 + 8;
                    } while ((ulong)uVar10 * 8 != lVar41);
                  }
                  uVar3 = *(undefined4 *)(puVar25 + 2);
                  uVar45 = *(undefined4 *)(puVar25 + 5);
                  goto LAB_033381b8;
                }
              }
              bVar35 = 1 < (long)uVar49;
              uVar49 = uVar40;
            } while (bVar35);
          }
          puVar46 = PTR_DAT_047d1a08;
          puVar34 = (undefined4 *)*local_568;
          if (*(long *)(lVar14 + 0x10) == *(long *)(lVar14 + 0x18)) {
            bVar6 = (byte)*puVar34;
            lVar41 = 0x80000000;
          }
          else {
            lVar41 = (long)*(int *)(lVar14 + 0x24);
            bVar6 = (byte)*puVar34;
          }
          *(long *)(puVar34 + (ulong)(byte)POPCOUNT(bVar6 & 0xf) * 2 + 4) = lVar41;
          if ((local_550 != (undefined8 *)0x0) && (*(int *)((long)local_550 + 4) != -2)) {
            (**(code **)(puVar46 + 8))(PTR_PTR_047d1a50[8],local_550,0);
            local_550 = (undefined8 *)&DAT_03d7702c;
            local_548 = local_548 & 0xffffffff00000000;
          }
          auVar9 = local_560;
          if ((int)local_558 != 0) {
            lVar41 = (long)(int)local_558 << 4;
            do {
              uVar49 = *(ulong *)((long)auVar9 + lVar41 + -0x10);
              if ((uVar49 & 1) != 0) {
                (**(code **)(puVar46 + 8))(0,uVar49 - 1,0);
              }
              lVar41 = lVar41 + -0x10;
            } while (lVar41 != 0);
          }
          lVar41 = (long)local_558;
          uVar49 = (ulong)local_558._4_4_;
          local_558 = (undefined *)((ulong)local_558._4_4_ << 0x20);
          if ((-1 < lVar41) && (local_560 != (undefined1  [8])0x0)) {
            (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_560,uVar49 << 4);
          }
          local_114 = *(int *)(lVar14 + 0x24);
          bVar35 = 1 < (long)uVar37;
          uVar37 = uVar37 - 1;
        } while (bVar35);
        goto LAB_03338600;
      }
    }
    else {
LAB_033385f4:
      local_568 = (undefined8 *)0x0;
    }
    puVar46 = PTR_DAT_047d1a08;
  }
  else {
    plVar15 = (long *)param_1[0x21];
    if (param_4 == (ulong *)0x0 || bVar35) {
      pcVar30 = *(code **)(*plVar15 + 0x20);
      puVar20 = (ulong *)(local_130 & 0xfffffffffffffffe);
    }
    else {
      pcVar30 = *(code **)(*plVar15 + 0x30);
      puVar20 = param_4;
    }
    puVar20 = (ulong *)(*pcVar30)(plVar15,puVar20);
    puVar46 = PTR_DAT_047d1a08;
    if (puVar20 == (ulong *)0x0) {
      if ((*(byte *)(param_1 + 0x2b) & 1) != 0) goto LAB_03336dd4;
      if (DAT_0488d698 < 2) {
        if (DAT_046aaf68 == '\0') goto LAB_0333843c;
      }
      else if (DAT_046aaf68 == '\0') {
        local_360 = &DAT_0488d648;
        local_370 = (undefined8 **)0x0;
        local_358 = 2;
        pTVar21 = (ThreadType *)nn::os::GetCurrentThread();
        local_350 = nn::os::GetThreadId(pTVar21);
        local_348 = (undefined8 **)0x0;
        local_340 = 0;
        local_338 = (char *)0x0;
        local_330 = 0;
        local_328 = 0;
        FUN_0322c554(&local_370,"Patches are trying to create class {} but it is not registered",
                     PTR_DAT_047e66e8,&local_130);
        local_330 = 0x5f4;
        uVar45 = 0x2db84748;
        goto LAB_03338414;
      }
      local_360 = &DAT_0488d648;
      local_358 = 2;
      pTVar21 = (ThreadType *)nn::os::GetCurrentThread();
      local_350 = nn::os::GetThreadId(pTVar21);
      local_370 = &local_320;
      local_340 = 0;
      local_338 = (char *)0x0;
      local_330 = 0;
      local_328 = 0;
      local_368 = (undefined8 **)0x10000000000;
      local_320._0_4_ = (uint)local_320 & 0xffffff00;
      local_348 = local_370;
      FUN_0322c554(&local_370,"Patches are trying to create class {} but it is not registered",
                   PTR_DAT_047e66e8,&local_130);
      uVar45 = 0x2db84748;
      local_330 = 0x5f4;
LAB_03338584:
      local_338 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkModifiableTypeSet.cpp"
      ;
      local_358 = CONCAT44(uVar45,(undefined4)local_358);
      if ((char)local_320 != '\0') {
        sVar17 = strlen((char *)&local_320);
        *(undefined2 *)((long)&local_320 + (long)(int)((int)sVar17 - (uint)((int)sVar17 == 0xff))) =
             10;
        printf("%s",&local_320);
        fflush(*(FILE **)PTR_stdout_047cb860);
      }
      if (((ulong)local_348 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,(undefined *)((long)local_348 + -1),0);
      }
      goto LAB_033385f4;
    }
    puVar31 = puVar20;
    do {
      uVar37 = *puVar31;
      if (((uint)uVar37 >> 4 & 1) != 0) {
        iVar12 = (int)puVar31[(ulong)(byte)POPCOUNT((byte)uVar37 & 0xf) + 2];
        goto LAB_03336e04;
      }
      if ((uVar37 & 9) != 0) {
        iVar12 = 0;
        goto LAB_03336e04;
      }
      puVar31 = (ulong *)puVar31[1];
    } while (puVar31 != (ulong *)0x0);
    iVar12 = 0;
LAB_03336e04:
    if ((iVar12 == local_114) || ((*(byte *)(param_1 + 0x2b) & 1) != 0)) goto LAB_03336e98;
    if (DAT_0488d698 < 2) {
      if (DAT_046aaf68 != '\0') goto LAB_03338340;
    }
    else {
      if (DAT_046aaf68 != '\0') {
LAB_03338340:
        local_360 = &DAT_0488d648;
        local_358 = 2;
        pTVar21 = (ThreadType *)nn::os::GetCurrentThread();
        local_350 = nn::os::GetThreadId(pTVar21);
        local_370 = &local_320;
        local_368 = (undefined8 **)0x10000000000;
        local_340 = 0;
        local_338 = (char *)0x0;
        local_330 = 0;
        local_328 = 0;
        local_320._0_4_ = (uint)local_320 & 0xffffff00;
        do {
          uVar37 = *puVar20;
          if (((uint)uVar37 >> 4 & 1) != 0) {
            uVar45 = (undefined4)puVar20[(ulong)(byte)POPCOUNT((byte)uVar37 & 0xf) + 2];
            goto LAB_0333853c;
          }
        } while (((uVar37 & 9) == 0) && (puVar20 = (ulong *)puVar20[1], puVar20 != (ulong *)0x0));
        uVar45 = 0;
LAB_0333853c:
        local_408 = (char *)CONCAT44(local_408._4_4_,uVar45);
        local_348 = local_370;
        FUN_0322c554(&local_370,
                     "Patches say class {} version {} should be present, but version {} is registered"
                     ,&DAT_047aca48,&local_130,&local_114,&local_408);
        local_330 = 0x600;
        uVar45 = 0x6a320fb;
        goto LAB_03338584;
      }
      local_360 = &DAT_0488d648;
      local_370 = (undefined8 **)0x0;
      local_358 = 2;
      pTVar21 = (ThreadType *)nn::os::GetCurrentThread();
      local_350 = nn::os::GetThreadId(pTVar21);
      local_348 = (undefined8 **)0x0;
      local_340 = 0;
      local_338 = (char *)0x0;
      local_330 = 0;
      local_328 = 0;
      do {
        uVar37 = *puVar20;
        if (((uint)uVar37 >> 4 & 1) != 0) {
          local_560._0_4_ = SUB84(puVar20[(ulong)(byte)POPCOUNT((byte)uVar37 & 0xf) + 2],0);
          goto LAB_033383d0;
        }
      } while (((uVar37 & 9) == 0) && (puVar20 = (ulong *)puVar20[1], puVar20 != (ulong *)0x0));
      local_560._0_4_ = 0;
LAB_033383d0:
      FUN_0322c554(&local_370,
                   "Patches say class {} version {} should be present, but version {} is registered"
                   ,&DAT_047aca48,&local_130,&local_114,local_560);
      uVar45 = 0x6a320fb;
      local_330 = 0x600;
LAB_03338414:
      local_338 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkModifiableTypeSet.cpp"
      ;
      local_358 = CONCAT44(uVar45,(undefined4)local_358);
      FUN_0322c8e0(&local_370);
      if (((ulong)local_348 & 1) != 0) {
        (**(code **)(puVar46 + 8))(0,(undefined *)((long)local_348 + -1),0);
      }
    }
LAB_0333843c:
    local_568 = (undefined8 *)0x0;
  }
LAB_03338600:
  uVar37 = local_148;
  uVar49 = (ulong)local_148._4_4_;
  local_148 = (ulong)local_148._4_4_ << 0x20;
  if ((-1 < (long)uVar37) && (local_150 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_150,uVar49 << 3);
  }
  puVar20 = local_140;
  if ((int)local_138 != 0) {
    lVar14 = (long)(int)local_138 << 3;
    do {
      uVar37 = *(ulong *)((long)puVar20 + lVar14 + -8);
      if ((uVar37 & 1) != 0) {
        (**(code **)(puVar46 + 8))(0,uVar37 - 1,0);
      }
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  uVar49 = local_138;
  uVar37 = local_138 >> 0x20;
  local_138 = uVar37 << 0x20;
  if ((puVar20 != (ulong *)0x0) && (-1 < (long)uVar49)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,puVar20,uVar37 << 3);
  }
  if ((local_130 & 1) != 0) {
    (**(code **)(puVar46 + 8))(0,local_130 - 1,0);
  }
  uVar37 = local_120;
  uVar49 = (ulong)local_120._4_4_;
  local_120 = (ulong)local_120._4_4_ << 0x20;
  if ((-1 < (long)uVar37) && (local_128 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_128,uVar49 << 3);
  }
LAB_033386d8:
  uVar37 = local_f8;
  local_f8 = local_f8 & 0xffffffff00000000;
  if ((-1 < (long)uVar37) && (local_100 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return local_568;
LAB_033377b0:
  uVar10 = (uint)*puVar20;
  puVar31 = puVar20;
  if ((uVar10 >> 0x17 & 1) == 0) {
    do {
      puVar31 = (ulong *)puVar31[1];
      uVar10 = (uint)*puVar31;
    } while ((uVar10 >> 0x17 & 1) == 0);
  }
  uVar10 = uVar10 & 0x7fffff;
  puVar47 = *(ulong **)
             (puVar31[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                                   POPCOUNT((char)(uVar10 >> 0x10))) + 2] + lVar14 * 8 + 8);
  uVar37 = *puVar47;
  uVar10 = (uint)uVar37;
  puVar31 = puVar47;
  if ((uVar10 >> 0x11 & 1) == 0) {
    if (puVar47 != (ulong *)0x0) goto joined_r0x03337838;
LAB_03337804:
    local_368 = (undefined8 **)0x0;
    local_370 = (undefined8 **)0x0;
LAB_0333788c:
    FUN_0333dcf8(local_568,&local_370,puVar47);
  }
  else {
    uVar29 = uVar10 & 0x1ffff;
    if (((uint)puVar47[(ulong)(byte)(POPCOUNT((char)uVar29) + POPCOUNT((char)(uVar29 >> 8)) +
                                    POPCOUNT((char)(uVar29 >> 0x10))) + 2] >> 0x10 & 1) == 0) {
joined_r0x03337838:
      while ((uVar10 >> 0x10 & 1) == 0) {
        if (((uVar37 & 1) != 0) || (puVar31 = (ulong *)puVar31[1], puVar31 == (ulong *)0x0))
        goto LAB_03337804;
        uVar37 = *puVar31;
        uVar10 = (uint)uVar37;
      }
      ppuVar48 = (undefined8 **)
                 puVar31[(ulong)(byte)(POPCOUNT((char)(uVar10 & 0xffff)) +
                                      POPCOUNT((char)((uVar10 & 0xffff) >> 8))) + 2];
      local_370 = ppuVar48;
      if (ppuVar48 == (undefined8 **)0x0) {
        local_368 = (undefined8 **)0x0;
      }
      else {
        sVar17 = strlen((char *)ppuVar48);
        local_368 = (undefined8 **)((long)ppuVar48 + sVar17);
      }
      goto LAB_0333788c;
    }
  }
  lVar14 = lVar14 + 1;
  puVar31 = puVar20;
  while( true ) {
    uVar10 = (uint)*puVar31;
    if ((uVar10 >> 0x17 & 1) != 0) break;
    if (((*puVar31 & 1) != 0) || (puVar31 = (ulong *)puVar31[1], puVar31 == (ulong *)0x0))
    goto LAB_033378fc;
  }
  if (puVar31 == (ulong *)0x0) goto LAB_033378fc;
  uVar10 = uVar10 & 0x7fffff;
  psVar32 = (short *)puVar31[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                                          POPCOUNT((char)(uVar10 >> 0x10))) + 2];
  if ((psVar32 == (short *)0x0) || ((long)psVar32[1] + (long)*psVar32 <= lVar14)) goto LAB_033378fc;
  goto LAB_033377b0;
}



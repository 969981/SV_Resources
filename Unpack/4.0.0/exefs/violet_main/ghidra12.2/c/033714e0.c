/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033714e0; name: FUN_033714e0
 */


/* WARNING: Type propagation algorithm not settling */

ulong * FUN_033714e0(int *param_1,ulong *param_2,long *param_3)

{
  undefined *puVar1;
  int *piVar2;
  ushort uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 **__src;
  int iVar12;
  uint uVar13;
  ThreadType *pTVar14;
  size_t sVar15;
  void *pvVar16;
  undefined8 uVar17;
  short *psVar18;
  long *plVar19;
  undefined *puVar20;
  short sVar21;
  int iVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long *plVar25;
  ulong *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong *puVar29;
  ulong *puVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  undefined8 *puVar36;
  int iVar37;
  long *plVar38;
  long lVar39;
  char *pcVar40;
  ulong *puVar41;
  long lVar42;
  int iVar43;
  short *psVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  ulong *local_358;
  ulong *local_350;
  ulong *local_348 [2];
  undefined1 local_338 [16];
  ulong local_328;
  ulong *local_320;
  ulong local_318;
  undefined1 local_310 [128];
  undefined4 local_290;
  undefined8 **local_288;
  undefined8 local_280;
  undefined8 *local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 **local_260;
  undefined8 local_258;
  char *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 *local_238;
  undefined8 local_230;
  ulong local_228;
  ulong local_220 [3];
  void *local_208;
  int local_1f8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  void *local_1a0;
  ulong local_198;
  ulong *local_190;
  ulong local_180;
  ulong local_178;
  undefined8 local_168;
  undefined8 local_158;
  int *local_150;
  undefined8 local_140;
  int *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [32];
  long local_c8;
  int local_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [24];
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  
  if (param_2 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  if (*param_1 < 0) {
    return (ulong *)0x0;
  }
  local_350 = param_2;
  if (*(char *)((long)param_1 + 6) == '\0') {
    uVar23 = 0;
    puVar26 = param_2;
    do {
      uVar13 = (uint)*puVar26;
      if ((uVar13 >> 0x15 & 1) == 0) {
        uVar34 = 0;
      }
      else {
        uVar34 = CONCAT44(uVar13,uVar13) & 0x1fffff001fffff;
        uVar34 = puVar26[(ulong)(byte)(POPCOUNT((char)uVar34) + POPCOUNT((char)(uVar34 >> 8)) +
                                      POPCOUNT((char)(uVar34 >> 0x10))) + 2];
      }
      uVar23 = uVar34 | uVar23;
    } while (((*puVar26 & 1) == 0) && (puVar26 = (ulong *)puVar26[1], puVar26 != (ulong *)0x0));
    if (((uint)uVar23 >> 9 & 1) != 0) {
      if (DAT_0488dc18 < 2) {
        if (DAT_046aaf68 == '\0') goto LAB_03371da0;
LAB_03371784:
        local_278 = &DAT_0488dbc8;
        uStack_270 = 2;
        pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
        local_268 = nn::os::GetThreadId(pTVar14);
        local_258 = 0;
        local_250 = (char *)0x0;
        local_238._0_4_ = (uint)local_238 & 0xffffff00;
        local_280 = (undefined *)0x10000000000;
        local_248 = 0;
        local_240 = 0;
        puVar26 = param_2;
        do {
          uVar23 = *puVar26;
          if (((uint)uVar23 >> 3 & 1) != 0) {
            local_338._0_8_ = 0;
            if (puVar26 != (ulong *)0x0) {
              local_338._0_8_ = puVar26[(ulong)(byte)POPCOUNT((byte)uVar23 & 7) + 2];
            }
            goto LAB_03372d8c;
          }
          if ((uVar23 & 1) != 0) {
            local_338._0_8_ = 0;
            goto LAB_03372d8c;
          }
          puVar26 = (ulong *)puVar26[1];
        } while (puVar26 != (ulong *)0x0);
        local_338._0_8_ = 0;
LAB_03372d8c:
        puVar26 = param_2;
        do {
          uVar13 = (uint)*puVar26;
          if ((uVar13 >> 0xf & 1) != 0) {
            uVar23 = CONCAT44(uVar13,uVar13) & 0x7fff00007fff;
            local_338._8_8_ =
                 puVar26[(ulong)(byte)(POPCOUNT((char)uVar23) + POPCOUNT((char)(uVar23 >> 8))) + 2];
            goto LAB_03372dd8;
          }
          if ((*puVar26 & 9) != 0) {
            local_338._8_8_ = 0;
            goto LAB_03372dd8;
          }
          puVar26 = (ulong *)puVar26[1];
        } while (puVar26 != (ulong *)0x0);
        local_338._8_8_ = 0;
LAB_03372dd8:
        local_358 = param_2;
        local_288 = &local_238;
        local_260 = &local_238;
        FUN_0322c554(&local_288,"Cannot copy {}@{}, it is not retargetable",&DAT_047ae260,local_338,
                     &local_358);
        local_250 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Builder/hkTypeCopier.cpp"
        ;
        local_248 = 0x17b;
        if ((char)local_238 != '\0') {
          sVar15 = strlen((char *)&local_238);
          *(undefined2 *)((long)&local_238 + (long)(int)((int)sVar15 - (uint)((int)sVar15 == 0xff)))
               = 10;
          printf("%s",&local_238);
          fflush(*(FILE **)PTR_stdout_047cb860);
        }
      }
      else {
        if (DAT_046aaf68 != '\0') goto LAB_03371784;
        local_288 = (undefined8 **)0x0;
        local_278 = &DAT_0488dbc8;
        uStack_270 = 2;
        pTVar14 = (ThreadType *)nn::os::GetCurrentThread();
        local_268 = nn::os::GetThreadId(pTVar14);
        local_260 = (undefined8 **)0x0;
        local_258 = 0;
        local_250 = (char *)0x0;
        local_248 = 0;
        local_240 = 0;
        puVar26 = param_2;
        do {
          uVar23 = *puVar26;
          if (((uint)uVar23 >> 3 & 1) != 0) {
            local_320 = (ulong *)0x0;
            if (puVar26 != (ulong *)0x0) {
              local_320 = (ulong *)puVar26[(ulong)(byte)POPCOUNT((byte)uVar23 & 7) + 2];
            }
            goto LAB_03371cf0;
          }
          if ((uVar23 & 1) != 0) {
            local_320 = (ulong *)0x0;
            goto LAB_03371cf0;
          }
          puVar26 = (ulong *)puVar26[1];
        } while (puVar26 != (ulong *)0x0);
        local_320 = (ulong *)0x0;
LAB_03371cf0:
        puVar26 = param_2;
        do {
          uVar13 = (uint)*puVar26;
          if ((uVar13 >> 0xf & 1) != 0) {
            uVar23 = CONCAT44(uVar13,uVar13) & 0x7fff00007fff;
            local_318 = puVar26[(ulong)(byte)(POPCOUNT((char)uVar23) + POPCOUNT((char)(uVar23 >> 8))
                                             ) + 2];
            goto LAB_03371d3c;
          }
          if ((*puVar26 & 9) != 0) {
            local_318 = 0;
            goto LAB_03371d3c;
          }
          puVar26 = (ulong *)puVar26[1];
        } while (puVar26 != (ulong *)0x0);
        local_318 = 0;
LAB_03371d3c:
        local_348[0] = param_2;
        FUN_0322c554(&local_288,"Cannot copy {}@{}, it is not retargetable",&DAT_047ae260,&local_320
                     ,local_348);
        local_250 = 
        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Builder/hkTypeCopier.cpp"
        ;
        local_248 = 0x17b;
        FUN_0322c8e0(&local_288);
      }
      if (((ulong)local_260 & 1) != 0) {
        (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_260 + -1),0);
      }
LAB_03371da0:
      *param_1 = -0x7ffbfe00;
      return (ulong *)0x0;
    }
  }
  local_288 = (undefined8 **)0x0;
  uVar13 = FUN_0335dd40(param_1 + 6,&local_350,&local_288);
  puVar26 = local_350;
  plVar38 = (long *)(*(long *)(param_1 + 6) + ((long)((ulong)uVar13 << 0x20) >> 0x1c) + 8);
  puVar41 = (ulong *)*plVar38;
  if (puVar41 != (ulong *)0x0) {
    return puVar41;
  }
  uVar23 = *local_350;
  uVar31 = (uint)uVar23;
  puVar41 = local_350;
  if ((uVar23 & 1) == 0) {
    do {
      puVar41 = (ulong *)puVar41[1];
    } while ((*puVar41 & 1) == 0);
  }
  if ((local_350 != (ulong *)0x0) && ((puVar41[2] & 0x1f) == 1)) {
    puVar41 = local_350;
    uVar34 = uVar23;
    if ((uVar31 >> 0x14 & 1) == 0) {
      do {
        if (((uVar34 & 1) != 0) || (puVar41 = (ulong *)puVar41[1], puVar41 == (ulong *)0x0))
        goto LAB_03371644;
        uVar34 = *puVar41;
      } while (((uint)uVar34 >> 0x14 & 1) == 0);
    }
    uVar34 = CONCAT44((int)uVar34,(int)uVar34) & 0xfffff000fffff;
    if ((short)puVar41[(ulong)(byte)(POPCOUNT((char)uVar34) + POPCOUNT((char)(uVar34 >> 8)) +
                                    POPCOUNT((char)(uVar34 >> 0x10))) + 2] != 0) {
      puVar26 = (ulong *)FUN_033714e0(param_1,PTR_DAT_047e5f40,param_3);
      *(ulong **)(*(long *)(param_1 + 6) + (long)(int)uVar13 * 0x10 + 8) = puVar26;
      return puVar26;
    }
  }
LAB_03371644:
  if (((uVar31 >> 3 & 1) != 0) &&
     (local_288 = (undefined8 **)local_350[(ulong)(byte)POPCOUNT((byte)uVar23 & 7) + 2],
     local_288 != (undefined8 **)0x0)) {
    lVar39 = FUN_03372e60(param_1 + 0xe,&local_288);
    if ((lVar39 != 0) &&
       (puVar41 = *(ulong **)(*(long *)(param_1 + 0xe) + (long)*(int *)(lVar39 + 4) * 0x10 + 8),
       puVar41 != (ulong *)0x0)) {
      *plVar38 = (long)puVar41;
      return puVar41;
    }
  }
  uVar34 = 0x230401b;
  if (*(char *)((long)param_1 + 6) != '\0') {
    uVar34 = 0x230001b;
  }
  if ((uVar23 & 1) == 0) {
    puVar41 = puVar26;
    do {
      puVar41 = (ulong *)puVar41[1];
    } while ((*puVar41 & 1) == 0);
    if ((puVar41[2] & 0x1f) != 0) {
      puVar41 = puVar26;
      do {
        puVar41 = (ulong *)puVar41[1];
      } while ((*puVar41 & 1) == 0);
      uVar27 = puVar41[2] & 0x1f;
      goto LAB_03371768;
    }
    uVar28 = 0;
  }
  else {
    uVar27 = puVar26[2] & 0x1f;
    uVar28 = 0;
    if (uVar27 != 0) {
LAB_03371768:
      uVar28 = (ulong)(uVar27 != 1) << 2;
    }
  }
  local_260 = (undefined8 **)0x0;
  local_258 = 0;
  local_268 = CONCAT44(local_268._4_4_,0xffffffff);
  local_280 = PTR_DAT_047e5b60 + 0x10;
  local_288 = (undefined8 **)(PTR_DAT_047e5b58 + 0x10);
  local_120 = (int *)0x0;
  local_118 = 0;
  local_108 = 0;
  local_c8 = 0;
  local_278 = (undefined8 *)(PTR_PTR_047d1a50 + 0x20);
  uStack_270 = 0x4000;
  local_f8 = auStack_e8;
  local_f0 = 0x8000000200000000;
  local_b8 = auStack_a8;
  local_250 = (char *)0x8000000000000000;
  local_248 = 0;
  local_240 = 0x8000000000000000;
  local_110 = 0x8000000000000000;
  local_238._0_4_ = 0;
  local_100 = 0x8000000000000000;
  local_c0 = 0;
  uStack_bc = 0x80000000;
  local_90 = 0;
  local_88 = 0;
  local_70 = 1;
  local_6e = 0;
  local_b0 = 0x8000000300000000;
  local_80 = 0x8000000000000000;
  local_78 = 0;
  memset(local_220,0,0x100);
  local_228 = (uVar28 | uVar34) & uVar23;
  lVar39 = 0;
  do {
    uVar33 = 1 << (ulong)((uint)lVar39 & 0x1f);
    uVar34 = 0;
    if (((local_228 & uVar33) != 0) && ((uVar23 & uVar33) != 0)) {
      uVar33 = uVar33 - 1 & uVar31;
      uVar34 = puVar26[(ulong)(byte)(POPCOUNT((char)uVar33) + POPCOUNT((char)(uVar33 >> 8)) +
                                    POPCOUNT((char)(uVar33 >> 0x10)) +
                                    POPCOUNT((char)(uVar33 >> 0x18))) + 2];
    }
    lVar42 = lVar39 + 1;
    local_220[lVar39] = uVar34;
    lVar39 = lVar42;
  } while (lVar42 != 0x20);
  uVar27 = 0;
  uVar34 = uVar23;
  puVar41 = puVar26;
  uVar33 = uVar31;
  while( true ) {
    if ((uVar33 >> 0x15 & 1) == 0) {
      uVar28 = 0;
    }
    else {
      uVar33 = (uint)uVar34 & 0x1fffff;
      uVar28 = puVar41[(ulong)(byte)(POPCOUNT((char)uVar33) + POPCOUNT((char)(uVar33 >> 8)) +
                                    POPCOUNT((char)(uVar33 >> 0x10))) + 2];
    }
    uVar27 = uVar28 | uVar27;
    if (((uVar34 & 1) != 0) || (puVar41 = (ulong *)puVar41[1], puVar41 == (ulong *)0x0)) break;
    uVar34 = *puVar41;
    uVar33 = (uint)uVar34;
  }
  local_238._0_4_ = (uint)uVar27 & 0xffff;
  if (param_1 != (int *)0x0) {
    local_228 = local_228 | 0x4000000;
    local_150 = param_1;
  }
  local_230 = 0;
  local_120 = param_1;
  if ((uVar31 >> 3 & 1) != 0) {
    pcVar40 = (char *)puVar26[(ulong)(byte)POPCOUNT((byte)uVar23 & 7) + 2];
    if (pcVar40 != (char *)0x0) {
      sVar15 = strlen(pcVar40);
      sVar15 = (size_t)((int)sVar15 + 1);
      pvVar16 = (void *)(**(code **)(*(long *)(param_1 + 0x16) + 0x18))(param_1 + 0x16,sVar15);
      memcpy(pvVar16,pcVar40,sVar15);
      local_228 = local_228 | 8;
      uVar23 = *puVar26;
      local_208 = pvVar16;
    }
  }
  uVar31 = (uint)uVar23;
  if ((((uVar31 >> 0xf & 1) != 0) &&
      (uVar23 = CONCAT44(uVar31,uVar31) & 0x7fff00007fff,
      uVar23 = puVar26[(ulong)(byte)(POPCOUNT((char)uVar23) + POPCOUNT((char)(uVar23 >> 8))) + 2],
      uVar23 != 0)) && (uVar3 = *(ushort *)(uVar23 + 8), uVar3 != 0)) {
    plVar38 = (long *)(param_1 + 0x16);
    local_1a8 = (undefined8 *)(**(code **)(*plVar38 + 0x18))(plVar38,(ulong)uVar3 * 0x10 + 0x10);
    *local_1a8 = 0;
    local_1a8[1] = (ulong)uVar3;
    if (*(short *)(uVar23 + 8) != 0) {
      uVar34 = 0;
      puVar24 = (undefined8 *)(uVar23 + 0x18);
      puVar36 = local_1a8 + 3;
      do {
        pcVar40 = (char *)*puVar24;
        sVar15 = strlen(pcVar40);
        sVar15 = (size_t)((int)sVar15 + 1);
        pvVar16 = (void *)(**(code **)(*plVar38 + 0x18))(plVar38,sVar15);
        memcpy(pvVar16,pcVar40,sVar15);
        *puVar36 = pvVar16;
        puVar36[-1] = puVar24[-1];
        uVar34 = uVar34 + 1;
        puVar36 = puVar36 + 2;
        puVar24 = puVar24 + 2;
      } while (uVar34 < *(ushort *)(uVar23 + 8));
    }
    local_228 = local_228 | 0x8000;
    uVar31 = (uint)*puVar26;
  }
  if ((uVar31 >> 0x17 & 1) != 0) {
    uVar33 = uVar31 & 0x7fffff;
    if (puVar26[(ulong)(byte)(POPCOUNT((char)uVar33) + POPCOUNT((char)(uVar33 >> 8)) +
                             POPCOUNT((char)(uVar33 >> 0x10))) + 2] != 0) {
      if (*(short *)(puVar26[(ulong)(byte)(POPCOUNT((char)uVar33) + POPCOUNT((char)(uVar33 >> 8)) +
                                          POPCOUNT((char)(uVar33 >> 0x10))) + 2] + 4) == 0) {
        puVar41 = puVar26;
        if ((uVar31 & 1) == 0) {
          do {
            puVar41 = (ulong *)puVar41[1];
          } while ((*puVar41 & 1) == 0);
        }
        if ((puVar41[2] & 0x1f) != 7) goto LAB_03371b40;
      }
      local_228 = local_228 | 0x800000;
      local_168 = 0;
    }
  }
LAB_03371b40:
  if ((((uVar31 >> 0xe & 1) != 0) && (*(char *)((long)param_1 + 6) == '\0')) &&
     ((uVar23 = CONCAT44(uVar31,uVar31) & 0x3fff00003fff,
      (int *)puVar26[(ulong)(byte)(POPCOUNT((char)uVar23) + POPCOUNT((char)(uVar23 >> 8))) + 2] !=
      (int *)0x0 &&
      (iVar37 = *(int *)puVar26[(ulong)(byte)(POPCOUNT((char)uVar23) + POPCOUNT((char)(uVar23 >> 8))
                                             ) + 2], 0 < iVar37)))) {
    puVar20 = PTR_PTR_047d1a50 + 0x20;
    do {
      iVar37 = iVar37 + -1;
      local_228 = local_228 | 0x4000;
      lVar42 = (long)local_c0;
      lVar39 = lVar42 + 1;
      local_1b0 = 0;
      if ((int)(uStack_bc & 0x7fffffff) <= local_c0) {
        FUN_031d964c(&local_c8,puVar20,lVar39);
      }
      puVar24 = (undefined8 *)(local_c8 + lVar42 * 0x10);
      local_c0 = (int)lVar39;
      *puVar24 = 0;
      puVar24[1] = 0;
    } while (iVar37 != 0);
  }
  puVar20 = PTR_DAT_047e5b68;
  uVar31 = (uint)*puVar26;
  if (((char)param_1[1] != '\0') && ((uVar31 >> 0x15 & 1) != 0)) {
    uVar33 = uVar31 & 0x1fffff;
    local_228 = local_228 | 0x200000;
    local_178 = puVar26[(ulong)(byte)(POPCOUNT((char)uVar33) + POPCOUNT((char)(uVar33 >> 8)) +
                                     POPCOUNT((char)(uVar33 >> 0x10))) + 2] & 0xffffffffffffff7f;
  }
  if ((uVar31 >> 0x1c & 1) != 0) {
    local_228 = local_228 | 0x10000000;
    local_140 = 0;
  }
  if (*(char *)((long)param_1 + 6) != '\0') {
    local_178 = local_178 & 0xffffffffffffdfff;
    local_228 = local_228 | 0x200000;
  }
  if (((((uVar31 >> 5 & 1) != 0) && (*(char *)((long)param_1 + 7) != '\0')) &&
      (bVar45 = POPCOUNT((byte)*puVar26 & 0x1f),
      plVar38 = (long *)puVar26[(ulong)(CONCAT12(bVar45,(ushort)bVar45) & 0xff) + 2],
      plVar38 != (long *)0x0)) && (*plVar38 != 0)) {
    lVar39 = *plVar38 << 4;
    do {
      plVar25 = plVar38 + 2;
      uVar23 = FUN_0221d7c0(*plVar25,puVar20);
      if ((uVar23 & 1) != 0) {
        lVar39 = plVar38[1];
        puVar41 = (ulong *)*plVar25;
        goto joined_r0x03371dd8;
      }
      lVar39 = lVar39 + -0x10;
      plVar38 = plVar25;
    } while (lVar39 != 0);
  }
LAB_03371e88:
  plVar38 = (long *)(param_1 + 0x16);
  FUN_031d8d9c(&local_288,plVar38,&local_320);
  puVar41 = local_320;
  FUN_031d798c(&local_288);
  puVar26 = local_350;
  *(ulong **)(*(long *)(param_1 + 6) + (long)(int)uVar13 * 0x10 + 8) = puVar41;
  if (local_350[1] != 0) {
    uVar23 = FUN_033714e0(param_1,local_350[1],param_3);
    puVar41[1] = uVar23;
  }
  uVar31 = (uint)*puVar41;
  uVar13 = uVar31;
  if ((uVar31 >> 2 & 1) != 0) {
    if ((*puVar26 & 1) == 0) {
switchD_03371f20_caseD_0:
      do {
      } while( true );
    }
    switch((uint)puVar26[2] & 0x1f) {
    case 0:
    case 1:
      goto switchD_03371f20_caseD_0;
    case 2:
      if (*(char *)((long)param_1 + 6) == '\0') goto switchD_03371f20_caseD_4;
      puVar41[2] = 0x2002;
      puVar20 = PTR_DAT_047e6818;
      goto LAB_03371fb0;
    case 3:
      if (*(char *)((long)param_1 + 6) != '\0') {
        puVar41[2] = puVar26[2] & 0x80 | 3;
        puVar20 = (undefined *)0x0;
        goto LAB_03371fb0;
      }
      break;
    case 4:
    case 5:
switchD_03371f20_caseD_4:
      puVar29 = (ulong *)(**(code **)(**(long **)PTR_DAT_047ddc48 + 0x60))();
      do {
        uVar23 = *puVar29;
        if (((uint)uVar23 >> 2 & 1) != 0) {
          puVar20 = (undefined *)puVar29[(uVar23 >> 1 & 1) + (uVar23 & 1) + 2];
          goto LAB_03371fb0;
        }
        puVar29 = (ulong *)puVar29[1];
      } while (puVar29 != (ulong *)0x0);
    }
    puVar20 = (undefined *)0x0;
LAB_03371fb0:
    uVar13 = (uint)*puVar41;
    puVar41[(ulong)(byte)POPCOUNT((byte)*puVar41 & 3) + 2] = (ulong)puVar20;
  }
  if ((uVar31 >> 0xf & 1) != 0) {
    puVar29 = puVar26;
    do {
      uVar33 = (uint)*puVar29;
      if ((uVar33 >> 0xf & 1) != 0) {
        uVar23 = CONCAT44(uVar33,uVar33) & 0x7fff00007fff;
        uVar23 = puVar29[(ulong)(byte)(POPCOUNT((char)uVar23) + POPCOUNT((char)(uVar23 >> 8))) + 2];
        goto LAB_03372024;
      }
      if ((*puVar29 & 9) != 0) {
        uVar23 = 0;
        goto LAB_03372024;
      }
      puVar29 = (ulong *)puVar29[1];
    } while (puVar29 != (ulong *)0x0);
    uVar23 = 0;
LAB_03372024:
    uVar3 = *(ushort *)(uVar23 + 8);
    if (uVar3 != 0) {
      if ((uVar13 >> 0xf & 1) == 0) {
        puVar24 = (undefined8 *)0x0;
      }
      else {
        uVar34 = CONCAT44(uVar13,uVar13) & 0x7fff00007fff;
        puVar24 = (undefined8 *)
                  puVar41[(ulong)(byte)(POPCOUNT((char)uVar34) + POPCOUNT((char)(uVar34 >> 8))) + 2]
        ;
      }
      uVar13 = (uint)uVar3;
      puVar36 = (undefined8 *)(uVar23 + 0x18);
      if (uVar3 < 2) {
        uVar13 = 1;
      }
      uVar23 = (ulong)uVar13;
      do {
        puVar24 = puVar24 + 2;
        if (*(char *)*puVar36 == 't') {
          uVar17 = FUN_033714e0(param_1,puVar36[-1],param_3);
          *puVar24 = uVar17;
        }
        uVar23 = uVar23 - 1;
        puVar36 = puVar36 + 2;
      } while (uVar23 != 0);
    }
  }
  if ((uVar31 >> 0xe & 1) != 0) {
    uVar34 = CONCAT44((int)*puVar26,(int)*puVar26) & 0x3fff00003fff;
    uVar23 = *(ulong *)puVar26[(ulong)(byte)(POPCOUNT((char)uVar34) + POPCOUNT((char)(uVar34 >> 8)))
                               + 2];
    if (0 < (int)uVar23) {
      uVar27 = CONCAT44((int)*puVar41,(int)*puVar41) & 0x3fff00003fff;
      uVar23 = uVar23 & 0xffffffff;
      puVar29 = (ulong *)puVar26[(ulong)(byte)(POPCOUNT((char)uVar34) +
                                              POPCOUNT((char)(uVar34 >> 8))) + 2] + 1;
      puVar24 = (undefined8 *)
                (puVar41[(ulong)(byte)(POPCOUNT((char)uVar27) + POPCOUNT((char)(uVar27 >> 8))) + 2]
                + 8);
      do {
        uVar17 = FUN_033714e0(param_1,*puVar29,param_3);
        uVar23 = uVar23 - 1;
        *puVar24 = uVar17;
        puVar29 = puVar29 + 2;
        puVar24 = puVar24 + 2;
      } while (uVar23 != 0);
    }
  }
  puVar20 = PTR_DAT_047e5b58;
  if ((uVar31 >> 0x17 & 1) == 0) {
    uVar13 = (uint)*puVar41;
    if ((uVar13 >> 1 & 1) == 0) goto LAB_033726e0;
LAB_03372128:
    bVar45 = POPCOUNT((byte)uVar13 & 1);
    uVar23 = FUN_033714e0(param_1,puVar41[(ulong)(CONCAT12(bVar45,(ushort)bVar45) & 0xff) + 2],
                          param_3);
    uVar13 = (uint)*puVar41;
    bVar45 = POPCOUNT((byte)*puVar41 & 1);
    puVar41[(ulong)(CONCAT12(bVar45,(ushort)bVar45) & 0xff) + 2] = uVar23;
    if ((uVar13 >> 0x14 & 1) == 0) goto LAB_033726e4;
LAB_03372180:
    FUN_031dced8(puVar41);
    puVar20 = PTR_DAT_047e6820;
    if ((((*(char *)((long)param_1 + 6) == '\0') && (((uint)*puVar26 >> 5 & 1) != 0)) &&
        (plVar25 = (long *)puVar26[(ulong)(byte)POPCOUNT((byte)*puVar26 & 0x1f) + 2],
        plVar25 != (long *)0x0)) && (*plVar25 != 0)) {
      lVar39 = *plVar25 << 4;
      do {
        plVar19 = plVar25 + 2;
        uVar23 = FUN_0221d7c0(*plVar19,puVar20);
        if ((uVar23 & 1) != 0) {
          puVar24 = (undefined8 *)plVar25[1];
          puVar29 = (ulong *)*plVar19;
          goto joined_r0x033726f0;
        }
        lVar39 = lVar39 + -0x10;
        plVar25 = plVar19;
      } while (lVar39 != 0);
    }
LAB_03372784:
    auVar11._8_8_ = local_338._8_8_;
    auVar11._0_8_ = local_338._0_8_;
    if (((uint)*puVar26 >> 0x14 & 1) == 0) {
      uVar31 = 0;
    }
    else {
      uVar13 = (uint)*puVar26 & 0xfffff;
      uVar31 = (uint)puVar26[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                                          POPCOUNT((char)(uVar13 >> 0x10))) + 2];
    }
    uVar33 = uVar31 & 0xf0000000;
    uVar13 = (uint)*puVar41;
    if ((*puVar41 & 1) == 0) {
      uVar35 = 0;
    }
    else {
      uVar35 = (uint)puVar41[2];
    }
    uVar32 = uVar33;
    if (*(char *)((long)param_1 + 6) == '\0') {
      if (((uVar13 >> 0x17 & 1) == 0) && (puVar41[1] == 0)) {
        switch(uVar35 & 0x1f) {
        case 2:
        case 4:
        case 5:
          goto switchD_03372810_caseD_4;
        case 3:
          if ((uVar35 < 0x10000) || (uVar32 = uVar31, (uVar35 >> 5 & 1) == 0))
          goto switchD_03372848_caseD_6;
          break;
        case 6:
switchD_03372848_caseD_6:
          uVar32 = *(ushort *)(param_1 + 2) | uVar33 | (*(ushort *)(param_1 + 2) & 0xfff) << 0x10;
        }
      }
    }
    else {
      switch(uVar35 & 0x1f) {
      case 2:
        uVar32 = uVar33 | 0x10001;
        break;
      case 3:
      case 6:
        uVar32 = uVar33 | 0x40004;
        break;
      case 4:
      case 5:
switchD_03372810_caseD_4:
        uVar32 = uVar31;
        break;
      case 8:
        uVar32 = uVar33 | 0x40004;
        if (0xff < uVar35) {
          uVar32 = uVar33;
        }
      }
    }
    uVar23 = CONCAT44(uVar13,uVar13) & 0xfffff000fffff;
    puVar41[(ulong)(byte)(POPCOUNT((char)uVar23) + POPCOUNT((char)(uVar23 >> 8)) +
                         POPCOUNT((char)(uVar23 >> 0x10))) + 2] = (ulong)uVar32;
  }
  else {
    puVar29 = puVar26;
    do {
      uVar13 = (uint)*puVar29;
      if ((uVar13 >> 0x17 & 1) != 0) {
        uVar23 = CONCAT44(uVar13,uVar13) & 0x7fffff007fffff;
        psVar44 = (short *)puVar29[(ulong)(byte)(POPCOUNT((char)uVar23) +
                                                 POPCOUNT((char)(uVar23 >> 8)) +
                                                POPCOUNT((char)(uVar23 >> 0x10))) + 2];
        goto LAB_03372244;
      }
      puVar29 = (ulong *)puVar29[1];
    } while (puVar29 != (ulong *)0x0);
    psVar44 = (short *)0x0;
LAB_03372244:
    sVar21 = *psVar44;
    sVar4 = psVar44[1];
    iVar37 = (int)sVar4 + (int)sVar21;
    uVar23 = (ulong)(iVar37 * 8);
    psVar18 = (short *)(**(code **)(*plVar38 + 0x18))(plVar38,uVar23 + 8);
    *psVar18 = sVar21;
    psVar18[1] = sVar4;
    psVar18[2] = (short)iVar37;
    memset(psVar18 + 4,0,uVar23 & 0xfffffff8);
    sVar21 = psVar44[2];
    if (0 < sVar21) {
      lVar39 = 0;
      sVar4 = 0;
      puVar1 = PTR_DAT_047e5b60 + 0x10;
      puVar24 = (undefined8 *)(PTR_PTR_047d1a50 + 0x20);
LAB_033722f4:
      puVar29 = *(ulong **)(psVar44 + lVar39 * 4 + 4);
      if (puVar29 != (ulong *)0x0) {
        puVar30 = puVar29;
        while( true ) {
          uVar13 = (uint)*puVar30;
          if ((uVar13 >> 0x10 & 1) != 0) break;
          if (((*puVar30 & 1) != 0) || (puVar30 = (ulong *)puVar30[1], puVar30 == (ulong *)0x0))
          goto LAB_033725b0;
        }
        uVar23 = CONCAT44(uVar13,uVar13) & 0xffff0000ffff;
        if (puVar30[(ulong)(byte)(POPCOUNT((char)uVar23) + POPCOUNT((char)(uVar23 >> 8))) + 2] != 0)
        {
          uVar17 = FUN_033714e0(param_1,puVar29[1],param_3);
          puVar30 = puVar29;
          goto LAB_03372358;
        }
      }
      goto LAB_033725b0;
    }
    sVar4 = 0;
LAB_033725c4:
    if ((char)param_1[1] != '\0') {
      uVar3 = psVar18[2];
      if (0 < (short)uVar3) {
        uVar23 = 0;
        do {
          puVar24 = *(undefined8 **)(psVar18 + uVar23 * 4 + 4);
          if (uVar23 != 0) {
            uVar34 = uVar23;
            do {
              if (puVar24 < (undefined8 *)0x2) {
                uVar34 = uVar23;
                goto LAB_0337267c;
              }
              if (((uint)*puVar24 >> 0x11 & 1) == 0) goto LAB_0337267c;
              uVar13 = (uint)*puVar24 & 0x1ffff;
              if (((uint)puVar24[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                               POPCOUNT((char)(uVar13 >> 8)) +
                                              POPCOUNT((char)(uVar13 >> 0x10))) + 2] >> 0x15 & 1) ==
                  0) goto LAB_0337267c;
              puVar36 = *(undefined8 **)(psVar18 + (ulong)((int)uVar34 - 1) * 4 + 4);
              if (puVar36 < (undefined8 *)0x2) goto LAB_0337267c;
              if (((uint)*puVar36 >> 0x11 & 1) == 0) goto LAB_0337267c;
              uVar13 = (uint)*puVar36 & 0x1ffff;
              if (((uint)puVar36[(ulong)(byte)(POPCOUNT((char)uVar13) +
                                               POPCOUNT((char)(uVar13 >> 8)) +
                                              POPCOUNT((char)(uVar13 >> 0x10))) + 2] >> 0x14 & 1) ==
                  0) goto LAB_0337267c;
              *(undefined8 **)(psVar18 + uVar34 * 4 + 4) = puVar36;
              uVar27 = uVar34 - 1;
              bVar6 = 0 < (long)uVar34;
              uVar34 = uVar27;
            } while (uVar27 != 0 && bVar6);
          }
          uVar34 = 0;
LAB_0337267c:
          uVar23 = uVar23 + 1;
          *(undefined8 **)((long)psVar18 + ((long)(uVar34 << 0x20) >> 0x1d) + 8) = puVar24;
        } while (uVar23 != uVar3);
        sVar21 = psVar44[2];
      }
      *psVar18 = sVar4;
      psVar18[1] = sVar21 - sVar4;
    }
    uVar13 = (uint)*puVar41;
    uVar23 = CONCAT44(uVar13,uVar13) & 0x7fffff007fffff;
    puVar41[(ulong)(byte)(POPCOUNT((char)uVar23) + POPCOUNT((char)(uVar23 >> 8)) +
                         POPCOUNT((char)(uVar23 >> 0x10))) + 2] = (ulong)psVar18;
    if ((uVar13 >> 1 & 1) != 0) goto LAB_03372128;
LAB_033726e0:
    if ((uVar13 >> 0x14 & 1) != 0) goto LAB_03372180;
LAB_033726e4:
    auVar11._8_8_ = local_338._8_8_;
    auVar11._0_8_ = local_338._0_8_;
  }
joined_r0x0337277c:
  if ((uVar13 >> 0x19 & 1) == 0) goto LAB_03372cc8;
  local_288 = &local_278;
  local_1f8 = 1;
  local_280 = (undefined *)0x8000008000000001;
  local_278 = (undefined8 *)((ulong)local_278 & 0xffffffffffffff00);
  if (((uint)*puVar26 >> 0x19 & 1) != 0) {
    uVar13 = (uint)*puVar26 & 0x1ffffff;
    pcVar40 = (char *)puVar26[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                                           POPCOUNT((char)(uVar13 >> 0x10)) +
                                           POPCOUNT((char)(uVar13 >> 0x18))) + 2];
    if (pcVar40 != (char *)0x0) {
      sVar15 = strlen(pcVar40);
      iVar43 = (int)sVar15;
      iVar37 = iVar43 + 1;
      if (iVar43 < 0x80) {
        iVar22 = 1;
      }
      else {
        FUN_030b4a20(&local_288,PTR_PTR_047d1a50 + 0x20,(long)iVar37);
        iVar22 = (int)local_280;
      }
      if (iVar22 <= iVar43 || iVar37 < iVar22) {
        local_280 = (undefined *)CONCAT44(local_280._4_4_,iVar37);
      }
      *(undefined1 *)((long)local_288 + (long)iVar43) = 0;
      memmove(local_288,pcVar40,(long)(int)local_280 - 1);
    }
  }
  puVar20 = PTR_DAT_047e5b68;
  auVar10._8_8_ = local_338._8_8_;
  auVar10._0_8_ = local_338._0_8_;
  auVar9._8_8_ = local_338._8_8_;
  auVar9._0_8_ = local_338._0_8_;
  auVar8._8_8_ = local_338._8_8_;
  auVar8._0_8_ = local_338._0_8_;
  if (*(char *)((long)param_1 + 7) != '\0') {
    local_338 = auVar8;
    if (((uint)*puVar26 >> 5 & 1) != 0) {
      plVar25 = (long *)puVar26[(ulong)(byte)POPCOUNT((byte)*puVar26 & 0x1f) + 2];
      local_338 = auVar9;
      if (plVar25 != (long *)0x0) {
        local_338 = auVar10;
        if (*plVar25 != 0) {
          lVar39 = *plVar25 << 4;
          do {
            plVar19 = plVar25 + 2;
            uVar23 = FUN_0221d7c0(*plVar19,puVar20);
            if ((uVar23 & 1) != 0) {
              lVar39 = plVar25[1];
              puVar26 = (ulong *)*plVar19;
              uVar23 = 0;
              if (puVar26 == (ulong *)0x0) goto LAB_03372a18;
              goto LAB_033729f0;
            }
            lVar39 = lVar39 + -0x10;
            plVar25 = plVar19;
          } while (lVar39 != 0);
        }
      }
    }
  }
  goto LAB_03372c44;
joined_r0x03371dd8:
  if (puVar41 == (ulong *)0x0) goto LAB_03371e48;
  uVar23 = *puVar41;
  if (((uint)uVar23 >> 2 & 1) != 0) {
    if ((puVar41[(uVar23 >> 1 & 1) + (uVar23 & 1) + 2] & 1) != 0) {
      plVar25 = (long *)(puVar41[(uVar23 >> 1 & 1) + (uVar23 & 1) + 2] & 0xfffffffffffffffe);
      plVar38 = plVar25 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar6) {
          *(int *)plVar38 = (int)*plVar38 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        lVar42 = *plVar38;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar6) {
          *(int *)plVar38 = (int)lVar42 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar25 != (long *)0x0) && ((int)lVar42 == 1)) {
        (**(code **)(*plVar25 + 8))();
      }
    }
    goto LAB_03371e48;
  }
  puVar41 = (ulong *)puVar41[1];
  goto joined_r0x03371dd8;
LAB_03371e48:
  if ((lVar39 != 0) &&
     ((((uint)*puVar26 >> 0x19 & 1) == 0 ||
      (uVar31 = (uint)*puVar26 & 0x1ffffff,
      puVar26[(ulong)(byte)(POPCOUNT((char)uVar31) + POPCOUNT((char)(uVar31 >> 8)) +
                           POPCOUNT((char)(uVar31 >> 0x10)) + POPCOUNT((char)(uVar31 >> 0x18))) + 2]
      == 0)))) {
    local_228 = local_228 | 0x2000000;
    local_158 = 0;
  }
  goto LAB_03371e88;
  while (((*puVar30 & 1) == 0 && (puVar30 = (ulong *)puVar30[1], puVar30 != (ulong *)0x0))) {
LAB_03372358:
    uVar13 = (uint)*puVar30;
    if ((uVar13 >> 0x10 & 1) != 0) {
      uVar13 = uVar13 & 0xffff;
      pcVar40 = (char *)puVar30[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8))
                                             ) + 2];
      goto LAB_03372394;
    }
  }
  pcVar40 = (char *)0x0;
LAB_03372394:
  sVar15 = strlen(pcVar40);
  sVar15 = (size_t)((int)sVar15 + 1);
  pvVar16 = (void *)(**(code **)(*(long *)(param_1 + 0x16) + 0x18))(plVar38,sVar15);
  memcpy(pvVar16,pcVar40,sVar15);
  uStack_270 = 0x4000;
  local_268 = CONCAT44(local_268._4_4_,0xffffffff);
  local_260 = (undefined8 **)0x0;
  local_258 = 0;
  local_250 = (char *)0x8000000000000000;
  local_238._0_4_ = 0;
  local_248 = 0;
  local_240 = 0x8000000000000000;
  local_230 = 0;
  local_228 = 0;
  local_118 = 0;
  local_b0 = 0x8000000300000000;
  local_110 = 0x8000000000000000;
  local_108 = 0;
  local_100 = 0x8000000000000000;
  local_f0 = 0x8000000200000000;
  local_c8 = 0;
  local_c0 = 0;
  uStack_bc = 0x80000000;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0x8000000000000000;
  local_78 = 0;
  local_6e = 0;
  local_70 = 1;
  local_288 = (undefined8 **)(puVar20 + 0x10);
  local_280 = puVar1;
  local_278 = puVar24;
  local_f8 = auStack_e8;
  local_b8 = auStack_a8;
  memset(local_220,0,0x100);
  if (param_1 == (int *)0x0) {
    local_228 = 0;
  }
  else {
    local_228 = 0x4000000;
    local_150 = param_1;
  }
  uVar13 = (uint)*puVar29;
  if ((char)param_1[1] == '\0') {
    if ((uVar13 >> 0x14 & 1) != 0) {
      uVar31 = uVar13 & 0xfffff;
      if (puVar29[(ulong)(byte)(POPCOUNT((char)uVar31) + POPCOUNT((char)(uVar31 >> 8)) +
                               POPCOUNT((char)(uVar31 >> 0x10))) + 2] != 0) {
        local_180 = puVar29[(ulong)(byte)(POPCOUNT((char)uVar31) + POPCOUNT((char)(uVar31 >> 8)) +
                                         POPCOUNT((char)(uVar31 >> 0x10))) + 2] & 0xf0000000;
        local_228 = local_228 | 0x100000;
        uVar13 = (uint)*puVar29;
      }
    }
    if ((uVar13 >> 0x11 & 1) == 0) {
      uVar31 = 0;
      goto LAB_03372560;
    }
LAB_0337250c:
    uVar13 = uVar13 & 0x1ffff;
    uVar33 = (uint)(puVar29[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                                         POPCOUNT((char)(uVar13 >> 0x10))) + 2] >> 0x10);
    uVar31 = uVar33 & 0xffff;
    if ((char)param_1[1] == '\0') goto LAB_03372560;
    if (((uint)puVar29[(ulong)(byte)(POPCOUNT((char)uVar13) + POPCOUNT((char)(uVar13 >> 8)) +
                                    POPCOUNT((char)(uVar13 >> 0x10))) + 2] >> 0x10 & 1) != 0) {
      uVar31 = uVar33 & 0xffcf | 0x10;
      goto LAB_03372560;
    }
  }
  else {
    if ((uVar13 >> 0x11 & 1) != 0) goto LAB_0337250c;
    uVar31 = 0;
  }
  sVar4 = sVar4 + 1;
  uVar31 = uVar31 & 0xffffffcf | 0x20;
LAB_03372560:
  local_228 = local_228 | 0x70000;
  uVar13 = uVar31 << 0x10 | 0x200000;
  if ((uVar31 & 0x30) != 0) {
    uVar13 = uVar31 << 0x10;
  }
  local_198 = (ulong)uVar13;
  local_190 = puVar41;
  local_230 = uVar17;
  local_1a0 = pvVar16;
  local_120 = param_1;
  FUN_031d8d9c(&local_288,plVar38,&local_320);
  *(ulong **)(psVar18 + lVar39 * 4 + 4) = local_320;
  FUN_031d798c(&local_288);
  sVar21 = psVar44[2];
LAB_033725b0:
  lVar39 = lVar39 + 1;
  if (sVar21 <= lVar39) goto LAB_033725c4;
  goto LAB_033722f4;
joined_r0x033726f0:
  if (puVar29 == (ulong *)0x0) goto LAB_03372760;
  uVar23 = *puVar29;
  if (((uint)uVar23 >> 2 & 1) != 0) {
    if ((puVar29[(uVar23 >> 1 & 1) + (uVar23 & 1) + 2] & 1) != 0) {
      plVar19 = (long *)(puVar29[(uVar23 >> 1 & 1) + (uVar23 & 1) + 2] & 0xfffffffffffffffe);
      plVar25 = plVar19 + 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar6) {
          *(int *)plVar25 = (int)*plVar25 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        lVar39 = *plVar25;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar6) {
          *(int *)plVar25 = (int)lVar39 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar19 != (long *)0x0) && ((int)lVar39 == 1)) {
        (**(code **)(*plVar19 + 8))();
      }
    }
    goto LAB_03372760;
  }
  puVar29 = (ulong *)puVar29[1];
  goto joined_r0x033726f0;
LAB_03372760:
  if (puVar24 == (undefined8 *)0x0) goto LAB_03372784;
  (*(code *)*puVar24)(puVar41,puVar26,param_1 + 2);
  auVar11._8_8_ = local_338._8_8_;
  auVar11._0_8_ = local_338._0_8_;
  uVar13 = (uint)*puVar41;
  goto joined_r0x0337277c;
code_r0x03372af4:
  puVar20 = (undefined *)puVar26[1];
  auVar46._8_8_ = puVar20;
  auVar46._0_8_ = local_338._0_8_;
joined_r0x03372ae0:
  if (puVar20 == (undefined *)0x0) goto LAB_03372afc;
  goto LAB_03372aec;
LAB_03372afc:
  uVar23 = 0;
LAB_03372b1c:
LAB_03372b20:
  local_328 = uVar23;
  local_338 = auVar7;
  FUN_031d6fac(local_338,&local_320,local_348);
  if ((local_328 & 1) != 0) {
    plVar19 = (long *)(local_328 & 0xfffffffffffffffe);
    plVar25 = plVar19 + 1;
    do {
      lVar39 = *plVar25;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar6) {
        *(int *)plVar25 = (int)lVar39 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar19 != (long *)0x0) && ((int)lVar39 == 1)) {
      (**(code **)(*plVar19 + 8))();
    }
  }
  puVar26 = local_320;
  if (local_320 != (ulong *)0x0) {
    if ((int)local_318 < 1) {
      sVar15 = strlen((char *)local_320);
      iVar37 = (int)sVar15;
    }
    else {
      iVar37 = (int)local_318 + -1;
    }
    iVar12 = (int)local_280;
    lVar39 = (long)(int)local_280;
    iVar37 = (int)(lVar39 + -1) + iVar37;
    iVar22 = (local_280._4_4_ & 0x7fffffff) - 1;
    iVar43 = iVar37;
    if (iVar22 <= iVar37) {
      iVar43 = iVar22;
    }
    if (local_1f8 != 0) {
      iVar43 = iVar37;
    }
    iVar37 = iVar43 + 1;
    if ((int)(local_280._4_4_ & 0x7fffffff) <= iVar43) {
      FUN_030b4a20(&local_288,PTR_PTR_047d1a50 + 0x20,(long)iVar37);
    }
    if (((int)local_280 <= iVar43) || (iVar37 < (int)local_280)) {
      local_280 = (undefined *)CONCAT44(local_280._4_4_,iVar37);
    }
    *(undefined1 *)((long)local_288 + (long)iVar43) = 0;
    memmove((void *)((long)local_288 + lVar39 + -1),puVar26,(long)((int)local_280 - iVar12));
  }
  uVar23 = local_318;
  local_318 = local_318 & 0xffffffff00000000;
  if ((-1 < (long)uVar23) && (local_320 != (ulong *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  goto LAB_03372c44;
  while (puVar26 = (ulong *)puVar26[1], puVar26 != (ulong *)0x0) {
LAB_033729f0:
    uVar23 = *puVar26;
    if (((uint)uVar23 >> 2 & 1) != 0) {
      uVar23 = puVar26[(uVar23 >> 1 & 1) + (uVar23 & 1) + 2];
      goto LAB_03372a18;
    }
  }
  uVar23 = 0;
LAB_03372a18:
  if ((uVar23 & 1) != 0) {
    piVar2 = (int *)((uVar23 & 0xfffffffffffffffe) + 8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar19 = (long *)(uVar23 & 0xfffffffffffffffe);
    plVar25 = plVar19 + 1;
    do {
      lVar42 = *plVar25;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar6) {
        *(int *)plVar25 = (int)lVar42 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((plVar19 != (long *)0x0) && ((int)lVar42 == 1)) {
      (**(code **)(*plVar19 + 8))();
    }
  }
  auVar46._8_8_ = PTR_DAT_047e5b68;
  auVar46._0_8_ = lVar39;
  if (lVar39 != 0) {
    local_320 = (ulong *)local_310;
    local_328 = 0;
    local_318 = 0x8000008000000001;
    local_290 = 1;
    local_310[0] = 0;
    puVar24 = (undefined8 *)PTR_DAT_047e5b68;
    do {
      uVar13 = (uint)*puVar24;
      if ((uVar13 >> 0xb & 1) != 0) {
        uVar23 = CONCAT44(uVar13,uVar13) & 0x7ff000007ff;
        if ((code *)puVar24[(ulong)(byte)(POPCOUNT((char)uVar23) + POPCOUNT((char)(uVar23 >> 8))) +
                            2] != (code *)0x0) {
          auVar46 = (*(code *)puVar24[(ulong)(byte)(POPCOUNT((char)uVar23) +
                                                   POPCOUNT((char)(uVar23 >> 8))) + 2])(lVar39);
          local_338._8_8_ = auVar46._8_8_;
          auVar7 = auVar46;
          puVar20 = (undefined *)local_338._8_8_;
          goto joined_r0x03372ae0;
        }
        break;
      }
      puVar24 = (undefined8 *)puVar24[1];
    } while (puVar24 != (undefined8 *)0x0);
    local_338._8_8_ = PTR_DAT_047e5b68;
LAB_03372aec:
    puVar26 = auVar46._8_8_;
    local_338._0_8_ = auVar46._0_8_;
    auVar7._8_8_ = local_338._8_8_;
    auVar7._0_8_ = local_338._0_8_;
    uVar23 = *puVar26;
    if (((uint)uVar23 >> 2 & 1) == 0) goto code_r0x03372af4;
    uVar23 = puVar26[(uVar23 >> 1 & 1) + (uVar23 & 1) + 2];
    if ((uVar23 & 1) != 0) {
      piVar2 = (int *)((uVar23 & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((local_328 & 1) != 0) {
        plVar19 = (long *)(local_328 & 0xfffffffffffffffe);
        plVar25 = plVar19 + 1;
        do {
          lVar39 = *plVar25;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar6) {
            *(int *)plVar25 = (int)lVar39 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if ((plVar19 != (long *)0x0) && ((int)lVar39 == 1)) {
          local_328 = uVar23;
          (**(code **)(*plVar19 + 8))();
          auVar7._8_8_ = local_338._8_8_;
          auVar7._0_8_ = local_338._0_8_;
          uVar23 = local_328;
        }
      }
      goto LAB_03372b20;
    }
    goto LAB_03372b1c;
  }
LAB_03372c44:
  __src = local_288;
  sVar15 = strlen((char *)local_288);
  sVar15 = (size_t)((int)sVar15 + 1);
  pvVar16 = (void *)(**(code **)(*plVar38 + 0x18))(plVar38,sVar15);
  memcpy(pvVar16,__src,sVar15);
  uVar23 = (ulong)local_280;
  uVar34 = CONCAT44((int)*puVar41,(int)*puVar41) & 0x1ffffff01ffffff;
  puVar41[(ulong)(byte)(POPCOUNT((char)uVar34) + POPCOUNT((char)(uVar34 >> 8)) +
                       POPCOUNT((char)(uVar34 >> 0x10)) + POPCOUNT((char)(uVar34 >> 0x18))) + 2] =
       (ulong)pvVar16;
  local_280 = (undefined *)((ulong)local_280 & 0xffffffff00000000);
  auVar11 = local_338;
  if ((-1 < (long)uVar23) && (local_288 != (undefined8 **)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    auVar11 = local_338;
  }
LAB_03372cc8:
  puVar26 = local_350;
  iVar37 = (int)param_3[1];
  lVar39 = (long)iVar37;
  if ((int)(*(uint *)((long)param_3 + 0xc) & 0x7fffffff) <= iVar37) {
    local_338 = auVar11;
    FUN_03372f40(param_3,lVar39 + 1);
    iVar37 = (int)param_3[1];
  }
  puVar24 = (undefined8 *)(*param_3 + (long)iVar37 * 0x10);
  *puVar24 = puVar41;
  puVar24[1] = puVar26;
  *(int *)(param_3 + 1) = (int)(lVar39 + 1);
  return puVar41;
}



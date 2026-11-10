/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031d552c; name: FUN_031d552c
 */


ulong * FUN_031d552c(long *param_1,ulong *param_2,ulong *param_3,long *param_4)

{
  int *piVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  long *plVar5;
  ulong *puVar6;
  void *__s1;
  char cVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined *puVar13;
  uint uVar14;
  int iVar17;
  int iVar18;
  int iVar15;
  uint uVar16;
  ulong *puVar19;
  size_t sVar20;
  long *plVar21;
  char *pcVar22;
  ulong *puVar23;
  ThreadType *pTVar24;
  undefined8 uVar25;
  char **ppcVar26;
  int iVar27;
  ulong *puVar28;
  ulong *puVar29;
  char **ppcVar30;
  int iVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  undefined8 *puVar35;
  long lVar36;
  ulong *puVar37;
  size_t sVar38;
  undefined8 *puVar39;
  long lVar40;
  undefined1 auVar41 [16];
  long local_378;
  ulong *local_358;
  char local_34c [4];
  long local_348;
  undefined8 local_340;
  char **local_338;
  undefined8 local_330;
  char **local_328;
  undefined8 local_320;
  char *local_318 [16];
  undefined4 local_298;
  int local_28c;
  undefined1 local_288 [8];
  ulong *local_280;
  undefined8 *local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 **local_260;
  undefined8 local_258;
  char *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 *local_238;
  undefined *local_230;
  ulong local_228;
  undefined1 auStack_220 [40];
  undefined4 local_1f8;
  char *local_188;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 *puStack_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 *local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  
  uVar32 = (ulong)(uint)param_2[1];
  puVar35 = (undefined8 *)*param_2;
  if ((int)(uint)param_2[1] < 1) {
    uVar34 = 0xffffffff;
    puVar19 = param_2;
  }
  else {
    uVar34 = 0;
    puVar39 = puVar35;
    do {
      uVar14 = strcmp((char *)*puVar39,"type");
      puVar19 = (ulong *)(ulong)uVar14;
      if (uVar14 == 0) goto LAB_031d55ac;
      uVar34 = uVar34 + 1;
      puVar39 = puVar39 + 3;
    } while (uVar32 != uVar34);
    uVar34 = 0xffffffff;
  }
LAB_031d55ac:
  local_358 = param_3;
  if (-1 < *(int *)(puVar35 + (long)(int)uVar34 * 3 + 2)) {
    lVar33 = (long)(int)uVar34;
    local_318[0] = (char *)((ulong)local_318[0] & 0xffffffffffffff00);
    local_328 = local_318;
    local_320 = (char **)0x8000008000000001;
    local_298 = 1;
    puVar19 = (ulong *)FUN_031e12d8(param_3,&local_328,0,0);
    ppcVar26 = local_328;
    puVar35 = (undefined8 *)(param_2[0x1a] + (long)*(int *)(*param_2 + lVar33 * 0x18 + 0x10) * 0x10)
    ;
    __s1 = (void *)*puVar35;
    sVar38 = puVar35[1] - (long)__s1;
    if (local_328 == (char **)0x0) {
      if (sVar38 != 0) goto LAB_031d5650;
    }
    else {
      sVar20 = strlen((char *)local_328);
      if ((sVar20 == sVar38) && (iVar15 = memcmp(__s1,ppcVar26,sVar38), iVar15 == 0)) {
        puVar19 = (ulong *)0x0;
      }
      else {
LAB_031d5650:
        local_288 = (undefined1  [8])&local_278;
        local_280 = (ulong *)0x8000008000000000;
        local_1f8 = 1;
        FUN_031c6afc(local_288,__s1,sVar38 & 0xffffffff);
        puVar13 = PTR_DAT_047ddc48;
        param_3 = (ulong *)(**(code **)(**(long **)PTR_DAT_047ddc48 + 0x20))
                                     (*(long **)PTR_DAT_047ddc48,local_288);
        puVar37 = local_280;
        local_280 = (ulong *)((ulong)local_280 & 0xffffffff00000000);
        puVar19 = param_3;
        if ((-1 < (long)puVar37) && (local_288 != (undefined1  [8])0x0)) {
          puVar19 = (ulong *)(**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
        }
        if (param_3 == (ulong *)0x0) {
          uVar32 = param_2[1];
          puVar35 = (undefined8 *)*param_2;
          if ((int)(uint)uVar32 < 1) {
            iVar15 = -1;
          }
          else {
            uVar34 = 0;
            puVar39 = puVar35;
            do {
              uVar14 = strcmp((char *)*puVar39,"builtinType");
              puVar19 = (ulong *)(ulong)uVar14;
              if (uVar14 == 0) goto LAB_031d5be4;
              uVar34 = uVar34 + 1;
              puVar39 = puVar39 + 3;
            } while ((uint)uVar32 != uVar34);
            uVar34 = 0xffffffff;
LAB_031d5be4:
            iVar15 = (int)uVar34;
          }
          uVar14 = *(uint *)(puVar35 + (long)iVar15 * 3 + 2);
          if (-1 < (int)uVar14) {
            puVar35 = (undefined8 *)(param_2[0x1a] + (ulong)uVar14 * 0x10);
            local_288 = (undefined1  [8])&local_278;
            uVar25 = *puVar35;
            local_280 = (ulong *)0x8000008000000000;
            local_1f8 = 1;
            FUN_031c6afc(local_288,uVar25,*(int *)(puVar35 + 1) - (int)uVar25);
            param_3 = (ulong *)(**(code **)(**(long **)puVar13 + 0x20))(*(long **)puVar13,local_288)
            ;
            puVar37 = local_280;
            local_280 = (ulong *)((ulong)local_280 & 0xffffffff00000000);
            puVar19 = param_3;
            if ((-1 < (long)puVar37) && (local_288 != (undefined1  [8])0x0)) {
              puVar19 = (ulong *)(**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
            }
            if (param_3 != (ulong *)0x0) goto LAB_031d56d0;
          }
          if (DAT_048841e0 < 2) {
            if (DAT_046aaf68 != '\0') goto LAB_031d68f4;
          }
          else {
            if (DAT_046aaf68 == '\0') {
              local_288 = (undefined1  [8])0x0;
              local_278 = &DAT_04884190;
              uStack_270 = 2;
              pTVar24 = (ThreadType *)nn::os::GetCurrentThread();
              local_268 = nn::os::GetThreadId(pTVar24);
              local_260 = (undefined8 **)0x0;
              local_258 = 0;
              local_250 = (char *)0x0;
              local_248 = 0;
              local_240 = 0;
              puVar19 = (ulong *)(param_2[0x1a] +
                                 (long)*(int *)(*param_2 + lVar33 * 0x18 + 0x10) * 0x10);
              local_338 = (char **)*puVar19;
              local_330 = puVar19[1];
              FUN_0322c554(local_288,"Invalid value type name: \'{}\'",PTR_DAT_047e5b50,&local_338);
              local_250 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
              ;
              local_248 = 0xdd;
              puVar19 = (ulong *)FUN_0322c8e0(local_288);
            }
            else {
LAB_031d68f4:
              local_278 = &DAT_04884190;
              uStack_270 = 2;
              pTVar24 = (ThreadType *)nn::os::GetCurrentThread();
              local_268 = nn::os::GetThreadId(pTVar24);
              local_258 = 0;
              local_250 = (char *)0x0;
              local_248 = 0;
              local_240 = 0;
              local_280 = (ulong *)0x10000000000;
              local_238._0_4_ = (uint)local_238 & 0xffffff00;
              plVar5 = (long *)(param_2[0x1a] +
                               (long)*(int *)(*param_2 + lVar33 * 0x18 + 0x10) * 0x10);
              local_348 = *plVar5;
              local_340 = plVar5[1];
              local_288 = (undefined1  [8])&local_238;
              local_260 = &local_238;
              puVar19 = (ulong *)FUN_0322c554(local_288,"Invalid value type name: \'{}\'",
                                              PTR_DAT_047e5b50,&local_348);
              local_250 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
              ;
              local_248 = 0xdd;
              if ((char)local_238 != '\0') {
                sVar38 = strlen((char *)&local_238);
                *(undefined2 *)
                 ((long)&local_238 + (long)(int)((int)sVar38 - (uint)((int)sVar38 == 0xff))) = 10;
                printf("%s",&local_238);
                uVar14 = fflush(*(FILE **)PTR_stdout_047cb860);
                puVar19 = (ulong *)(ulong)uVar14;
              }
            }
            if (((ulong)local_260 & 1) != 0) {
              puVar19 = (ulong *)(**(code **)(PTR_DAT_047d1a08 + 8))
                                           (0,(char *)((long)local_260 + -1),0);
            }
          }
          uVar34 = (ulong)local_320;
          uVar32 = (ulong)local_320._4_4_;
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
          local_320 = (char **)((ulong)local_320._4_4_ << 0x20);
          if ((long)uVar34 < 0) {
            return puVar19;
          }
          ppcVar26 = local_328;
          if (local_328 == (char **)0x0) {
            return puVar19;
          }
          goto LAB_031d6710;
        }
      }
    }
LAB_031d56d0:
    uVar32 = (ulong)local_320;
    local_320 = (char **)((ulong)local_320 & 0xffffffff00000000);
    if ((-1 < (long)uVar32) && (local_328 != (char **)0x0)) {
      puVar19 = (ulong *)(**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
    uVar32 = (ulong)(uint)param_2[1];
    local_358 = param_3;
  }
  local_34c[0] = '\0';
  puVar35 = (undefined8 *)*param_2;
  uVar14 = (uint)uVar32;
  if ((int)uVar14 < 1) {
    iVar15 = -1;
  }
  else {
    uVar34 = 0;
    puVar39 = puVar35;
    do {
      uVar16 = strcmp((char *)*puVar39,"strict");
      puVar19 = (ulong *)(ulong)uVar16;
      if (uVar16 == 0) goto LAB_031d574c;
      uVar34 = uVar34 + 1;
      puVar39 = puVar39 + 3;
    } while (uVar32 != uVar34);
    uVar34 = 0xffffffff;
LAB_031d574c:
    iVar15 = (int)uVar34;
  }
  if (*(int *)(puVar35 + (long)iVar15 * 3 + 2) < 0) {
LAB_031d58e4:
    puVar35 = (undefined8 *)*param_2;
    if ((int)uVar14 < 1) {
      iVar15 = -1;
    }
    else {
      uVar32 = 0;
      puVar39 = puVar35;
      do {
        uVar16 = strcmp((char *)*puVar39,"values");
        puVar19 = (ulong *)(ulong)uVar16;
        if (uVar16 == 0) goto LAB_031d5930;
        uVar32 = uVar32 + 1;
        puVar39 = puVar39 + 3;
      } while (uVar14 != uVar32);
      uVar32 = 0xffffffff;
LAB_031d5930:
      iVar15 = (int)uVar32;
    }
    if (-1 < (int)*(uint *)(puVar35 + (long)iVar15 * 3 + 2)) {
      lVar33 = param_2[0x1a] + (ulong)*(uint *)(puVar35 + (long)iVar15 * 3 + 2) * 0x10;
      local_338 = (char **)0x0;
      local_330 = -0x8000000000000000;
      uVar32 = (param_2[0x1a] + (long)*(int *)((long)puVar35 + (long)iVar15 * 0x18 + 0x14) * 0x10) -
               lVar33;
      iVar15 = (int)(uVar32 >> 4);
      uVar32 = uVar32 >> 4 & 0xffffffff;
      if (0 < iVar15) {
        FUN_031d7480(&local_338,uVar32);
      }
      local_348 = 0;
      local_340 = -0x8000000000000000;
      if (iVar15 < 1) {
        local_378 = 0;
        iVar15 = 0;
        local_328 = (char **)((ulong)local_328 & 0xffffffff00000000);
        ppcVar26 = local_338;
        uVar14 = (uint)local_330;
      }
      else {
        puVar19 = (ulong *)FUN_031d7480(&local_348,uVar32);
        ppcVar26 = local_338;
        iVar27 = 0;
        lVar36 = 0;
        iVar31 = (uint)local_330;
        lVar40 = (long)(int)(uint)local_330;
        iVar15 = (int)local_340;
        lVar2 = local_348 + (long)(int)local_340 * 0x10;
        local_328 = (char **)((ulong)local_328 & 0xffffffff00000000);
        local_378 = local_348;
        do {
          puVar35 = (undefined8 *)(lVar33 + 8 + lVar36);
          puVar37 = (ulong *)puVar35[-1];
          puVar23 = (ulong *)*puVar35;
          if ((long)puVar23 - (long)puVar37 == 0) {
            puVar28 = (ulong *)0x0;
            puVar29 = (ulong *)0x0;
          }
          else {
            puVar19 = memchr(puVar37,0x3d,(long)puVar23 - (long)puVar37);
            puVar28 = (ulong *)0x0;
            if (puVar19 != (ulong *)0x0) {
              puVar28 = (ulong *)((long)puVar19 + 1);
            }
            puVar6 = puVar23;
            puVar29 = (ulong *)0x0;
            if (puVar19 != (ulong *)0x0) {
              puVar6 = puVar19;
              puVar29 = puVar23;
            }
            puVar23 = puVar6;
          }
          if (puVar23 == puVar37 || puVar28 == puVar29) {
            local_330 = CONCAT44(local_330._4_4_,iVar31 + iVar27);
            local_340 = CONCAT44(local_340._4_4_,iVar15 + iVar27);
            if (DAT_048841e0 < 2) {
              if (DAT_046aaf68 != '\0') goto LAB_031d6814;
            }
            else if (DAT_046aaf68 == '\0') {
              local_288 = (undefined1  [8])0x0;
              local_278 = &DAT_04884190;
              uStack_270 = 2;
              pTVar24 = (ThreadType *)nn::os::GetCurrentThread();
              local_268 = nn::os::GetThreadId(pTVar24);
              local_260 = (undefined8 **)0x0;
              local_258 = 0;
              local_250 = (char *)0x0;
              local_248 = 0;
              local_240 = 0;
              FUN_0322c554(local_288,"Element {} is not a valid \"name = value\" pair (\'{}\')",
                           &DAT_046a5770,&local_328,lVar33 + (long)(int)local_328 * 0x10);
              local_250 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
              ;
              local_248 = 0x104;
              puVar19 = (ulong *)FUN_0322c8e0(local_288);
              if (((ulong)local_260 & 1) != 0) {
                puVar19 = (ulong *)(**(code **)(PTR_DAT_047d1a08 + 8))
                                             (0,(char *)((long)local_260 + -1),0);
              }
            }
            else {
LAB_031d6814:
              local_278 = &DAT_04884190;
              uStack_270 = 2;
              pTVar24 = (ThreadType *)nn::os::GetCurrentThread();
              local_268 = nn::os::GetThreadId(pTVar24);
              local_258 = 0;
              local_250 = (char *)0x0;
              local_280 = (ulong *)0x10000000000;
              local_248 = 0;
              local_240 = 0;
              local_238._0_4_ = (uint)local_238 & 0xffffff00;
              local_288 = (undefined1  [8])&local_238;
              local_260 = &local_238;
              puVar19 = (ulong *)FUN_0322c554(local_288,
                                              "Element {} is not a valid \"name = value\" pair (\'{}\')"
                                              ,&DAT_046a5770,&local_328,
                                              lVar33 + (long)(int)local_328 * 0x10);
              local_250 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
              ;
              local_248 = 0x104;
              if ((char)local_238 != '\0') {
                sVar38 = strlen((char *)&local_238);
                *(undefined2 *)
                 ((long)&local_238 + (long)(int)((int)sVar38 - (uint)((int)sVar38 == 0xff))) = 10;
                printf("%s",&local_238);
                uVar14 = fflush(*(FILE **)PTR_stdout_047cb860);
                puVar19 = (ulong *)(ulong)uVar14;
              }
              if (((ulong)local_260 & 1) != 0) {
                puVar19 = (ulong *)(**(code **)(PTR_DAT_047d1a08 + 8))
                                             (0,(char *)((long)local_260 + -1),0);
              }
            }
            param_1[1] = 0;
            param_1[2] = 0;
            *param_1 = 0;
            goto LAB_031d66cc;
          }
          puVar35 = (undefined8 *)((long)ppcVar26 + lVar36 + lVar40 * 0x10);
          puVar39 = (undefined8 *)(lVar2 + lVar36);
          lVar36 = lVar36 + 0x10;
          iVar27 = iVar27 + 1;
          *puVar35 = puVar37;
          puVar35[1] = puVar23;
          *puVar39 = puVar28;
          puVar39[1] = puVar29;
          local_328 = (char **)CONCAT44(local_328._4_4_,iVar27);
        } while (uVar32 * 0x10 != lVar36);
        uVar14 = iVar31 + iVar27;
        local_330 = CONCAT44(local_330._4_4_,uVar14);
        iVar15 = iVar15 + iVar27;
        local_340 = CONCAT44(local_340._4_4_,iVar15);
      }
      cVar7 = local_34c[0];
      iVar27 = -1;
      puVar19 = local_358;
      while( true ) {
        uVar16 = (uint)*puVar19;
        if ((uVar16 >> 0x14 & 1) != 0) break;
        if (((*puVar19 & 1) != 0) || (puVar19 = (ulong *)puVar19[1], puVar19 == (ulong *)0x0))
        goto LAB_031d5dd4;
      }
      if (puVar19 != (ulong *)0x0) {
        uVar16 = uVar16 & 0xfffff;
        uVar32 = (ulong)(ushort)puVar19[(ulong)(byte)(POPCOUNT((char)uVar16) +
                                                      POPCOUNT((char)(uVar16 >> 8)) +
                                                     POPCOUNT((char)(uVar16 >> 0x10))) + 2];
        goto LAB_031d5dd8;
      }
LAB_031d5dd4:
      uVar32 = 0;
LAB_031d5dd8:
      iVar31 = (int)uVar32 * uVar14;
      if (0 < (int)uVar14) {
        if (uVar14 == 1) {
          uVar34 = 0;
        }
        else {
          uVar34 = 0;
          ppcVar30 = ppcVar26 + 2;
          do {
            uVar34 = uVar34 + 2;
            iVar31 = iVar31 + (*(int *)(ppcVar30 + -1) - *(int *)(ppcVar30 + -2)) +
                     (*(int *)(ppcVar30 + 1) - *(int *)ppcVar30) + 2;
            ppcVar30 = ppcVar30 + 4;
          } while (((ulong)uVar14 & 0xfffffffe) != uVar34);
        }
        if ((uVar14 & 1) != 0) {
          iVar31 = iVar31 + (*(int *)(ppcVar26 + uVar34 * 2 + 1) - *(int *)(ppcVar26 + uVar34 * 2))
                   + 1;
        }
      }
      local_278 = (undefined8 *)(PTR_PTR_047d1a50 + 0x20);
      uStack_270 = 0x4000;
      local_288 = (undefined1  [8])(PTR_DAT_047e5b58 + 0x10);
      local_280 = (ulong *)(PTR_DAT_047e5b60 + 0x10);
      puStack_f8 = auStack_e8;
      local_268 = CONCAT44(local_268._4_4_,0xffffffff);
      local_260 = (undefined8 **)0x0;
      local_258 = 0;
      local_250 = (char *)0x8000000000000000;
      local_248 = 0;
      local_240 = 0x8000000000000000;
      local_238._0_4_ = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0x8000000000000000;
      uStack_108 = 0;
      local_100 = 0x8000000000000000;
      local_f0 = 0;
      local_ec = 0x80000002;
      local_b8 = auStack_a8;
      local_c8 = 0;
      uStack_c0 = 0x8000000000000000;
      uStack_b0 = 0x8000000300000000;
      local_90 = 0;
      local_80 = 0x8000000000000000;
      local_88 = 0;
      local_78 = 0;
      local_70 = 1;
      local_6e = 0;
      memset(auStack_220,0,0x100);
      local_188 = (char *)0x0;
      local_230 = PTR_DAT_047e5b68;
      local_228 = 0x80000;
      iVar17 = FUN_031d81fc(local_288);
      iVar18 = FUN_031d8238(local_288);
      iVar17 = uVar14 * 0x10 + iVar17 + iVar18 + 0x40;
      puVar19 = local_358;
      while( true ) {
        uVar16 = (uint)*puVar19;
        if ((uVar16 >> 0x14 & 1) != 0) break;
        if (((*puVar19 & 1) != 0) || (puVar19 = (ulong *)puVar19[1], puVar19 == (ulong *)0x0))
        goto LAB_031d611c;
      }
      if (puVar19 == (ulong *)0x0) {
        iVar27 = -1;
      }
      else {
        uVar34 = CONCAT44(uVar16,uVar16) & 0xfffff000fffff;
        iVar27 = (*(ushort *)
                   ((long)puVar19 +
                   (ulong)(byte)(POPCOUNT((char)uVar34) + POPCOUNT((char)(uVar34 >> 8)) +
                                POPCOUNT((char)(uVar34 >> 0x10))) * 8 + 0x12) & 0xfff) - 1;
      }
LAB_031d611c:
      puVar19 = local_358;
      do {
        uVar16 = (uint)*puVar19;
        if ((uVar16 >> 0x14 & 1) != 0) {
          if (puVar19 != (ulong *)0x0) {
            uVar34 = CONCAT44(uVar16,uVar16) & 0xfffff000fffff;
            uVar16 = *(ushort *)
                      ((long)puVar19 +
                      (ulong)(byte)(POPCOUNT((char)uVar34) + POPCOUNT((char)(uVar34 >> 8)) +
                                   POPCOUNT((char)(uVar34 >> 0x10))) * 8 + 0x12) & 0xfff;
            goto LAB_031d617c;
          }
          break;
        }
        if ((*puVar19 & 1) != 0) {
          uVar16 = 0;
          goto LAB_031d617c;
        }
        puVar19 = (ulong *)puVar19[1];
      } while (puVar19 != (ulong *)0x0);
      uVar16 = 0;
LAB_031d617c:
      uVar16 = iVar27 + iVar17 & -uVar16;
      pcVar22 = (char *)(**(code **)(*param_4 + 0x18))(param_4,(long)(int)(uVar16 + iVar31));
      local_320 = (char **)(pcVar22 + iVar17);
      local_328 = (char **)(pcVar22 + 0x30);
      local_318[0] = pcVar22;
      if (local_320 < local_328) {
LAB_031d6ad0:
                    /* WARNING: Subroutine does not return */
        FUN_032270d0(0xdeadf11d,"../..\\Common/Base/Reflect/Util/hkLinearBuffer.inl",0x1e,
                     "hkLinearBuffer exhausted");
      }
      *(ulong **)(pcVar22 + 8) = local_358;
      *(uint *)(pcVar22 + 0x10) = uVar14;
      *pcVar22 = cVar7;
      pcVar3 = pcVar22 + ((long)local_328 + (7 - (long)pcVar22) & 0xfffffffffffffff8);
      local_328 = (char **)(pcVar3 + 0x10);
      if (local_320 < local_328) {
LAB_031d6ab0:
                    /* WARNING: Subroutine does not return */
        FUN_032270d0(0xdeadf11d,"../..\\Common/Base/Reflect/Util/hkLinearBuffer.inl",0x2f,
                     "hkLinearBuffer exhausted");
      }
      *(undefined ***)pcVar3 = &PTR_LAB_046a55d0;
      *(long **)(pcVar3 + 8) = param_4;
      local_228 = local_228 | 0x80000;
      local_188 = pcVar3;
      puVar19 = (ulong *)(**(code **)((long)local_288 + 0x38))(local_288,&local_328);
      (**(code **)((long)local_288 + 0x40))(local_288,puVar19,&local_328);
      uVar34 = (long)local_328 + (7 - (long)local_318[0]);
      local_328 = (char **)(local_318[0] + (uVar34 & 0xfffffffffffffff8) +
                           (long)*(int *)(pcVar22 + 0x10) * 8);
      if (local_320 < local_328) goto LAB_031d6ab0;
      uVar4 = (long)local_328 + (7 - (long)local_318[0]);
      *(char **)(pcVar22 + 0x18) = local_318[0] + (uVar34 & 0xfffffffffffffff8);
      local_328 = (char **)(local_318[0] + (uVar4 & 0xfffffffffffffff8) +
                           (long)*(int *)(pcVar22 + 0x10) * 8);
      if (local_320 < local_328) goto LAB_031d6ab0;
      *(char **)(pcVar22 + 0x20) = local_318[0] + (uVar4 & 0xfffffffffffffff8);
      pcVar22[0x28] = '\0';
      pcVar22[0x29] = '\0';
      pcVar22[0x2a] = '\0';
      pcVar22[0x2b] = '\0';
      pcVar22[0x2c] = '\0';
      pcVar22[0x2d] = '\0';
      pcVar22[0x2e] = '\0';
      pcVar22[0x2f] = '\0';
      *param_1 = (long)pcVar22;
      param_1[1] = (long)puVar19;
      for (; puVar19 != (ulong *)0x0; puVar19 = (ulong *)puVar19[1]) {
        uVar34 = *puVar19;
        if (((uint)uVar34 >> 2 & 1) != 0) {
          uVar34 = puVar19[(uVar34 >> 1 & 1) + (uVar34 & 1) + 2];
          goto LAB_031d62d0;
        }
      }
      uVar34 = 0;
LAB_031d62d0:
      param_1[2] = uVar34;
      if ((uVar34 & 1) != 0) {
        piVar1 = (int *)((uVar34 & 0xfffffffffffffffe) + 8);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = *piVar1 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      puVar19 = (ulong *)FUN_031d798c(local_288);
      if (0 < (int)uVar14) {
        lVar33 = 0;
        lVar36 = (ulong)uVar14 * 8;
        puVar37 = (ulong *)((long)(pcVar22 + (int)uVar16) + (long)iVar31);
        puVar19 = (ulong *)(pcVar22 + (int)uVar16);
        do {
          puVar23 = (ulong *)((long)puVar19 + uVar32);
          if (puVar37 < puVar23) goto LAB_031d6ad0;
          *(ulong **)(*(long *)(pcVar22 + 0x20) + lVar33) = puVar19;
          lVar33 = lVar33 + 8;
          puVar19 = puVar23;
        } while (lVar36 != lVar33);
        lVar33 = 0;
        ppcVar26 = ppcVar26 + 1;
        do {
          uVar32 = (long)*ppcVar26 - (long)ppcVar26[-1];
          puVar19 = (ulong *)((long)puVar23 + ((long)((uVar32 << 0x20) + 0x100000000) >> 0x20));
          if (puVar37 < puVar19) goto LAB_031d6ab0;
          iVar27 = (int)uVar32;
          if (-1 < iVar27) {
            if (iVar27 != 0) {
              puVar23 = (ulong *)strncpy((char *)puVar23,ppcVar26[-1],uVar32 & 0xffffffff);
            }
            *(char *)((long)puVar23 + (long)iVar27) = '\0';
          }
          *(ulong **)(*(long *)(pcVar22 + 0x18) + lVar33) = puVar23;
          lVar33 = lVar33 + 8;
          ppcVar26 = ppcVar26 + 2;
          puVar23 = puVar19;
        } while (lVar36 != lVar33);
      }
      lVar33 = *(long *)(pcVar22 + 0x20);
      local_28c = 0;
      if (0 < iVar15) {
        if (local_358 == (ulong *)0x0) {
          do {
            puVar19 = (ulong *)(local_378 + (long)local_28c * 0x10);
            local_328 = (char **)*puVar19;
            local_320 = (char **)puVar19[1];
            local_288 = *(undefined1 (*) [8])(lVar33 + (long)local_28c * 8);
            local_280 = (ulong *)0x0;
            local_278 = (undefined8 *)0x0;
            puVar19 = (ulong *)FUN_031d6c00(local_288,&local_328);
            iVar27 = 0;
            if ((int)puVar19 < 0) {
              puVar19 = (ulong *)FUN_031e6298(local_288,&local_328);
              iVar27 = (int)puVar19;
            }
            if (((ulong)local_278 & 1) != 0) {
              puVar19 = (ulong *)((ulong)local_278 & 0xfffffffffffffffe);
              puVar37 = puVar19 + 1;
              do {
                uVar32 = *puVar37;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(puVar37,0x10);
                if (bVar8) {
                  *(int *)puVar37 = (int)uVar32 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if ((puVar19 != (ulong *)0x0) && ((int)uVar32 == 1)) {
                puVar19 = (ulong *)(**(code **)(*puVar19 + 8))();
              }
            }
            if (iVar27 < 0) goto LAB_031d6534;
            local_28c = local_28c + 1;
          } while (local_28c < iVar15);
        }
        else {
          do {
            puVar19 = (ulong *)(local_378 + (long)local_28c * 0x10);
            local_328 = (char **)*puVar19;
            local_320 = (char **)puVar19[1];
            local_288 = *(undefined1 (*) [8])(lVar33 + (long)local_28c * 8);
            local_280 = local_358;
            puVar19 = local_358;
            do {
              uVar32 = *puVar19;
              if (((uint)uVar32 >> 2 & 1) != 0) {
                local_278 = (undefined8 *)puVar19[(uVar32 >> 1 & 1) + (uVar32 & 1) + 2];
                goto LAB_031d6400;
              }
              puVar19 = (ulong *)puVar19[1];
            } while (puVar19 != (ulong *)0x0);
            local_278 = (undefined8 *)0x0;
LAB_031d6400:
            if (((ulong)local_278 & 1) != 0) {
              piVar1 = (int *)(((ulong)local_278 & 0xfffffffffffffffe) + 8);
              do {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                  *piVar1 = *piVar1 + 1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
            }
            puVar19 = (ulong *)FUN_031d6c00(local_288,&local_328);
            if ((int)puVar19 < 0) {
              puVar19 = (ulong *)FUN_031e6298(local_288,&local_328);
              iVar27 = (int)puVar19;
            }
            else {
              iVar27 = 0;
            }
            if (((ulong)local_278 & 1) != 0) {
              puVar19 = (ulong *)((ulong)local_278 & 0xfffffffffffffffe);
              puVar37 = puVar19 + 1;
              do {
                uVar32 = *puVar37;
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(puVar37,0x10);
                if (bVar8) {
                  *(int *)puVar37 = (int)uVar32 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if ((puVar19 != (ulong *)0x0) && ((int)uVar32 == 1)) {
                puVar19 = (ulong *)(**(code **)(*puVar19 + 8))();
              }
            }
            if (iVar27 < 0) goto LAB_031d6534;
            local_28c = local_28c + 1;
          } while (local_28c < iVar15);
        }
      }
      goto LAB_031d66cc;
    }
    if (DAT_048841e0 < 2) {
      if (DAT_046aaf68 == '\0') goto LAB_031d5da0;
    }
    else if (DAT_046aaf68 == '\0') {
      local_288 = (undefined1  [8])0x0;
      local_278 = &DAT_04884190;
      uStack_270 = 2;
      pTVar24 = (ThreadType *)nn::os::GetCurrentThread();
      local_268 = nn::os::GetThreadId(pTVar24);
      local_260 = (undefined8 **)0x0;
      local_258 = 0;
      local_250 = (char *)0x0;
      local_248 = 0;
      local_240 = 0;
      FUN_0322c554(local_288,"Missing presets values",PTR_DAT_047d1b38);
      local_248 = 0xf4;
      goto LAB_031d5b68;
    }
    local_278 = &DAT_04884190;
    uStack_270 = 2;
    pTVar24 = (ThreadType *)nn::os::GetCurrentThread();
    local_268 = nn::os::GetThreadId(pTVar24);
    local_258 = 0;
    local_250 = (char *)0x0;
    local_248 = 0;
    local_240 = 0;
    local_280 = (ulong *)0x10000000000;
    local_238._0_4_ = (uint)local_238 & 0xffffff00;
    local_288 = (undefined1  [8])&local_238;
    local_260 = &local_238;
    puVar19 = (ulong *)FUN_0322c554(local_288,"Missing presets values",PTR_DAT_047d1b38);
    local_250 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
    ;
    local_248 = 0xf4;
    if ((char)local_238 != '\0') {
      sVar38 = strlen((char *)&local_238);
      *(undefined2 *)((long)&local_238 + (long)(int)((int)sVar38 - (uint)((int)sVar38 == 0xff))) =
           10;
LAB_031d67fc:
      printf("%s",&local_238);
      uVar14 = fflush(*(FILE **)PTR_stdout_047cb860);
      puVar19 = (ulong *)(ulong)uVar14;
    }
  }
  else {
    local_280 = (ulong *)0x0;
    local_278 = (undefined8 *)0x0;
    lVar33 = (long)iVar15;
    puVar35 = (undefined8 *)PTR_DAT_047e5b48;
    do {
      uVar14 = (uint)*puVar35;
      if ((uVar14 >> 0xb & 1) != 0) {
        uVar32 = CONCAT44(uVar14,uVar14) & 0x7ff000007ff;
        if ((code *)puVar35[(ulong)(byte)(POPCOUNT((char)uVar32) + POPCOUNT((char)(uVar32 >> 8))) +
                            2] != (code *)0x0) {
          auVar41 = (*(code *)puVar35[(ulong)(byte)(POPCOUNT((char)uVar32) +
                                                   POPCOUNT((char)(uVar32 >> 8))) + 2])(local_34c);
          local_280 = auVar41._8_8_;
          if (local_280 != (ulong *)0x0) goto LAB_031d57d4;
          puVar35 = (undefined8 *)0x0;
          goto LAB_031d5820;
        }
        break;
      }
      puVar35 = (undefined8 *)puVar35[1];
    } while (puVar35 != (undefined8 *)0x0);
    auVar41._8_8_ = PTR_DAT_047e5b48;
    auVar41._0_8_ = local_34c;
    local_280 = (ulong *)PTR_DAT_047e5b48;
LAB_031d57d4:
    do {
      puVar19 = auVar41._8_8_;
      local_288 = auVar41._0_8_;
      auVar41._8_8_ = local_280;
      auVar41._0_8_ = local_288;
      auVar10._8_8_ = local_280;
      auVar10._0_8_ = local_288;
      auVar9._8_8_ = local_280;
      auVar9._0_8_ = local_288;
      uVar32 = *puVar19;
      if (((uint)uVar32 >> 2 & 1) != 0) {
        puVar35 = (undefined8 *)puVar19[(uVar32 >> 1 & 1) + (uVar32 & 1) + 2];
        if (((ulong)puVar35 & 1) != 0) {
          piVar1 = (int *)(((ulong)puVar35 & 0xfffffffffffffffe) + 8);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar8) {
              *piVar1 = *piVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
            auVar41 = auVar10;
          } while (cVar7 != '\0');
        }
        goto LAB_031d5820;
      }
      auVar41._8_8_ = puVar19[1];
    } while (puVar19[1] != 0);
    puVar35 = (undefined8 *)0x0;
    auVar41 = auVar9;
LAB_031d5820:
    _local_288 = auVar41;
    if (((ulong)local_278 & 1) != 0) {
      plVar21 = (long *)((ulong)local_278 & 0xfffffffffffffffe);
      plVar5 = plVar21 + 1;
      do {
        lVar36 = *plVar5;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar8) {
          *(int *)plVar5 = (int)lVar36 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((plVar21 != (long *)0x0) && ((int)lVar36 == 1)) {
        local_278 = puVar35;
        (**(code **)(*plVar21 + 8))();
        puVar35 = local_278;
      }
    }
    local_278 = puVar35;
    puVar19 = (ulong *)(param_2[0x1a] + (long)*(int *)(*param_2 + lVar33 * 0x18 + 0x10) * 0x10);
    local_328 = (char **)*puVar19;
    local_320 = (char **)puVar19[1];
    puVar19 = (ulong *)FUN_031d6c00(local_288,&local_328);
    if ((int)puVar19 < 0) {
      puVar19 = (ulong *)FUN_031e6298(local_288,&local_328);
      iVar15 = (int)puVar19;
    }
    else {
      iVar15 = 0;
    }
    if (((ulong)local_278 & 1) != 0) {
      puVar19 = (ulong *)((ulong)local_278 & 0xfffffffffffffffe);
      puVar37 = puVar19 + 1;
      do {
        uVar32 = *puVar37;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar37,0x10);
        if (bVar8) {
          *(int *)puVar37 = (int)uVar32 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((puVar19 != (ulong *)0x0) && ((int)uVar32 == 1)) {
        puVar19 = (ulong *)(**(code **)(*puVar19 + 8))();
      }
    }
    if (-1 < iVar15) {
      uVar14 = (uint)param_2[1];
      goto LAB_031d58e4;
    }
    if (DAT_048841e0 < 2) {
      if (DAT_046aaf68 == '\0') goto LAB_031d5da0;
LAB_031d6744:
      local_278 = &DAT_04884190;
      uStack_270 = 2;
      pTVar24 = (ThreadType *)nn::os::GetCurrentThread();
      local_268 = nn::os::GetThreadId(pTVar24);
      local_258 = 0;
      local_250 = (char *)0x0;
      local_248 = 0;
      local_240 = 0;
      local_280 = (ulong *)0x10000000000;
      local_238._0_4_ = (uint)local_238 & 0xffffff00;
      puVar19 = (ulong *)(param_2[0x1a] + (long)*(int *)(*param_2 + lVar33 * 0x18 + 0x10) * 0x10);
      local_338 = (char **)*puVar19;
      local_330 = puVar19[1];
      local_288 = (undefined1  [8])&local_238;
      local_260 = &local_238;
      puVar19 = (ulong *)FUN_0322c554(local_288,"Invalid value for \'strict\' field: \'{}\'",
                                      PTR_DAT_047e5b50,&local_338);
      local_250 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
      ;
      local_248 = 0xec;
      if ((char)local_238 != '\0') {
        sVar38 = strlen((char *)&local_238);
        *(undefined2 *)((long)&local_238 + (long)(int)((int)sVar38 - (uint)((int)sVar38 == 0xff))) =
             10;
        goto LAB_031d67fc;
      }
    }
    else {
      if (DAT_046aaf68 != '\0') goto LAB_031d6744;
      local_288 = (undefined1  [8])0x0;
      local_278 = &DAT_04884190;
      uStack_270 = 2;
      pTVar24 = (ThreadType *)nn::os::GetCurrentThread();
      local_268 = nn::os::GetThreadId(pTVar24);
      local_260 = (undefined8 **)0x0;
      local_258 = 0;
      local_250 = (char *)0x0;
      local_248 = 0;
      local_240 = 0;
      puVar19 = (ulong *)(param_2[0x1a] + (long)*(int *)(*param_2 + lVar33 * 0x18 + 0x10) * 0x10);
      local_328 = (char **)*puVar19;
      local_320 = (char **)puVar19[1];
      FUN_0322c554(local_288,"Invalid value for \'strict\' field: \'{}\'",PTR_DAT_047e5b50,
                   &local_328);
      local_248 = 0xec;
LAB_031d5b68:
      local_250 = 
      "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
      ;
      puVar19 = (ulong *)FUN_0322c8e0(local_288);
    }
  }
  if (((ulong)local_260 & 1) != 0) {
    puVar19 = (ulong *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_260 + -1),0);
  }
LAB_031d5da0:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return puVar19;
LAB_031d6534:
  if (DAT_048841e0 < 2) {
    if (DAT_046aaf68 != '\0') goto LAB_031d69d0;
  }
  else if (DAT_046aaf68 == '\0') {
    local_288 = (undefined1  [8])0x0;
    local_278 = &DAT_04884190;
    uStack_270 = 2;
    pTVar24 = (ThreadType *)nn::os::GetCurrentThread();
    local_268 = nn::os::GetThreadId(pTVar24);
    local_260 = (undefined8 **)0x0;
    local_258 = 0;
    local_250 = (char *)0x0;
    local_248 = 0;
    local_240 = 0;
    FUN_0322c554(local_288,"Invalid value for element {}: \'{}\'",&DAT_046a5770,&local_28c,
                 &local_328);
    local_250 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
    ;
    local_248 = 0x1a6;
    puVar19 = (ulong *)FUN_0322c8e0(local_288);
    if (((ulong)local_260 & 1) != 0) {
      puVar19 = (ulong *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_260 + -1),0);
    }
  }
  else {
LAB_031d69d0:
    local_278 = &DAT_04884190;
    uStack_270 = 2;
    pTVar24 = (ThreadType *)nn::os::GetCurrentThread();
    local_268 = nn::os::GetThreadId(pTVar24);
    local_258 = 0;
    local_250 = (char *)0x0;
    local_248 = 0;
    local_240 = 0;
    local_280 = (ulong *)0x10000000000;
    local_238._0_4_ = (uint)local_238 & 0xffffff00;
    local_288 = (undefined1  [8])&local_238;
    local_260 = &local_238;
    puVar19 = (ulong *)FUN_0322c554(local_288,"Invalid value for element {}: \'{}\'",&DAT_046a5770,
                                    &local_28c,&local_328);
    local_250 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
    ;
    local_248 = 0x1a6;
    if ((char)local_238 != '\0') {
      sVar38 = strlen((char *)&local_238);
      *(undefined2 *)((long)&local_238 + (long)(int)((int)sVar38 - (uint)((int)sVar38 == 0xff))) =
           10;
      printf("%s",&local_238);
      uVar14 = fflush(*(FILE **)PTR_stdout_047cb860);
      puVar19 = (ulong *)(ulong)uVar14;
    }
    if (((ulong)local_260 & 1) != 0) {
      puVar19 = (ulong *)(**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_260 + -1),0);
    }
  }
  lVar33 = *param_1;
  if (lVar33 != 0) {
    puVar37 = (ulong *)param_1[1];
    puVar19 = puVar37;
    while (uVar32 = *puVar19, ((uint)uVar32 >> 8 & 1) == 0) {
      if (((uVar32 & 1) != 0) || (puVar19 = (ulong *)puVar19[1], puVar19 == (ulong *)0x0))
      goto LAB_031d663c;
    }
    if ((puVar19 != (ulong *)0x0) &&
       ((code *)puVar19[(ulong)(byte)POPCOUNT((char)uVar32) + 2] != (code *)0x0)) {
      (*(code *)puVar19[(ulong)(byte)POPCOUNT((char)uVar32) + 2])(lVar33,puVar37,1);
    }
LAB_031d663c:
    uVar14 = (uint)*puVar37;
    puVar19 = puVar37;
    if ((uVar14 >> 0x13 & 1) == 0) {
      do {
        puVar19 = (ulong *)puVar19[1];
        uVar14 = (uint)*puVar19;
      } while ((uVar14 >> 0x13 & 1) == 0);
    }
    uVar32 = CONCAT44(uVar14,uVar14) & 0x7ffff0007ffff;
    puVar19 = (ulong *)(**(code **)(*(long *)puVar19[(ulong)(byte)(POPCOUNT((char)uVar32) +
                                                                   POPCOUNT((char)(uVar32 >> 8)) +
                                                                  POPCOUNT((char)(uVar32 >> 0x10)))
                                                     + 2] + 0x20))
                                 ((long *)puVar19[(ulong)(byte)(POPCOUNT((char)uVar32) +
                                                                POPCOUNT((char)(uVar32 >> 8)) +
                                                               POPCOUNT((char)(uVar32 >> 0x10))) + 2
                                                 ],lVar33,puVar37);
    auVar12._8_8_ = local_280;
    auVar12._0_8_ = local_288;
    auVar11._8_8_ = local_280;
    auVar11._0_8_ = local_288;
    uVar32 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if ((uVar32 & 1) != 0) {
      puVar19 = (ulong *)(uVar32 & 0xfffffffffffffffe);
      puVar37 = puVar19 + 1;
      do {
        uVar32 = *puVar37;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(puVar37,0x10);
        if (bVar8) {
          *(int *)puVar37 = (int)uVar32 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      _local_288 = auVar11;
      if ((puVar19 != (ulong *)0x0) && (_local_288 = auVar12, (int)uVar32 == 1)) {
        puVar19 = (ulong *)(**(code **)(*puVar19 + 8))();
      }
    }
  }
LAB_031d66cc:
  lVar33 = local_340;
  uVar32 = (ulong)local_340._4_4_;
  local_340 = (ulong)local_340._4_4_ << 0x20;
  if ((-1 < lVar33) && (local_348 != 0)) {
    puVar19 = (ulong *)(**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                                 (PTR_PTR_047d1a50 + 0x20,local_348,uVar32 << 4);
  }
  lVar33 = local_330;
  uVar32 = (ulong)local_330._4_4_;
  local_330 = (ulong)local_330._4_4_ << 0x20;
  if (lVar33 < 0) {
    return puVar19;
  }
  if (local_338 == (char **)0x0) {
    return puVar19;
  }
  uVar32 = uVar32 << 4;
  ppcVar26 = local_338;
LAB_031d6710:
  puVar19 = (ulong *)(**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                               (PTR_PTR_047d1a50 + 0x20,ppcVar26,uVar32);
  return puVar19;
}



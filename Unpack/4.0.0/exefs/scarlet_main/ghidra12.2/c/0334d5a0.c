/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0334d5a0; name: FUN_0334d5a0
 */


long * FUN_0334d5a0(long *param_1,long *param_2)

{
  MutexType *pMVar1;
  long *plVar2;
  uint *puVar3;
  undefined4 *puVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined *puVar27;
  undefined1 auVar28 [8];
  bool bVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  ulong *puVar36;
  size_t sVar37;
  void *pvVar38;
  ThreadType *pTVar39;
  long *plVar40;
  void *pvVar41;
  long *plVar42;
  char *pcVar43;
  size_t sVar44;
  long *plVar45;
  long *plVar46;
  long lVar47;
  int *piVar48;
  undefined2 uVar49;
  uint uVar50;
  uint uVar51;
  undefined4 uVar52;
  ulong *puVar53;
  FILE *pFVar54;
  ulong uVar55;
  undefined8 *puVar56;
  ulong uVar57;
  undefined8 *puVar58;
  int *piVar59;
  ulong *puVar60;
  short *psVar61;
  ulong *puVar62;
  code *pcVar63;
  undefined1 auVar64 [8];
  undefined8 *puVar65;
  uint uVar66;
  undefined8 uVar67;
  undefined8 *puVar68;
  undefined8 uVar69;
  ulong *puVar70;
  int *piVar71;
  long *plVar72;
  undefined8 **ppuVar73;
  ulong *puVar74;
  uint uVar75;
  undefined4 uVar76;
  byte *pbVar77;
  int *piVar78;
  undefined8 **ppuVar79;
  long lVar80;
  int *piVar81;
  undefined *puVar82;
  short *psVar83;
  byte *pbVar84;
  long lVar85;
  ulong uVar86;
  long lVar87;
  long lVar88;
  undefined2 *puVar89;
  long lVar90;
  ulong uVar91;
  char *pcVar92;
  short *psVar93;
  long lVar94;
  ulong uVar95;
  byte *pbVar96;
  uint uVar97;
  long *plVar98;
  undefined4 uVar99;
  byte *pbVar100;
  undefined4 uVar102;
  undefined4 uVar101;
  short *psVar103;
  undefined8 **ppuVar104;
  long lVar105;
  byte bVar106;
  undefined1 auVar107 [16];
  int *local_5e0;
  ulong *local_5b0;
  undefined4 local_590;
  undefined8 **local_560;
  long local_558;
  undefined8 **local_540;
  undefined8 local_538;
  undefined8 *local_530;
  uint local_528;
  undefined4 local_4b0;
  int *local_4a8;
  undefined8 local_4a0;
  undefined *local_498;
  int local_490;
  undefined4 local_484;
  ulong *local_480;
  undefined8 local_478;
  ulong *local_470;
  undefined8 local_468;
  long local_460;
  undefined8 local_458;
  undefined *local_450;
  undefined4 local_448;
  int *local_440;
  undefined8 local_438;
  undefined *local_430;
  int local_428;
  undefined4 local_41c;
  undefined8 local_418;
  ulong local_410;
  int local_404;
  undefined8 **local_400;
  undefined8 local_3f8;
  int *local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 **local_3d8;
  undefined8 local_3d0;
  undefined8 *local_3c8;
  undefined4 local_3c0;
  byte *local_3b8;
  undefined8 local_3b0;
  undefined8 *local_3a8;
  undefined4 local_3a0;
  undefined1 local_398 [8];
  undefined8 local_390;
  undefined8 *local_388;
  int local_380;
  ulong *local_378;
  int local_308;
  undefined1 local_300 [8];
  undefined8 local_2f8;
  undefined8 *local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 **local_2d8;
  undefined8 local_2d0;
  char *local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 *local_2b0 [8];
  int local_270;
  code *local_260;
  undefined *local_250;
  undefined *local_248;
  undefined1 *local_210;
  undefined *local_1d0;
  code *local_1c0;
  undefined *local_1b8;
  undefined *local_188;
  undefined *local_178;
  code *local_170;
  undefined *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108;
  long *local_78;
  
  local_440 = (int *)0x0;
  local_438 = 0x8000000000000000;
  local_430 = &DAT_03d7702c;
  local_428 = 0;
  plVar98 = param_1 + 2;
  lVar90 = *plVar98;
  param_1[0x56] = (long)param_2;
  nn::os::LockMutex((MutexType *)(lVar90 + 0x18));
  *(int *)(lVar90 + 0x80) = *(int *)(lVar90 + 0x80) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar90 + 0x18));
  uVar91 = (ulong)*(uint *)(param_2 + 2);
  local_460 = 0;
  local_458 = -0x8000000000000000;
  local_450 = &DAT_03d7702c;
  local_448 = 0;
  puVar56 = (undefined8 *)param_2[1];
  if (0 < (int)*(uint *)(param_2 + 2)) {
    do {
      FUN_0335f394(param_1,&local_460,*puVar56);
      uVar91 = uVar91 - 1;
      puVar56 = puVar56 + 1;
    } while (uVar91 != 0);
  }
  local_470 = (ulong *)0x0;
  local_468 = -0x8000000000000000;
  local_480 = (ulong *)0x0;
  local_478 = 0x8000000000000000;
  plVar72 = param_1 + 4;
  puVar53 = (ulong *)*plVar72;
  lVar85 = param_1[5];
  if (((long)(int)lVar85 & 0xfffffffffffffffU) != 0) {
    puVar36 = (ulong *)0x0;
    puVar60 = puVar53;
    uVar91 = 0;
    uVar66 = 0;
    while( true ) {
      uVar95 = *puVar60;
      iVar30 = (int)uVar91;
      if (uVar91 < (uVar66 & 0x7fffffff)) {
        iVar32 = iVar30;
      }
      else {
        FUN_033603c0(&local_480,uVar91 + 1);
        puVar36 = local_480;
        iVar32 = (int)local_478;
      }
      puVar36[iVar32] = uVar95;
      local_478 = CONCAT44(local_478._4_4_,iVar30 + 1);
      if (puVar60 + 2 == puVar53 + (long)(int)lVar85 * 2) break;
      puVar60 = puVar60 + 2;
      uVar91 = uVar91 + 1;
      uVar66 = local_478._4_4_;
    }
    if (iVar30 == 0) {
      uVar91 = 1;
    }
    else {
      FUN_033604e0(puVar36,0,uVar91 & 0xffffffff);
      if (iVar30 == -1) goto LAB_0334eec8;
      uVar91 = uVar91 + 1;
    }
    plVar42 = param_1 + 0x22;
    pFVar54 = *(FILE **)PTR_stdout_047cb860;
    local_5b0 = local_480;
    do {
      puVar53 = local_5b0;
      do {
        uVar95 = *puVar53;
        local_3b8 = (byte *)0x0;
        local_540 = (undefined8 **)0x0;
        local_538 = (ulong *)0x8000000000000000;
        local_3b0 = (byte *)0x8000000000000000;
        uVar52 = (undefined4)param_1[0x27];
        lVar85 = *(long *)(param_1[2] + 0x90);
        pMVar1 = (MutexType *)(lVar85 + 0x50);
        local_418 = uVar95;
        nn::os::LockMutex(pMVar1);
        pcVar92 = (char *)(*(ulong *)(*(long *)(lVar85 + 0x40) +
                                     (-(uVar95 >> 0x1f & 1) & 0xfffffff800000000 |
                                     (uVar95 & 0xffffffff) << 3)) & 0xfffffffffffffffe);
        if (pcVar92 == (char *)0x0) {
          iVar30 = 0;
        }
        else {
          sVar37 = strlen(pcVar92);
          iVar30 = (int)pcVar92 + (int)sVar37;
        }
        nn::os::UnlockMutex(pMVar1);
        local_390 = (ulong *)0x8000008000000000;
        local_308 = 1;
        local_398 = (undefined1  [8])&local_388;
        FUN_031c6afc(local_398,pcVar92,iVar30 - (int)pcVar92);
        lVar85 = *plVar98;
        local_3d8 = (undefined8 **)local_398;
        local_3d0 = (undefined8 **)((long)local_398 + (long)(int)local_390 + -1);
        auVar107 = FUN_03342334(*(undefined8 *)(lVar85 + 0x90),&local_3d8,local_418._4_4_);
        plVar40 = (long *)(lVar85 + 0xa8);
        _local_300 = auVar107;
        lVar85 = FUN_03348c94(plVar40,local_300);
        puVar82 = PTR_PTR_047d1a50;
        if ((lVar85 == 0) ||
           (iVar30 = *(int *)(*plVar40 + (long)*(int *)(lVar85 + 4) * 0x10 + 8), iVar30 < 0)) {
          lVar85 = FUN_03348c94(plVar40,&local_2f8);
          if (lVar85 == 0) {
            local_404 = -1;
            local_3e0 = local_300;
          }
          else {
            local_404 = *(int *)(*plVar40 + (long)*(int *)(lVar85 + 4) * 0x10 + 8);
            puVar36 = &local_2f8;
            if (local_404 < 0) {
              puVar36 = (ulong *)local_300;
            }
            if (local_404 < 0) {
              local_404 = -1;
            }
            local_3e0 = (undefined1  [8])*puVar36;
          }
        }
        else {
          local_3e0 = local_300;
          local_404 = iVar30;
        }
        if (local_404 < 0) {
          uVar95 = 0;
        }
        else {
          pbVar77 = (byte *)0x0;
          uVar95 = 0;
          auVar107 = _local_300;
          do {
            _local_300 = auVar107;
            FUN_0336059c(&local_440,&local_404);
            lVar85 = (long)(int)(uint)local_538;
            if ((int)(local_538._4_4_ & 0x7fffffff) <= (int)(uint)local_538) {
              FUN_0133bb88(&local_540,puVar82,lVar85 + 1);
            }
            *(int *)((long)local_540 + (long)(int)(uint)local_538 * 4) = local_404;
            local_538 = (ulong *)CONCAT44(local_538._4_4_,(int)(lVar85 + 1));
            lVar85 = *(long *)(*(long *)(*plVar98 + 0x98) + (long)local_404 * 8);
            pvVar41 = *(void **)(lVar85 + 0x10);
            if (pvVar41 == *(void **)(lVar85 + 0x18)) {
              local_404 = -1;
              goto LAB_0334dedc;
            }
            sVar37 = (long)*(void **)(lVar85 + 0x18) - (long)pvVar41;
            if (sVar37 == 0) {
LAB_0334d960:
              pcVar92 = (char *)((long)local_398 + (long)(int)local_390 + -1);
              sVar44 = (long)pcVar92 - (long)local_398;
              if (sVar44 != 0) {
                pcVar43 = memchr((void *)local_398,0x3c,sVar44);
                if (pcVar43 != (char *)0x0) {
                  iVar30 = (int)pcVar92 - (int)pcVar43;
                  local_2f8 = (undefined8 **)0x8000008000000000;
                  local_270 = 1;
                  local_300 = (undefined1  [8])&local_2f0;
                  if (iVar30 < 0) {
                    sVar44 = strlen(pcVar43);
                    iVar30 = (int)sVar44;
                  }
                  iVar32 = iVar30 + 1;
                  if (iVar30 < 0x80) {
                    iVar34 = 0;
                  }
                  else {
                    FUN_030b4a20(local_300,PTR_PTR_047d1a50 + 0x20,(long)iVar32);
                    iVar34 = (int)local_2f8;
                  }
                  if ((iVar34 <= iVar30) || (iVar32 < iVar34)) {
                    local_2f8 = (undefined8 **)CONCAT44(local_2f8._4_4_,iVar32);
                  }
                  *(undefined1 *)((long)local_300 + (long)iVar30) = 0;
                  memmove((void *)local_300,pcVar43,(long)(int)local_2f8 - 1);
                  FUN_031c6afc(local_398,pvVar41,sVar37 & 0xffffffff);
                  auVar64 = local_300;
                  if (local_300 != (undefined1  [8])0x0) {
                    if ((int)local_2f8 < 1) {
                      sVar37 = strlen((char *)local_300);
                      iVar30 = (int)sVar37;
                    }
                    else {
                      iVar30 = (int)local_2f8 + -1;
                    }
                    iVar31 = (int)local_390;
                    lVar94 = (long)(int)local_390;
                    iVar30 = (int)(lVar94 + -1) + iVar30;
                    iVar34 = (local_390._4_4_ & 0x7fffffff) - 1;
                    iVar32 = iVar30;
                    if (iVar34 <= iVar30) {
                      iVar32 = iVar34;
                    }
                    if (local_308 != 0) {
                      iVar32 = iVar30;
                    }
                    iVar30 = iVar32 + 1;
                    if ((int)(local_390._4_4_ & 0x7fffffff) <= iVar32) {
                      FUN_030b4a20(local_398,PTR_PTR_047d1a50 + 0x20,(long)iVar30);
                    }
                    if (((int)local_390 <= iVar32) || (iVar30 < (int)local_390)) {
                      local_390 = (ulong *)CONCAT44(local_390._4_4_,iVar30);
                    }
                    *(char *)((long)local_398 + (long)iVar32) = '\0';
                    memmove((char *)((long)local_398 + lVar94 + -1),(void *)auVar64,
                            (long)((int)local_390 - iVar31));
                  }
                  uVar86 = (ulong)local_2f8;
                  puVar82 = PTR_PTR_047d1a50;
                  local_2f8 = (undefined8 **)((ulong)local_2f8 & 0xffffffff00000000);
                  if ((-1 < (long)uVar86) && (local_300 != (undefined1  [8])0x0)) {
                    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
                  }
                  goto LAB_0334db2c;
                }
              }
              FUN_031c6afc(local_398,pvVar41,sVar37 & 0xffffffff);
              puVar82 = PTR_PTR_047d1a50;
            }
            else {
              pvVar38 = memchr(pvVar41,0x3c,sVar37);
              if (pvVar38 == (void *)0x0) goto LAB_0334d960;
              FUN_031c6afc(local_398,pvVar41,sVar37 & 0xffffffff);
            }
LAB_0334db2c:
            local_300 = local_398;
            local_2f8 = (undefined8 **)((long)local_398 + (long)(int)local_390 + -1);
            auVar107 = FUN_03342334(*(undefined8 *)(*plVar98 + 0x90),local_300,
                                    *(undefined4 *)(lVar85 + 0x24));
            uVar86 = uVar95 + 1;
            if (uVar95 < ((ulong)local_3b0 >> 0x20 & 0x7fffffff)) {
              iVar30 = (int)uVar95;
            }
            else {
              FUN_033603c0(&local_3b8,uVar86);
              pbVar77 = local_3b8;
              iVar30 = (int)local_3b0;
            }
            *(long *)(pbVar77 + (long)iVar30 * 8) = auVar107._0_8_;
            local_3b0 = (byte *)CONCAT44(local_3b0._4_4_,(int)uVar95 + 1);
            if (DAT_0488d8c8 < 4) {
              if (DAT_046aaf68 != '\0') goto LAB_0334dc34;
            }
            else if (DAT_046aaf68 == '\0') {
              local_2f0 = &DAT_0488d878;
              local_300 = (undefined1  [8])0x0;
              local_2e8 = 4;
              pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
              local_2e0 = nn::os::GetThreadId(pTVar39);
              uVar95 = (ulong)local_3e0;
              local_2b8 = 0;
              local_2d8 = (undefined8 **)0x0;
              local_2d0 = 0;
              local_2c8 = (char *)0x0;
              local_2c0 = 0;
              lVar94 = *(long *)(*plVar98 + 0x90);
              pMVar1 = (MutexType *)(lVar94 + 0x50);
              nn::os::LockMutex(pMVar1);
              ppuVar104 = (undefined8 **)
                          (*(ulong *)(*(long *)(lVar94 + 0x40) +
                                     (-(uVar95 >> 0x1f & 1) & 0xfffffff800000000 |
                                     (uVar95 & 0xffffffff) << 3)) & 0xfffffffffffffffe);
              if (ppuVar104 == (undefined8 **)0x0) {
                ppuVar79 = (undefined8 **)0x0;
              }
              else {
                sVar37 = strlen((char *)ppuVar104);
                ppuVar79 = (undefined8 **)((long)ppuVar104 + sVar37);
              }
              nn::os::UnlockMutex(pMVar1);
              local_3f0 = (int *)CONCAT44(local_3f0._4_4_,*(undefined4 *)(lVar85 + 0x24));
              local_3d8 = ppuVar104;
              local_3d0 = ppuVar79;
              FUN_0322c554(local_300,"{} Tracks name {}#{} A",&DAT_047ad118,&local_3d8,local_398,
                           &local_3f0);
              local_2c8 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
              ;
              local_2c0 = 0x396;
              FUN_0322c8e0(local_300);
              if (((ulong)local_2d8 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_2d8 + -1),0);
              }
              puVar82 = PTR_PTR_047d1a50;
            }
            else {
LAB_0334dc34:
              local_2f0 = &DAT_0488d878;
              local_300 = (undefined1  [8])0x0;
              local_2e8 = 4;
              pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
              local_2e0 = nn::os::GetThreadId(pTVar39);
              uVar95 = (ulong)local_3e0;
              local_2d0 = 0;
              local_2c8 = (char *)0x0;
              local_2c0 = 0;
              local_2b8 = 0;
              local_2f8 = (undefined8 **)0x10000000000;
              local_2b0[0]._0_1_ = '\0';
              lVar94 = *(long *)(*plVar98 + 0x90);
              pMVar1 = (MutexType *)(lVar94 + 0x50);
              local_300 = (undefined1  [8])local_2b0;
              local_2d8 = local_2b0;
              nn::os::LockMutex(pMVar1);
              piVar78 = (int *)(*(ulong *)(*(long *)(lVar94 + 0x40) +
                                          (-(uVar95 >> 0x1f & 1) & 0xfffffff800000000 |
                                          (uVar95 & 0xffffffff) << 3)) & 0xfffffffffffffffe);
              if (piVar78 == (int *)0x0) {
                pcVar92 = (char *)0x0;
              }
              else {
                sVar37 = strlen((char *)piVar78);
                pcVar92 = (char *)((long)piVar78 + sVar37);
              }
              nn::os::UnlockMutex(pMVar1);
              local_400 = (undefined8 **)CONCAT44(local_400._4_4_,*(undefined4 *)(lVar85 + 0x24));
              local_4a8 = piVar78;
              local_4a0 = pcVar92;
              FUN_0322c554(local_300,"{} Tracks name {}#{} A",&DAT_047ad118,&local_4a8,local_398,
                           &local_400);
              local_2c8 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
              ;
              local_2c0 = 0x396;
              if ((char)local_2b0[0] != '\0') {
                sVar37 = strlen((char *)local_2b0);
                *(undefined2 *)
                 ((long)local_2b0 + (long)(int)((int)sVar37 - (uint)((int)sVar37 == 0xff))) = 10;
                printf("%s",local_2b0);
                fflush(pFVar54);
              }
              puVar82 = PTR_PTR_047d1a50;
              if (((ulong)local_2d8 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_2d8 + -1),0);
              }
            }
            plVar40 = (long *)(*plVar98 + 0xa8);
            _local_300 = auVar107;
            lVar85 = FUN_03348c94(plVar40,local_300);
            if ((lVar85 == 0) ||
               (uVar66 = *(uint *)(*plVar40 + (long)*(int *)(lVar85 + 4) * 0x10 + 8),
               (int)uVar66 < 0)) {
              lVar85 = FUN_03348c94(plVar40,&local_2f8);
              if (lVar85 == 0) {
                uVar66 = 0xffffffff;
              }
              else {
                uVar66 = *(uint *)(*plVar40 + (long)*(int *)(lVar85 + 4) * 0x10 + 8);
              }
              puVar36 = &local_2f8;
              if ((int)uVar66 < 0) {
                uVar66 = 0xffffffff;
                puVar36 = (ulong *)local_300;
              }
              local_300 = (undefined1  [8])*puVar36;
            }
            local_2f8 = (undefined8 **)(ulong)uVar66;
            FUN_031bcb28(param_1 + 0x1e,local_300);
            auVar107._8_8_ = local_2f8;
            auVar107._0_8_ = local_300;
            local_404 = (int)local_2f8;
            uVar95 = uVar86;
          } while (-1 < (int)local_2f8);
          uVar95 = uVar86 & 0xffffffff;
          _local_300 = auVar107;
        }
LAB_0334dedc:
        if (DAT_0488d8c8 < 4) {
          if (DAT_046aaf68 != '\0') goto LAB_0334df74;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_2f0 = &DAT_0488d878;
            local_300 = (undefined1  [8])0x0;
            local_2e8 = 4;
            pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
            local_2e0 = nn::os::GetThreadId(pTVar39);
            uVar86 = (ulong)local_3e0;
            local_2b8 = 0;
            local_2d8 = (undefined8 **)0x0;
            local_2d0 = 0;
            local_2c8 = (char *)0x0;
            local_2c0 = 0;
            lVar85 = *(long *)(*plVar98 + 0x90);
            pMVar1 = (MutexType *)(lVar85 + 0x50);
            nn::os::LockMutex(pMVar1);
            ppuVar104 = (undefined8 **)
                        (*(ulong *)(*(long *)(lVar85 + 0x40) +
                                   (-(uVar86 >> 0x1f & 1) & 0xfffffff800000000 |
                                   (uVar86 & 0xffffffff) << 3)) & 0xfffffffffffffffe);
            if (ppuVar104 == (undefined8 **)0x0) {
              ppuVar79 = (undefined8 **)0x0;
            }
            else {
              sVar37 = strlen((char *)ppuVar104);
              ppuVar79 = (undefined8 **)((long)ppuVar104 + sVar37);
            }
            nn::os::UnlockMutex(pMVar1);
            uVar86 = local_418;
            lVar85 = *(long *)(*plVar98 + 0x90);
            pMVar1 = (MutexType *)(lVar85 + 0x50);
            local_3d8 = ppuVar104;
            local_3d0 = ppuVar79;
            nn::os::LockMutex(pMVar1);
            piVar78 = (int *)(*(ulong *)(*(long *)(lVar85 + 0x40) +
                                        (-(uVar86 >> 0x1f & 1) & 0xfffffff800000000 |
                                        (uVar86 & 0xffffffff) << 3)) & 0xfffffffffffffffe);
            if (piVar78 == (int *)0x0) {
              pcVar92 = (char *)0x0;
            }
            else {
              sVar37 = strlen((char *)piVar78);
              pcVar92 = (char *)((long)piVar78 + sVar37);
            }
            puVar82 = PTR_PTR_047d1a50;
            nn::os::UnlockMutex(pMVar1);
            local_41c = local_418._4_4_;
            local_4a8 = piVar78;
            local_4a0 = pcVar92;
            FUN_0322c554(local_300,"{} Tracks name {}#{} B",&DAT_047ad138,&local_3d8,&local_4a8,
                         &local_41c);
            local_2c8 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
            ;
            local_2c0 = 0x3a1;
            FUN_0322c8e0(local_300);
          }
          else {
LAB_0334df74:
            local_2f0 = &DAT_0488d878;
            local_300 = (undefined1  [8])0x0;
            local_2e8 = 4;
            pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
            local_2e0 = nn::os::GetThreadId(pTVar39);
            uVar86 = (ulong)local_3e0;
            local_2d0 = 0;
            local_2c8 = (char *)0x0;
            local_2c0 = 0;
            local_2b8 = 0;
            local_2f8 = (undefined8 **)0x10000000000;
            local_2b0[0]._0_1_ = '\0';
            lVar85 = *(long *)(*plVar98 + 0x90);
            pMVar1 = (MutexType *)(lVar85 + 0x50);
            local_300 = (undefined1  [8])local_2b0;
            local_2d8 = local_2b0;
            nn::os::LockMutex(pMVar1);
            piVar78 = (int *)(*(ulong *)(*(long *)(lVar85 + 0x40) +
                                        (-(uVar86 >> 0x1f & 1) & 0xfffffff800000000 |
                                        (uVar86 & 0xffffffff) << 3)) & 0xfffffffffffffffe);
            if (piVar78 == (int *)0x0) {
              pcVar92 = (char *)0x0;
            }
            else {
              sVar37 = strlen((char *)piVar78);
              pcVar92 = (char *)((long)piVar78 + sVar37);
            }
            nn::os::UnlockMutex(pMVar1);
            uVar86 = local_418;
            lVar85 = *(long *)(*plVar98 + 0x90);
            pMVar1 = (MutexType *)(lVar85 + 0x50);
            local_3f0 = piVar78;
            local_3e8 = pcVar92;
            nn::os::LockMutex(pMVar1);
            ppuVar104 = (undefined8 **)
                        (*(ulong *)(*(long *)(lVar85 + 0x40) +
                                   (-(uVar86 >> 0x1f & 1) & 0xfffffff800000000 |
                                   (uVar86 & 0xffffffff) << 3)) & 0xfffffffffffffffe);
            if (ppuVar104 == (undefined8 **)0x0) {
              pcVar92 = (char *)0x0;
            }
            else {
              sVar37 = strlen((char *)ppuVar104);
              pcVar92 = (char *)((long)ppuVar104 + sVar37);
            }
            puVar82 = PTR_PTR_047d1a50;
            nn::os::UnlockMutex(pMVar1);
            local_484 = local_418._4_4_;
            local_400 = ppuVar104;
            local_3f8 = pcVar92;
            FUN_0322c554(local_300,"{} Tracks name {}#{} B",&DAT_047ad138,&local_3f0,&local_400,
                         &local_484);
            local_2c8 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
            ;
            local_2c0 = 0x3a1;
            if ((char)local_2b0[0] != '\0') {
              sVar37 = strlen((char *)local_2b0);
              *(undefined2 *)
               ((long)local_2b0 + (long)(int)((int)sVar37 - (uint)((int)sVar37 == 0xff))) = 10;
              printf("%s",local_2b0);
              fflush(pFVar54);
            }
          }
          if (((ulong)local_2d8 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_2d8 + -1),0);
          }
        }
        iVar30 = FUN_03349844(plVar42,&local_418);
        if ((int)param_1[0x23] == iVar30) {
          iVar32 = iVar30;
          if ((int)(*(uint *)((long)param_1 + 0x11c) & 0x7fffffff) <= iVar30) {
            FUN_03349960(plVar42,puVar82,(long)(iVar30 + 1));
            iVar32 = (int)param_1[0x23];
          }
          puVar36 = (ulong *)(param_1[0x22] + (long)iVar32 * 0x18);
          *puVar36 = local_418;
          puVar36[1] = 0;
          puVar36[2] = 0;
          *(undefined4 *)((long)puVar36 + 0x14) = 0x80000000;
          *(int *)(param_1 + 0x23) = iVar30 + 1;
        }
        lVar94 = *plVar42 + (long)iVar30 * 0x18;
        piVar78 = (int *)(lVar94 + 0x10);
        iVar30 = *piVar78;
        lVar85 = (long)iVar30;
        if ((int)(*(uint *)(lVar94 + 0x14) & 0x7fffffff) <= iVar30) {
          FUN_0133bb88((long *)(lVar94 + 8),puVar82,lVar85 + 1);
          iVar30 = *piVar78;
        }
        *(undefined4 *)(*(long *)(lVar94 + 8) + (long)iVar30 * 4) = uVar52;
        *piVar78 = (int)(lVar85 + 1);
        puVar27 = PTR_DAT_047d1a08;
        local_300 = (undefined1  [8])&DAT_000000c8;
        plVar40 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_300,0);
        if (*(code **)(puVar27 + 0x10) != (code *)0x0) {
          (**(code **)(puVar27 + 0x10))(plVar40,"VersionedTypeBuilder");
        }
        *(undefined4 *)(plVar40 + 2) = 0xffffffff;
        *plVar40 = (long)param_1;
        plVar40[1] = 0;
        plVar40[3] = 0;
        *(undefined4 *)(plVar40 + 4) = 0xffffffff;
        *(undefined4 *)(plVar40 + 9) = 0;
        *(undefined2 *)((long)plVar40 + 0x4c) = 0;
        plVar40[0x12] = -0x8000000000000000;
        *(undefined2 *)(plVar40 + 0x13) = 0;
        *(undefined4 *)((long)plVar40 + 0x9c) = 0xffffffff;
        *(undefined4 *)(plVar40 + 0x18) = 0;
        plVar40[5] = 0;
        plVar40[6] = -0x8000000000000000;
        plVar40[7] = 0;
        plVar40[8] = -0x8000000000000000;
        plVar40[10] = 0;
        plVar40[0xb] = 0;
        plVar40[0xc] = -0x8000000000000000;
        plVar40[0xd] = 0;
        plVar40[0xe] = -0x8000000000000000;
        plVar40[0xf] = 0;
        plVar40[0x10] = -0x8000000000000000;
        plVar40[0x11] = 0;
        plVar40[0x14] = 0;
        plVar40[0x15] = 0;
        plVar40[0x16] = -0x8000000000000000;
        plVar40[0x17] = (long)&DAT_03d7702c;
        iVar30 = (int)param_1[0x27];
        lVar94 = (long)iVar30;
        lVar85 = lVar94 + 1;
        if ((int)(*(uint *)((long)param_1 + 0x13c) & 0x7fffffff) <= iVar30) {
          FUN_0335f054(param_1 + 0x26,lVar85);
          iVar30 = (int)param_1[0x27];
        }
        *(long **)(param_1[0x26] + (long)iVar30 * 8) = plVar40;
        *(int *)(param_1 + 0x27) = (int)lVar85;
        lVar85 = *(long *)(param_1[0x26] + lVar94 * 8);
        if (DAT_0488d8c8 < 4) {
          if (DAT_046aaf68 != '\0') goto LAB_0334e2f8;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_2f0 = &DAT_0488d878;
            local_300 = (undefined1  [8])0x0;
            local_2e8 = 4;
            pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
            local_2e0 = nn::os::GetThreadId(pTVar39);
            uVar86 = (ulong)local_3e0;
            local_2b8 = 0;
            local_2d8 = (undefined8 **)0x0;
            local_2d0 = 0;
            local_2c8 = (char *)0x0;
            local_2c0 = 0;
            lVar94 = *(long *)(*plVar98 + 0x90);
            pMVar1 = (MutexType *)(lVar94 + 0x50);
            nn::os::LockMutex(pMVar1);
            ppuVar104 = (undefined8 **)
                        (*(ulong *)(*(long *)(lVar94 + 0x40) +
                                   (-(uVar86 >> 0x1f & 1) & 0xfffffff800000000 |
                                   (uVar86 & 0xffffffff) << 3)) & 0xfffffffffffffffe);
            if (ppuVar104 == (undefined8 **)0x0) {
              ppuVar79 = (undefined8 **)0x0;
            }
            else {
              sVar37 = strlen((char *)ppuVar104);
              ppuVar79 = (undefined8 **)((long)ppuVar104 + sVar37);
            }
            nn::os::UnlockMutex(pMVar1);
            uVar86 = (ulong)local_3e0;
            lVar94 = *(long *)(*plVar98 + 0x90);
            pMVar1 = (MutexType *)(lVar94 + 0x50);
            local_3d8 = ppuVar104;
            local_3d0 = ppuVar79;
            nn::os::LockMutex(pMVar1);
            piVar78 = (int *)(*(ulong *)(*(long *)(lVar94 + 0x40) +
                                        (-(uVar86 >> 0x1f & 1) & 0xfffffff800000000 |
                                        (uVar86 & 0xffffffff) << 3)) & 0xfffffffffffffffe);
            if (piVar78 == (int *)0x0) {
              pcVar92 = (char *)0x0;
            }
            else {
              sVar37 = strlen((char *)piVar78);
              pcVar92 = (char *)((long)piVar78 + sVar37);
            }
            puVar82 = PTR_PTR_047d1a50;
            nn::os::UnlockMutex(pMVar1);
            local_41c = local_3e0._4_4_;
            local_4a8 = piVar78;
            local_4a0 = pcVar92;
            FUN_0322c554(local_300,"{} Tracks name {}#{} C",&DAT_047ad138,&local_3d8,&local_4a8,
                         &local_41c);
            local_2c8 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
            ;
            local_2c0 = 0x3a7;
            FUN_0322c8e0(local_300);
          }
          else {
LAB_0334e2f8:
            local_2f0 = &DAT_0488d878;
            local_300 = (undefined1  [8])0x0;
            local_2e8 = 4;
            pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
            local_2e0 = nn::os::GetThreadId(pTVar39);
            uVar86 = (ulong)local_3e0;
            local_2d0 = 0;
            local_2c8 = (char *)0x0;
            local_2c0 = 0;
            local_2b8 = 0;
            local_2f8 = (undefined8 **)0x10000000000;
            local_2b0[0]._0_1_ = '\0';
            lVar94 = *(long *)(*plVar98 + 0x90);
            pMVar1 = (MutexType *)(lVar94 + 0x50);
            local_300 = (undefined1  [8])local_2b0;
            local_2d8 = local_2b0;
            nn::os::LockMutex(pMVar1);
            piVar78 = (int *)(*(ulong *)(*(long *)(lVar94 + 0x40) +
                                        (-(uVar86 >> 0x1f & 1) & 0xfffffff800000000 |
                                        (uVar86 & 0xffffffff) << 3)) & 0xfffffffffffffffe);
            if (piVar78 == (int *)0x0) {
              pcVar92 = (char *)0x0;
            }
            else {
              sVar37 = strlen((char *)piVar78);
              pcVar92 = (char *)((long)piVar78 + sVar37);
            }
            nn::os::UnlockMutex(pMVar1);
            uVar86 = (ulong)local_3e0;
            lVar94 = *(long *)(*plVar98 + 0x90);
            pMVar1 = (MutexType *)(lVar94 + 0x50);
            local_3f0 = piVar78;
            local_3e8 = pcVar92;
            nn::os::LockMutex(pMVar1);
            ppuVar104 = (undefined8 **)
                        (*(ulong *)(*(long *)(lVar94 + 0x40) +
                                   (-(uVar86 >> 0x1f & 1) & 0xfffffff800000000 |
                                   (uVar86 & 0xffffffff) << 3)) & 0xfffffffffffffffe);
            if (ppuVar104 == (undefined8 **)0x0) {
              pcVar92 = (char *)0x0;
            }
            else {
              sVar37 = strlen((char *)ppuVar104);
              pcVar92 = (char *)((long)ppuVar104 + sVar37);
            }
            puVar82 = PTR_PTR_047d1a50;
            nn::os::UnlockMutex(pMVar1);
            local_484 = local_3e0._4_4_;
            local_400 = ppuVar104;
            local_3f8 = pcVar92;
            FUN_0322c554(local_300,"{} Tracks name {}#{} C",&DAT_047ad138,&local_3f0,&local_400,
                         &local_484);
            local_2c8 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
            ;
            local_2c0 = 0x3a7;
            if ((char)local_2b0[0] != '\0') {
              sVar37 = strlen((char *)local_2b0);
              *(undefined2 *)
               ((long)local_2b0 + (long)(int)((int)sVar37 - (uint)((int)sVar37 == 0xff))) = 10;
              printf("%s",local_2b0);
              fflush(pFVar54);
            }
          }
          if (((ulong)local_2d8 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_2d8 + -1),0);
          }
        }
        iVar30 = FUN_03349844(plVar42,&local_3e0);
        if ((int)param_1[0x23] == iVar30) {
          iVar32 = iVar30;
          if ((int)(*(uint *)((long)param_1 + 0x11c) & 0x7fffffff) <= iVar30) {
            FUN_03349960(plVar42,puVar82,(long)(iVar30 + 1));
            iVar32 = (int)param_1[0x23];
          }
          puVar36 = (ulong *)(param_1[0x22] + (long)iVar32 * 0x18);
          *puVar36 = (ulong)local_3e0;
          puVar36[1] = 0;
          puVar36[2] = 0;
          *(undefined4 *)((long)puVar36 + 0x14) = 0x80000000;
          *(int *)(param_1 + 0x23) = iVar30 + 1;
        }
        lVar80 = *plVar42 + (long)iVar30 * 0x18;
        piVar78 = (int *)(lVar80 + 0x10);
        iVar30 = *piVar78;
        lVar94 = (long)iVar30;
        if ((int)(*(uint *)(lVar80 + 0x14) & 0x7fffffff) <= iVar30) {
          FUN_0133bb88((long *)(lVar80 + 8),puVar82,lVar94 + 1);
          iVar30 = *piVar78;
        }
        uVar86 = local_418;
        *(undefined4 *)(*(long *)(lVar80 + 8) + (long)iVar30 * 4) = uVar52;
        *piVar78 = (int)(lVar94 + 1);
        lVar94 = *(long *)(*plVar98 + 0x90);
        pMVar1 = (MutexType *)(lVar94 + 0x50);
        nn::os::LockMutex(pMVar1);
        pcVar92 = (char *)(*(ulong *)(*(long *)(lVar94 + 0x40) +
                                     (-(uVar86 >> 0x1f & 1) & 0xfffffff800000000 |
                                     (uVar86 & 0xffffffff) << 3)) & 0xfffffffffffffffe);
        if (pcVar92 == (char *)0x0) {
          pcVar43 = (char *)0x0;
        }
        else {
          sVar37 = strlen(pcVar92);
          pcVar43 = pcVar92 + sVar37;
        }
        nn::os::UnlockMutex(pMVar1);
        uVar76 = local_418._4_4_;
        FUN_031ca644(lVar85 + 0x18,pcVar92,pcVar43);
        pcVar92 = (char *)(*(ulong *)(lVar85 + 0x18) & 0xfffffffffffffffe);
        uVar86 = *(ulong *)(lVar85 + 8);
        if ((char *)(uVar86 & 0xfffffffffffffffe) != pcVar92) {
          if (pcVar92 == (char *)0x0) {
            uVar55 = 0;
          }
          else {
            sVar37 = strlen(pcVar92);
            sVar37 = (size_t)((int)sVar37 + 1);
            pvVar41 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                        (PTR_PTR_047d1a50,sVar37);
            memcpy(pvVar41,pcVar92,sVar37);
            uVar55 = (ulong)pvVar41 | 1;
          }
          *(ulong *)(lVar85 + 8) = uVar55;
          if ((uVar86 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar86 - 1,0);
          }
        }
        uVar86 = local_418;
        *(undefined4 *)(lVar85 + 0x20) = uVar76;
        *(undefined4 *)(lVar85 + 0x10) = uVar76;
        if ((undefined1  [8])local_418 != local_3e0) {
          *(undefined1 *)(lVar85 + 0x4d) = 1;
        }
        *(undefined1 *)(lVar85 + 0x48) = 1;
        lVar94 = FUN_03360728(param_1 + 0x10,&local_418);
        puVar82 = PTR_PTR_047d1a50;
        if (lVar94 == 0) {
          uVar50 = 0;
          uVar66 = 0xffffffff;
        }
        else {
          uVar66 = *(uint *)(lVar94 + 4);
          uVar50 = ((int)lVar94 - (int)param_1[0x12]) * 0x20000000;
        }
        *(byte *)(lVar85 + 0x49) = (byte)~(byte)((uVar66 | uVar50) >> 0x18) >> 7;
        lVar94 = FUN_03360728(param_1 + 0x14,&local_418);
        if (lVar94 == 0) {
          uVar51 = 0;
          uVar33 = 0xffffffff;
        }
        else {
          uVar33 = *(uint *)(lVar94 + 4);
          uVar51 = ((int)lVar94 - (int)param_1[0x16]) * 0x20000000;
        }
        iVar30 = -((int)~(uVar33 | uVar51) >> 0x1f);
        *(char *)(lVar85 + 0x4a) = (char)iVar30;
        uVar33 = *(uint *)(param_1 + 0x19);
        iVar32 = (int)(uVar86 >> 0x20);
        if (1 < (int)uVar33) {
          uVar51 = (int)uVar86 * -0x61c8864f;
          uVar97 = iVar32 * -0x61c8864f;
          uVar51 = (uVar51 & 0xff00ff00) >> 8 | (uVar51 & 0xff00ff) << 8;
          uVar75 = uVar51 >> 0x10 | uVar51 << 0x10;
          uVar51 = (uVar97 & 0xff00ff00) >> 8 | (uVar97 & 0xff00ff) << 8;
          uVar51 = uVar51 >> 0x10 | uVar51 << 0x10;
          uVar51 = uVar75 + (uVar75 >> 2) + uVar51 * 0x40 + 0x9e3779b9 ^ uVar51;
          while( true ) {
            uVar51 = uVar33 - 1 & uVar51;
            uVar55 = *(ulong *)(param_1[0x18] + (long)(int)uVar51 * 8);
            if (uVar55 == 0xffffffffffffffff) break;
            if (uVar55 == uVar86) goto LAB_0334e710;
            uVar51 = uVar51 + 1;
          }
        }
        uVar51 = uVar33;
LAB_0334e710:
        *(bool *)(lVar85 + 0x4b) = (int)uVar51 < (int)uVar33;
        uVar97 = *(uint *)(param_1 + 0x1c);
        if (1 < (int)uVar97) {
          uVar75 = (int)uVar86 * -0x61c8864f;
          uVar7 = iVar32 * -0x61c8864f;
          uVar75 = (uVar75 & 0xff00ff00) >> 8 | (uVar75 & 0xff00ff) << 8;
          uVar8 = uVar75 >> 0x10 | uVar75 << 0x10;
          uVar75 = (uVar7 & 0xff00ff00) >> 8 | (uVar7 & 0xff00ff) << 8;
          uVar75 = uVar75 >> 0x10 | uVar75 << 0x10;
          uVar75 = uVar8 + (uVar8 >> 2) + uVar75 * 0x40 + 0x9e3779b9 ^ uVar75;
          while( true ) {
            uVar75 = uVar97 - 1 & uVar75;
            uVar55 = *(ulong *)(param_1[0x1b] + (long)(int)uVar75 * 8);
            if (uVar55 == 0xffffffffffffffff) break;
            if (uVar55 == uVar86) goto LAB_0334e78c;
            uVar75 = uVar75 + 1;
          }
        }
        uVar75 = uVar97;
LAB_0334e78c:
        *(bool *)(lVar85 + 0x4c) = (int)uVar75 < (int)uVar97;
        if ((-1 < (int)(uVar66 | uVar50)) || ((iVar30 != 0 && ((int)uVar33 <= (int)uVar51)))) {
          iVar30 = *(int *)(lVar85 + 0x40);
          lVar94 = (long)iVar30;
          if ((int)(*(uint *)(lVar85 + 0x44) & 0x7fffffff) <= iVar30) {
            FUN_033607b0(lVar85 + 0x38,puVar82,lVar94 + 1);
            iVar30 = *(int *)(lVar85 + 0x40);
          }
          *(undefined8 *)(*(long *)(lVar85 + 0x38) + (long)iVar30 * 8) = 0;
          *(int *)(lVar85 + 0x40) = (int)(lVar94 + 1);
        }
        pbVar77 = local_3b8;
        if ((int)uVar95 != 0) {
          lVar94 = (long)(int)uVar95 << 3;
          pbVar96 = local_3b8;
          do {
            local_300 = *(undefined1 (*) [8])pbVar96;
            iVar30 = FUN_03349844(plVar42,local_300);
            if ((int)param_1[0x23] == iVar30) {
              iVar32 = iVar30;
              if ((int)(*(uint *)((long)param_1 + 0x11c) & 0x7fffffff) <= iVar30) {
                FUN_03349960(plVar42,PTR_PTR_047d1a50,(long)(iVar30 + 1));
                iVar32 = (int)param_1[0x23];
              }
              puVar56 = (undefined8 *)(param_1[0x22] + (long)iVar32 * 0x18);
              *puVar56 = local_300;
              puVar56[1] = 0;
              puVar56[2] = 0;
              *(undefined4 *)((long)puVar56 + 0x14) = 0x80000000;
              *(int *)(param_1 + 0x23) = iVar30 + 1;
            }
            lVar87 = *plVar42 + (long)iVar30 * 0x18;
            piVar78 = (int *)(lVar87 + 0x10);
            iVar30 = *piVar78;
            lVar80 = (long)iVar30;
            if ((int)(*(uint *)(lVar87 + 0x14) & 0x7fffffff) <= iVar30) {
              FUN_0133bb88((long *)(lVar87 + 8),PTR_PTR_047d1a50,lVar80 + 1);
              iVar30 = *piVar78;
            }
            pbVar96 = pbVar96 + 8;
            lVar94 = lVar94 + -8;
            *(undefined4 *)(*(long *)(lVar87 + 8) + (long)iVar30 * 4) = uVar52;
            *piVar78 = (int)(lVar80 + 1);
          } while (lVar94 != 0);
        }
        if ((uint)local_538 != 0) {
          lVar94 = (long)(int)(uint)local_538 << 2;
          ppuVar104 = local_540;
          do {
            iVar30 = *(int *)(lVar85 + 0x60);
            lVar80 = (long)iVar30;
            iVar32 = *(int *)ppuVar104;
            if ((int)(*(uint *)(lVar85 + 100) & 0x7fffffff) <= iVar30) {
              FUN_0133bb88(lVar85 + 0x58,PTR_PTR_047d1a50,lVar80 + 1);
              iVar30 = *(int *)(lVar85 + 0x60);
            }
            *(int *)(*(long *)(lVar85 + 0x58) + (long)iVar30 * 4) = iVar32;
            *(int *)(lVar85 + 0x60) = (int)(lVar80 + 1);
            lVar80 = *(long *)(*(long *)(*plVar98 + 0x98) + (long)iVar32 * 8);
            if (*(undefined8 ***)(lVar80 + 0x10) != *(undefined8 ***)(lVar80 + 0x18)) {
              local_3d8 = *(undefined8 ***)(lVar80 + 0x10);
              local_3d0 = *(undefined8 ***)(lVar80 + 0x18);
              auVar107 = FUN_03342334(*(undefined8 *)(*plVar98 + 0x90),&local_3d8,
                                      *(undefined4 *)(lVar80 + 0x24));
              _local_300 = auVar107;
              if (*(char *)(lVar80 + 0x35) != '\0') {
                lVar80 = FUN_03349b40(plVar42,local_300);
                if (lVar80 == 0) {
                  uVar50 = 0;
                  uVar66 = 0xffffffff;
                }
                else {
                  uVar66 = *(uint *)(lVar80 + 4);
                  uVar50 = ((int)lVar80 - (int)param_1[0x24]) * 0x20000000;
                }
                if ((int)(uVar66 | uVar50) < 0) {
                  lVar80 = (long)(int)local_468;
                  if ((int)(local_468._4_4_ & 0x7fffffff) <= (int)local_468) {
                    FUN_033603c0(&local_470,lVar80 + 1);
                  }
                  local_470[(int)local_468] = (ulong)local_300;
                  local_468 = CONCAT44(local_468._4_4_,(int)(lVar80 + 1));
                }
              }
              iVar30 = FUN_03349844(plVar42,local_300);
              if ((int)param_1[0x23] == iVar30) {
                iVar32 = iVar30;
                if ((int)(*(uint *)((long)param_1 + 0x11c) & 0x7fffffff) <= iVar30) {
                  FUN_03349960(plVar42,PTR_PTR_047d1a50,(long)(iVar30 + 1));
                  iVar32 = (int)param_1[0x23];
                }
                puVar36 = (ulong *)(param_1[0x22] + (long)iVar32 * 0x18);
                *puVar36 = (ulong)local_300;
                puVar36[1] = 0;
                puVar36[2] = 0;
                *(undefined4 *)((long)puVar36 + 0x14) = 0x80000000;
                *(int *)(param_1 + 0x23) = iVar30 + 1;
              }
              lVar87 = *plVar42 + (long)iVar30 * 0x18;
              piVar78 = (int *)(lVar87 + 0x10);
              iVar30 = *piVar78;
              lVar80 = (long)iVar30;
              if ((int)(*(uint *)(lVar87 + 0x14) & 0x7fffffff) <= iVar30) {
                FUN_0133bb88((long *)(lVar87 + 8),PTR_PTR_047d1a50,lVar80 + 1);
                iVar30 = *piVar78;
              }
              *(undefined4 *)(*(long *)(lVar87 + 8) + (long)iVar30 * 4) = uVar52;
              *piVar78 = (int)(lVar80 + 1);
              if ((undefined1  [8])local_2f8 != local_300) {
                iVar30 = FUN_03349844(plVar42,&local_2f8);
                if ((int)param_1[0x23] == iVar30) {
                  iVar32 = iVar30;
                  if ((int)(*(uint *)((long)param_1 + 0x11c) & 0x7fffffff) <= iVar30) {
                    FUN_03349960(plVar42,PTR_PTR_047d1a50,(long)(iVar30 + 1));
                    iVar32 = (int)param_1[0x23];
                  }
                  puVar36 = (ulong *)(param_1[0x22] + (long)iVar32 * 0x18);
                  *puVar36 = (ulong)local_2f8;
                  puVar36[1] = 0;
                  puVar36[2] = 0;
                  *(undefined4 *)((long)puVar36 + 0x14) = 0x80000000;
                  *(int *)(param_1 + 0x23) = iVar30 + 1;
                }
                lVar87 = *plVar42 + (long)iVar30 * 0x18;
                piVar78 = (int *)(lVar87 + 0x10);
                iVar30 = *piVar78;
                lVar80 = (long)iVar30;
                if ((int)(*(uint *)(lVar87 + 0x14) & 0x7fffffff) <= iVar30) {
                  FUN_0133bb88((long *)(lVar87 + 8),PTR_PTR_047d1a50,lVar80 + 1);
                  iVar30 = *piVar78;
                }
                *(undefined4 *)(*(long *)(lVar87 + 8) + (long)iVar30 * 4) = uVar52;
                *piVar78 = (int)(lVar80 + 1);
              }
            }
            ppuVar104 = (undefined8 **)((long)ppuVar104 + 4);
            lVar94 = lVar94 + -4;
          } while (lVar94 != 0);
        }
        uVar95 = (ulong)local_390;
        puVar82 = PTR_PTR_047d1a50;
        local_390 = (ulong *)((ulong)local_390 & 0xffffffff00000000);
        if ((-1 < (long)uVar95) && (local_398 != (undefined1  [8])0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
        }
        uVar86 = (ulong)local_3b0;
        uVar95 = (ulong)local_3b0 >> 0x20;
        local_3b0 = (byte *)(uVar95 << 0x20);
        if ((pbVar77 != (byte *)0x0) && (-1 < (long)uVar86)) {
          (**(code **)(*(long *)puVar82 + 0x20))(puVar82,pbVar77,uVar95 << 3);
        }
        lVar85 = (long)local_538;
        uVar95 = (ulong)local_538._4_4_;
        local_538 = (ulong *)((ulong)local_538._4_4_ << 0x20);
        if ((-1 < lVar85) && (local_540 != (undefined8 **)0x0)) {
          (**(code **)(*(long *)puVar82 + 0x20))(puVar82,local_540,uVar95 << 2);
        }
        puVar53 = puVar53 + 1;
      } while (puVar53 != local_5b0 + (int)uVar91);
      local_478 = local_478 & 0xffffffff00000000;
      if ((int)local_468 == 0) break;
      uVar91 = 0;
      lVar85 = (long)(int)local_468 << 3;
      puVar53 = local_470;
      do {
        iVar30 = (int)uVar91;
        local_300 = (undefined1  [8])*puVar53;
        lVar94 = FUN_031d3f60(plVar72,local_300);
        if (lVar94 == 0) {
          uVar50 = 0;
          uVar66 = 0xffffffff;
        }
        else {
          uVar66 = *(uint *)(lVar94 + 4);
          uVar50 = ((int)lVar94 - (int)param_1[6]) * 0x20000000;
        }
        if ((int)(uVar66 | uVar50) < 0) {
          uVar66 = iVar30 + 1;
          if ((int)(local_478._4_4_ & 0x7fffffff) <= iVar30) {
            FUN_033603c0(&local_480,(long)(int)uVar66);
            iVar30 = (int)local_478;
          }
          local_5b0 = local_480;
          local_480[iVar30] = (ulong)local_300;
          local_478 = CONCAT44(local_478._4_4_,uVar66);
          local_398 = (undefined1  [8])0x0;
          FUN_0335fc48(plVar72,local_300,local_398);
          uVar91 = (ulong)uVar66;
        }
        puVar53 = puVar53 + 1;
        lVar85 = lVar85 + -8;
      } while (lVar85 != 0);
    } while ((int)uVar91 != 0);
  }
LAB_0334eec8:
  uVar91 = local_438;
  piVar78 = local_440;
  uVar66 = (uint)local_438;
  local_4a8 = (int *)0x0;
  local_4a0 = (char *)0x8000000000000000;
  if ((int)(uint)local_438 < 1) {
    local_4a8 = (int *)0x0;
    local_4a0 = (char *)0x8000000000000000;
    plVar42 = (long *)PTR_PTR_047d1a50;
  }
  else {
    local_4a8 = (int *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(local_438 & 0xffffffff) << 2);
    uVar50 = uVar66 & 3;
    local_4a0 = (char *)CONCAT44(uVar66,uVar66);
    if (uVar66 - 1 < 3) {
      piVar48 = local_4a8;
    }
    else {
      iVar30 = -(uVar66 & 0xfffffffc);
      piVar59 = local_4a8;
      do {
        *piVar59 = *piVar78;
        piVar59[1] = piVar78[1];
        piVar59[2] = piVar78[2];
        piVar71 = piVar78 + 3;
        piVar48 = piVar59 + 4;
        piVar78 = piVar78 + 4;
        iVar30 = iVar30 + 4;
        piVar59[3] = *piVar71;
        piVar59 = piVar48;
      } while (iVar30 != 0);
    }
    plVar42 = (long *)PTR_PTR_047d1a50;
    if ((uVar91 & 3) != 0) {
      do {
        uVar50 = uVar50 - 1;
        *piVar48 = *piVar78;
        piVar48 = piVar48 + 1;
        piVar78 = piVar78 + 1;
      } while (uVar50 != 0);
    }
  }
  if (*(int *)(local_430 + 4) == -2) {
    local_498 = &DAT_03d7702c;
    local_490 = 0;
  }
  else {
    local_490 = local_428;
    local_498 = (undefined *)
                (**(code **)(*plVar42 + 0x18))
                          (plVar42,-(ulong)(local_428 + 1U >> 0x1f) & 0xfffffff800000000 |
                                   (ulong)(local_428 + 1U) << 3);
    memcpy(local_498,local_430,(long)local_428 * 8 + 8);
  }
  if (0 < (int)(uint)local_4a0) {
    plVar40 = param_1 + 0x22;
    plVar2 = param_1 + 0x26;
    pFVar54 = *(FILE **)PTR_stdout_047cb860;
    uVar66 = (uint)local_4a0;
    do {
      piVar78 = (int *)(**(code **)(*plVar42 + 0x18))(plVar42);
      if ((uint)local_4a0 != 0) {
        uVar86 = (long)(int)(uint)local_4a0 * 4 - 4;
        uVar91 = (uVar86 >> 2) + 1;
        uVar95 = uVar91 & 7;
        piVar59 = local_4a8;
        if (uVar86 < 0x1c) {
          lVar85 = 0;
        }
        else {
          lVar85 = 0;
          piVar71 = piVar78 + 4;
          do {
            piVar71[-4] = *piVar59;
            piVar71[-3] = piVar59[1];
            piVar71[-2] = piVar59[2];
            piVar71[-1] = piVar59[3];
            *piVar71 = piVar59[4];
            piVar71[1] = piVar59[5];
            piVar71[2] = piVar59[6];
            piVar48 = piVar59 + 7;
            lVar85 = lVar85 + -8;
            piVar59 = piVar59 + 8;
            piVar71[3] = *piVar48;
            piVar71 = piVar71 + 8;
          } while (-lVar85 != (uVar91 & 0x7ffffffffffffff8));
          lVar85 = -lVar85;
        }
        if (uVar95 != 0) {
          lVar94 = -uVar95;
          piVar71 = piVar78 + lVar85;
          do {
            bVar29 = lVar94 != -1;
            lVar94 = lVar94 + 1;
            *piVar71 = *piVar59;
            piVar59 = piVar59 + 1;
            piVar71 = piVar71 + 1;
          } while (bVar29);
        }
        if (((((uint)local_4a0 != 0) &&
             (local_4a0 = (char *)((ulong)local_4a0 & 0xffffffff00000000),
             local_498 != (undefined *)0x0)) && (*(int *)(local_498 + 4) != -2)) &&
           ((-1 < local_490 && (*(undefined4 *)(local_498 + 4) = 0xffffffff, 0 < local_490)))) {
          lVar85 = 0;
          lVar94 = 0xc;
          do {
            lVar85 = lVar85 + 1;
            *(undefined4 *)(local_498 + lVar94) = 0xffffffff;
            lVar94 = lVar94 + 8;
          } while (lVar85 < local_490);
        }
      }
      if (uVar66 - 1 != 0 && 0 < (int)uVar66) {
        FUN_02efaeb0(piVar78,0,uVar66 - 1);
      }
      local_2f8 = (undefined8 **)0x8000008000000001;
      local_270 = 1;
      local_398._0_4_ = (uint)local_4a0;
      local_2f0 = (undefined8 *)((ulong)local_2f0 & 0xffffffffffffff00);
      local_540 = (undefined8 **)CONCAT44(local_540._4_4_,*(undefined4 *)(*plVar98 + 0xa0));
      local_300 = (undefined1  [8])&local_2f0;
      FUN_031c8978(local_300,"{} Patches ({} registered):",&DAT_044e9030,local_398,&local_540);
      uVar91 = (ulong)local_2f8;
      auVar10._8_8_ = local_390;
      auVar10._0_8_ = local_398;
      if ((-(ulong)(uVar66 >> 0x1f) & 0xfffffffc00000000) == 0 && (ulong)uVar66 == 0) {
        local_2f8 = (undefined8 **)((ulong)local_2f8 & 0xffffffff00000000);
        auVar11._8_8_ = local_2f8;
        auVar11._0_8_ = local_300;
        if (-1 < (long)uVar91) {
          _local_398 = auVar10;
          _local_300 = auVar11;
          if (local_300 != (undefined1  [8])0x0) {
            (**(code **)(plVar42[4] + 0x20))(plVar42 + 4);
          }
        }
      }
      else {
        lVar85 = (long)(int)uVar66 << 2;
        piVar59 = piVar78;
        do {
          local_398._0_4_ = *piVar59;
          FUN_031c8b2c(local_300,"  {} {}\n",&DAT_047ad158,local_398,
                       *(undefined8 *)(*(long *)(*plVar98 + 0x98) + (long)*piVar59 * 8));
          uVar91 = (ulong)local_2f8;
          plVar42 = (long *)PTR_PTR_047d1a50;
          lVar85 = lVar85 + -4;
          piVar59 = piVar59 + 1;
        } while (lVar85 != 0);
        local_2f8 = (undefined8 **)((ulong)local_2f8 & 0xffffffff00000000);
        if ((-1 < (long)uVar91) && (local_300 != (undefined1  [8])0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
        }
        piVar59 = piVar78;
        do {
          puVar53 = *(ulong **)(*(long *)(*plVar98 + 0x98) + (long)*piVar59 * 8);
          uVar91 = (ulong)(uint)puVar53[6];
          if (0 < (int)(uint)puVar53[6]) {
            do {
              uVar95 = uVar91 - 1;
              if (((*(char *)(puVar53[5] + uVar95 * 0x10) == '\a') &&
                  (puVar56 = *(undefined8 **)(puVar53[5] + uVar95 * 0x10 + 8),
                  puVar56 != (undefined8 *)0x0)) && (*(char *)((long)puVar56 + 0x14) == '\0')) {
                sVar37 = puVar56[1] - (long)*puVar56;
                if (sVar37 != 0) {
                  pvVar41 = memchr((void *)*puVar56,0x24,sVar37);
                  if (pvVar41 != (void *)0x0) goto LAB_0334f23c;
                }
                puVar68 = puVar56 + 2;
                auVar107 = FUN_03342334(*(undefined8 *)(*plVar98 + 0x90),puVar56,
                                        *(undefined4 *)puVar68);
                plVar45 = (long *)(*plVar98 + 0xa8);
                _local_398 = auVar107;
                _local_300 = auVar107;
                lVar85 = FUN_03348c94(plVar45,local_300);
                if ((lVar85 == 0) ||
                   (uVar50 = *(uint *)(*plVar45 + (long)*(int *)(lVar85 + 4) * 0x10 + 8),
                   (int)uVar50 < 0)) {
                  lVar85 = FUN_03348c94(plVar45,&local_2f8);
                  if ((lVar85 != 0) &&
                     (uVar50 = *(uint *)(*plVar45 + (long)*(int *)(lVar85 + 4) * 0x10 + 8),
                     -1 < (int)uVar50)) {
                    local_540 = local_2f8;
                    goto LAB_0334f2fc;
                  }
                  local_538 = (ulong *)0xffffffff;
                  local_540 = (undefined8 **)local_300;
                }
                else {
                  local_540 = (undefined8 **)local_300;
LAB_0334f2fc:
                  local_538 = (ulong *)(ulong)uVar50;
                  lVar85 = FUN_033608c0(&local_440,&local_538);
                  if (lVar85 == 0) {
                    uVar33 = 0;
                    uVar50 = 0xffffffff;
                  }
                  else {
                    uVar50 = *(uint *)(lVar85 + 4);
                    uVar33 = ((int)lVar85 - (int)local_430) * 0x20000000;
                  }
                  if ((int)(uVar50 | uVar33) < 0) {
                    FUN_0336059c(&local_4a8,&local_538);
                  }
                }
                lVar85 = FUN_03349b40(plVar40,local_398);
                if (lVar85 == 0) {
                  uVar33 = 0;
                  uVar50 = 0xffffffff;
                }
                else {
                  uVar50 = *(uint *)(lVar85 + 4);
                  uVar33 = ((int)lVar85 - (int)param_1[0x24]) * 0x20000000;
                }
                if ((int)(uVar50 | uVar33) < 0) {
                  local_3b8 = (byte *)0x0;
                  local_3b0 = (byte *)0x8000000000000000;
                  local_3d8 = (undefined8 **)0x0;
                  local_3d0 = (undefined8 **)0x8000000000000000;
                  FUN_033603c0(&local_3d8,1);
                  local_560 = local_3d8;
                  local_3d8[(int)local_3d0] = (undefined8 *)local_398;
                  local_3d0 = (undefined8 **)CONCAT44(local_3d0._4_4_,1);
                  lVar85 = param_1[0x27];
                  plVar45 = (long *)(param_1[2] + 0xa8);
                  _local_300 = _local_398;
                  lVar94 = FUN_03348c94(plVar45,local_300);
                  if ((lVar94 == 0) ||
                     (uVar50 = *(uint *)(*plVar45 + (long)*(int *)(lVar94 + 4) * 0x10 + 8),
                     (int)uVar50 < 0)) {
                    lVar94 = FUN_03348c94(plVar45,&local_2f8);
                    if ((lVar94 != 0) &&
                       (uVar50 = *(uint *)(*plVar45 + (long)*(int *)(lVar94 + 4) * 0x10 + 8),
                       -1 < (int)uVar50)) goto LAB_0334f440;
                    local_3e0 = (undefined1  [8])CONCAT44(local_3e0._4_4_,0xffffffff);
                    iVar30 = 1;
LAB_0334fac8:
                    lVar94 = (long)iVar30 << 3;
                    ppuVar104 = local_3d8;
                    do {
                      local_300 = (undefined1  [8])*ppuVar104;
                      iVar30 = FUN_03349844(plVar40,local_300);
                      if ((int)param_1[0x23] == iVar30) {
                        iVar32 = iVar30;
                        if ((int)(*(uint *)((long)param_1 + 0x11c) & 0x7fffffff) <= iVar30) {
                          FUN_03349960(plVar40,PTR_PTR_047d1a50,(long)(iVar30 + 1));
                          iVar32 = (int)param_1[0x23];
                        }
                        puVar56 = (undefined8 *)(param_1[0x22] + (long)iVar32 * 0x18);
                        puVar56[1] = 0;
                        puVar56[2] = 0;
                        *puVar56 = local_300;
                        *(undefined4 *)((long)puVar56 + 0x14) = 0x80000000;
                        *(int *)(param_1 + 0x23) = iVar30 + 1;
                      }
                      lVar87 = *plVar40 + (long)iVar30 * 0x18;
                      piVar71 = (int *)(lVar87 + 0x10);
                      iVar30 = *piVar71;
                      lVar80 = (long)iVar30;
                      if ((int)(*(uint *)(lVar87 + 0x14) & 0x7fffffff) <= iVar30) {
                        FUN_0133bb88((long *)(lVar87 + 8),PTR_PTR_047d1a50,lVar80 + 1);
                        iVar30 = *piVar71;
                      }
                      ppuVar104 = ppuVar104 + 1;
                      lVar94 = lVar94 + -8;
                      *(int *)(*(long *)(lVar87 + 8) + (long)iVar30 * 4) = (int)lVar85;
                      *piVar71 = (int)(lVar80 + 1);
                      puVar82 = PTR_DAT_047d1a08;
                    } while (lVar94 != 0);
                    local_300 = (undefined1  [8])&DAT_000000c8;
                    plVar42 = (long *)(**(code **)PTR_DAT_047d1a08)(0,local_300,0);
                    if (*(code **)(puVar82 + 0x10) != (code *)0x0) {
                      (**(code **)(puVar82 + 0x10))(plVar42,"VersionedTypeBuilder");
                    }
                    *(undefined4 *)(plVar42 + 2) = 0xffffffff;
                    *(undefined4 *)(plVar42 + 4) = 0xffffffff;
                    *(undefined4 *)((long)plVar42 + 0x9c) = 0xffffffff;
                    plVar42[3] = 0;
                    *(undefined4 *)(plVar42 + 9) = 0;
                    *(undefined2 *)((long)plVar42 + 0x4c) = 0;
                    plVar42[0x12] = -0x8000000000000000;
                    *(undefined2 *)(plVar42 + 0x13) = 0;
                    *(undefined4 *)(plVar42 + 0x18) = 0;
                    *plVar42 = (long)param_1;
                    plVar42[1] = 0;
                    plVar42[5] = 0;
                    plVar42[6] = -0x8000000000000000;
                    plVar42[7] = 0;
                    plVar42[8] = -0x8000000000000000;
                    plVar42[10] = 0;
                    plVar42[0xb] = 0;
                    plVar42[0xc] = -0x8000000000000000;
                    plVar42[0xd] = 0;
                    plVar42[0xe] = -0x8000000000000000;
                    plVar42[0xf] = 0;
                    plVar42[0x10] = -0x8000000000000000;
                    plVar42[0x11] = 0;
                    plVar42[0x14] = 0;
                    plVar42[0x15] = 0;
                    plVar42[0x16] = -0x8000000000000000;
                    plVar42[0x17] = (long)&DAT_03d7702c;
                    iVar30 = (int)param_1[0x27];
                    lVar94 = (long)iVar30;
                    lVar85 = lVar94 + 1;
                    if ((int)(*(uint *)((long)param_1 + 0x13c) & 0x7fffffff) <= iVar30) {
                      FUN_0335f054(plVar2,lVar85);
                      iVar30 = (int)param_1[0x27];
                    }
                    auVar64 = local_398;
                    *(long **)(param_1[0x26] + (long)iVar30 * 8) = plVar42;
                    *(int *)(param_1 + 0x27) = (int)lVar85;
                    lVar85 = *(long *)(param_1[0x26] + lVar94 * 8);
                    lVar94 = *(long *)(param_1[2] + 0x90);
                    pMVar1 = (MutexType *)(lVar94 + 0x50);
                    nn::os::LockMutex(pMVar1);
                    pcVar92 = (char *)(*(ulong *)(*(long *)(lVar94 + 0x40) +
                                                 (-((ulong)auVar64 >> 0x1f & 1) & 0xfffffff800000000
                                                 | ((ulong)auVar64 & 0xffffffff) << 3)) &
                                      0xfffffffffffffffe);
                    if (pcVar92 == (char *)0x0) {
                      pcVar43 = (char *)0x0;
                    }
                    else {
                      sVar37 = strlen(pcVar92);
                      pcVar43 = pcVar92 + sVar37;
                    }
                    nn::os::UnlockMutex(pMVar1);
                    uVar52 = local_398._4_4_;
                    FUN_031ca644(lVar85 + 0x18,pcVar92,pcVar43);
                    pcVar92 = (char *)(*(ulong *)(lVar85 + 0x18) & 0xfffffffffffffffe);
                    uVar86 = *(ulong *)(lVar85 + 8);
                    if ((char *)(uVar86 & 0xfffffffffffffffe) != pcVar92) {
                      if (pcVar92 == (char *)0x0) {
                        uVar55 = 0;
                      }
                      else {
                        sVar37 = strlen(pcVar92);
                        sVar37 = (size_t)((int)sVar37 + 1);
                        pvVar41 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                                    (PTR_PTR_047d1a50,sVar37);
                        memcpy(pvVar41,pcVar92,sVar37);
                        uVar55 = (ulong)pvVar41 | 1;
                      }
                      *(ulong *)(lVar85 + 8) = uVar55;
                      if ((uVar86 & 1) != 0) {
                        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar86 - 1,0);
                      }
                    }
                    *(undefined4 *)(lVar85 + 0x20) = uVar52;
                    *(undefined4 *)(lVar85 + 0x10) = uVar52;
                    *(undefined1 *)(lVar85 + 0x48) = 0;
                    if ((int)local_3b0 != 0) {
                      lVar94 = (long)(int)local_3b0 << 2;
                      pbVar77 = local_3b8;
                      lVar80 = (long)*(int *)(lVar85 + 0x60);
                      do {
                        uVar52 = *(undefined4 *)pbVar77;
                        iVar30 = (int)lVar80;
                        if ((long)((ulong)*(uint *)(lVar85 + 100) & 0x7fffffff) <= lVar80) {
                          FUN_0133bb88(lVar85 + 0x58,PTR_PTR_047d1a50,lVar80 + 1);
                          iVar30 = *(int *)(lVar85 + 0x60);
                        }
                        pbVar77 = pbVar77 + 4;
                        lVar94 = lVar94 + -4;
                        *(undefined4 *)(*(long *)(lVar85 + 0x58) + (long)iVar30 * 4) = uVar52;
                        *(int *)(lVar85 + 0x60) = (int)lVar80 + 1;
                        lVar80 = lVar80 + 1;
                      } while (lVar94 != 0);
                    }
                  }
                  else {
LAB_0334f440:
                    bVar29 = false;
                    local_3e0 = (undefined1  [8])CONCAT44(local_3e0._4_4_,uVar50);
                    local_558 = 8;
                    uVar86 = 1;
                    do {
                      lVar80 = *(long *)(*(long *)(*plVar98 + 0x98) + (ulong)uVar50 * 8);
                      FUN_0336059c(&local_440,&local_3e0);
                      lVar94 = (long)(int)local_3b0;
                      auVar107 = _local_300;
                      if ((int)(local_3b0._4_4_ & 0x7fffffff) <= (int)local_3b0) {
                        FUN_0133bb88(&local_3b8,plVar42,lVar94 + 1);
                        auVar107 = _local_300;
                      }
                      *(uint *)(local_3b8 + (long)(int)local_3b0 * 4) = (uint)local_3e0;
                      local_3b0 = (byte *)CONCAT44(local_3b0._4_4_,(int)(lVar94 + 1));
                      local_300 = *(undefined1 (*) [8])(lVar80 + 0x10);
                      local_2f8 = *(undefined8 ***)(lVar80 + 0x18);
                      if (local_300 == (undefined1  [8])local_2f8) {
                        local_3e0 = (undefined1  [8])CONCAT44(local_3e0._4_4_,0xffffffff);
                        uVar55 = uVar86;
                        _local_300 = auVar107;
                        break;
                      }
                      _local_300 = FUN_03342334(*(undefined8 *)(*plVar98 + 0x90),local_300,
                                                *(undefined4 *)(lVar80 + 0x24));
                      puVar65 = local_300;
                      plVar45 = (long *)(*plVar98 + 0xa8);
                      lVar94 = FUN_03348c94(plVar45,local_300);
                      if ((lVar94 == 0) ||
                         (iVar30 = *(int *)(*plVar45 + (long)*(int *)(lVar94 + 4) * 0x10 + 8),
                         iVar30 < 0)) {
                        lVar94 = FUN_03348c94(plVar45,&local_2f8);
                        if (lVar94 == 0) {
                          iVar30 = -1;
                        }
                        else {
                          iVar30 = *(int *)(*plVar45 + (long)*(int *)(lVar94 + 4) * 0x10 + 8);
                          if (iVar30 < 0) {
                            iVar30 = -1;
                          }
                        }
                      }
                      local_3e0 = (undefined1  [8])CONCAT44(local_3e0._4_4_,iVar30);
                      local_3f0 = (int *)0x0;
                      local_3e8 = (char *)0x8000000000000000;
                      local_300 = *(undefined1 (*) [8])(lVar80 + 0x10);
                      local_2f8 = *(undefined8 ***)(lVar80 + 0x18);
                      FUN_0335fce4(param_1,local_300,*(undefined4 *)(lVar80 + 0x24),&local_3f0);
                      if ((int)local_3e8 != 0) {
                        piVar48 = local_3f0 + (int)local_3e8;
                        piVar71 = local_3f0;
                        do {
                          if (*(char *)(*(long *)(*plVar2 + (long)*piVar71 * 8) + 0x48) != '\0') {
                            if (DAT_0488d8c8 < 2) {
                              if (DAT_046aaf68 != '\0') goto LAB_0334f920;
                            }
                            else {
                              if (DAT_046aaf68 == '\0') {
                                local_2f0 = &DAT_0488d878;
                                local_300 = (undefined1  [8])0x0;
                                local_2e8 = 2;
                                pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
                                local_2e0 = nn::os::GetThreadId(pTVar39);
                                local_2d8 = (undefined8 **)0x0;
                                local_2d0 = 0;
                                local_2b8 = 0;
                                local_2c8 = (char *)0x0;
                                local_2c0 = 0;
                                lVar94 = *(long *)(*plVar2 + (long)*piVar71 * 8);
                                local_400 = (undefined8 **)*puVar53;
                                local_3f8 = (char *)puVar53[1];
                                local_404 = (int)puVar53[4];
                                FUN_0322c554(local_300,
                                             "{} ({}) is in the file but there is a patch dependency on {} ({}) in patch {} ({}). This usually indicates patch dependencies are not correct."
                                             ,&DAT_047ad170,lVar94 + 0x18,lVar94 + 0x20,puVar56,
                                             puVar68,&local_400,&local_404);
                                local_2c8 = 
                                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
                                ;
                                local_2c0 = 0x450;
                                local_2e8 = CONCAT44(0xa71bbc01,(undefined4)local_2e8);
                                FUN_0322c8e0(local_300);
                              }
                              else {
LAB_0334f920:
                                local_2f0 = &DAT_0488d878;
                                local_300 = (undefined1  [8])0x0;
                                local_2e8 = 2;
                                pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
                                local_2e0 = nn::os::GetThreadId(pTVar39);
                                local_2d0 = 0;
                                local_2c8 = (char *)0x0;
                                local_2c0 = 0;
                                local_2b8 = 0;
                                local_2f8 = (undefined8 **)0x10000000000;
                                local_2b0[0]._0_1_ = '\0';
                                lVar94 = *(long *)(*plVar2 + (long)*piVar71 * 8);
                                local_418 = *puVar53;
                                local_410 = puVar53[1];
                                local_41c = (undefined4)puVar53[4];
                                local_300 = (undefined1  [8])local_2b0;
                                local_2d8 = local_2b0;
                                FUN_0322c554(local_300,
                                             "{} ({}) is in the file but there is a patch dependency on {} ({}) in patch {} ({}). This usually indicates patch dependencies are not correct."
                                             ,&DAT_047ad170,lVar94 + 0x18,lVar94 + 0x20,puVar56,
                                             puVar68,&local_418,&local_41c);
                                local_2c8 = 
                                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
                                ;
                                local_2c0 = 0x450;
                                local_2e8 = CONCAT44(0xa71bbc01,(undefined4)local_2e8);
                                if ((char)local_2b0[0] != '\0') {
                                  sVar37 = strlen((char *)local_2b0);
                                  *(undefined2 *)
                                   ((long)local_2b0 +
                                   (long)(int)((int)sVar37 - (uint)((int)sVar37 == 0xff))) = 10;
                                  printf("%s",local_2b0);
                                  fflush(pFVar54);
                                }
                              }
                              if (((ulong)local_2d8 & 1) != 0) {
                                (**(code **)(PTR_DAT_047d1a08 + 8))
                                          (0,(char *)((long)local_2d8 + -1),0);
                              }
                            }
                          }
                          lVar94 = *(long *)(*plVar2 + (long)*piVar71 * 8);
                          if (0 < (int)local_3b0) {
                            lVar80 = 0;
                            do {
                              pbVar77 = local_3b8;
                              iVar30 = *(int *)(lVar94 + 0x60);
                              uVar50 = iVar30 - (int)lVar80;
                              if ((int)(*(uint *)(lVar94 + 100) & 0x7fffffff) <= iVar30) {
                                FUN_02e9b320((long *)(lVar94 + 0x58),PTR_PTR_047d1a50,
                                             (long)iVar30 + 1);
                              }
                              puVar4 = (undefined4 *)(*(long *)(lVar94 + 0x58) + lVar80 * 4);
                              if (0 < (int)uVar50) {
                                FUN_031d0240(puVar4 + 1,puVar4,(ulong)uVar50 << 2);
                              }
                              *puVar4 = *(undefined4 *)(pbVar77 + lVar80 * 4);
                              *(int *)(lVar94 + 0x60) = (int)((long)iVar30 + 1);
                              lVar94 = *(long *)(*plVar2 + (long)*piVar71 * 8);
                              lVar80 = lVar80 + 1;
                            } while (lVar80 < (int)local_3b0);
                          }
                          auVar64 = local_398;
                          lVar80 = *(long *)(*plVar98 + 0x90);
                          pMVar1 = (MutexType *)(lVar80 + 0x50);
                          nn::os::LockMutex(pMVar1);
                          pcVar92 = (char *)(*(ulong *)(*(long *)(lVar80 + 0x40) +
                                                       (-((ulong)auVar64 >> 0x1f & 1) &
                                                        0xfffffff800000000 |
                                                       ((ulong)auVar64 & 0xffffffff) << 3)) &
                                            0xfffffffffffffffe);
                          if (pcVar92 == (char *)0x0) {
                            pcVar43 = (char *)0x0;
                          }
                          else {
                            sVar37 = strlen(pcVar92);
                            pcVar43 = pcVar92 + sVar37;
                          }
                          nn::os::UnlockMutex(pMVar1);
                          uVar52 = local_398._4_4_;
                          FUN_031ca644(lVar94 + 0x18,pcVar92,pcVar43);
                          pcVar92 = (char *)(*(ulong *)(lVar94 + 0x18) & 0xfffffffffffffffe);
                          uVar55 = *(ulong *)(lVar94 + 8);
                          if ((char *)(uVar55 & 0xfffffffffffffffe) != pcVar92) {
                            if (pcVar92 == (char *)0x0) {
                              uVar57 = 0;
                            }
                            else {
                              sVar37 = strlen(pcVar92);
                              sVar37 = (size_t)((int)sVar37 + 1);
                              pvVar41 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                                          (PTR_PTR_047d1a50,sVar37);
                              memcpy(pvVar41,pcVar92,sVar37);
                              uVar57 = (ulong)pvVar41 | 1;
                            }
                            *(ulong *)(lVar94 + 8) = uVar57;
                            if ((uVar55 & 1) != 0) {
                              (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar55 - 1,0);
                            }
                          }
                          *(undefined4 *)(lVar94 + 0x20) = uVar52;
                          *(undefined4 *)(lVar94 + 0x10) = uVar52;
                          plVar42 = (long *)PTR_PTR_047d1a50;
                          ppuVar104 = local_560;
                          lVar94 = local_558;
                          do {
                            local_300 = (undefined1  [8])*ppuVar104;
                            iVar30 = FUN_03349844(plVar40,local_300);
                            if ((int)param_1[0x23] == iVar30) {
                              iVar32 = iVar30;
                              if ((int)(*(uint *)((long)param_1 + 0x11c) & 0x7fffffff) <= iVar30) {
                                FUN_03349960(plVar40,plVar42,(long)(iVar30 + 1));
                                iVar32 = (int)param_1[0x23];
                              }
                              puVar58 = (undefined8 *)(param_1[0x22] + (long)iVar32 * 0x18);
                              puVar58[1] = 0;
                              puVar58[2] = 0;
                              *puVar58 = local_300;
                              *(undefined4 *)((long)puVar58 + 0x14) = 0x80000000;
                              *(int *)(param_1 + 0x23) = iVar30 + 1;
                            }
                            lVar87 = *plVar40 + (long)iVar30 * 0x18;
                            piVar81 = (int *)(lVar87 + 0x10);
                            iVar30 = *piVar81;
                            lVar80 = (long)iVar30;
                            if ((int)(*(uint *)(lVar87 + 0x14) & 0x7fffffff) <= iVar30) {
                              FUN_0133bb88((long *)(lVar87 + 8),plVar42,lVar80 + 1);
                              iVar30 = *piVar81;
                            }
                            ppuVar104 = ppuVar104 + 1;
                            lVar94 = lVar94 + -8;
                            *(int *)(*(long *)(lVar87 + 8) + (long)iVar30 * 4) = *piVar71;
                            *piVar81 = (int)(lVar80 + 1);
                          } while (lVar94 != 0);
                          local_3e0 = (undefined1  [8])CONCAT44(local_3e0._4_4_,0xffffffff);
                          piVar71 = piVar71 + 1;
                        } while (piVar71 != piVar48);
                        bVar29 = true;
                      }
                      uVar55 = uVar86 + 1;
                      if (((ulong)local_3d0 >> 0x20 & 0x7fffffff) <= uVar86) {
                        FUN_033603c0(&local_3d8,uVar55);
                        uVar86 = (ulong)local_3d0 & 0xffffffff;
                        local_560 = local_3d8;
                      }
                      lVar94 = (long)local_3e8;
                      local_560[(int)uVar86] = puVar65;
                      uVar86 = (ulong)local_3e8._4_4_;
                      local_3d0 = (undefined8 **)CONCAT44(local_3d0._4_4_,(int)uVar55);
                      local_3e8 = (char *)((ulong)local_3e8._4_4_ << 0x20);
                      if ((-1 < lVar94) && (local_3f0 != (int *)0x0)) {
                        (**(code **)(*plVar42 + 0x20))(plVar42,local_3f0,uVar86 << 2);
                      }
                      local_558 = local_558 + 8;
                      uVar86 = uVar55;
                      uVar50 = (uint)local_3e0;
                    } while (-1 < (int)(uint)local_3e0);
                    iVar30 = (int)uVar55;
                    if (!bVar29) goto LAB_0334fac8;
                  }
                  uVar55 = (ulong)local_3d0;
                  plVar42 = (long *)PTR_PTR_047d1a50;
                  uVar86 = (ulong)local_3d0 >> 0x20;
                  local_3d0 = (undefined8 **)(uVar86 << 0x20);
                  if ((-1 < (long)uVar55) && (local_3d8 != (undefined8 **)0x0)) {
                    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                              (PTR_PTR_047d1a50,local_3d8,uVar86 << 3);
                  }
                  lVar85 = (long)local_3b0;
                  uVar86 = (ulong)local_3b0._4_4_;
                  local_3b0 = (byte *)((ulong)local_3b0._4_4_ << 0x20);
                  if ((-1 < lVar85) && (local_3b8 != (byte *)0x0)) {
                    (**(code **)(*plVar42 + 0x20))(plVar42,local_3b8,uVar86 << 2);
                  }
                }
              }
LAB_0334f23c:
              bVar29 = 1 < (long)uVar91;
              uVar91 = uVar95;
            } while (bVar29);
          }
          piVar59 = piVar59 + 1;
        } while (piVar59 != piVar78 + (int)uVar66);
      }
      if ((uint)local_4a0 != 0) {
        lVar85 = (long)(int)(uint)local_4a0 << 2;
        piVar59 = local_4a8;
        do {
          local_300._0_4_ = *piVar59;
          FUN_0336059c(&local_440,local_300);
          lVar85 = lVar85 + -4;
          piVar59 = piVar59 + 1;
        } while (lVar85 != 0);
      }
      plVar42 = (long *)PTR_PTR_047d1a50;
      if (piVar78 != (int *)0x0) {
        (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,piVar78,(ulong)uVar66 << 2)
        ;
      }
      uVar66 = (uint)local_4a0;
    } while (0 < (int)(uint)local_4a0);
  }
  uVar66 = (uint)local_438;
  piVar78 = (int *)(local_438 & 0xffffffff);
  if ((int)(uint)local_438 < 1) {
    local_5e0 = (int *)0x0;
    uVar66 = 0x80000000;
    piVar59 = (int *)0x80000000;
    piVar71 = piVar78;
    piVar78 = (int *)0x0;
  }
  else {
    local_5e0 = (int *)(**(code **)(*plVar42 + 0x18))(plVar42,(long)piVar78 << 2);
    piVar71 = (int *)(local_438 & 0xffffffff);
    piVar59 = piVar78;
  }
  if ((int)piVar71 != 0) {
    uVar86 = (-((ulong)piVar71 >> 0x1f) & 0xfffffffc00000000 | (long)piVar71 << 2) - 4;
    uVar91 = (uVar86 >> 2) + 1;
    uVar95 = uVar91 & 3;
    piVar59 = local_440;
    if (uVar86 < 0xc) {
      lVar85 = 0;
    }
    else {
      lVar85 = 0;
      piVar71 = local_5e0 + 2;
      do {
        piVar71[-2] = *piVar59;
        piVar71[-1] = piVar59[1];
        *piVar71 = piVar59[2];
        piVar48 = piVar59 + 3;
        lVar85 = lVar85 + -4;
        piVar59 = piVar59 + 4;
        piVar71[1] = *piVar48;
        piVar71 = piVar71 + 4;
      } while (-lVar85 != (uVar91 & 0x7ffffffffffffffc));
      lVar85 = -lVar85;
    }
    if (uVar95 != 0) {
      lVar94 = -uVar95;
      piVar71 = piVar59;
      piVar48 = local_5e0 + lVar85;
      do {
        piVar59 = piVar71 + 1;
        bVar29 = lVar94 != -1;
        lVar94 = lVar94 + 1;
        *piVar48 = *piVar71;
        piVar71 = piVar59;
        piVar48 = piVar48 + 1;
      } while (bVar29);
    }
  }
  iVar30 = (int)piVar78;
  if (iVar30 + -1 != 0 && 0 < iVar30) {
    FUN_02efaeb0(piVar59,local_5e0,0,iVar30 + -1);
  }
  iVar32 = (int)param_1[0x27];
  if (0 < iVar32) {
    lVar85 = 0;
    pFVar54 = *(FILE **)PTR_stdout_047cb860;
    do {
      lVar94 = *(long *)(param_1[0x26] + lVar85 * 8);
      local_3d8 = (undefined8 **)CONCAT44(local_3d8._4_4_,*(undefined4 *)(lVar94 + 0x10));
      pcVar92 = (char *)(*(ulong *)(lVar94 + 8) & 0xfffffffffffffffe);
      if (pcVar92 == (char *)0x0) {
        sVar37 = 0;
      }
      else {
        sVar37 = strlen(pcVar92);
      }
      local_390 = (ulong *)0x8000008000000000;
      local_308 = 1;
      local_398 = (undefined1  [8])&local_388;
      FUN_031c6afc(local_398,pcVar92,sVar37);
      if (*(int *)(lVar94 + 0x60) == 0) {
        iVar32 = (int)local_3d8;
      }
      else {
        piVar78 = *(int **)(lVar94 + 0x58);
        lVar87 = *plVar98;
        lVar80 = (long)*(int *)(lVar94 + 0x60) << 2;
        do {
          puVar56 = *(undefined8 **)(*(long *)(lVar87 + 0x98) + (long)*piVar78 * 8);
          pvVar41 = (void *)puVar56[2];
          if (pvVar41 == (void *)puVar56[3]) {
            if (((ulong)local_390 & 0x7fffffff00000000) == 0) {
              FUN_030b4a20(local_398,plVar42 + 4,1);
            }
            if ((int)local_390 != 1) {
              local_390 = (ulong *)CONCAT44(local_390._4_4_,1);
            }
            *(char *)local_398 = '\0';
            local_3d8 = (undefined8 **)CONCAT44(local_3d8._4_4_,0xffffffff);
            goto LAB_033503c4;
          }
          sVar37 = (long)puVar56[3] - (long)pvVar41;
          if (sVar37 == 0) {
LAB_033500f0:
            sVar44 = puVar56[1] - (long)*puVar56;
            if (sVar44 != 0) {
              pvVar38 = memchr((void *)*puVar56,0x3c,sVar44);
              if (pvVar38 != (void *)0x0) goto LAB_03350108;
            }
            pcVar92 = (char *)((long)local_398 + (long)(int)local_390 + -1);
            sVar44 = (long)pcVar92 - (long)local_398;
            if (sVar44 != 0) {
              pcVar43 = memchr((void *)local_398,0x3c,sVar44);
              if (pcVar43 != (char *)0x0) {
                iVar32 = (int)pcVar92 - (int)pcVar43;
                local_2f8 = (undefined8 **)0x8000008000000000;
                local_270 = 1;
                local_300 = (undefined1  [8])&local_2f0;
                if (iVar32 < 0) {
                  sVar44 = strlen(pcVar43);
                  iVar32 = (int)sVar44;
                }
                iVar34 = iVar32 + 1;
                if (iVar32 < 0x80) {
                  iVar31 = 0;
                }
                else {
                  FUN_030b4a20(local_300,PTR_PTR_047d1a50 + 0x20,(long)iVar34);
                  iVar31 = (int)local_2f8;
                }
                if ((iVar31 <= iVar32) || (iVar34 < iVar31)) {
                  local_2f8 = (undefined8 **)CONCAT44(local_2f8._4_4_,iVar34);
                }
                *(undefined1 *)((long)local_300 + (long)iVar32) = 0;
                memmove((void *)local_300,pcVar43,(long)(int)local_2f8 - 1);
                FUN_031c6afc(local_398,pvVar41,sVar37 & 0xffffffff);
                auVar64 = local_300;
                if (local_300 != (undefined1  [8])0x0) {
                  iVar32 = ~local_300._0_4_ + local_300._0_4_ + (int)local_2f8;
                  if (iVar32 < 0) {
                    sVar37 = strlen((char *)local_300);
                    iVar32 = (int)sVar37;
                  }
                  iVar35 = (int)local_390;
                  lVar88 = (long)(int)local_390;
                  iVar32 = (int)(lVar88 + -1) + iVar32;
                  iVar31 = (local_390._4_4_ & 0x7fffffff) - 1;
                  iVar34 = iVar32;
                  if (iVar31 <= iVar32) {
                    iVar34 = iVar31;
                  }
                  if (local_308 != 0) {
                    iVar34 = iVar32;
                  }
                  iVar32 = iVar34 + 1;
                  if ((int)(local_390._4_4_ & 0x7fffffff) <= iVar34) {
                    FUN_030b4a20(local_398,PTR_PTR_047d1a50 + 0x20,(long)iVar32);
                  }
                  if (((int)local_390 <= iVar34) || (iVar32 < (int)local_390)) {
                    local_390 = (ulong *)CONCAT44(local_390._4_4_,iVar32);
                  }
                  *(char *)((long)local_398 + (long)iVar34) = '\0';
                  memmove((char *)((long)local_398 + lVar88 + -1),(void *)auVar64,
                          (long)((int)local_390 - iVar35));
                }
                uVar91 = (ulong)local_2f8;
                plVar42 = (long *)PTR_PTR_047d1a50;
                local_2f8 = (undefined8 **)((ulong)local_2f8 & 0xffffffff00000000);
                auVar23._8_8_ = local_2f8;
                auVar23._0_8_ = local_300;
                if (-1 < (long)uVar91) {
                  _local_300 = auVar23;
                  if (local_300 != (undefined1  [8])0x0) {
                    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
                  }
                }
                goto LAB_033502e8;
              }
            }
            FUN_031c6afc(local_398,pvVar41,sVar37 & 0xffffffff);
            plVar42 = (long *)PTR_PTR_047d1a50;
          }
          else {
            pvVar38 = memchr(pvVar41,0x3c,sVar37);
            if (pvVar38 == (void *)0x0) goto LAB_033500f0;
LAB_03350108:
            FUN_031c6afc(local_398,pvVar41,sVar37 & 0xffffffff);
          }
LAB_033502e8:
          piVar78 = piVar78 + 1;
          lVar80 = lVar80 + -4;
          local_3d8 = (undefined8 **)CONCAT44(local_3d8._4_4_,*(int *)((long)puVar56 + 0x24));
        } while (lVar80 != 0);
        iVar32 = *(int *)((long)puVar56 + 0x24);
      }
      if ((((iVar32 == -0x80000000) || (iVar32 == -1)) || (*(char *)(lVar94 + 0x49) != '\0')) ||
         (((*(char *)(lVar94 + 0x4a) != '\0' || (*(char *)(lVar94 + 0x4b) != '\0')) ||
          (*(char *)(lVar94 + 0x4c) != '\0')))) {
LAB_033503c4:
        if (*(char *)(lVar94 + 0x4b) != '\0') {
          puVar53 = (ulong *)(**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3],local_398)
          ;
          if (puVar53 != (ulong *)0x0) {
            FUN_0336c5bc(lVar94,puVar53,1);
            goto LAB_033503fc;
          }
        }
LAB_03350820:
        uVar91 = 0;
      }
      else {
        puVar53 = (ulong *)(**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3],local_398);
        auVar64 = local_398;
        if (puVar53 == (ulong *)0x0) {
          lVar80 = (long)(int)local_390;
          pcVar92 = (char *)((long)local_398 + lVar80 + -1);
          uVar91 = (long)pcVar92 - (long)local_398;
          if ((0x25 < uVar91) && (0x2f < (int)uVar91)) {
            iVar32 = memcmp((char *)((long)local_398 + lVar80 + -0x27),
                            ", void, void, void, void, void, void >",0x26);
            if ((iVar32 == 0) &&
               (*(undefined8 **)auVar64 == (undefined8 *)0x3c656c7075546b68 &&
                *(char *)((long)auVar64 + 8) == ' ')) {
              local_3b8 = (byte *)((long)auVar64 + 9);
              local_530 = (undefined8 *)((ulong)local_530 & 0xffffffffffffff00);
              local_3b0 = local_3b8 + (((int)pcVar92 - auVar64._0_4_) + -0x2f);
              local_538 = (ulong *)0x8000008000000001;
              local_4b0 = 1;
              local_540 = &local_530;
              FUN_031c8978(&local_540,"hkHashMapDetail::MapTuple< {} >",PTR_DAT_047e5b50,&local_3b8)
              ;
              puVar53 = (ulong *)(**(code **)(*(long *)param_1[3] + 0x20))
                                           ((long *)param_1[3],local_540);
              puVar82 = PTR_PTR_047d1a50;
              puVar36 = puVar53;
              if (puVar53 == (ulong *)0x0) {
                if (DAT_0488d8c8 < 2) {
                  if (DAT_046aaf68 != '\0') goto LAB_03350c5c;
                }
                else if (DAT_046aaf68 == '\0') {
                  local_2f0 = &DAT_0488d878;
                  local_300 = (undefined1  [8])0x0;
                  local_2e8 = 2;
                  pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
                  local_2e0 = nn::os::GetThreadId(pTVar39);
                  local_2d8 = (undefined8 **)0x0;
                  local_2d0 = 0;
                  local_2b8 = 0;
                  local_2c8 = (char *)0x0;
                  local_2c0 = 0;
                  FUN_0322c554(local_300,
                               "Attempt to replace the missing type {} with {} failed: type not registered"
                               ,&DAT_047ad1a8,local_398,&local_540);
                  local_2c8 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
                  ;
                  local_2c0 = 0x4c3;
                  local_2e8 = CONCAT44(0xa71bbc02,(undefined4)local_2e8);
                  FUN_0322c8e0(local_300);
                  if (((ulong)local_2d8 & 1) != 0) {
                    (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_2d8 + -1),0);
                  }
                }
                else {
LAB_03350c5c:
                  local_2f0 = &DAT_0488d878;
                  local_300 = (undefined1  [8])0x0;
                  local_2e8 = 2;
                  pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
                  local_2e0 = nn::os::GetThreadId(pTVar39);
                  local_2d0 = 0;
                  local_2c8 = (char *)0x0;
                  local_2c0 = 0;
                  local_2b8 = 0;
                  local_2f8 = (undefined8 **)0x10000000000;
                  local_2b0[0]._0_1_ = '\0';
                  local_300 = (undefined1  [8])local_2b0;
                  local_2d8 = local_2b0;
                  FUN_0322c554(local_300,
                               "Attempt to replace the missing type {} with {} failed: type not registered"
                               ,&DAT_047ad1a8,local_398,&local_540);
                  local_2c8 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
                  ;
                  local_2c0 = 0x4c3;
                  local_2e8 = CONCAT44(0xa71bbc02,(undefined4)local_2e8);
                  if ((char)local_2b0[0] != '\0') {
                    sVar37 = strlen((char *)local_2b0);
                    *(undefined2 *)
                     ((long)local_2b0 + (long)(int)((int)sVar37 - (uint)((int)sVar37 == 0xff))) = 10
                    ;
                    printf("%s",local_2b0);
                    fflush(pFVar54);
                  }
                  if (((ulong)local_2d8 & 1) != 0) {
                    (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_2d8 + -1),0);
                  }
                  puVar82 = PTR_PTR_047d1a50;
                }
              }
              else {
                do {
                  uVar91 = *puVar36;
                  if (((uint)uVar91 >> 4 & 1) != 0) {
                    uVar52 = (undefined4)puVar36[(ulong)(byte)POPCOUNT((byte)uVar91 & 0xf) + 2];
                    goto LAB_03350b3c;
                  }
                  if ((uVar91 & 9) != 0) {
                    uVar52 = 0;
                    goto LAB_03350b3c;
                  }
                  puVar36 = (ulong *)puVar36[1];
                } while (puVar36 != (ulong *)0x0);
                uVar52 = 0;
LAB_03350b3c:
                local_3d8 = (undefined8 **)CONCAT44(local_3d8._4_4_,uVar52);
              }
              uVar91 = (ulong)local_538;
              local_538 = (ulong *)((ulong)local_538 & 0xffffffff00000000);
              if ((-1 < (long)uVar91) && (local_540 != (undefined8 **)0x0)) {
                (**(code **)(*(long *)(puVar82 + 0x20) + 0x20))();
              }
              if (puVar53 != (ulong *)0x0) goto LAB_0335035c;
              lVar80 = (long)(int)local_390;
              auVar64 = local_398;
            }
          }
          local_538 = (ulong *)((long)auVar64 + lVar80 + -1);
          local_540 = (undefined8 **)auVar64;
          if ((ulong)((long)local_538 - (long)auVar64) < 0x1d) {
            if (0x16 < (ulong)((long)local_538 - (long)auVar64)) goto LAB_033505b0;
          }
          else {
            if ((*(undefined8 **)auVar64 == (undefined8 *)0x3a74696172546b68 &&
                *(undefined8 **)((long)auVar64 + 8) == (undefined8 *)0x6974696e696e553a) &&
                (*(undefined8 **)((long)auVar64 + 0x10) == (undefined8 *)0x745364657a696c61 &&
                *(long *)((long)auVar64 + 0x15) == 0x656761726f745364)) goto LAB_03350820;
LAB_033505b0:
            if ((*(undefined8 **)auVar64 == (undefined8 *)0x3a74696172546b68 &&
                *(undefined8 **)((long)auVar64 + 8) == (undefined8 *)0x64656e67696c413a) &&
                *(long *)((long)auVar64 + 0xf) == 0x656761726f745364) goto LAB_03350820;
          }
          if (DAT_0488d8c8 < 2) {
            if (DAT_046aaf68 == '\0') goto LAB_03350820;
          }
          else if (DAT_046aaf68 == '\0') {
            local_2f0 = &DAT_0488d878;
            local_300 = (undefined1  [8])0x0;
            local_2e8 = 2;
            pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
            local_2e0 = nn::os::GetThreadId(pTVar39);
            local_2b8 = 0;
            local_2d8 = (undefined8 **)0x0;
            local_2d0 = 0;
            local_2c8 = (char *)0x0;
            local_2c0 = 0;
            FUN_0322c554(local_300,
                         "Loading and versioning file resulted in type {} but this type is not compiled in. Most likely a required library has not been loaded, or the asset is out of date"
                         ,PTR_DAT_047e5b50,&local_540);
            local_2c0 = 0x4d2;
            local_590 = 0xa71bbc03;
            goto LAB_033507f0;
          }
          local_2f0 = &DAT_0488d878;
          local_300 = (undefined1  [8])0x0;
          local_2e8 = 2;
          pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
          local_2e0 = nn::os::GetThreadId(pTVar39);
          local_2d0 = 0;
          local_2c8 = (char *)0x0;
          local_2c0 = 0;
          local_2b8 = 0;
          local_2f8 = (undefined8 **)0x10000000000;
          local_2b0[0]._0_1_ = '\0';
          local_300 = (undefined1  [8])local_2b0;
          local_2d8 = local_2b0;
          FUN_0322c554(local_300,
                       "Loading and versioning file resulted in type {} but this type is not compiled in. Most likely a required library has not been loaded, or the asset is out of date"
                       ,PTR_DAT_047e5b50,&local_540);
          local_2c0 = 0x4d2;
          uVar52 = 0xa71bbc03;
LAB_03350be8:
          local_2c8 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
          ;
          local_2e8 = CONCAT44(uVar52,(undefined4)local_2e8);
          if ((char)local_2b0[0] != '\0') {
            sVar37 = strlen((char *)local_2b0);
            *(undefined2 *)
             ((long)local_2b0 + (long)(int)((int)sVar37 - (uint)((int)sVar37 == 0xff))) = 10;
            printf("%s",local_2b0);
            fflush(pFVar54);
          }
          if (((ulong)local_2d8 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_2d8 + -1),0);
          }
          goto LAB_03350820;
        }
LAB_0335035c:
        puVar36 = puVar53;
        do {
          uVar91 = *puVar36;
          if (((uint)uVar91 >> 4 & 1) != 0) {
            iVar32 = (int)puVar36[(ulong)(byte)POPCOUNT((byte)uVar91 & 0xf) + 2];
            goto LAB_033504b4;
          }
          if ((uVar91 & 9) != 0) {
            iVar32 = 0;
            goto LAB_033504b4;
          }
          puVar36 = (ulong *)puVar36[1];
        } while (puVar36 != (ulong *)0x0);
        iVar32 = 0;
LAB_033504b4:
        if (iVar32 != (int)local_3d8) {
          if (DAT_0488d8c8 != 0) {
            if (DAT_046aaf68 != '\0') goto LAB_0335068c;
            local_2f0 = &DAT_0488d878;
            local_300 = (undefined1  [8])0x0;
            local_2e8 = 1;
            pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
            local_2e0 = nn::os::GetThreadId(pTVar39);
            local_2d8 = (undefined8 **)0x0;
            local_2d0 = 0;
            local_2b8 = 0;
            local_2c8 = (char *)0x0;
            local_2c0 = 0;
            do {
              uVar91 = *puVar53;
              if (((uint)uVar91 >> 4 & 1) != 0) {
                uVar52 = (undefined4)puVar53[(ulong)(byte)POPCOUNT((byte)uVar91 & 0xf) + 2];
                goto LAB_033507a8;
              }
            } while (((uVar91 & 9) == 0) && (puVar53 = (ulong *)puVar53[1], puVar53 != (ulong *)0x0)
                    );
            uVar52 = 0;
LAB_033507a8:
            local_540 = (undefined8 **)CONCAT44(local_540._4_4_,uVar52);
            FUN_0322c554(local_300,
                         "Loading and versioning file resulted in type {} version {} but the compiled in type is version {}. Most likely patches are not registered or missing, or the asset is out of date"
                         ,&DAT_047ad1c0,local_398,&local_3d8,&local_540);
            local_2c0 = 0x4d7;
            local_590 = 0xa71bbc04;
LAB_033507f0:
            local_2c8 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
            ;
            local_2e8 = CONCAT44(local_590,(undefined4)local_2e8);
            FUN_0322c8e0(local_300);
            if (((ulong)local_2d8 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_2d8 + -1),0);
            }
            goto LAB_03350820;
          }
          if (DAT_046aaf68 == '\0') goto LAB_03350820;
LAB_0335068c:
          local_2f0 = &DAT_0488d878;
          local_300 = (undefined1  [8])0x0;
          local_2e8 = 1;
          pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
          local_2e0 = nn::os::GetThreadId(pTVar39);
          local_2d0 = 0;
          local_2c8 = (char *)0x0;
          local_2c0 = 0;
          local_2b8 = 0;
          local_2f8 = (undefined8 **)0x10000000000;
          local_2b0[0]._0_1_ = '\0';
          do {
            uVar91 = *puVar53;
            if (((uint)uVar91 >> 4 & 1) != 0) {
              uVar52 = (undefined4)puVar53[(ulong)(byte)POPCOUNT((byte)uVar91 & 0xf) + 2];
              goto LAB_03350b9c;
            }
          } while (((uVar91 & 9) == 0) && (puVar53 = (ulong *)puVar53[1], puVar53 != (ulong *)0x0));
          uVar52 = 0;
LAB_03350b9c:
          local_3b8 = (byte *)CONCAT44(local_3b8._4_4_,uVar52);
          local_300 = (undefined1  [8])local_2b0;
          local_2d8 = local_2b0;
          FUN_0322c554(local_300,
                       "Loading and versioning file resulted in type {} version {} but the compiled in type is version {}. Most likely patches are not registered or missing, or the asset is out of date"
                       ,&DAT_047ad1c0,local_398,&local_3d8,&local_3b8);
          local_2c0 = 0x4d7;
          uVar52 = 0xa71bbc04;
          goto LAB_03350be8;
        }
        FUN_0336cc74(lVar94,puVar53,1);
LAB_033503fc:
        uVar91 = puVar53[1];
      }
      uVar95 = (ulong)*(uint *)(lVar94 + 0x60);
      if (0 < (int)*(uint *)(lVar94 + 0x60)) {
        do {
          FUN_0336b154(lVar94,*(undefined8 *)
                               (*(long *)(*plVar98 + 0x98) +
                               (long)*(int *)(*(long *)(lVar94 + 0x58) + (uVar95 - 1) * 4) * 8),0);
          bVar29 = 1 < (long)uVar95;
          uVar95 = uVar95 - 1;
        } while (bVar29);
      }
      plVar42 = (long *)PTR_PTR_047d1a50;
      auVar12 = _local_300;
      if ((*(int *)(lVar94 + 0x40) == 1) &&
         ((((uVar91 != 0 || (*(char *)(lVar94 + 0x49) != '\0')) ||
           (*(char *)(lVar94 + 0x4a) != '\0')) ||
          ((*(char *)(lVar94 + 0x4b) != '\0' || (*(char *)(lVar94 + 0x4c) != '\0')))))) {
        pcVar92 = (char *)(*(ulong *)(lVar94 + 0x18) & 0xfffffffffffffffe);
        lVar80 = *plVar98;
        if (pcVar92 == (char *)0x0) {
          iVar32 = 0;
        }
        else {
          sVar37 = strlen(pcVar92);
          iVar32 = (int)sVar37;
        }
        local_2f8 = (undefined8 **)(pcVar92 + iVar32);
        local_300 = (undefined1  [8])pcVar92;
        local_540 = (undefined8 **)
                    FUN_03342334(*(undefined8 *)(lVar80 + 0x90),local_300,
                                 *(undefined4 *)(lVar94 + 0x20));
        lVar80 = FUN_03360928(param_1 + 8,&local_540);
        auVar13._8_8_ = local_2f8;
        auVar13._0_8_ = local_300;
        auVar12._8_8_ = local_2f8;
        auVar12._0_8_ = local_300;
        if (lVar80 != 0) {
          local_300 = *(undefined1 (*) [8])(param_1[8] + (long)*(int *)(lVar80 + 4) * 0x10 + 8);
          auVar12 = auVar13;
          if (local_300 != (undefined1  [8])0xffffffffffffffff) {
            lVar80 = FUN_03349b40(param_1 + 0x22,local_300);
            auVar14._8_8_ = local_2f8;
            auVar14._0_8_ = local_300;
            auVar12._8_8_ = local_2f8;
            auVar12._0_8_ = local_300;
            if (((lVar80 == 0) || (lVar87 = param_1[0x22], lVar87 == 0)) ||
               (*(int *)(lVar87 + (long)*(int *)(lVar80 + 4) * 0x18 + 0x10) < 1)) {
              iVar32 = -1;
            }
            else {
              iVar32 = **(int **)(lVar87 + (long)*(int *)(lVar80 + 4) * 0x18 + 8);
            }
            lVar80 = *(long *)(param_1[0x26] + (long)iVar32 * 8);
            if (**(long **)(lVar94 + 0x38) != lVar80) {
              **(long **)(lVar94 + 0x38) = lVar80;
              auVar12 = auVar14;
            }
          }
        }
      }
      uVar91 = (ulong)local_390;
      local_390 = (ulong *)((ulong)local_390 & 0xffffffff00000000);
      _local_300 = auVar12;
      if ((-1 < (long)uVar91) && (local_398 != (undefined1  [8])0x0)) {
        (**(code **)(*(long *)((long)plVar42 + 0x20) + 0x20))();
      }
      lVar85 = lVar85 + 1;
      iVar32 = (int)param_1[0x27];
    } while (lVar85 < iVar32);
    if (0 < iVar32) {
      lVar85 = 0;
      plVar40 = param_1 + 0x31;
      do {
        lVar94 = *(long *)(param_1[0x26] + lVar85 * 8);
        FUN_03369664(lVar94);
        uVar50 = FUN_03360d14(plVar40,lVar94 + 0x50);
        if (*(uint *)(param_1 + 0x32) == uVar50) {
          iVar32 = uVar50 + 1;
          if ((int)(*(uint *)((long)param_1 + 0x194) & 0x7fffffff) <= (int)uVar50) {
            FUN_03360e30(plVar40,(long)iVar32);
            uVar50 = *(uint *)(param_1 + 0x32);
          }
          puVar56 = (undefined8 *)(param_1[0x31] + (long)(int)uVar50 * 0x10);
          *puVar56 = *(undefined8 *)(lVar94 + 0x50);
          puVar56[1] = lVar94;
          *(int *)(param_1 + 0x32) = iVar32;
          plVar42 = (long *)PTR_PTR_047d1a50;
        }
        else {
          *(long *)(*plVar40 + ((long)((ulong)uVar50 << 0x20) >> 0x1c) + 8) = lVar94;
        }
        iVar32 = (int)param_1[0x27];
        lVar85 = lVar85 + 1;
      } while (lVar85 < iVar32);
      if (0 < iVar32) {
        lVar85 = 0;
        do {
          FUN_03369998(*(undefined8 *)(param_1[0x26] + lVar85 * 8));
          iVar32 = (int)param_1[0x27];
          lVar85 = lVar85 + 1;
        } while (lVar85 < iVar32);
      }
    }
  }
  local_3b8 = (byte *)0x0;
  local_3b0 = (byte *)0x8000000000000000;
  local_3a8 = (undefined8 *)&DAT_03d7702c;
  local_3a0 = 0;
  local_3d8 = (undefined8 **)0x0;
  local_3d0 = (undefined8 **)0x8000000000000000;
  local_3c8 = (undefined8 *)&DAT_03d7702c;
  local_3c0 = 0;
  if (iVar32 < 1) {
LAB_033515f4:
    if (*(int *)((long)local_3c8 + 4) != -2) {
      (**(code **)(PTR_DAT_047d1a08 + 8))((char)plVar42[1],local_3c8,0);
      local_3c8 = (undefined8 *)&DAT_03d7702c;
      local_3c0 = 0;
    }
  }
  else {
    lVar85 = 0;
    do {
      FUN_033609b8(*(undefined8 *)(param_1[0x26] + lVar85 * 8),&local_3b8,&local_3d8);
      uVar91 = (ulong)(int)param_1[0x27];
      lVar85 = lVar85 + 1;
    } while (lVar85 < (long)uVar91);
    if (0 < (int)param_1[0x27]) {
      pFVar54 = *(FILE **)PTR_stdout_047cb860;
      lVar85 = 0;
      do {
        lVar80 = param_1[0x26];
        lVar94 = *(long *)(lVar80 + lVar85 * 8);
        if (*(char *)(lVar94 + 0x48) != '\0') {
          ppuVar104 = (undefined8 **)(*(ulong *)(lVar94 + 0x18) & 0xfffffffffffffffe);
          lVar94 = *plVar98;
          if (ppuVar104 == (undefined8 **)0x0) {
            iVar32 = 0;
          }
          else {
            sVar37 = strlen((char *)ppuVar104);
            iVar32 = (int)sVar37;
          }
          local_2f8 = (undefined8 **)((long)ppuVar104 + (long)iVar32);
          local_300 = (undefined1  [8])ppuVar104;
          local_3e0 = (undefined1  [8])
                      FUN_03342334(*(undefined8 *)(lVar94 + 0x90),local_300,
                                   *(undefined4 *)(*(long *)(lVar80 + lVar85 * 8) + 0x20));
          lVar94 = FUN_031d3f60(plVar72,&local_3e0);
          plVar42 = (long *)PTR_PTR_047d1a50;
          if ((lVar94 != 0) &&
             (puVar53 = *(ulong **)(*plVar72 + (long)*(int *)(lVar94 + 4) * 0x10 + 8),
             puVar53 != (ulong *)0x0)) {
            puVar60 = *(ulong **)(*(long *)(param_1[0x26] + lVar85 * 8) + 0x50);
            puVar36 = puVar53;
            while( true ) {
              uVar50 = (uint)*puVar36;
              if ((uVar50 >> 0x17 & 1) != 0) break;
              if (((*puVar36 & 1) != 0) || (puVar36 = (ulong *)puVar36[1], puVar36 == (ulong *)0x0))
              goto LAB_03350f78;
            }
            uVar91 = CONCAT44(uVar50,uVar50) & 0x7fffff007fffff;
            psVar93 = (short *)puVar36[(ulong)(byte)(POPCOUNT((char)uVar91) +
                                                     POPCOUNT((char)(uVar91 >> 8)) +
                                                    POPCOUNT((char)(uVar91 >> 0x10))) + 2];
            if (psVar93 != (short *)0x0) {
              psVar103 = psVar93 + 4;
              psVar93 = psVar103 + (long)*psVar93 * 4;
              goto LAB_03350fac;
            }
LAB_03350f78:
            psVar103 = (short *)0x0;
            psVar93 = (short *)0x0;
LAB_03350fac:
            do {
              uVar50 = (uint)*puVar60;
              if ((uVar50 >> 0x17 & 1) != 0) {
                if (puVar60 != (ulong *)0x0) {
                  uVar91 = CONCAT44(uVar50,uVar50) & 0x7fffff007fffff;
                  psVar61 = (short *)puVar60[(ulong)(byte)(POPCOUNT((char)uVar91) +
                                                           POPCOUNT((char)(uVar91 >> 8)) +
                                                          POPCOUNT((char)(uVar91 >> 0x10))) + 2];
                  if (psVar61 == (short *)0x0) {
LAB_03351004:
                    psVar83 = (short *)0x0;
                    psVar61 = (short *)0x0;
                  }
                  else {
                    psVar83 = psVar61 + 4;
                    psVar61 = psVar83 + (long)*psVar61 * 4;
                  }
                  goto LAB_03351008;
                }
                break;
              }
              if ((*puVar60 & 1) != 0) goto LAB_03351004;
              puVar60 = (ulong *)puVar60[1];
            } while (puVar60 != (ulong *)0x0);
            psVar61 = (short *)0x0;
            psVar83 = (short *)0x0;
LAB_03351008:
            uVar91 = (long)psVar61 - (long)psVar83;
            local_530 = (undefined8 *)&DAT_03d7702c;
            local_528 = 0;
            iVar32 = (int)(uVar91 >> 3);
            local_540 = (undefined8 **)0x0;
            local_538 = (ulong *)0x8000000000000000;
            if (iVar32 < 1) {
              uVar95 = 0;
            }
            else {
              FUN_0336143c(&local_540,(long)(uVar91 * 0x20000000) >> 0x20);
              uVar95 = (ulong)local_528;
            }
            uVar50 = iVar32 + 1;
            uVar86 = (-(ulong)(uVar50 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar50 << 1) +
                     (long)(int)uVar50;
            if (((((uint)(uVar95 << 1) < (uint)uVar86) && (-2 < iVar32)) && (uVar86 >> 0x20 == 0))
               && ((-1 < (int)uVar95 &&
                   ((-(uVar95 >> 0x1f) & 0xfffffffe00000000 | uVar95 << 1) >> 0x20 == 0)))) {
              FUN_02e8d9d0(&local_530);
            }
            if (0 < iVar32) {
              uVar95 = 0;
              do {
                for (puVar36 = *(ulong **)(psVar83 + uVar95 * 4); puVar36 != (ulong *)0x0;
                    puVar36 = (ulong *)puVar36[1]) {
                  uVar50 = (uint)*puVar36;
                  if ((uVar50 >> 0x10 & 1) != 0) {
                    uVar86 = CONCAT44(uVar50,uVar50) & 0xffff0000ffff;
                    ppuVar104 = (undefined8 **)
                                puVar36[(ulong)(byte)(POPCOUNT((char)uVar86) +
                                                     POPCOUNT((char)(uVar86 >> 8))) + 2];
                    local_300 = (undefined1  [8])ppuVar104;
                    if (ppuVar104 != (undefined8 **)0x0) {
                      uVar50 = FUN_03361550(&local_540,local_300);
                      if ((uint)local_538 == uVar50) {
                        uVar33 = uVar50;
                        if ((int)(local_538._4_4_ & 0x7fffffff) <= (int)uVar50) {
                          FUN_031d34e4(&local_540,PTR_PTR_047d1a50,(long)(int)(uVar50 + 1));
                          uVar33 = (uint)local_538;
                        }
                        local_540[(long)(int)uVar33 * 2] = ppuVar104;
                        *(int *)(local_540 + (long)(int)uVar33 * 2 + 1) = (int)uVar95;
                        local_538 = (ulong *)CONCAT44(local_538._4_4_,uVar50 + 1);
                      }
                      else {
                        *(int *)((long)local_540 + ((long)((ulong)uVar50 << 0x20) >> 0x1c) + 8) =
                             (int)uVar95;
                      }
                    }
                    goto LAB_033510b4;
                  }
                  if ((*puVar36 & 1) != 0) break;
                }
                local_300 = (undefined1  [8])0x0;
LAB_033510b4:
                uVar95 = uVar95 + 1;
              } while (uVar95 != (uVar91 >> 3 & 0xffffffff));
            }
            plVar42 = (long *)PTR_PTR_047d1a50;
            if (0 < (int)((ulong)((long)psVar93 - (long)psVar103) >> 3)) {
              uVar91 = 0;
LAB_03351180:
              for (puVar36 = *(ulong **)(psVar103 + uVar91 * 4); puVar36 != (ulong *)0x0;
                  puVar36 = (ulong *)puVar36[1]) {
                uVar50 = (uint)*puVar36;
                if ((uVar50 >> 0x10 & 1) != 0) {
                  uVar95 = CONCAT44(uVar50,uVar50) & 0xffff0000ffff;
                  piVar78 = (int *)puVar36[(ulong)(byte)(POPCOUNT((char)uVar95) +
                                                        POPCOUNT((char)(uVar95 >> 8))) + 2];
                  local_3f0 = piVar78;
                  if (piVar78 == (int *)0x0) goto LAB_033511a0;
                  lVar94 = FUN_033616ac(&local_540,&local_3f0);
                  if (lVar94 == 0) {
                    uVar33 = 0;
                    uVar50 = 0xffffffff;
                  }
                  else {
                    uVar50 = *(uint *)(lVar94 + 4);
                    uVar33 = ((int)lVar94 - (int)local_530) * 0x20000000;
                  }
                  if (-1 < (int)(uVar50 | uVar33)) goto LAB_033511a0;
                  local_308 = 1;
                  local_390 = (ulong *)0x8000008000000002;
                  local_388 = (undefined8 *)CONCAT62(local_388._2_6_,0x23);
                  local_398 = (undefined1  [8])&local_388;
                  sVar37 = strlen((char *)piVar78);
                  iVar31 = (int)sVar37;
                  iVar32 = iVar31 + 2;
                  iVar34 = 2;
                  if (0x7e < iVar31) {
                    FUN_030b4a20(local_398,PTR_PTR_047d1a50 + 0x20,(long)iVar32);
                    iVar34 = (int)local_390;
                  }
                  if (iVar34 <= (int)((long)iVar31 + 1) || iVar32 < iVar34) {
                    local_390 = (ulong *)CONCAT44(local_390._4_4_,iVar32);
                  }
                  *(char *)((long)local_398 + (long)iVar31 + 1) = '\0';
                  memmove((char *)((long)local_398 + 1),piVar78,(long)((int)local_390 + -2));
                  local_300 = local_398;
                  lVar94 = FUN_033616ac(&local_540,local_300);
                  ppuVar104 = local_540;
                  plVar42 = (long *)PTR_PTR_047d1a50;
                  if ((lVar94 == 0) || (local_540 == (undefined8 **)0x0)) goto LAB_03351490;
                  iVar32 = *(int *)(lVar94 + 4);
                  if (DAT_0488d8c8 < 4) {
                    if (DAT_046aaf68 == '\0') goto LAB_0335143c;
                  }
                  else if (DAT_046aaf68 == '\0') {
                    local_2f0 = &DAT_0488d878;
                    local_300 = (undefined1  [8])0x0;
                    local_2e8 = 4;
                    pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
                    local_2e0 = nn::os::GetThreadId(pTVar39);
                    local_2d8 = (undefined8 **)0x0;
                    local_2d0 = 0;
                    local_2b8 = 0;
                    local_2c8 = (char *)0x0;
                    local_2c0 = 0;
                    puVar36 = puVar53;
                    goto LAB_03351324;
                  }
                  local_2f0 = &DAT_0488d878;
                  local_300 = (undefined1  [8])0x0;
                  local_2e8 = 4;
                  pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
                  local_2e0 = nn::os::GetThreadId(pTVar39);
                  local_2d0 = 0;
                  local_2c8 = (char *)0x0;
                  local_2c0 = 0;
                  local_2b8 = 0;
                  local_2f8 = (undefined8 **)0x10000000000;
                  local_2b0[0]._0_1_ = '\0';
                  puVar36 = puVar53;
                  goto LAB_03351394;
                }
                if ((*puVar36 & 1) != 0) break;
              }
              local_3f0 = (int *)0x0;
              goto LAB_033511a0;
            }
LAB_03351568:
            if ((local_530 != (undefined8 *)0x0) && (*(int *)((long)local_530 + 4) != -2)) {
              (**(code **)(PTR_DAT_047d1a08 + 8))((char)plVar42[1],local_530,0);
              local_530 = (undefined8 *)&DAT_03d7702c;
              local_528 = 0;
            }
            lVar94 = (long)local_538;
            uVar91 = (ulong)local_538._4_4_;
            local_538 = (ulong *)((ulong)local_538._4_4_ << 0x20);
            if ((-1 < lVar94) && (local_540 != (undefined8 **)0x0)) {
              (**(code **)(*plVar42 + 0x20))(plVar42,local_540,uVar91 << 4);
            }
          }
          uVar91 = (ulong)*(uint *)(param_1 + 0x27);
        }
        lVar85 = lVar85 + 1;
      } while (lVar85 < (int)uVar91);
    }
    if (local_3c8 != (undefined8 *)0x0) goto LAB_033515f4;
  }
  lVar85 = (long)local_3d0;
  uVar91 = (ulong)local_3d0._4_4_;
  local_3d0 = (undefined8 **)((ulong)local_3d0._4_4_ << 0x20);
  if ((-1 < lVar85) && (local_3d8 != (undefined8 **)0x0)) {
    (**(code **)(*plVar42 + 0x20))(plVar42,local_3d8,uVar91 << 3);
  }
  if ((local_3a8 != (undefined8 *)0x0) && (*(int *)((long)local_3a8 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)plVar42[1],local_3a8,0);
    local_3a8 = (undefined8 *)&DAT_03d7702c;
    local_3a0 = 0;
  }
  lVar85 = (long)local_3b0;
  uVar91 = (ulong)local_3b0._4_4_;
  local_3b0 = (byte *)((ulong)local_3b0._4_4_ << 0x20);
  if ((-1 < lVar85) && (local_3b8 != (byte *)0x0)) {
    (**(code **)(*plVar42 + 0x20))(plVar42,local_3b8,uVar91 << 3);
  }
  plVar72 = param_1 + 0x5a;
  puVar3 = (uint *)(param_1 + 0x5b);
  lVar85 = param_1[0x27];
  uVar33 = *(uint *)(param_1 + 0x5b);
  uVar50 = uVar33;
  if ((int)uVar33 < 2) {
    uVar50 = 1;
  }
  if ((int)(*(uint *)((long)param_1 + 0x2dc) & 0x7fffffff) < (int)uVar50) {
    FUN_033277d4(plVar72,PTR_PTR_047d1a50,uVar50);
    uVar33 = *puVar3;
  }
  plVar40 = param_1 + 0x57;
  if ((int)uVar33 < (int)uVar50) {
    *puVar3 = uVar50;
    puVar56 = (undefined8 *)(*plVar72 + (long)(int)uVar33 * 0x18);
    lVar94 = (ulong)uVar50 * 0x18 + (long)(int)uVar33 * -0x18;
    do {
      *(undefined4 *)((long)puVar56 + 0x14) = 0;
      lVar94 = lVar94 + -0x18;
      *(undefined1 *)(puVar56 + 2) = 0;
      *puVar56 = 0;
      puVar56[1] = 0;
      puVar56 = puVar56 + 3;
    } while (lVar94 != 0);
  }
  else if ((int)uVar50 < (int)uVar33) {
    *puVar3 = uVar50;
  }
  puVar56 = (undefined8 *)param_1[0x5a];
  uVar67 = *(undefined8 *)param_1[0x58];
  *(undefined1 *)(puVar56 + 2) = 0;
  *puVar56 = 0;
  puVar56[1] = uVar67;
  *(undefined4 *)((long)puVar56 + 0x14) = 0;
  local_3b8 = (byte *)0x0;
  local_3b0 = (byte *)0x8000000000000000;
  (**(code **)(*param_2 + 0x18))(param_2,&local_3b8);
  if (0 < (int)local_3b0) {
    plVar2 = param_1 + 0x79;
    lVar94 = 0;
LAB_033517d0:
    pbVar77 = local_3b8;
    pbVar96 = local_3b8 + lVar94 * 0x18;
    ppuVar104 = *(undefined8 ***)pbVar96;
    if ((ppuVar104 != (undefined8 **)0x0) || (1 < *(ulong *)(local_3b8 + lVar94 * 0x18 + 8))) {
      pbVar84 = local_3b8 + lVar94 * 0x18 + 0x10;
      bVar106 = *pbVar84;
      if (bVar106 != 2) {
        if (bVar106 != 1) {
          if (bVar106 != 0) goto LAB_033524a4;
          goto LAB_0335180c;
        }
        puVar53 = *(ulong **)(local_3b8 + lVar94 * 0x18 + 8);
        iVar32 = *(int *)(local_3b8 + lVar94 * 0x18 + 0x14);
        if (puVar53 != (ulong *)0x0) {
          puVar36 = puVar53;
          do {
            uVar91 = *puVar36;
            if (((uint)uVar91 >> 2 & 1) != 0) {
              puVar56 = (undefined8 *)puVar36[(uVar91 >> 1 & 1) + (uVar91 & 1) + 2];
              goto LAB_03351a44;
            }
            puVar36 = (ulong *)puVar36[1];
          } while (puVar36 != (ulong *)0x0);
        }
        puVar56 = (undefined8 *)0x0;
LAB_03351a44:
        uVar91 = (ulong)puVar56 & 1;
        if (((ulong)puVar56 & 1) != 0) {
          piVar78 = (int *)(((ulong)puVar56 & 0xfffffffffffffffe) + 8);
          do {
            cVar9 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(piVar78,0x10);
            if (bVar29) {
              *piVar78 = *piVar78 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
        }
        local_398 = (undefined1  [8])ppuVar104;
        local_390 = puVar53;
        local_388 = puVar56;
        local_380 = iVar32;
        if (puVar53 != (ulong *)0x0) {
          iVar34 = FUN_0335a1e0(param_1,ppuVar104,puVar53);
          puVar36 = puVar53;
          while (uVar95 = *puVar36, ((uint)uVar95 >> 3 & 1) == 0) {
            if (((uVar95 & 1) != 0) || (puVar36 = (ulong *)puVar36[1], puVar36 == (ulong *)0x0))
            goto LAB_03351c3c;
          }
          if ((puVar36 != (ulong *)0x0) &&
             (puVar36[(ulong)(byte)POPCOUNT((byte)uVar95 & 7) + 2] != 0)) {
            uVar95 = *puVar53;
            puVar36 = puVar53;
            if ((uVar95 & 1) == 0) {
              do {
                puVar36 = (ulong *)puVar36[1];
              } while ((*puVar36 & 1) == 0);
            }
            if ((puVar36[2] & 0x1f) == 7) {
              uVar86 = 0;
              puVar36 = puVar53;
              if (((uint)uVar95 >> 0x15 & 1) == 0) goto LAB_03351b24;
              do {
                uVar55 = CONCAT44((int)uVar95,(int)uVar95) & 0x1fffff001fffff;
                uVar55 = puVar36[(ulong)(byte)(POPCOUNT((char)uVar55) +
                                               POPCOUNT((char)(uVar55 >> 8)) +
                                              POPCOUNT((char)(uVar55 >> 0x10))) + 2];
                while( true ) {
                  uVar86 = uVar55 | uVar86;
                  if (((uVar95 & 1) != 0) ||
                     (puVar36 = (ulong *)puVar36[1], puVar36 == (ulong *)0x0)) {
                    if (((uint)uVar86 >> 5 & 1) != 0) goto LAB_03351c3c;
                    local_2f0 = (undefined8 *)((ulong)local_2f0 & 0xffffffffffffff00);
                    local_2f8 = (undefined8 **)0x8000008000000001;
                    local_270 = 1;
                    local_300 = (undefined1  [8])&local_2f0;
                    FUN_031e12d8(puVar53,local_300,0,0);
                    uVar95 = (ulong)local_2f8;
                    local_538 = (ulong *)((long)local_300 + (long)(int)local_2f8 + -1);
                    local_540 = (undefined8 **)local_300;
                    puVar36 = puVar53;
                    goto LAB_03351c18;
                  }
                  uVar95 = *puVar36;
                  if (((uint)uVar95 >> 0x15 & 1) != 0) break;
LAB_03351b24:
                  uVar55 = 0;
                }
              } while( true );
            }
          }
LAB_03351c3c:
          puVar36 = puVar53;
          if ((*puVar53 & 1) == 0) {
            do {
              puVar36 = (ulong *)puVar36[1];
            } while ((*puVar36 & 1) == 0);
          }
          if ((puVar36[2] & 0x1f) == 6) {
            FUN_0335c714(param_1,iVar34,local_398,0);
            goto LAB_03352470;
          }
          goto LAB_0335236c;
        }
        goto LAB_03352470;
      }
LAB_0335180c:
      pbVar100 = local_3b8 + lVar94 * 0x18 + 8;
      puVar53 = *(ulong **)pbVar100;
      if (puVar53 == (ulong *)0x0) {
        local_530 = (undefined8 *)0x0;
      }
      else {
        puVar36 = puVar53;
        do {
          uVar91 = *puVar36;
          if (((uint)uVar91 >> 2 & 1) != 0) {
            local_530 = (undefined8 *)puVar36[(uVar91 >> 1 & 1) + (uVar91 & 1) + 2];
            goto LAB_03351884;
          }
          puVar36 = (ulong *)puVar36[1];
        } while (puVar36 != (ulong *)0x0);
        local_530 = (undefined8 *)0x0;
      }
LAB_03351884:
      if (((ulong)local_530 & 1) != 0) {
        piVar78 = (int *)(((ulong)local_530 & 0xfffffffffffffffe) + 8);
        do {
          cVar9 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(piVar78,0x10);
          if (bVar29) {
            *piVar78 = *piVar78 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
      }
      local_540 = ppuVar104;
      local_538 = puVar53;
      uVar50 = FUN_0335a3c0(param_1,ppuVar104);
      if (puVar53 != (ulong *)0x0) {
        puVar36 = puVar53;
        while (uVar91 = *puVar36, ((uint)uVar91 >> 3 & 1) == 0) {
          if (((uVar91 & 1) != 0) || (puVar36 = (ulong *)puVar36[1], puVar36 == (ulong *)0x0))
          goto LAB_03351d20;
        }
        if ((puVar36 != (ulong *)0x0) && (puVar36[(ulong)(byte)POPCOUNT((byte)uVar91 & 7) + 2] != 0)
           ) {
          uVar91 = *puVar53;
          puVar36 = puVar53;
          if ((uVar91 & 1) == 0) {
            do {
              puVar36 = (ulong *)puVar36[1];
            } while ((*puVar36 & 1) == 0);
          }
          if ((puVar36[2] & 0x1f) == 7) {
            uVar95 = 0;
            puVar36 = puVar53;
            if (((uint)uVar91 >> 0x15 & 1) == 0) goto LAB_03351a10;
            do {
              uVar86 = CONCAT44((int)uVar91,(int)uVar91) & 0x1fffff001fffff;
              uVar86 = puVar36[(ulong)(byte)(POPCOUNT((char)uVar86) + POPCOUNT((char)(uVar86 >> 8))
                                            + POPCOUNT((char)(uVar86 >> 0x10))) + 2];
              while( true ) {
                uVar95 = uVar86 | uVar95;
                if (((uVar91 & 1) != 0) || (puVar36 = (ulong *)puVar36[1], puVar36 == (ulong *)0x0))
                {
                  if (((uint)uVar95 >> 5 & 1) != 0) goto LAB_03351d20;
                  local_390 = (ulong *)0x8000008000000001;
                  local_308 = 1;
                  local_388 = (undefined8 *)((ulong)local_388 & 0xffffffffffffff00);
                  local_398 = (undefined1  [8])&local_388;
                  FUN_031e12d8(puVar53,local_398,0,0);
                  local_3d8 = (undefined8 **)local_398;
                  local_3d0 = (undefined8 **)((long)local_398 + (long)(int)local_390 + -1);
                  puVar36 = puVar53;
                  goto LAB_03351b9c;
                }
                uVar91 = *puVar36;
                if (((uint)uVar91 >> 0x15 & 1) != 0) break;
LAB_03351a10:
                uVar86 = 0;
              }
            } while( true );
          }
        }
        goto LAB_03351d20;
      }
      uVar50 = *(uint *)(param_1 + 0x5b);
      lVar80 = (long)(int)uVar50 + 1;
      uVar51 = (uint)lVar80;
      uVar33 = uVar50;
      if ((int)uVar50 < (int)(*(uint *)((long)param_1 + 0x2dc) & 0x7fffffff)) {
LAB_03351930:
        *puVar3 = uVar51;
        lVar80 = lVar80 * 0x18 + (long)(int)uVar33 * -0x18;
        puVar56 = (undefined8 *)(*plVar72 + (long)(int)uVar33 * 0x18);
        do {
          *(undefined4 *)((long)puVar56 + 0x14) = 0;
          lVar80 = lVar80 + -0x18;
          *(undefined1 *)(puVar56 + 2) = 0;
          *puVar56 = 0;
          puVar56[1] = 0;
          puVar56 = puVar56 + 3;
        } while (lVar80 != 0);
      }
      else {
        FUN_033277d4(plVar72,PTR_PTR_047d1a50,lVar80);
        uVar33 = *puVar3;
        if ((int)uVar33 <= (int)uVar50) goto LAB_03351930;
        if ((int)uVar51 < (int)uVar33) {
          *puVar3 = uVar51;
        }
      }
      puVar56 = (undefined8 *)(param_1[0x5a] + (long)(int)uVar50 * 0x18);
      uVar67 = *(undefined8 *)param_1[0x58];
      *puVar56 = 0;
      puVar56[1] = uVar67;
      *(undefined1 *)(puVar56 + 2) = 0;
      *(undefined4 *)((long)puVar56 + 0x14) = 0;
      plVar42 = (long *)PTR_PTR_047d1a50;
      goto LAB_03352068;
    }
    goto LAB_033524a4;
  }
LAB_03352964:
  lVar94 = (long)local_3b0;
  uVar91 = (ulong)local_3b0._4_4_;
  local_3b0 = (byte *)((ulong)local_3b0._4_4_ << 0x20);
  if ((-1 < lVar94) && (local_3b8 != (byte *)0x0)) {
    (**(code **)(*plVar42 + 0x20))(plVar42,local_3b8,uVar91 * 0x18);
  }
  if ((int)lVar85 == (int)param_1[0x27]) goto LAB_03352a6c;
  if (DAT_0488d8c8 == 0) {
    if (DAT_046aaf68 == '\0') goto LAB_03352a6c;
LAB_03354928:
    local_2f0 = &DAT_0488d878;
    local_300 = (undefined1  [8])0x0;
    local_2e8 = 1;
    pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
    local_2e0 = nn::os::GetThreadId(pTVar39);
    local_2d0 = 0;
    local_2c8 = (char *)0x0;
    local_2c0 = 0;
    local_2b8 = 0;
    local_2f8 = (undefined8 **)0x10000000000;
    local_2b0[0]._0_1_ = '\0';
    local_300 = (undefined1  [8])local_2b0;
    local_2d8 = local_2b0;
    FUN_0322c554(local_300,
                 "Types were added during versioning input handling, this usually indicates patches are not set up correctly"
                 ,PTR_DAT_047d1b38);
    local_2c0 = 0x513;
    local_2e8 = CONCAT44(0xa71bbc05,(undefined4)local_2e8);
    local_2c8 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
    ;
    if ((char)local_2b0[0] != '\0') {
      sVar37 = strlen((char *)local_2b0);
      *(undefined2 *)((long)local_2b0 + (long)(int)((int)sVar37 - (uint)((int)sVar37 == 0xff))) = 10
      ;
      printf("%s",local_2b0);
      fflush(*(FILE **)PTR_stdout_047cb860);
    }
  }
  else {
    if (DAT_046aaf68 != '\0') goto LAB_03354928;
    local_2f0 = &DAT_0488d878;
    local_300 = (undefined1  [8])0x0;
    local_2e8 = 1;
    pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
    local_2e0 = nn::os::GetThreadId(pTVar39);
    local_2d8 = (undefined8 **)0x0;
    local_2d0 = 0;
    local_2c8 = (char *)0x0;
    local_2c0 = 0;
    local_2b8 = 0;
    FUN_0322c554(local_300,
                 "Types were added during versioning input handling, this usually indicates patches are not set up correctly"
                 ,PTR_DAT_047d1b38);
    local_2c0 = 0x513;
    local_2c8 = 
    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
    ;
    local_2e8 = CONCAT44(0xa71bbc05,(undefined4)local_2e8);
    FUN_0322c8e0(local_300);
  }
  if (((ulong)local_2d8 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_2d8 + -1),0);
  }
LAB_03352a6c:
  if (iVar30 != 0) {
    pFVar54 = *(FILE **)PTR_stdout_047cb860;
    puVar82 = PTR_DAT_047e34b8 + 0x10;
    piVar78 = local_5e0;
    auVar15 = _local_300;
    do {
      puVar53 = *(ulong **)(*(long *)(*plVar98 + 0x98) + (long)*piVar78 * 8);
      local_3f0 = (int *)0x0;
      local_3e8 = (char *)0x8000000000000000;
      local_300 = (undefined1  [8])*puVar53;
      local_2f8 = (undefined8 **)puVar53[1];
      if (local_300 == (undefined1  [8])local_2f8) {
LAB_033543a8:
        uVar52 = 0;
      }
      else {
        FUN_0335fce4(param_1,local_300,(int)puVar53[4],&local_3f0);
        auVar15._8_8_ = local_2f8;
        auVar15._0_8_ = local_300;
        if ((int)local_3e8 == 0) goto LAB_033543a8;
        piVar71 = local_3f0 + (int)local_3e8;
        uVar76 = 0;
        uVar52 = 0;
        piVar59 = local_3f0;
        do {
          lVar85 = *(long *)(param_1[0x26] + (long)*piVar59 * 8);
          puVar36 = *(ulong **)(lVar85 + 0x50);
          local_398 = (undefined1  [8])0x0;
          local_380 = 0;
          local_390 = (ulong *)0x8000000000000000;
          local_388 = (undefined8 *)&DAT_03d7702c;
          local_378 = puVar53;
          FUN_0334026c(local_398,puVar53);
          if (0 < (int)puVar53[6]) {
            lVar94 = 0;
            uVar101 = uVar52;
            uVar102 = uVar76;
            do {
              puVar27 = PTR_PTR_047d1a50;
              uVar99 = 0x80040200;
              uVar91 = puVar53[5];
              uVar52 = uVar99;
              switch(*(undefined1 *)(uVar91 + lVar94 * 0x10)) {
              case 1:
                if (*(long *)(uVar91 + lVar94 * 0x10 + 8) == 0) break;
                iVar32 = FUN_03363250(puVar53,lVar85,puVar36);
LAB_033530b4:
                if (-1 < iVar32) {
                  uVar52 = uVar101;
                }
                uVar76 = uVar52;
                goto LAB_033540b4;
              case 2:
                if (*(long *)(uVar91 + lVar94 * 0x10 + 8) != 0) {
                  iVar32 = FUN_03362f80(puVar53,puVar36);
                  goto LAB_033530b4;
                }
                break;
              case 3:
                lVar80 = *(long *)(uVar91 + lVar94 * 0x10 + 8);
                if (lVar80 != 0) {
                  iVar32 = FUN_03363850(puVar53,puVar36,lVar80,lVar80 + 0x10);
                  goto LAB_033530b4;
                }
                break;
              case 4:
              case 7:
              case 0xe:
              case 0xf:
              case 0x13:
                uVar52 = uVar101;
                uVar76 = uVar102;
                if (*(long *)(uVar91 + lVar94 * 0x10 + 8) != 0) goto LAB_033540b4;
                break;
              case 8:
                plVar72 = *(long **)(uVar91 + lVar94 * 0x10 + 8);
                if (plVar72 != (long *)0x0) {
                  if ((*plVar72 != plVar72[1]) && (*(int *)(lVar85 + 0xb0) != 0)) {
                    lVar88 = (long)*(int *)(lVar85 + 0xb0) * 0xc;
                    lVar87 = *(long *)(lVar85 + 0xa8);
                    lVar80 = **(long **)(lVar85 + 0x38) + 0xa8;
                    do {
                      lVar47 = FUN_0336f75c(lVar80,lVar87);
                      if (lVar47 != 0) {
                        FUN_0336f7f0(lVar80,lVar47);
                      }
                      lVar87 = lVar87 + 0xc;
                      lVar88 = lVar88 + -0xc;
                    } while (lVar88 != 0);
                  }
                  uVar52 = uVar102;
                  if ((plVar72[2] != plVar72[3]) &&
                     (uVar52 = 0x80040200, 1 < *(int *)(lVar85 + 0x40))) {
                    lVar80 = (*(long **)(lVar85 + 0x38))[1];
                    if (((char)plVar72[4] == '\0') ||
                       (lVar87 = **(long **)(lVar85 + 0x38), lVar87 == 0)) {
LAB_03353adc:
                      lVar105 = 0;
                      uVar91 = 0;
                      bVar29 = true;
                    }
                    else {
                      if (lVar80 == 0) {
                        do {
                          if (*(int *)(lVar87 + 0x40) < 1) break;
                          lVar87 = **(long **)(lVar87 + 0x38);
                        } while (lVar87 != 0);
                        goto LAB_03353adc;
                      }
                      do {
                        lVar88 = lVar80;
                        do {
                          lVar105 = lVar88;
                          lVar47 = lVar105;
                          if (lVar105 != lVar87) {
                            lVar47 = 0;
                          }
                        } while (((0 < *(int *)(lVar105 + 0x40)) && (lVar47 == 0)) &&
                                (lVar88 = **(long **)(lVar105 + 0x38),
                                **(long **)(lVar105 + 0x38) != 0));
                      } while ((0 < *(int *)(lVar87 + 0x40)) &&
                              (lVar87 = **(long **)(lVar87 + 0x38), lVar47 == 0 && lVar87 != 0));
                      if (lVar47 == 0) goto LAB_03353adc;
                      puVar60 = *(ulong **)(lVar47 + 0x50);
                      while( true ) {
                        uVar50 = (uint)*puVar60;
                        if ((uVar50 >> 0x14 & 1) != 0) break;
                        if (((*puVar60 & 1) != 0) ||
                           (puVar60 = (ulong *)puVar60[1], puVar60 == (ulong *)0x0))
                        goto LAB_033540f8;
                      }
                      if (puVar60 != (ulong *)0x0) {
                        uVar50 = uVar50 & 0xfffff;
                        uVar91 = (ulong)(ushort)puVar60[(ulong)(byte)(POPCOUNT((char)uVar50) +
                                                                      POPCOUNT((char)(uVar50 >> 8))
                                                                     + POPCOUNT((char)(uVar50 >>
                                                                                      0x10))) + 2];
                        bVar29 = false;
                        goto LAB_03353ae8;
                      }
LAB_033540f8:
                      bVar29 = false;
                      uVar91 = 0;
                    }
LAB_03353ae8:
                    local_400 = (undefined8 **)0x0;
                    local_3f8 = (char *)0x8000000000000000;
                    FUN_033691e0(lVar85,&local_400);
                    if ((int)local_3f8 != 0) {
                      ppuVar79 = local_400 + (long)(int)local_3f8 * 3;
                      iVar32 = (int)uVar91;
                      ppuVar104 = local_400;
                      if (bVar29) {
                        do {
                          local_300 = (undefined1  [8])*ppuVar104;
                          local_2f8 = *(undefined8 ***)(lVar80 + 0x50);
                          if (local_2f8 == (undefined8 **)0x0) {
                            local_2f0 = (undefined8 *)0x0;
                          }
                          else {
                            ppuVar73 = local_2f8;
                            do {
                              puVar56 = *ppuVar73;
                              if (((uint)puVar56 >> 2 & 1) != 0) {
                                local_2f0 = ppuVar73[((ulong)puVar56 >> 1 & 1) +
                                                     ((ulong)puVar56 & 1) + 2];
                                goto LAB_03353b60;
                              }
                              ppuVar73 = (undefined8 **)ppuVar73[1];
                            } while (ppuVar73 != (undefined8 **)0x0);
                            local_2f0 = (undefined8 *)0x0;
                          }
LAB_03353b60:
                          if (((ulong)local_2f0 & 1) != 0) {
                            piVar48 = (int *)(((ulong)local_2f0 & 0xfffffffffffffffe) + 8);
                            do {
                              cVar9 = '\x01';
                              bVar29 = (bool)ExclusiveMonitorPass(piVar48,0x10);
                              if (bVar29) {
                                *piVar48 = *piVar48 + 1;
                                cVar9 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar9 != '\0');
                          }
                          ppuVar73 = local_2f8;
                          do {
                            uVar50 = (uint)*ppuVar73;
                            if ((uVar50 >> 0x14 & 1) != 0) {
                              uVar33 = 0;
                              if (ppuVar73 != (undefined8 **)0x0) {
                                uVar50 = uVar50 & 0xfffff;
                                uVar33 = (uint)*(ushort *)
                                                (ppuVar73 +
                                                (ulong)(byte)(POPCOUNT((char)uVar50) +
                                                              POPCOUNT((char)(uVar50 >> 8)) +
                                                             POPCOUNT((char)(uVar50 >> 0x10))) + 2);
                              }
                              goto LAB_03353bcc;
                            }
                            if (((ulong)*ppuVar73 & 1) != 0) {
                              uVar33 = 0;
                              goto LAB_03353bcc;
                            }
                            ppuVar73 = (undefined8 **)ppuVar73[1];
                          } while (ppuVar73 != (undefined8 **)0x0);
                          uVar33 = 0;
LAB_03353bcc:
                          memset((char *)((long)local_300 + uVar91),0,(long)(int)(uVar33 - iVar32));
                          FUN_031e66c8(&local_540,local_300,1);
                          if (((ulong)local_2f0 & 1) != 0) {
                            plVar42 = (long *)((ulong)local_2f0 & 0xfffffffffffffffe);
                            plVar72 = plVar42 + 1;
                            do {
                              lVar87 = *plVar72;
                              cVar9 = '\x01';
                              bVar29 = (bool)ExclusiveMonitorPass(plVar72,0x10);
                              if (bVar29) {
                                *(int *)plVar72 = (int)lVar87 + -1;
                                cVar9 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar9 != '\0');
                            if ((plVar42 != (long *)0x0) && ((int)lVar87 == 1)) {
                              (**(code **)(*plVar42 + 8))();
                            }
                          }
                          ppuVar104 = ppuVar104 + 3;
                        } while (ppuVar104 != ppuVar79);
                      }
                      else if (lVar80 == lVar105) {
                        do {
                          local_300 = (undefined1  [8])*ppuVar104;
                          local_2f8 = *(undefined8 ***)(lVar80 + 0x50);
                          if (local_2f8 == (undefined8 **)0x0) {
                            local_2f0 = (undefined8 *)0x0;
                          }
                          else {
                            ppuVar73 = local_2f8;
                            do {
                              puVar56 = *ppuVar73;
                              if (((uint)puVar56 >> 2 & 1) != 0) {
                                local_2f0 = ppuVar73[((ulong)puVar56 >> 1 & 1) +
                                                     ((ulong)puVar56 & 1) + 2];
                                goto LAB_03353e44;
                              }
                              ppuVar73 = (undefined8 **)ppuVar73[1];
                            } while (ppuVar73 != (undefined8 **)0x0);
                            local_2f0 = (undefined8 *)0x0;
                          }
LAB_03353e44:
                          if (((ulong)local_2f0 & 1) != 0) {
                            piVar48 = (int *)(((ulong)local_2f0 & 0xfffffffffffffffe) + 8);
                            do {
                              cVar9 = '\x01';
                              bVar29 = (bool)ExclusiveMonitorPass(piVar48,0x10);
                              if (bVar29) {
                                *piVar48 = *piVar48 + 1;
                                cVar9 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar9 != '\0');
                          }
                          ppuVar73 = local_2f8;
                          do {
                            uVar50 = (uint)*ppuVar73;
                            if ((uVar50 >> 0x14 & 1) != 0) {
                              uVar33 = 0;
                              if (ppuVar73 != (undefined8 **)0x0) {
                                uVar50 = uVar50 & 0xfffff;
                                uVar33 = (uint)*(ushort *)
                                                (ppuVar73 +
                                                (ulong)(byte)(POPCOUNT((char)uVar50) +
                                                              POPCOUNT((char)(uVar50 >> 8)) +
                                                             POPCOUNT((char)(uVar50 >> 0x10))) + 2);
                              }
                              goto LAB_03353eb0;
                            }
                            if (((ulong)*ppuVar73 & 1) != 0) {
                              uVar33 = 0;
                              goto LAB_03353eb0;
                            }
                            ppuVar73 = (undefined8 **)ppuVar73[1];
                          } while (ppuVar73 != (undefined8 **)0x0);
                          uVar33 = 0;
LAB_03353eb0:
                          memset((char *)((long)local_300 + uVar91),0,(long)(int)(uVar33 - iVar32));
                          if (((ulong)local_2f0 & 1) != 0) {
                            plVar42 = (long *)((ulong)local_2f0 & 0xfffffffffffffffe);
                            plVar72 = plVar42 + 1;
                            do {
                              lVar87 = *plVar72;
                              cVar9 = '\x01';
                              bVar29 = (bool)ExclusiveMonitorPass(plVar72,0x10);
                              if (bVar29) {
                                *(int *)plVar72 = (int)lVar87 + -1;
                                cVar9 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar9 != '\0');
                            if ((plVar42 != (long *)0x0) && ((int)lVar87 == 1)) {
                              (**(code **)(*plVar42 + 8))();
                            }
                          }
                          ppuVar104 = ppuVar104 + 3;
                        } while (ppuVar104 != ppuVar79);
                      }
                      else {
                        do {
                          local_300 = (undefined1  [8])*ppuVar104;
                          local_2f8 = *(undefined8 ***)(lVar80 + 0x50);
                          if (local_2f8 == (undefined8 **)0x0) {
                            local_2f0 = (undefined8 *)0x0;
                          }
                          else {
                            ppuVar73 = local_2f8;
                            do {
                              puVar56 = *ppuVar73;
                              if (((uint)puVar56 >> 2 & 1) != 0) {
                                local_2f0 = ppuVar73[((ulong)puVar56 >> 1 & 1) +
                                                     ((ulong)puVar56 & 1) + 2];
                                goto LAB_03353c84;
                              }
                              ppuVar73 = (undefined8 **)ppuVar73[1];
                            } while (ppuVar73 != (undefined8 **)0x0);
                            local_2f0 = (undefined8 *)0x0;
                          }
LAB_03353c84:
                          if (((ulong)local_2f0 & 1) != 0) {
                            piVar48 = (int *)(((ulong)local_2f0 & 0xfffffffffffffffe) + 8);
                            do {
                              cVar9 = '\x01';
                              bVar29 = (bool)ExclusiveMonitorPass(piVar48,0x10);
                              if (bVar29) {
                                *piVar48 = *piVar48 + 1;
                                cVar9 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar9 != '\0');
                          }
                          ppuVar73 = local_2f8;
                          do {
                            uVar50 = (uint)*ppuVar73;
                            if ((uVar50 >> 0x14 & 1) != 0) {
                              uVar33 = 0;
                              if (ppuVar73 != (undefined8 **)0x0) {
                                uVar50 = uVar50 & 0xfffff;
                                uVar33 = (uint)*(ushort *)
                                                (ppuVar73 +
                                                (ulong)(byte)(POPCOUNT((char)uVar50) +
                                                              POPCOUNT((char)(uVar50 >> 8)) +
                                                             POPCOUNT((char)(uVar50 >> 0x10))) + 2);
                              }
                              goto LAB_03353cf0;
                            }
                            if (((ulong)*ppuVar73 & 1) != 0) {
                              uVar33 = 0;
                              goto LAB_03353cf0;
                            }
                            ppuVar73 = (undefined8 **)ppuVar73[1];
                          } while (ppuVar73 != (undefined8 **)0x0);
                          uVar33 = 0;
LAB_03353cf0:
                          memset((char *)((long)local_300 + uVar91),0,(long)(int)(uVar33 - iVar32));
                          lVar87 = lVar80;
                          do {
                            local_540 = (undefined8 **)*ppuVar104;
                            local_538 = *(ulong **)(lVar87 + 0x50);
                            local_530 = (undefined8 *)0x0;
                            puVar60 = local_538;
                            if (local_538 != (ulong *)0x0) {
                              do {
                                uVar95 = *puVar60;
                                if (((uint)uVar95 >> 2 & 1) != 0) {
                                  local_530 = (undefined8 *)
                                              puVar60[(uVar95 >> 1 & 1) + (uVar95 & 1) + 2];
                                  goto LAB_03353d3c;
                                }
                                puVar60 = (ulong *)puVar60[1];
                              } while (puVar60 != (ulong *)0x0);
                              local_530 = (undefined8 *)0x0;
                            }
LAB_03353d3c:
                            if (((ulong)local_530 & 1) != 0) {
                              piVar48 = (int *)(((ulong)local_530 & 0xfffffffffffffffe) + 8);
                              do {
                                cVar9 = '\x01';
                                bVar29 = (bool)ExclusiveMonitorPass(piVar48,0x10);
                                if (bVar29) {
                                  *piVar48 = *piVar48 + 1;
                                  cVar9 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar9 != '\0');
                            }
                            FUN_031e66c8(&local_418,&local_540,0);
                            if (((ulong)local_530 & 1) != 0) {
                              plVar42 = (long *)((ulong)local_530 & 0xfffffffffffffffe);
                              plVar72 = plVar42 + 1;
                              do {
                                lVar88 = *plVar72;
                                cVar9 = '\x01';
                                bVar29 = (bool)ExclusiveMonitorPass(plVar72,0x10);
                                if (bVar29) {
                                  *(int *)plVar72 = (int)lVar88 + -1;
                                  cVar9 = ExclusiveMonitorsStatus();
                                }
                              } while (cVar9 != '\0');
                              if ((plVar42 != (long *)0x0) && ((int)lVar88 == 1)) {
                                (**(code **)(*plVar42 + 8))();
                              }
                            }
                            lVar87 = **(long **)(lVar87 + 0x38);
                          } while (lVar87 != lVar105);
                          if (((ulong)local_2f0 & 1) != 0) {
                            plVar42 = (long *)((ulong)local_2f0 & 0xfffffffffffffffe);
                            plVar72 = plVar42 + 1;
                            do {
                              lVar87 = *plVar72;
                              cVar9 = '\x01';
                              bVar29 = (bool)ExclusiveMonitorPass(plVar72,0x10);
                              if (bVar29) {
                                *(int *)plVar72 = (int)lVar87 + -1;
                                cVar9 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar9 != '\0');
                            if ((plVar42 != (long *)0x0) && ((int)lVar87 == 1)) {
                              (**(code **)(*plVar42 + 8))();
                            }
                          }
                          ppuVar104 = ppuVar104 + 3;
                        } while (ppuVar104 != ppuVar79);
                      }
                    }
                    if (*(int *)(lVar85 + 0xb0) != 0) {
                      lVar87 = *(long *)(lVar85 + 0xa8);
                      lVar88 = (long)*(int *)(lVar85 + 0xb0) * 0xc;
                      do {
                        FUN_0336f418(lVar80 + 0xa8,lVar87);
                        lVar87 = lVar87 + 0xc;
                        lVar88 = lVar88 + -0xc;
                      } while (lVar88 != 0);
                    }
                    ppuVar104 = local_400;
                    if ((int)local_3f8 != 0) {
                      ppuVar79 = local_400 + (long)(int)local_3f8 * 3;
                      do {
                        ppuVar73 = ppuVar79 + -1;
                        ppuVar79 = ppuVar79 + -3;
                        if (((ulong)*ppuVar73 & 1) != 0) {
                          plVar42 = (long *)((ulong)*ppuVar73 & 0xfffffffffffffffe);
                          plVar72 = plVar42 + 1;
                          do {
                            lVar80 = *plVar72;
                            cVar9 = '\x01';
                            bVar29 = (bool)ExclusiveMonitorPass(plVar72,0x10);
                            if (bVar29) {
                              *(int *)plVar72 = (int)lVar80 + -1;
                              cVar9 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar9 != '\0');
                          if ((plVar42 != (long *)0x0) && ((int)lVar80 == 1)) {
                            (**(code **)(*plVar42 + 8))();
                          }
                        }
                      } while (ppuVar79 != ppuVar104);
                    }
                    lVar80 = (long)local_3f8;
                    uVar91 = (ulong)local_3f8._4_4_;
                    local_3f8 = (char *)((ulong)local_3f8._4_4_ << 0x20);
                    uVar52 = uVar102;
                    if ((-1 < lVar80) && (local_400 != (undefined8 **)0x0)) {
                      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                                (PTR_PTR_047d1a50 + 0x20,local_400,uVar91 * 0x18);
                    }
                  }
                  lVar80 = (long)*(int *)(lVar85 + 0x40) + -1;
                  iVar32 = (int)lVar80;
                  *(int *)(lVar85 + 0x40) = iVar32;
                  uVar76 = uVar52;
                  if (iVar32 != 0) {
                    uVar91 = lVar80 * 8;
                    if (uVar91 < 9) {
                      uVar91 = 8;
                    }
                    lVar80 = *(long *)(lVar85 + 0x38);
                    uVar95 = (uVar91 - 1 >> 3) + 1;
                    uVar86 = uVar95 & 7;
                    if (uVar91 - 1 < 0x38) {
                      uVar91 = 0;
                    }
                    else {
                      uVar91 = 0;
                      puVar56 = (undefined8 *)(lVar80 + 0x20);
                      do {
                        uVar91 = uVar91 + 8;
                        puVar56[-4] = puVar56[-3];
                        puVar56[-3] = puVar56[-2];
                        uVar67 = *puVar56;
                        *puVar56 = puVar56[1];
                        puVar56[-2] = puVar56[-1];
                        puVar56[-1] = uVar67;
                        puVar56[1] = puVar56[2];
                        puVar56[2] = puVar56[3];
                        puVar56[3] = puVar56[4];
                        puVar56 = puVar56 + 8;
                      } while ((uVar95 & 0x3ffffffffffffff8) != uVar91);
                    }
                    if (uVar86 != 0) {
                      lVar87 = -uVar86;
                      puVar56 = (undefined8 *)(lVar80 + uVar91 * 8);
                      do {
                        *puVar56 = puVar56[1];
                        bVar29 = lVar87 != -1;
                        lVar87 = lVar87 + 1;
                        puVar56 = puVar56 + 1;
                      } while (bVar29);
                    }
                    if ((0 < *(int *)(lVar85 + 0x40)) && (**(long **)(lVar85 + 0x38) != 0)) {
                      *(undefined8 *)(*(long *)(lVar85 + 0x50) + 8) =
                           *(undefined8 *)(**(long **)(lVar85 + 0x38) + 0x50);
                      goto LAB_033540b4;
                    }
                  }
                  *(undefined8 *)(*(long *)(lVar85 + 0x50) + 8) = 0;
                  goto LAB_033540b4;
                }
                break;
              case 9:
                lVar80 = *(long *)(uVar91 + lVar94 * 0x10 + 8);
                if (lVar80 == 0) break;
                local_3e0 = (undefined1  [8])CONCAT44(local_3e0._4_4_,0x80040278);
                if (*(long *)(lVar80 + 0x10) != 0) {
                  local_300 = (undefined1  [8])0x0;
                  local_2f8 = (undefined8 **)0x8000000000000000;
                  FUN_033691e0(lVar85,local_300);
                  param_1[0x45] = (long)local_398;
                  if ((int)local_2f8 != 0) {
                    ppuVar104 = (undefined8 **)((long)local_300 + (long)(int)local_2f8 * 3 * 8);
                    auVar64 = local_300;
                    do {
                      local_3b8 = *(byte **)auVar64;
                      local_3b0 = *(byte **)((long)auVar64 + 8);
                      pcVar63 = *(code **)(lVar80 + 0x10);
                      local_3a8 = *(undefined8 **)((long)auVar64 + 0x10);
                      if (((ulong)local_3a8 & 1) != 0) {
                        piVar48 = (int *)(((ulong)local_3a8 & 0xfffffffffffffffe) + 8);
                        do {
                          cVar9 = '\x01';
                          bVar29 = (bool)ExclusiveMonitorPass(piVar48,0x10);
                          if (bVar29) {
                            *piVar48 = *piVar48 + 1;
                            cVar9 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar9 != '\0');
                      }
                      (*pcVar63)(&local_3b8,param_1 + 0x43);
                      if (((ulong)local_3a8 & 1) != 0) {
                        plVar42 = (long *)((ulong)local_3a8 & 0xfffffffffffffffe);
                        plVar72 = plVar42 + 1;
                        do {
                          lVar87 = *plVar72;
                          cVar9 = '\x01';
                          bVar29 = (bool)ExclusiveMonitorPass(plVar72,0x10);
                          if (bVar29) {
                            *(int *)plVar72 = (int)lVar87 + -1;
                            cVar9 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar9 != '\0');
                        if ((plVar42 != (long *)0x0) && ((int)lVar87 == 1)) {
                          (**(code **)(*plVar42 + 8))();
                        }
                      }
                      auVar28 = local_300;
                      auVar64 = (undefined1  [8])((long)auVar64 + 0x18);
                    } while (auVar64 != (undefined1  [8])ppuVar104);
                    if ((int)local_2f8 != 0) {
                      ppuVar104 = (undefined8 **)((long)local_300 + (long)(int)local_2f8 * 3 * 8);
                      do {
                        ppuVar79 = ppuVar104 + -1;
                        ppuVar104 = ppuVar104 + -3;
                        if (((ulong)*ppuVar79 & 1) != 0) {
                          plVar42 = (long *)((ulong)*ppuVar79 & 0xfffffffffffffffe);
                          plVar72 = plVar42 + 1;
                          do {
                            lVar80 = *plVar72;
                            cVar9 = '\x01';
                            bVar29 = (bool)ExclusiveMonitorPass(plVar72,0x10);
                            if (bVar29) {
                              *(int *)plVar72 = (int)lVar80 + -1;
                              cVar9 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar9 != '\0');
                          if ((plVar42 != (long *)0x0) && ((int)lVar80 == 1)) {
                            (**(code **)(*plVar42 + 8))();
                          }
                        }
                      } while ((undefined1  [8])ppuVar104 != auVar28);
                    }
                  }
                  uVar91 = (ulong)local_2f8;
                  uVar50 = local_2f8._4_4_;
                  local_2f8 = (undefined8 **)((ulong)local_2f8._4_4_ << 0x20);
                  if (((long)uVar91 < 0) || (auVar64 = local_300, local_300 == (undefined1  [8])0x0)
                     ) goto LAB_03353ad0;
LAB_03353ab4:
                  (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                            (PTR_PTR_047d1a50 + 0x20,auVar64,(ulong)uVar50 * 0x18);
                  goto LAB_03353ad0;
                }
                if (DAT_0488d8c8 == 0) {
                  if ((local_388 != (undefined8 *)0x0) && (*(int *)((long)local_388 + 4) != -2)) {
                    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_388,0);
                    local_388 = (undefined8 *)&DAT_03d7702c;
                    local_380 = 0;
                  }
                  auVar64 = local_398;
                  if ((int)local_390 != 0) {
                    lVar85 = (long)(int)local_390 << 4;
                    do {
                      uVar91 = *(ulong *)((long)auVar64 + lVar85 + -0x10);
                      if ((uVar91 & 1) != 0) {
                        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar91 - 1,0);
                      }
                      lVar85 = lVar85 + -0x10;
                    } while (lVar85 != 0);
                  }
                }
                else {
                  local_2f0 = &DAT_0488d878;
                  local_300 = (undefined1  [8])0x0;
                  local_2e8 = 1;
                  pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
                  local_2e0 = nn::os::GetThreadId(pTVar39);
                  local_2b8 = 0;
                  local_2d8 = (undefined8 **)0x0;
                  local_2d0 = 0;
                  local_2c8 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
                  ;
                  local_2c0 = 0xa76;
                  FUN_0322c554(local_300,"HK_RETURN_RES_IF_NULL({}) returning {}. ",&DAT_047ad368,
                               "varPatch->function",&local_3e0);
                  local_540 = (undefined8 **)*puVar53;
                  local_538 = (ulong *)puVar53[1];
                  local_418 = CONCAT44(local_418._4_4_,(int)puVar53[4]);
                  local_400 = (undefined8 **)puVar53[2];
                  local_3f8 = (char *)puVar53[3];
                  local_404 = *(int *)((long)puVar53 + 0x24);
                  FUN_0322c554(local_300,"Patching {}:{} -> {}:{} not supported",PTR_DAT_047e6748,
                               &local_540,&local_418,&local_400,&local_404);
                  FUN_0322c8e0(local_300);
                  if (((ulong)local_2d8 & 1) != 0) {
                    (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_2d8 + -1),0);
                  }
                  if ((local_388 != (undefined8 *)0x0) && (*(int *)((long)local_388 + 4) != -2)) {
                    (**(code **)(PTR_DAT_047d1a08 + 8))(puVar27[8],local_388,0);
                    local_388 = (undefined8 *)&DAT_03d7702c;
                    local_380 = 0;
                  }
                  auVar64 = local_398;
                  if ((int)local_390 != 0) {
                    lVar85 = (long)(int)local_390 << 4;
                    do {
                      uVar91 = *(ulong *)((long)auVar64 + lVar85 + -0x10);
                      if ((uVar91 & 1) != 0) {
                        (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar91 - 1,0);
                      }
                      lVar85 = lVar85 + -0x10;
                    } while (lVar85 != 0);
                  }
                }
                uVar95 = (ulong)local_390;
                plVar42 = (long *)PTR_PTR_047d1a50;
                auVar16._8_8_ = local_2f8;
                auVar16._0_8_ = local_300;
                uVar91 = (ulong)local_390 >> 0x20;
                local_390 = (ulong *)(uVar91 << 0x20);
                auVar18._8_8_ = local_390;
                auVar18._0_8_ = local_398;
                if (-1 < (long)uVar95) {
                  _local_300 = auVar16;
                  _local_398 = auVar18;
                  if (local_398 != (undefined1  [8])0x0) {
                    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                              (PTR_PTR_047d1a50,local_398,uVar91 << 4);
                  }
                }
                goto LAB_033543b0;
              case 0xd:
                puVar56 = *(undefined8 **)(uVar91 + lVar94 * 0x10 + 8);
                if (puVar56 != (undefined8 *)0x0) {
                  local_2f8 = (undefined8 **)0x8000008000000000;
                  local_270 = 1;
                  local_300 = (undefined1  [8])&local_2f0;
                  FUN_031c6afc(local_300,*puVar56,*(int *)(puVar56 + 1) - (int)*puVar56);
                  iVar35 = (int)local_2f8;
                  lVar80 = (long)(int)local_2f8;
                  iVar32 = (int)local_2f8 + 3;
                  iVar31 = (local_2f8._4_4_ & 0x7fffffff) - 1;
                  iVar34 = iVar32;
                  if (iVar31 <= iVar32) {
                    iVar34 = iVar31;
                  }
                  if (local_270 != 0) {
                    iVar34 = iVar32;
                  }
                  iVar32 = iVar34 + 1;
                  if ((int)(local_2f8._4_4_ & 0x7fffffff) <= iVar34) {
                    FUN_030b4a20(local_300,PTR_PTR_047d1a50 + 0x20,(long)iVar32);
                  }
                  if (((int)local_2f8 <= iVar34) || (iVar32 < (int)local_2f8)) {
                    local_2f8 = (undefined8 **)CONCAT44(local_2f8._4_4_,iVar32);
                  }
                  *(char *)((long)local_300 + (long)iVar34) = '\0';
                  memcpy((char *)((long)local_300 + lVar80 + -1),&DAT_03c60765,
                         (long)((int)local_2f8 - iVar35));
                  FUN_031ca554(&local_418,*puVar56,puVar56[1]);
                  uVar91 = local_418;
                  ppuVar104 = (undefined8 **)(local_418 & 0xfffffffffffffffe);
                  if (ppuVar104 == (undefined8 **)0x0) {
                    iVar32 = 0;
                  }
                  else {
                    sVar37 = strlen((char *)ppuVar104);
                    iVar32 = (int)sVar37;
                  }
                  puVar27 = PTR_PTR_047d1a50;
                  local_538 = (ulong *)((long)ppuVar104 + (long)iVar32);
                  local_400 = (undefined8 **)local_300;
                  local_3f8 = (char *)((long)local_300 + (long)(int)local_2f8 + -1);
                  local_540 = ppuVar104;
                  iVar32 = FUN_03363850(puVar53,puVar36,&local_540,&local_400);
                  if (iVar32 < 0) {
LAB_033537d4:
                    uVar52 = 0x80040200;
                  }
                  else {
                    if (ppuVar104 == (undefined8 **)0x0) {
                      iVar32 = 0;
                    }
                    else {
                      sVar37 = strlen((char *)ppuVar104);
                      iVar32 = (int)sVar37;
                    }
                    local_538 = (ulong *)((long)ppuVar104 + (long)iVar32);
                    local_540 = ppuVar104;
                    iVar32 = FUN_03363250(puVar53,lVar85,puVar36,&local_540);
                    if (iVar32 < 0) goto LAB_033537d4;
                    local_540 = (undefined8 **)0x0;
                    local_538 = (ulong *)0x8000000000000000;
                    FUN_033691e0(lVar85,&local_540);
                    param_1[0x45] = (long)local_398;
                    if ((uint)local_538 != 0) {
                      ppuVar79 = local_540 + (long)(int)(uint)local_538 * 3;
                      ppuVar104 = local_540;
                      do {
                        local_3d8 = (undefined8 **)*ppuVar104;
                        local_3d0 = (undefined8 **)ppuVar104[1];
                        pcVar63 = (code *)puVar56[6];
                        local_3c8 = ppuVar104[2];
                        if (((ulong)local_3c8 & 1) != 0) {
                          piVar48 = (int *)(((ulong)local_3c8 & 0xfffffffffffffffe) + 8);
                          do {
                            cVar9 = '\x01';
                            bVar29 = (bool)ExclusiveMonitorPass(piVar48,0x10);
                            if (bVar29) {
                              *piVar48 = *piVar48 + 1;
                              cVar9 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar9 != '\0');
                        }
                        (*pcVar63)(&local_3d8,param_1 + 0x43,local_300,
                                   local_418 & 0xfffffffffffffffe);
                        if (((ulong)local_3c8 & 1) != 0) {
                          plVar42 = (long *)((ulong)local_3c8 & 0xfffffffffffffffe);
                          plVar72 = plVar42 + 1;
                          do {
                            lVar80 = *plVar72;
                            cVar9 = '\x01';
                            bVar29 = (bool)ExclusiveMonitorPass(plVar72,0x10);
                            if (bVar29) {
                              *(int *)plVar72 = (int)lVar80 + -1;
                              cVar9 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar9 != '\0');
                          if ((plVar42 != (long *)0x0) && ((int)lVar80 == 1)) {
                            (**(code **)(*plVar42 + 8))();
                          }
                        }
                        ppuVar104 = ppuVar104 + 3;
                      } while (ppuVar104 != ppuVar79);
                    }
                    local_400 = (undefined8 **)local_300;
                    local_3f8 = (char *)((long)local_300 + (long)(int)local_2f8 + -1);
                    iVar32 = FUN_03362f80(puVar53,puVar36,&local_400);
                    ppuVar104 = local_540;
                    if (-1 < iVar32) {
                      uVar52 = uVar101;
                    }
                    if ((uint)local_538 != 0) {
                      ppuVar79 = local_540 + (long)(int)(uint)local_538 * 3;
                      do {
                        ppuVar73 = ppuVar79 + -1;
                        ppuVar79 = ppuVar79 + -3;
                        if (((ulong)*ppuVar73 & 1) != 0) {
                          plVar42 = (long *)((ulong)*ppuVar73 & 0xfffffffffffffffe);
                          plVar72 = plVar42 + 1;
                          do {
                            lVar80 = *plVar72;
                            cVar9 = '\x01';
                            bVar29 = (bool)ExclusiveMonitorPass(plVar72,0x10);
                            if (bVar29) {
                              *(int *)plVar72 = (int)lVar80 + -1;
                              cVar9 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar9 != '\0');
                          if ((plVar42 != (long *)0x0) && ((int)lVar80 == 1)) {
                            (**(code **)(*plVar42 + 8))();
                          }
                        }
                      } while (ppuVar79 != ppuVar104);
                    }
                    uVar86 = (ulong)local_538;
                    puVar27 = PTR_PTR_047d1a50;
                    uVar95 = (ulong)local_538 >> 0x20;
                    local_538 = (ulong *)(uVar95 << 0x20);
                    uVar91 = local_418;
                    if ((-1 < (long)uVar86) && (local_540 != (undefined8 **)0x0)) {
                      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                                (PTR_PTR_047d1a50 + 0x20,local_540,uVar95 * 0x18);
                      uVar91 = local_418;
                    }
                  }
                  if ((uVar91 & 1) != 0) {
                    (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar91 - 1,0);
                  }
                  uVar91 = (ulong)local_2f8;
                  local_2f8 = (undefined8 **)((ulong)local_2f8 & 0xffffffff00000000);
                  uVar76 = uVar52;
                  if ((-1 < (long)uVar91) && (local_300 != (undefined1  [8])0x0)) {
                    (**(code **)(*(long *)(puVar27 + 0x20) + 0x20))();
                  }
                  goto LAB_033540b4;
                }
                break;
              case 0x12:
                puVar56 = *(undefined8 **)(uVar91 + lVar94 * 0x10 + 8);
                if (puVar56 != (undefined8 *)0x0) {
                  local_540 = (undefined8 **)0x0;
                  local_538 = (ulong *)0x8000000000000000;
                  pcVar92 = (char *)FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,*puVar56,
                                                 *(int *)(puVar56 + 1) - (int)*puVar56,1);
                  puVar60 = (ulong *)FUN_031e1c40(*(undefined8 *)(lVar85 + 0x50),pcVar92,0);
                  if (puVar60 < (ulong *)0x2) {
                    uVar101 = uVar99;
                    if (DAT_0488d8c8 < 2) {
                      if (DAT_046aaf68 != '\0') goto LAB_0335354c;
                    }
                    else {
                      if (DAT_046aaf68 == '\0') {
                        local_2f0 = &DAT_0488d878;
                        local_300 = (undefined1  [8])0x0;
                        local_2e8 = 2;
                        pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
                        local_2e0 = nn::os::GetThreadId(pTVar39);
                        local_2b8 = 0;
                        local_2d8 = (undefined8 **)0x0;
                        local_2d0 = 0;
                        local_2c8 = (char *)0x0;
                        local_2c0 = 0;
                        local_400 = (undefined8 **)*puVar53;
                        local_3f8 = (char *)puVar53[1];
                        local_404 = (int)puVar53[4];
                        FUN_0322c554(local_300,"Field {} not found applying SET_VALUE patch {}/{}",
                                     &DAT_047ad138,puVar56,&local_400,&local_404);
                        local_2c8 = 
                        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
                        ;
                        local_2c0 = 0xaa5;
                        FUN_0322c8e0(local_300);
                      }
                      else {
LAB_0335354c:
                        local_2f0 = &DAT_0488d878;
                        local_300 = (undefined1  [8])0x0;
                        local_2e8 = 2;
                        pTVar39 = (ThreadType *)nn::os::GetCurrentThread();
                        local_2e0 = nn::os::GetThreadId(pTVar39);
                        local_2d0 = 0;
                        local_2c8 = (char *)0x0;
                        local_2c0 = 0;
                        local_2b8 = 0;
                        local_2f8 = (undefined8 **)0x10000000000;
                        local_2b0[0]._0_1_ = '\0';
                        local_418 = *puVar53;
                        local_410 = puVar53[1];
                        local_41c = (undefined4)puVar53[4];
                        local_300 = (undefined1  [8])local_2b0;
                        local_2d8 = local_2b0;
                        FUN_0322c554(local_300,"Field {} not found applying SET_VALUE patch {}/{}",
                                     &DAT_047ad138,puVar56,&local_418,&local_41c);
                        local_2c8 = 
                        "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
                        ;
                        local_2c0 = 0xaa5;
                        if ((char)local_2b0[0] != '\0') {
                          sVar37 = strlen((char *)local_2b0);
                          *(undefined2 *)
                           ((long)local_2b0 + (long)(int)((int)sVar37 - (uint)((int)sVar37 == 0xff))
                           ) = 10;
                          printf("%s",local_2b0);
                          fflush(pFVar54);
                        }
                      }
                      if (((ulong)local_2d8 & 1) != 0) {
                        (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_2d8 + -1),0);
                      }
                    }
                  }
                  else {
                    uVar86 = *puVar60;
                    uVar55 = uVar86 | 0x1000;
                    uVar91 = uVar55 - ((uVar86 & 0xaaaaaaaaaaaaaaaa) >> 1);
                    uVar91 = (uVar91 & 0x3333333333333333) + (uVar91 >> 2 & 0x3333333333333333);
                    uVar95 = puVar56[3];
                    local_300 = (undefined1  [8])
                                (((uVar91 + (uVar91 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                  >> 0x35 & 0x7f8) + 0x10);
                    puVar74 = (ulong *)(**(code **)(param_1[0x28] + 0x10))
                                                 (param_1 + 0x28,local_300,local_300);
                    uVar91 = puVar60[1];
                    uVar50 = 0;
                    *puVar74 = uVar55;
                    puVar74[1] = uVar91;
                    do {
                      uVar33 = 1 << (ulong)(uVar50 & 0x1f);
                      if ((*puVar60 & (ulong)uVar33) != 0) {
                        uVar33 = uVar33 - 1;
                        uVar51 = uVar33 & (uint)*puVar60;
                        uVar33 = uVar33 & (uint)uVar55;
                        puVar74[(ulong)(byte)(POPCOUNT((char)uVar33) + POPCOUNT((char)(uVar33 >> 8))
                                             + POPCOUNT((char)(uVar33 >> 0x10)) +
                                               POPCOUNT((char)(uVar33 >> 0x18))) + 2] =
                             puVar60[(ulong)(byte)(POPCOUNT((char)uVar51) +
                                                   POPCOUNT((char)(uVar51 >> 8)) +
                                                  POPCOUNT((char)(uVar51 >> 0x10)) +
                                                  POPCOUNT((char)(uVar51 >> 0x18))) + 2];
                      }
                      uVar50 = uVar50 + 1;
                    } while (uVar50 != 0x20);
                    uVar50 = (uint)uVar86 & 0xfff;
                    puVar74[(ulong)(byte)(POPCOUNT((char)uVar50) + POPCOUNT((char)(uVar50 >> 8))) +
                            2] = uVar95;
                    for (puVar60 = *(ulong **)(lVar85 + 0x50); puVar60 != (ulong *)0x0;
                        puVar60 = (ulong *)puVar60[1]) {
                      puVar62 = puVar60;
                      do {
                        uVar50 = (uint)*puVar62;
                        if ((uVar50 >> 0x17 & 1) != 0) {
                          uVar50 = uVar50 & 0x7fffff;
                          psVar93 = (short *)puVar62[(ulong)(byte)(POPCOUNT((char)uVar50) +
                                                                   POPCOUNT((char)(uVar50 >> 8)) +
                                                                  POPCOUNT((char)(uVar50 >> 0x10)))
                                                     + 2];
                          goto LAB_03352f98;
                        }
                      } while (((*puVar62 & 1) == 0) &&
                              (puVar62 = (ulong *)puVar62[1], puVar62 != (ulong *)0x0));
                      psVar93 = (short *)0x0;
LAB_03352f98:
                      sVar5 = *psVar93;
                      sVar6 = psVar93[1];
                      if (0 < (int)sVar6 + (int)sVar5) {
                        uVar91 = 0;
LAB_03352fb0:
                        puVar62 = *(ulong **)(psVar93 + uVar91 * 4 + 4);
                        if (puVar62 != (ulong *)0x0) {
                          puVar70 = puVar62;
                          while( true ) {
                            uVar50 = (uint)*puVar70;
                            if ((uVar50 >> 0x10 & 1) != 0) break;
                            if (((*puVar70 & 1) != 0) ||
                               (puVar70 = (ulong *)puVar70[1], puVar70 == (ulong *)0x0))
                            goto LAB_03353044;
                          }
                          uVar50 = uVar50 & 0xffff;
                          if (puVar70[(ulong)(byte)(POPCOUNT((char)uVar50) +
                                                   POPCOUNT((char)(uVar50 >> 8))) + 2] != 0)
                          goto LAB_03352ffc;
                        }
                        goto LAB_03353044;
                      }
LAB_03353050:
                    }
LAB_03353834:
                    FUN_033691e0(lVar85,&local_540);
                    if ((uint)local_538 != 0) {
                      ppuVar79 = local_540 + (long)(int)(uint)local_538 * 3;
                      ppuVar104 = local_540;
                      do {
                        if (*ppuVar104 == (undefined8 *)0x0) {
LAB_033538bc:
                          puVar68 = (undefined8 *)0x0;
                          ppuVar73 = (undefined8 **)0x0;
                          auVar64 = (undefined1  [8])0x0;
                        }
                        else {
                          puVar68 = ppuVar104[1];
                          if (pcVar92 == (char *)0x0) {
                            pcVar43 = (char *)0x0;
                          }
                          else {
                            sVar37 = strlen(pcVar92);
                            pcVar43 = pcVar92 + sVar37;
                          }
                          uVar91 = FUN_031e198c(puVar68,pcVar92,pcVar43,1);
                          if (uVar91 < 2) goto LAB_033538bc;
                          FUN_031e32f0(local_300,ppuVar104,uVar91);
                          auVar64 = local_300;
                          puVar68 = local_2f0;
                          ppuVar73 = local_2f8;
                        }
                        local_2f0 = (undefined8 *)0x0;
                        local_2f8 = (undefined8 **)0x0;
                        local_300 = (undefined1  [8])0x0;
                        *ppuVar104 = (undefined8 *)auVar64;
                        ppuVar104[1] = ppuVar73;
                        puVar65 = ppuVar104[2];
                        ppuVar104[2] = puVar68;
                        if (((ulong)puVar65 & 1) != 0) {
                          plVar42 = (long *)((ulong)puVar65 & 0xfffffffffffffffe);
                          plVar72 = plVar42 + 1;
                          do {
                            lVar80 = *plVar72;
                            cVar9 = '\x01';
                            bVar29 = (bool)ExclusiveMonitorPass(plVar72,0x10);
                            if (bVar29) {
                              *(int *)plVar72 = (int)lVar80 + -1;
                              cVar9 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar9 != '\0');
                          if ((plVar42 != (long *)0x0) && ((int)lVar80 == 1)) {
                            (**(code **)(*plVar42 + 8))();
                          }
                        }
                        if (((ulong)local_2f0 & 1) != 0) {
                          plVar42 = (long *)((ulong)local_2f0 & 0xfffffffffffffffe);
                          plVar72 = plVar42 + 1;
                          do {
                            lVar80 = *plVar72;
                            cVar9 = '\x01';
                            bVar29 = (bool)ExclusiveMonitorPass(plVar72,0x10);
                            if (bVar29) {
                              *(int *)plVar72 = (int)lVar80 + -1;
                              cVar9 = ExclusiveMonitorsStatus();
                            }
                          } while (cVar9 != '\0');
                          if ((plVar42 != (long *)0x0) && ((int)lVar80 == 1)) {
                            (**(code **)(*plVar42 + 8))();
                          }
                        }
                        ppuVar104 = ppuVar104 + 3;
                      } while (ppuVar104 != ppuVar79);
                    }
                    ppuVar104 = (undefined8 **)puVar56[3];
                    local_2f8 = (undefined8 **)(*(code *)puVar56[2])();
                    ppuVar79 = local_2f8;
                    if (local_2f8 == (undefined8 **)0x0) {
                      local_2f0 = (undefined8 *)0x0;
                    }
                    else {
                      do {
                        puVar56 = *ppuVar79;
                        if (((uint)puVar56 >> 2 & 1) != 0) {
                          local_2f0 = ppuVar79[((ulong)puVar56 >> 1 & 1) + ((ulong)puVar56 & 1) + 2]
                          ;
                          goto LAB_033539c4;
                        }
                        ppuVar73 = ppuVar79 + 1;
                        ppuVar79 = (undefined8 **)*ppuVar73;
                      } while ((undefined8 **)*ppuVar73 != (undefined8 **)0x0);
                      local_2f0 = (undefined8 *)0x0;
                    }
LAB_033539c4:
                    if (((ulong)local_2f0 & 1) != 0) {
                      piVar48 = (int *)(((ulong)local_2f0 & 0xfffffffffffffffe) + 8);
                      do {
                        cVar9 = '\x01';
                        bVar29 = (bool)ExclusiveMonitorPass(piVar48,0x10);
                        if (bVar29) {
                          *piVar48 = *piVar48 + 1;
                          cVar9 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar9 != '\0');
                    }
                    local_300 = (undefined1  [8])ppuVar104;
                    if ((uint)local_538 != 0) {
                      lVar80 = (long)(int)(uint)local_538 * 0x18;
                      ppuVar104 = local_540;
                      do {
                        FUN_031e7578(ppuVar104,local_300);
                        ppuVar104 = ppuVar104 + 3;
                        lVar80 = lVar80 + -0x18;
                      } while (lVar80 != 0);
                    }
                    if (((ulong)local_2f0 & 1) != 0) {
                      plVar42 = (long *)((ulong)local_2f0 & 0xfffffffffffffffe);
                      plVar72 = plVar42 + 1;
                      do {
                        lVar80 = *plVar72;
                        cVar9 = '\x01';
                        bVar29 = (bool)ExclusiveMonitorPass(plVar72,0x10);
                        if (bVar29) {
                          *(int *)plVar72 = (int)lVar80 + -1;
                          cVar9 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar9 != '\0');
                      if ((plVar42 != (long *)0x0) && ((int)lVar80 == 1)) {
                        (**(code **)(*plVar42 + 8))();
                      }
                    }
                  }
                  ppuVar104 = local_540;
                  if ((uint)local_538 != 0) {
                    ppuVar79 = local_540 + (long)(int)(uint)local_538 * 3;
                    do {
                      ppuVar73 = ppuVar79 + -1;
                      ppuVar79 = ppuVar79 + -3;
                      if (((ulong)*ppuVar73 & 1) != 0) {
                        plVar42 = (long *)((ulong)*ppuVar73 & 0xfffffffffffffffe);
                        plVar72 = plVar42 + 1;
                        do {
                          lVar80 = *plVar72;
                          cVar9 = '\x01';
                          bVar29 = (bool)ExclusiveMonitorPass(plVar72,0x10);
                          if (bVar29) {
                            *(int *)plVar72 = (int)lVar80 + -1;
                            cVar9 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar9 != '\0');
                        if ((plVar42 != (long *)0x0) && ((int)lVar80 == 1)) {
                          (**(code **)(*plVar42 + 8))();
                        }
                      }
                    } while (ppuVar79 != ppuVar104);
                  }
                  lVar80 = (long)local_538;
                  uVar50 = local_538._4_4_;
                  local_538 = (ulong *)((ulong)local_538._4_4_ << 0x20);
                  if ((-1 < lVar80) &&
                     (auVar64 = (undefined1  [8])local_540, local_540 != (undefined8 **)0x0))
                  goto LAB_03353ab4;
LAB_03353ad0:
                  uVar52 = uVar101;
                  uVar76 = uVar101;
                  goto LAB_033540b4;
                }
                break;
              case 0x14:
                puVar56 = *(undefined8 **)(uVar91 + lVar94 * 0x10 + 8);
                if (puVar56 != (undefined8 *)0x0) {
                  uVar50 = *(uint *)(lVar85 + 0x70);
                  if ((int)uVar50 < 1) {
                    lVar80 = *(long *)(lVar85 + 0x68);
                    iVar34 = -1;
                    iVar32 = -1;
                  }
                  else {
                    pvVar41 = (void *)*puVar56;
                    uVar91 = 0;
                    lVar80 = *(long *)(lVar85 + 0x68);
                    pbVar77 = (byte *)(lVar80 + 0x20);
                    sVar37 = puVar56[1] - (long)pvVar41;
                    uVar95 = 0xffffffff;
                    do {
                      iVar34 = (int)uVar95;
                      pcVar92 = (char *)(*(ulong *)(pbVar77 + -0x20) & 0xfffffffffffffffe);
                      if (pcVar92 == (char *)0x0) {
                        if (sVar37 == 0) goto LAB_03352dcc;
                      }
                      else {
                        sVar44 = strlen(pcVar92);
                        if ((sVar44 == sVar37) &&
                           (iVar32 = memcmp(pvVar41,pcVar92,sVar37), iVar32 == 0)) {
LAB_03352dcc:
                          if ((*pbVar77 >> 1 & 1) != 0) goto LAB_03352dec;
                          uVar95 = uVar91 & 0xffffffff;
                        }
                      }
                      iVar34 = (int)uVar95;
                      uVar91 = uVar91 + 1;
                      pbVar77 = pbVar77 + 0x28;
                    } while (uVar50 != uVar91);
                    uVar91 = 0xffffffffffffffff;
LAB_03352dec:
                    iVar32 = (int)uVar91;
                  }
                  lVar80 = lVar80 + (long)iVar34 * 0x28;
                  *(byte *)(lVar80 + 0x20) = *(byte *)(lVar80 + 0x20) | 2;
                  lVar80 = *(long *)(lVar85 + 0x68) + (long)iVar32 * 0x28;
                  *(byte *)(lVar80 + 0x20) = *(byte *)(lVar80 + 0x20) & 0xfd;
                  plVar72 = *(long **)(lVar85 + 0xa0);
                  lVar80 = plVar72[1] << 4;
                  if (lVar80 == 0) {
                    uVar52 = uVar101;
                    uVar76 = uVar101;
                    goto LAB_033540b4;
                  }
                  do {
                    plVar72 = plVar72 + 2;
                    if (*plVar72 == *(long *)(*(long *)(lVar85 + 0x68) + (long)iVar34 * 0x28 + 0x18)
                       ) {
                      *plVar72 = *(long *)(*(long *)(lVar85 + 0x68) + (long)iVar32 * 0x28 + 0x18);
                      break;
                    }
                    lVar80 = lVar80 + -0x10;
                  } while (lVar80 != 0);
                  goto LAB_03353ad0;
                }
              }
              local_138 = 0xffffffff;
              local_130 = 1;
              local_128 = 0;
              local_118 = 0;
              local_108 = 0;
              local_110 = 0x1bf;
              local_140 = puVar82;
              local_120 = local_300;
              memset(local_300,0,0x1c0);
              FUN_0322bd4c(&local_140,"Invalid patch component",0x17);
              iVar32 = FUN_03226f50(0x56e69c67,local_300,
                                    "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
                                    ,0xada);
              if (iVar32 != 0) {
                CallSupervisor(0x26);
              }
              uVar52 = uVar99;
              uVar76 = 0x80040200;
LAB_033540b4:
              lVar94 = lVar94 + 1;
              uVar101 = uVar52;
              uVar102 = uVar52;
            } while (lVar94 < (int)puVar53[6]);
          }
          bVar106 = POPCOUNT((byte)*puVar36 & 0xf);
          puVar36[(ulong)(CONCAT12(bVar106,(ushort)bVar106) & 0xff) + 2] =
               (long)*(int *)((long)puVar53 + 0x24);
          local_2f8 = (undefined8 **)0x8000008000000000;
          local_270 = 1;
          local_300 = (undefined1  [8])&local_2f0;
          FUN_031c6afc(local_300,puVar53[2],(int)puVar53[3] - (int)puVar53[2]);
          auVar64 = local_300;
          iVar34 = (int)local_2f8;
          pvVar41 = memchr((void *)local_300,0x3c,(long)(int)local_2f8 - 1);
          iVar32 = (int)pvVar41 - auVar64._0_4_;
          if (pvVar41 == (void *)0x0) {
            iVar32 = -1;
          }
          if (-1 < iVar32) {
            iVar35 = (local_2f8._4_4_ & 0x7fffffff) - 1;
            iVar31 = iVar32;
            if (iVar35 <= iVar32) {
              iVar31 = iVar35;
            }
            if (local_270 != 0) {
              iVar31 = iVar32;
            }
            iVar32 = iVar31 + 1;
            if ((int)(local_2f8._4_4_ & 0x7fffffff) <= iVar31) {
              FUN_030b4a20(local_300,PTR_PTR_047d1a50 + 0x20,iVar32);
              iVar34 = (int)local_2f8;
            }
            if ((iVar34 <= iVar31) || (iVar32 < iVar34)) {
              local_2f8 = (undefined8 **)CONCAT44(local_2f8._4_4_,iVar32);
            }
            *(char *)((long)local_300 + (long)iVar31) = '\0';
          }
          puVar27 = PTR_PTR_047d1a50;
          puVar60 = puVar36;
          while( true ) {
            uVar50 = (uint)*puVar60;
            if ((uVar50 >> 0xf & 1) != 0) break;
            if (((*puVar60 & 9) != 0) || (puVar60 = (ulong *)puVar60[1], puVar60 == (ulong *)0x0))
            goto LAB_03354260;
          }
          uVar50 = uVar50 & 0x7fff;
          if (puVar60[(ulong)(byte)(POPCOUNT((char)uVar50) + POPCOUNT((char)(uVar50 >> 8))) + 2] !=
              0) {
            iVar32 = ~local_300._0_4_ + local_300._0_4_ + (int)local_2f8;
            auVar64 = local_300;
            goto LAB_0335427c;
          }
LAB_03354260:
          ppuVar104 = (undefined8 **)puVar53[2];
          ppuVar79 = (undefined8 **)puVar53[3];
          auVar64 = (undefined1  [8])&DAT_03c886bc;
          if (ppuVar104 != ppuVar79) {
            auVar64 = (undefined1  [8])ppuVar104;
          }
          iVar32 = 0x3c886bc;
          if (ppuVar104 != ppuVar79) {
            iVar32 = (int)ppuVar79;
          }
          iVar32 = iVar32 - SUB84(auVar64,0);
LAB_0335427c:
          uVar95 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,auVar64,iVar32,1);
          uVar91 = (ulong)local_2f8;
          bVar106 = POPCOUNT((byte)*puVar36 & 7);
          puVar36[(ulong)(CONCAT12(bVar106,(ushort)bVar106) & 0xff) + 2] = uVar95;
          local_2f8 = (undefined8 **)((ulong)local_2f8 & 0xffffffff00000000);
          if ((-1 < (long)uVar91) && (local_300 != (undefined1  [8])0x0)) {
            (**(code **)(*(long *)(puVar27 + 0x20) + 0x20))();
          }
          if ((local_388 != (undefined8 *)0x0) && (*(int *)((long)local_388 + 4) != -2)) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(puVar27[8],local_388,0);
            local_388 = (undefined8 *)&DAT_03d7702c;
            local_380 = 0;
          }
          auVar64 = local_398;
          if ((int)local_390 != 0) {
            lVar85 = (long)(int)local_390 << 4;
            do {
              uVar91 = *(ulong *)((long)auVar64 + lVar85 + -0x10);
              if ((uVar91 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar91 - 1,0);
              }
              lVar85 = lVar85 + -0x10;
            } while (lVar85 != 0);
          }
          uVar95 = (ulong)local_390;
          plVar42 = (long *)PTR_PTR_047d1a50;
          uVar91 = (ulong)local_390 >> 0x20;
          local_390 = (ulong *)(uVar91 << 0x20);
          if ((-1 < (long)uVar95) && (local_398 != (undefined1  [8])0x0)) {
            (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_398,uVar91 << 4);
          }
          auVar15._8_8_ = local_2f8;
          auVar15._0_8_ = local_300;
          piVar59 = piVar59 + 1;
        } while (piVar59 != piVar71);
      }
      local_3e0 = (undefined1  [8])CONCAT44(local_3e0._4_4_,uVar52);
      _local_300 = auVar15;
LAB_033543b0:
      uVar95 = (ulong)local_3e8;
      uVar91 = (ulong)local_3e8 >> 0x20;
      local_3e8 = (char *)(uVar91 << 0x20);
      if ((-1 < (long)uVar95) && (local_3f0 != (int *)0x0)) {
        (**(code **)(*plVar42 + 0x20))(plVar42,local_3f0,uVar91 << 2);
      }
      piVar78 = piVar78 + 1;
      auVar15 = _local_300;
    } while (piVar78 != local_5e0 + iVar30);
  }
  *(undefined1 *)(param_1 + 0x86) = 1;
  if ((local_5e0 != (int *)0x0) && (-1 < (int)uVar66)) {
    (**(code **)(*plVar42 + 0x20))(plVar42,local_5e0,(ulong)uVar66 << 2);
  }
  if ((local_498 != (undefined *)0x0) && (*(int *)(local_498 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)plVar42[1],local_498,0);
    local_498 = &DAT_03d7702c;
    local_490 = 0;
  }
  uVar91 = (ulong)local_4a0;
  uVar95 = (ulong)local_4a0._4_4_;
  local_4a0 = (char *)((ulong)local_4a0._4_4_ << 0x20);
  if ((-1 < (long)uVar91) && (local_4a8 != (int *)0x0)) {
    (**(code **)(*plVar42 + 0x20))(plVar42,local_4a8,uVar95 << 2);
  }
  uVar91 = local_478;
  uVar95 = (ulong)local_478._4_4_;
  local_478 = (ulong)local_478._4_4_ << 0x20;
  if ((-1 < (long)uVar91) && (local_480 != (ulong *)0x0)) {
    (**(code **)(*plVar42 + 0x20))(plVar42,local_480,uVar95 << 3);
  }
  lVar85 = local_468;
  uVar91 = (ulong)local_468._4_4_;
  local_468 = (ulong)local_468._4_4_ << 0x20;
  if ((-1 < lVar85) && (local_470 != (ulong *)0x0)) {
    (**(code **)(*plVar42 + 0x20))(plVar42,local_470,uVar91 << 3);
  }
  if ((local_450 != (undefined *)0x0) && (*(int *)(local_450 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)plVar42[1],local_450,0);
    local_450 = &DAT_03d7702c;
    local_448 = 0;
  }
  lVar85 = local_458;
  uVar91 = (ulong)local_458._4_4_;
  local_458 = (ulong)local_458._4_4_ << 0x20;
  if ((-1 < lVar85) && (local_460 != 0)) {
    (**(code **)(*plVar42 + 0x20))(plVar42,local_460,uVar91 << 3);
  }
  nn::os::LockMutex((MutexType *)(lVar90 + 0x38));
  iVar30 = *(int *)(lVar90 + 0x84) + 1;
  *(int *)(lVar90 + 0x84) = iVar30;
  if ((*(char *)(lVar90 + 0x88) != '\0') && (*(int *)(lVar90 + 0x80) == iVar30)) {
    nn::os::ReleaseSemaphore((SemaphoreType *)(lVar90 + 0x58),1);
  }
  nn::os::UnlockMutex((MutexType *)(lVar90 + 0x38));
  puVar82 = PTR_PTR_047d1a50;
  if ((local_430 != (undefined *)0x0) && (*(int *)(local_430 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_430,0);
    local_430 = &DAT_03d7702c;
    local_428 = 0;
  }
  uVar91 = local_438;
  uVar95 = (ulong)local_438._4_4_;
  local_438 = (ulong)local_438._4_4_ << 0x20;
  if ((-1 < (long)uVar91) && (local_440 != (int *)0x0)) {
    (**(code **)(*(long *)puVar82 + 0x20))(puVar82,local_440,uVar95 << 2);
  }
  return plVar40;
  while (puVar36 = (ulong *)puVar36[1], puVar36 != (ulong *)0x0) {
LAB_03351324:
    uVar95 = *puVar36;
    if (((uint)uVar95 >> 3 & 1) != 0) {
      local_400 = (undefined8 **)0x0;
      if (puVar36 != (ulong *)0x0) {
        local_400 = (undefined8 **)puVar36[(ulong)(byte)POPCOUNT((byte)uVar95 & 7) + 2];
      }
      goto LAB_033513d8;
    }
    if ((uVar95 & 1) != 0) {
      local_400 = (undefined8 **)0x0;
      goto LAB_033513d8;
    }
  }
  local_400 = (undefined8 **)0x0;
LAB_033513d8:
  FUN_0322c554(local_300,
               "Type {} adds a field named \"{}\" in versioning but that field is already present in the file, adjusting types to load from the file anyway. Either the file is invalid or the patches are incorrect"
               ,PTR_DAT_047e5f48,&local_400,&local_3f0);
  local_2c8 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
  ;
  local_2c0 = 0x8d;
  FUN_0322c8e0(local_300);
  goto LAB_03351418;
  while (puVar36 = (ulong *)puVar36[1], puVar36 != (ulong *)0x0) {
LAB_03351394:
    uVar95 = *puVar36;
    if (((uint)uVar95 >> 3 & 1) != 0) {
      local_418 = 0;
      if (puVar36 != (ulong *)0x0) {
        local_418 = puVar36[(ulong)(byte)POPCOUNT((byte)uVar95 & 7) + 2];
      }
      goto LAB_033514e4;
    }
    if ((uVar95 & 1) != 0) {
      local_418 = 0;
      goto LAB_033514e4;
    }
  }
  local_418 = 0;
LAB_033514e4:
  local_300 = (undefined1  [8])local_2b0;
  local_2d8 = local_2b0;
  FUN_0322c554(local_300,
               "Type {} adds a field named \"{}\" in versioning but that field is already present in the file, adjusting types to load from the file anyway. Either the file is invalid or the patches are incorrect"
               ,PTR_DAT_047e5f48,&local_418,&local_3f0);
  local_2c8 = 
  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkVersionBundle.cpp"
  ;
  local_2c0 = 0x8d;
  if ((char)local_2b0[0] != '\0') {
    sVar37 = strlen((char *)local_2b0);
    *(undefined2 *)((long)local_2b0 + (long)(int)((int)sVar37 - (uint)((int)sVar37 == 0xff))) = 10;
    printf("%s",local_2b0);
    fflush(pFVar54);
  }
LAB_03351418:
  if (((ulong)local_2d8 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,(char *)((long)local_2d8 + -1),0);
  }
LAB_0335143c:
  puVar89 = *(undefined2 **)(psVar83 + (long)*(int *)(ppuVar104 + (long)iVar32 * 2 + 1) * 4);
  uVar67 = FUN_03335924(*(undefined8 *)PTR_DAT_047e66c8,local_3f0,0xffffffff,1);
  plVar42 = (long *)PTR_PTR_047d1a50;
  uVar49 = *puVar89;
  *(undefined8 *)
   (puVar89 + (ulong)(byte)(POPCOUNT((char)uVar49) + POPCOUNT((char)((ushort)uVar49 >> 8))) * 4 + 8)
       = uVar67;
LAB_03351490:
  uVar95 = (ulong)local_390;
  local_390 = (ulong *)((ulong)local_390 & 0xffffffff00000000);
  auVar24._8_8_ = local_390;
  auVar24._0_8_ = local_398;
  if ((-1 < (long)uVar95) && (_local_398 = auVar24, local_398 != (undefined1  [8])0x0)) {
    (**(code **)(plVar42[4] + 0x20))();
  }
LAB_033511a0:
  uVar91 = uVar91 + 1;
  if (uVar91 == ((ulong)((long)psVar93 - (long)psVar103) >> 3 & 0xffffffff)) goto LAB_03351568;
  goto LAB_03351180;
  while (((uVar86 & 9) == 0 && (puVar36 = (ulong *)puVar36[1], puVar36 != (ulong *)0x0))) {
LAB_03351c18:
    uVar86 = *puVar36;
    if (((uint)uVar86 >> 4 & 1) != 0) {
      iVar31 = (int)puVar36[(ulong)(byte)POPCOUNT((byte)uVar86 & 0xf) + 2];
      if (iVar31 != -1) goto LAB_03352138;
      local_2f8 = (undefined8 **)((ulong)local_2f8 & 0xffffffff00000000);
      auVar20._8_8_ = local_2f8;
      auVar20._0_8_ = local_300;
      if ((local_300 == (undefined1  [8])0x0) || (_local_300 = auVar20, (long)uVar95 < 0))
      goto LAB_0335236c;
      goto LAB_03352358;
    }
  }
  iVar31 = 0;
LAB_03352138:
  lVar80 = (**(code **)(*param_1 + 8))(param_1,&local_540,iVar31);
  uVar95 = (ulong)local_2f8;
  if (*(char *)(lVar80 + 0x98) == '\0') {
    local_2f8 = (undefined8 **)((ulong)local_2f8 & 0xffffffff00000000);
    auVar21._8_8_ = local_2f8;
    auVar21._0_8_ = local_300;
    if ((-1 < (long)uVar95) && (_local_300 = auVar21, local_300 != (undefined1  [8])0x0)) {
LAB_03352358:
      (**(code **)(plVar42[4] + 0x20))(plVar42 + 4);
    }
LAB_0335236c:
    uVar67 = FUN_0336178c(param_1,puVar53);
    iVar35 = FUN_03357154(plVar40,uVar67);
    uVar50 = *(uint *)(param_1 + 0x5b);
    iVar31 = -iVar32;
    if (-1 < iVar32) {
      iVar31 = iVar32;
    }
    uVar33 = uVar50;
    if ((int)uVar50 <= iVar34 + 1) {
      uVar33 = iVar34 + 1;
    }
    if ((int)(*(uint *)((long)param_1 + 0x2dc) & 0x7fffffff) < (int)uVar33) {
      FUN_033277d4(plVar72,PTR_PTR_047d1a50,(long)(int)uVar33);
      uVar50 = *puVar3;
    }
    if ((int)uVar50 < (int)uVar33) {
      *puVar3 = uVar33;
      puVar56 = (undefined8 *)(*plVar72 + (long)(int)uVar50 * 0x18);
      lVar80 = (long)(int)uVar33 * 0x18 + (long)(int)uVar50 * -0x18;
      do {
        *(undefined4 *)((long)puVar56 + 0x14) = 0;
        lVar80 = lVar80 + -0x18;
        *(undefined1 *)(puVar56 + 2) = 0;
        *puVar56 = 0;
        puVar56[1] = 0;
        puVar56 = puVar56 + 3;
      } while (lVar80 != 0);
      uVar91 = (ulong)local_388 & 1;
      puVar56 = local_388;
    }
    else if ((int)uVar33 < (int)uVar50) {
      *puVar3 = uVar33;
    }
    plVar42 = (long *)PTR_PTR_047d1a50;
    uVar67 = *(undefined8 *)(param_1[0x58] + (long)iVar35 * 8);
    puVar68 = (undefined8 *)(param_1[0x5a] + (long)iVar34 * 0x18);
    *(int *)((long)puVar68 + 0x14) = iVar31;
    *puVar68 = ppuVar104;
    puVar68[1] = uVar67;
    *(undefined1 *)(puVar68 + 2) = 1;
  }
  else {
    FUN_0335c714(param_1,iVar34,local_398,lVar80);
    uVar95 = (ulong)local_2f8;
    local_2f8 = (undefined8 **)((ulong)local_2f8 & 0xffffffff00000000);
    auVar17._8_8_ = local_2f8;
    auVar17._0_8_ = local_300;
    if ((-1 < (long)uVar95) && (_local_300 = auVar17, local_300 != (undefined1  [8])0x0)) {
      (**(code **)(plVar42[4] + 0x20))();
    }
  }
LAB_03352470:
  if (uVar91 == 0) goto LAB_033524a4;
  plVar46 = (long *)((ulong)puVar56 & 0xfffffffffffffffe);
  plVar45 = plVar46 + 1;
  do {
    iVar32 = (int)*plVar45;
    cVar9 = '\x01';
    bVar29 = (bool)ExclusiveMonitorPass(plVar45,0x10);
    if (bVar29) {
      *(int *)plVar45 = iVar32 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
LAB_0335248c:
  if ((plVar46 != (long *)0x0) && (iVar32 == 1)) {
    (**(code **)(*plVar46 + 8))();
  }
LAB_033524a4:
  lVar94 = lVar94 + 1;
  if ((int)local_3b0 <= lVar94) goto LAB_03352964;
  goto LAB_033517d0;
  while (((uVar91 & 9) == 0 && (puVar36 = (ulong *)puVar36[1], puVar36 != (ulong *)0x0))) {
LAB_03351b9c:
    uVar91 = *puVar36;
    if (((uint)uVar91 >> 4 & 1) != 0) {
      uVar52 = (undefined4)puVar36[(ulong)(byte)POPCOUNT((byte)uVar91 & 0xf) + 2];
      goto LAB_03351ca0;
    }
  }
  uVar52 = 0;
LAB_03351ca0:
  lVar80 = (**(code **)(*param_1 + 8))(param_1,&local_3d8,uVar52);
  uVar91 = (ulong)local_390;
  if (*(char *)(lVar80 + 0x98) == '\0') {
    local_390 = (ulong *)((ulong)local_390 & 0xffffffff00000000);
    auVar19._8_8_ = local_390;
    auVar19._0_8_ = local_398;
    if ((-1 < (long)uVar91) && (_local_398 = auVar19, local_398 != (undefined1  [8])0x0)) {
      (**(code **)(plVar42[4] + 0x20))();
    }
LAB_03351d20:
    uVar67 = FUN_0336178c(param_1,puVar53);
    iVar32 = FUN_03357154(plVar40,uVar67);
    if (*pbVar84 == 2) {
      iVar34 = *(int *)(pbVar77 + lVar94 * 0x18 + 0x14);
    }
    else {
      if (*pbVar84 == 0) {
        uVar51 = *(uint *)(param_1 + 0x5b);
        uVar33 = uVar51;
        if ((int)uVar51 <= (int)(uVar50 + 1)) {
          uVar33 = uVar50 + 1;
        }
        if ((int)(*(uint *)((long)param_1 + 0x2dc) & 0x7fffffff) < (int)uVar33) {
          FUN_033277d4(plVar72,plVar42,(long)(int)uVar33);
          uVar51 = *puVar3;
        }
        if ((int)uVar51 < (int)uVar33) {
          *puVar3 = uVar33;
          puVar56 = (undefined8 *)(*plVar72 + (long)(int)uVar51 * 0x18);
          lVar80 = (long)(int)uVar33 * 0x18 + (long)(int)uVar51 * -0x18;
          do {
            *(undefined4 *)((long)puVar56 + 0x14) = 0;
            lVar80 = lVar80 + -0x18;
            *(undefined1 *)(puVar56 + 2) = 0;
            *puVar56 = 0;
            puVar56[1] = 0;
            puVar56 = puVar56 + 3;
          } while (lVar80 != 0);
        }
        else if ((int)uVar33 < (int)uVar51) {
          *puVar3 = uVar33;
        }
        uVar67 = *(undefined8 *)(param_1[0x58] + (long)iVar32 * 8);
        puVar56 = (undefined8 *)(param_1[0x5a] + (long)(int)uVar50 * 0x18);
        *(undefined1 *)(puVar56 + 2) = 0;
        *puVar56 = ppuVar104;
        puVar56[1] = uVar67;
        *(undefined4 *)((long)puVar56 + 0x14) = 0;
        goto LAB_03352068;
      }
      iVar34 = 0;
    }
    if (iVar34 < (int)local_3b0) {
      lVar80 = *(long *)(local_3b8 + (long)iVar34 * 0x18);
      puVar53 = *(ulong **)(local_3b8 + (long)iVar34 * 0x18 + 8);
      if (puVar53 == (ulong *)0x0) {
        uVar91 = 0;
      }
      else {
        puVar36 = puVar53;
        do {
          uVar91 = *puVar36;
          if (((uint)uVar91 >> 2 & 1) != 0) {
            uVar91 = puVar36[(uVar91 >> 1 & 1) + (uVar91 & 1) + 2];
            goto LAB_03351e54;
          }
          puVar36 = (ulong *)puVar36[1];
        } while (puVar36 != (ulong *)0x0);
        uVar91 = 0;
      }
LAB_03351e54:
      if ((uVar91 & 1) == 0) {
        if (lVar80 != 0) goto LAB_03351eb4;
        goto LAB_03351ef0;
      }
      plVar45 = (long *)(uVar91 & 0xfffffffffffffffe);
      plVar42 = plVar45 + 1;
      do {
        cVar9 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(plVar42,0x10);
        if (bVar29) {
          *(int *)plVar42 = (int)*plVar42 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      do {
        lVar87 = *plVar42;
        cVar9 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(plVar42,0x10);
        if (bVar29) {
          *(int *)plVar42 = (int)lVar87 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if ((plVar45 != (long *)0x0) && ((int)lVar87 == 1)) {
        (**(code **)(*plVar45 + 8))();
      }
      if (lVar80 == 0) goto LAB_03351ef0;
      puVar53 = *(ulong **)(local_3b8 + (long)iVar34 * 0x18 + 8);
LAB_03351eb4:
      plVar42 = (long *)PTR_PTR_047d1a50;
      uVar67 = *(undefined8 *)(local_3b8 + (long)iVar34 * 0x18);
joined_r0x03351ec4:
      if (puVar53 != (ulong *)0x0) {
        uVar91 = *puVar53;
        if (((uint)uVar91 >> 2 & 1) == 0) goto code_r0x03351ed0;
        if ((puVar53[(uVar91 >> 1 & 1) + (uVar91 & 1) + 2] & 1) != 0) {
          plVar46 = (long *)(puVar53[(uVar91 >> 1 & 1) + (uVar91 & 1) + 2] & 0xfffffffffffffffe);
          plVar45 = plVar46 + 1;
          do {
            cVar9 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar45,0x10);
            if (bVar29) {
              *(int *)plVar45 = (int)*plVar45 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          uVar33 = FUN_0335a3c0(param_1,uVar67);
          do {
            lVar80 = *plVar45;
            cVar9 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar45,0x10);
            if (bVar29) {
              *(int *)plVar45 = (int)lVar80 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if ((plVar46 != (long *)0x0) && ((int)lVar80 == 1)) {
            (**(code **)(*plVar46 + 8))(plVar46);
          }
          goto LAB_03351fa0;
        }
      }
      uVar33 = FUN_0335a3c0(param_1,uVar67);
    }
    else {
LAB_03351ef0:
      plVar42 = (long *)PTR_PTR_047d1a50;
      uVar33 = *(uint *)(param_1 + 0x5b);
      lVar80 = (long)(int)uVar33 + 1;
      uVar97 = (uint)lVar80;
      uVar51 = uVar33;
      if ((int)uVar33 < (int)(*(uint *)((long)param_1 + 0x2dc) & 0x7fffffff)) {
LAB_03351f50:
        *puVar3 = uVar97;
        puVar56 = (undefined8 *)(*plVar72 + (long)(int)uVar51 * 0x18);
        lVar80 = lVar80 * 0x18 + (long)(int)uVar51 * -0x18;
        do {
          *(undefined4 *)((long)puVar56 + 0x14) = 0;
          lVar80 = lVar80 + -0x18;
          *(undefined1 *)(puVar56 + 2) = 0;
          *puVar56 = 0;
          puVar56[1] = 0;
          puVar56 = puVar56 + 3;
        } while (lVar80 != 0);
      }
      else {
        FUN_033277d4(plVar72,PTR_PTR_047d1a50,lVar80);
        uVar51 = *puVar3;
        if ((int)uVar51 <= (int)uVar33) goto LAB_03351f50;
        if ((int)uVar97 < (int)uVar51) {
          *puVar3 = uVar97;
        }
      }
      puVar56 = (undefined8 *)(param_1[0x5a] + (long)(int)uVar33 * 0x18);
      uVar67 = *(undefined8 *)param_1[0x58];
      *(undefined1 *)(puVar56 + 2) = 0;
      *puVar56 = 0;
      puVar56[1] = uVar67;
      *(undefined4 *)((long)puVar56 + 0x14) = 0;
    }
LAB_03351fa0:
    uVar97 = *(uint *)(param_1 + 0x5b);
    uVar51 = uVar50;
    if ((int)uVar50 <= (int)uVar33) {
      uVar51 = uVar33;
    }
    uVar75 = uVar97;
    if ((int)uVar97 <= (int)(uVar51 + 1)) {
      uVar75 = uVar51 + 1;
    }
    if ((int)(*(uint *)((long)param_1 + 0x2dc) & 0x7fffffff) < (int)uVar75) {
      FUN_033277d4(plVar72,plVar42,(long)(int)uVar75);
      uVar97 = *puVar3;
    }
    if ((int)uVar97 < (int)uVar75) {
      *puVar3 = uVar75;
      puVar56 = (undefined8 *)(*plVar72 + (long)(int)uVar97 * 0x18);
      lVar80 = (long)(int)uVar75 * 0x18 + (long)(int)uVar97 * -0x18;
      do {
        *(undefined4 *)((long)puVar56 + 0x14) = 0;
        lVar80 = lVar80 + -0x18;
        *(undefined1 *)(puVar56 + 2) = 0;
        *puVar56 = 0;
        puVar56[1] = 0;
        puVar56 = puVar56 + 3;
      } while (lVar80 != 0);
    }
    else if ((int)uVar75 < (int)uVar97) {
      *puVar3 = uVar75;
    }
    lVar80 = param_1[0x5a];
    if (*(long *)(lVar80 + (long)(int)uVar33 * 0x18) == 0) {
      *(uint *)(lVar80 + (long)(int)uVar33 * 0x18 + 0x14) = uVar50;
      lVar80 = param_1[0x5a];
    }
    puVar56 = (undefined8 *)(lVar80 + (long)(int)uVar50 * 0x18);
    uVar67 = *(undefined8 *)(param_1[0x58] + (long)iVar32 * 8);
    *(uint *)((long)puVar56 + 0x14) = uVar33;
    *puVar56 = ppuVar104;
    puVar56[1] = uVar67;
    *(undefined1 *)(puVar56 + 2) = 2;
  }
  else {
    if (*pbVar84 == 0) {
      FUN_03356af0(param_1,uVar50,&local_540);
    }
    else {
      uVar67 = *(undefined8 *)pbVar96;
      puVar53 = *(ulong **)pbVar100;
      if (puVar53 != (ulong *)0x0) {
        puVar36 = puVar53;
        do {
          uVar91 = *puVar36;
          if (((uint)uVar91 >> 2 & 1) != 0) {
            uVar91 = puVar36[(uVar91 >> 1 & 1) + (uVar91 & 1) + 2];
            if ((uVar91 & 1) != 0) {
              piVar78 = (int *)((uVar91 & 0xfffffffffffffffe) + 8);
              do {
                cVar9 = '\x01';
                bVar29 = (bool)ExclusiveMonitorPass(piVar78,0x10);
                if (bVar29) {
                  *piVar78 = *piVar78 + 1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
              } while (cVar9 != '\0');
            }
            goto LAB_033521dc;
          }
          puVar36 = (ulong *)puVar36[1];
        } while (puVar36 != (ulong *)0x0);
      }
      uVar91 = 0;
LAB_033521dc:
      iVar32 = uVar50 + 1;
      lVar87 = param_1[0x6a];
      uVar33 = iVar32 - (int)lVar87;
      if (0 < (int)uVar33) {
        if ((int)(*(uint *)((long)param_1 + 0x354) & 0x7fffffff) <= (int)uVar50) {
          FUN_02e7fe28(param_1 + 0x69,PTR_PTR_047d1a50,(long)iVar32);
        }
        memset((void *)(param_1[0x69] + (long)(int)lVar87),0,(ulong)uVar33);
        *(int *)(param_1 + 0x6a) = iVar32;
      }
      *(undefined1 *)(param_1[0x69] + (long)(int)uVar50) = 1;
      FUN_033690d4(lVar80,uVar50,0,0xffffffff);
      puVar60 = *(ulong **)(lVar80 + 0x50);
      puVar36 = puVar60;
      while( true ) {
        uVar33 = (uint)*puVar36;
        if ((uVar33 >> 0x14 & 1) != 0) break;
        if (((*puVar36 & 1) != 0) || (puVar36 = (ulong *)puVar36[1], puVar36 == (ulong *)0x0))
        goto LAB_033522b0;
      }
      if (puVar36 != (ulong *)0x0) {
        uVar95 = CONCAT44(uVar33,uVar33) & 0xfffff000fffff;
        sVar37 = (size_t)(ushort)puVar36[(ulong)(byte)(POPCOUNT((char)uVar95) +
                                                       POPCOUNT((char)(uVar95 >> 8)) +
                                                      POPCOUNT((char)(uVar95 >> 0x10))) + 2];
        goto LAB_033522b4;
      }
LAB_033522b0:
      sVar37 = 0;
LAB_033522b4:
      local_300 = (undefined1  [8])sVar37;
      local_3f0 = (int *)(**(code **)(param_1[0x28] + 0x10))(param_1 + 0x28,sVar37,local_300);
      memset(local_3f0,0,sVar37);
      iVar34 = FUN_03357154(plVar40,puVar60);
      iVar32 = *(int *)(pbVar77 + lVar94 * 0x18 + 0x14);
      if (*pbVar84 != 2) {
        iVar32 = 0;
      }
      if (iVar32 < (int)local_3b0) {
        lVar80 = *(long *)(local_3b8 + (long)iVar32 * 0x18);
        puVar36 = *(ulong **)(local_3b8 + (long)iVar32 * 0x18 + 8);
        if (puVar36 == (ulong *)0x0) {
          uVar95 = 0;
        }
        else {
          puVar74 = puVar36;
          do {
            uVar95 = *puVar74;
            if (((uint)uVar95 >> 2 & 1) != 0) {
              uVar95 = puVar74[(uVar95 >> 1 & 1) + (uVar95 & 1) + 2];
              goto LAB_033524cc;
            }
            puVar74 = (ulong *)puVar74[1];
          } while (puVar74 != (ulong *)0x0);
          uVar95 = 0;
        }
LAB_033524cc:
        if ((uVar95 & 1) == 0) {
          if (lVar80 != 0) goto LAB_0335252c;
          goto LAB_0335254c;
        }
        plVar45 = (long *)(uVar95 & 0xfffffffffffffffe);
        plVar42 = plVar45 + 1;
        do {
          cVar9 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(plVar42,0x10);
          if (bVar29) {
            *(int *)plVar42 = (int)*plVar42 + 1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        do {
          lVar87 = *plVar42;
          cVar9 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(plVar42,0x10);
          if (bVar29) {
            *(int *)plVar42 = (int)lVar87 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        if ((plVar45 != (long *)0x0) && ((int)lVar87 == 1)) {
          (**(code **)(*plVar45 + 8))();
        }
        if (lVar80 == 0) goto LAB_0335254c;
        puVar36 = *(ulong **)(local_3b8 + (long)iVar32 * 0x18 + 8);
LAB_0335252c:
        uVar69 = *(undefined8 *)(local_3b8 + (long)iVar32 * 0x18);
        if (puVar36 == (ulong *)0x0) {
LAB_03352620:
          uVar33 = FUN_0335a3c0(param_1,uVar69);
          plVar42 = (long *)PTR_PTR_047d1a50;
        }
        else {
          do {
            uVar95 = *puVar36;
            if (((uint)uVar95 >> 2 & 1) != 0) {
              uVar95 = puVar36[(uVar95 >> 1 & 1) + (uVar95 & 1) + 2];
              goto LAB_0335261c;
            }
            puVar36 = (ulong *)puVar36[1];
          } while (puVar36 != (ulong *)0x0);
          uVar95 = 0;
LAB_0335261c:
          if ((uVar95 & 1) == 0) goto LAB_03352620;
          plVar46 = (long *)(uVar95 & 0xfffffffffffffffe);
          plVar45 = plVar46 + 1;
          do {
            cVar9 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar45,0x10);
            if (bVar29) {
              *(int *)plVar45 = (int)*plVar45 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          uVar33 = FUN_0335a3c0(param_1,uVar69);
          plVar42 = (long *)PTR_PTR_047d1a50;
          do {
            lVar80 = *plVar45;
            cVar9 = '\x01';
            bVar29 = (bool)ExclusiveMonitorPass(plVar45,0x10);
            if (bVar29) {
              *(int *)plVar45 = (int)lVar80 + -1;
              cVar9 = ExclusiveMonitorsStatus();
            }
          } while (cVar9 != '\0');
          if ((plVar46 != (long *)0x0) && ((int)lVar80 == 1)) {
            (**(code **)(*plVar46 + 8))(plVar46);
          }
        }
      }
      else {
LAB_0335254c:
        plVar42 = (long *)PTR_PTR_047d1a50;
        uVar33 = *(uint *)(param_1 + 0x5b);
        lVar80 = (long)(int)uVar33 + 1;
        uVar97 = (uint)lVar80;
        uVar51 = uVar33;
        if ((int)uVar33 < (int)(*(uint *)((long)param_1 + 0x2dc) & 0x7fffffff)) {
LAB_033525b0:
          *puVar3 = uVar97;
          puVar56 = (undefined8 *)(*plVar72 + (long)(int)uVar51 * 0x18);
          lVar80 = lVar80 * 0x18 + (long)(int)uVar51 * -0x18;
          do {
            *(undefined4 *)((long)puVar56 + 0x14) = 0;
            lVar80 = lVar80 + -0x18;
            *(undefined1 *)(puVar56 + 2) = 0;
            *puVar56 = 0;
            puVar56[1] = 0;
            puVar56 = puVar56 + 3;
          } while (lVar80 != 0);
        }
        else {
          FUN_033277d4(plVar72,PTR_PTR_047d1a50,lVar80);
          uVar51 = *puVar3;
          if ((int)uVar51 <= (int)uVar33) goto LAB_033525b0;
          if ((int)uVar97 < (int)uVar51) {
            *puVar3 = uVar97;
          }
        }
        puVar56 = (undefined8 *)(param_1[0x5a] + (long)(int)uVar33 * 0x18);
        uVar69 = *(undefined8 *)param_1[0x58];
        *(undefined1 *)(puVar56 + 2) = 0;
        *puVar56 = 0;
        puVar56[1] = uVar69;
        *(undefined4 *)((long)puVar56 + 0x14) = 0;
      }
      piVar78 = local_3f0;
      uVar97 = *(uint *)(param_1 + 0x5b);
      uVar51 = uVar50;
      if ((int)uVar50 <= (int)uVar33) {
        uVar51 = uVar33;
      }
      uVar75 = uVar97;
      if ((int)uVar97 <= (int)(uVar51 + 1)) {
        uVar75 = uVar51 + 1;
      }
      if ((int)(*(uint *)((long)param_1 + 0x2dc) & 0x7fffffff) < (int)uVar75) {
        FUN_033277d4(plVar72,plVar42,(long)(int)uVar75);
        uVar97 = *puVar3;
      }
      if ((int)uVar97 < (int)uVar75) {
        *puVar3 = uVar75;
        puVar56 = (undefined8 *)(*plVar72 + (long)(int)uVar97 * 0x18);
        lVar80 = (long)(int)uVar75 * 0x18 + (long)(int)uVar97 * -0x18;
        do {
          *(undefined4 *)((long)puVar56 + 0x14) = 0;
          lVar80 = lVar80 + -0x18;
          *(undefined1 *)(puVar56 + 2) = 0;
          *puVar56 = 0;
          puVar56[1] = 0;
          puVar56 = puVar56 + 3;
        } while (lVar80 != 0);
      }
      else if ((int)uVar75 < (int)uVar97) {
        *puVar3 = uVar75;
      }
      lVar80 = param_1[0x5a];
      if (*(long *)(lVar80 + (long)(int)uVar33 * 0x18) == 0) {
        *(uint *)(lVar80 + (long)(int)uVar33 * 0x18 + 0x14) = uVar50;
        lVar80 = param_1[0x5a];
      }
      uVar69 = *(undefined8 *)(param_1[0x58] + (long)iVar34 * 8);
      puVar56 = (undefined8 *)(lVar80 + (long)(int)uVar50 * 0x18);
      *puVar56 = piVar78;
      puVar56[1] = uVar69;
      *(undefined1 *)(puVar56 + 2) = 2;
      *(uint *)((long)puVar56 + 0x14) = uVar33;
      if (puVar60 == puVar53) {
        uVar69 = FUN_031fa694(param_1 + 0x49,puVar53);
      }
      else {
        uVar69 = FUN_031fa91c(param_1 + 0x49,puVar53);
      }
      uVar33 = FUN_033572a8(plVar2,&local_3f0);
      if (*(uint *)(param_1 + 0x7a) == uVar33) {
        iVar32 = uVar33 + 1;
        if ((int)(*(uint *)((long)param_1 + 0x3d4) & 0x7fffffff) <= (int)uVar33) {
          FUN_031d33d4(plVar2,plVar42,(long)iVar32);
          uVar33 = *(uint *)(param_1 + 0x7a);
        }
        puVar56 = (undefined8 *)(param_1[0x79] + (long)(int)uVar33 * 0x10);
        *puVar56 = piVar78;
        *(uint *)(puVar56 + 1) = uVar50;
        *(int *)(param_1 + 0x7a) = iVar32;
      }
      else {
        *(uint *)(*plVar2 + ((long)((ulong)uVar33 << 0x20) >> 0x1c) + 8) = uVar50;
      }
      memset(local_300,0,0x288);
      local_260 = FUN_03225a30;
      local_250 = PTR_LAB_047e5f00;
      local_1c0 = FUN_032259b8;
      local_1d0 = PTR_LAB_047e5f08;
      local_210 = &LAB_03225af8;
      local_248 = PTR_LAB_047e5f10;
      local_188 = PTR_FUN_047e5f18;
      local_1b8 = PTR_LAB_047e5f28;
      local_170 = FUN_03225a94;
      local_178 = PTR_FUN_047e5f20;
      while( true ) {
        uVar50 = (uint)*puVar53;
        if ((uVar50 >> 0x14 & 1) != 0) break;
        if (((*puVar53 & 1) != 0) || (puVar53 = (ulong *)puVar53[1], puVar53 == (ulong *)0x0))
        goto LAB_033528e8;
      }
      if (puVar53 != (ulong *)0x0) {
        uVar95 = CONCAT44(uVar50,uVar50) & 0xfffff000fffff;
        uVar49 = (undefined2)
                 puVar53[(ulong)(byte)(POPCOUNT((char)uVar95) + POPCOUNT((char)(uVar95 >> 8)) +
                                      POPCOUNT((char)(uVar95 >> 0x10))) + 2];
        goto LAB_033528ec;
      }
LAB_033528e8:
      uVar49 = 0;
LAB_033528ec:
      local_78 = param_1;
      FUN_033573c4(local_300,uVar69,piVar78,uVar67,uVar49,sVar37,1);
      auVar26._8_8_ = local_2f8;
      auVar26._0_8_ = local_300;
      auVar25._8_8_ = local_2f8;
      auVar25._0_8_ = local_300;
      if ((uVar91 & 1) != 0) {
        plVar46 = (long *)(uVar91 & 0xfffffffffffffffe);
        plVar45 = plVar46 + 1;
        do {
          lVar80 = *plVar45;
          cVar9 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(plVar45,0x10);
          if (bVar29) {
            *(int *)plVar45 = (int)lVar80 + -1;
            cVar9 = ExclusiveMonitorsStatus();
          }
        } while (cVar9 != '\0');
        _local_300 = auVar25;
        if ((plVar46 != (long *)0x0) && (_local_300 = auVar26, (int)lVar80 == 1)) {
          (**(code **)(*plVar46 + 8))();
        }
      }
    }
    uVar91 = (ulong)local_390;
    local_390 = (ulong *)((ulong)local_390 & 0xffffffff00000000);
    auVar22._8_8_ = local_390;
    auVar22._0_8_ = local_398;
    if (-1 < (long)uVar91) {
      _local_398 = auVar22;
      if (local_398 != (undefined1  [8])0x0) {
        (**(code **)(plVar42[4] + 0x20))();
      }
    }
  }
LAB_03352068:
  if (((ulong)local_530 & 1) == 0) goto LAB_033524a4;
  plVar46 = (long *)((ulong)local_530 & 0xfffffffffffffffe);
  plVar45 = plVar46 + 1;
  do {
    iVar32 = (int)*plVar45;
    cVar9 = '\x01';
    bVar29 = (bool)ExclusiveMonitorPass(plVar45,0x10);
    if (bVar29) {
      *(int *)plVar45 = iVar32 + -1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  goto LAB_0335248c;
code_r0x03351ed0:
  puVar53 = (ulong *)puVar53[1];
  goto joined_r0x03351ec4;
  while (((*puVar62 & 1) == 0 && (puVar62 = (ulong *)puVar62[1], puVar62 != (ulong *)0x0))) {
LAB_03352ffc:
    uVar50 = (uint)*puVar62;
    if ((uVar50 >> 0x10 & 1) != 0) {
      uVar50 = uVar50 & 0xffff;
      pcVar43 = (char *)puVar62[(ulong)(byte)(POPCOUNT((char)uVar50) + POPCOUNT((char)(uVar50 >> 8))
                                             ) + 2];
      goto LAB_03353038;
    }
  }
  pcVar43 = (char *)0x0;
LAB_03353038:
  iVar32 = strcmp(pcVar43,pcVar92);
  if (iVar32 == 0) {
    *(ulong **)(psVar93 + (uVar91 & 0xffffffff) * 4 + 4) = puVar74;
    goto LAB_03353834;
  }
LAB_03353044:
  uVar91 = uVar91 + 1;
  if (uVar91 == (uint)((int)sVar6 + (int)sVar5)) goto LAB_03353050;
  goto LAB_03352fb0;
}



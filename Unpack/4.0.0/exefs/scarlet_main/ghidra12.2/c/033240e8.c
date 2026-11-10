/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033240e8; name: FUN_033240e8
 */


void FUN_033240e8(long param_1,int param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  long *plVar10;
  ThreadType *pTVar11;
  size_t sVar12;
  undefined8 *puVar13;
  char *__s;
  undefined2 uVar14;
  undefined2 uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  FILE *__stream;
  ulong uVar19;
  ulong *puVar20;
  ulong *puVar21;
  byte bVar22;
  ulong uVar23;
  ulong uVar24;
  ulong *puVar25;
  char *pcVar26;
  bool bVar27;
  long lVar28;
  ulong uVar29;
  undefined1 *puVar30;
  ulong *puVar31;
  int iVar32;
  long *plVar33;
  int local_4b4;
  ulong **local_478;
  char *local_470;
  ulong *puStack_468;
  ulong local_460;
  undefined1 *local_458;
  undefined1 *puStack_450;
  undefined *local_448;
  undefined8 uStack_440;
  undefined4 local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined4 local_420;
  undefined4 local_41c;
  undefined8 local_418;
  undefined8 uStack_410;
  uint local_408;
  ulong local_400;
  ulong local_3f8;
  ulong local_3f0 [7];
  code *local_3b8;
  undefined *local_3a8;
  undefined *local_3a0;
  undefined1 *local_368;
  undefined *local_328;
  code *local_318;
  undefined *local_310;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined *local_2e0;
  undefined8 local_2d8;
  undefined *local_2d0;
  code *local_2c8;
  undefined8 local_2c0;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined8 local_290;
  undefined1 *local_288;
  undefined8 local_280;
  undefined1 auStack_278 [24];
  undefined4 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined2 local_240;
  undefined1 local_23e;
  long local_1d0;
  char *local_1c8;
  ulong *local_1c0;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  undefined8 local_198;
  char *local_190;
  undefined8 local_188;
  undefined8 local_180;
  char local_178 [256];
  ulong *local_78;
  ulong *local_70 [2];
  
  if (*(int *)(*(long *)(param_1 + 0x290) + (long)param_2 * 4) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x378) != '\0') {
    return;
  }
  lVar18 = *(long *)(param_1 + 0x228);
  lVar28 = (long)param_2;
  puVar13 = (undefined8 *)(lVar18 + lVar28 * 0x20);
  uVar5 = *puVar13;
  puVar31 = (ulong *)puVar13[1];
  uVar29 = puVar13[2];
  if ((uVar29 & 1) == 0) {
    uVar19 = uVar29;
    if ((uVar29 & 1) != 0) goto LAB_03324144;
LAB_033241fc:
    iVar9 = *(int *)(lVar18 + lVar28 * 0x20 + 0x18);
    local_4b4 = -iVar9;
    if (-1 < iVar9) {
      local_4b4 = iVar9;
    }
  }
  else {
    plVar10 = (long *)(uVar29 & 0xfffffffffffffffe);
    plVar33 = plVar10 + 1;
    do {
      cVar8 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar27) {
        *(int *)plVar33 = (int)*plVar33 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    do {
      cVar8 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar27) {
        *(int *)plVar33 = (int)*plVar33 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    do {
      lVar18 = *plVar33;
      cVar8 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar27) {
        *(int *)plVar33 = (int)lVar18 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar18 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
    lVar18 = *(long *)(param_1 + 0x228);
    uVar19 = *(ulong *)(lVar18 + lVar28 * 0x20 + 0x10);
    if ((uVar19 & 1) == 0) goto LAB_033241fc;
LAB_03324144:
    plVar10 = (long *)(uVar19 & 0xfffffffffffffffe);
    plVar33 = plVar10 + 1;
    do {
      cVar8 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar27) {
        *(int *)plVar33 = (int)*plVar33 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    iVar9 = *(int *)(lVar18 + lVar28 * 0x20 + 0x18);
    local_4b4 = -iVar9;
    if (-1 < iVar9) {
      local_4b4 = iVar9;
    }
    do {
      lVar18 = *plVar33;
      cVar8 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar27) {
        *(int *)plVar33 = (int)lVar18 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar18 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  if (puVar31 != (ulong *)0x0) {
    __stream = *(FILE **)PTR_stdout_047cb860;
    local_478 = local_70;
    puVar30 = PTR_DAT_047e5b58 + 0x10;
    puVar1 = PTR_DAT_047e5b60 + 0x10;
    puVar2 = PTR_PTR_047d1a50 + 0x20;
    local_70[0] = puVar31;
    while( true ) {
      uVar19 = *puVar31;
      if ((uVar19 & 1) != 0) break;
      uStack_440 = 0x4000;
      local_438 = 0xffffffff;
      local_420 = 0;
      local_430 = 0;
      uStack_428 = 0;
      local_41c = 0x80000000;
      local_408 = 0;
      local_418 = 0;
      uStack_410 = 0x8000000000000000;
      local_400 = 0;
      local_3f8 = 0;
      local_2f0 = 0;
      uStack_2e8 = 0;
      local_2e0 = (undefined *)0x8000000000000000;
      local_2c0 = 0x8000000200000000;
      local_2d8 = 0;
      local_2d0 = (undefined *)0x8000000000000000;
      local_298 = 0;
      local_290 = 0x8000000000000000;
      local_280 = 0x8000000300000000;
      local_260 = 0;
      local_258 = 0;
      local_250 = 0x8000000000000000;
      local_248 = 0;
      local_240 = 1;
      local_23e = 0;
      local_458 = puVar30;
      puStack_450 = puVar1;
      local_448 = puVar2;
      local_2c8 = (code *)auStack_2b8;
      local_288 = auStack_278;
      memset(local_3f0,0,0x100);
      local_400 = puVar31[1];
      uVar19 = *puVar31;
      local_3f8 = uVar19 & 0xffffffff;
      lVar18 = 0;
      do {
        uVar17 = 1 << (ulong)((uint)lVar18 & 0x1f);
        if (((uVar19 & uVar17) == 0) || ((*puVar31 & (ulong)uVar17) == 0)) {
          uVar23 = 0;
        }
        else {
          uVar17 = uVar17 - 1 & (uint)*puVar31;
          uVar23 = puVar31[(ulong)(byte)(POPCOUNT((char)uVar17) + POPCOUNT((char)(uVar17 >> 8)) +
                                        POPCOUNT((char)(uVar17 >> 0x10)) +
                                        POPCOUNT((char)(uVar17 >> 0x18))) + 2];
        }
        lVar3 = lVar18 + 1;
        local_3f0[lVar18] = uVar23;
        lVar18 = lVar3;
      } while (lVar3 != 0x20);
      uVar19 = 0;
      puVar21 = puVar31;
      do {
        uVar17 = (uint)*puVar21;
        if ((uVar17 >> 0x15 & 1) == 0) {
          uVar23 = 0;
        }
        else {
          uVar23 = CONCAT44(uVar17,uVar17) & 0x1fffff001fffff;
          uVar23 = puVar21[(ulong)(byte)(POPCOUNT((char)uVar23) + POPCOUNT((char)(uVar23 >> 8)) +
                                        POPCOUNT((char)(uVar23 >> 0x10))) + 2];
        }
        uVar19 = uVar23 | uVar19;
      } while (((*puVar21 & 1) == 0) && (puVar21 = (ulong *)puVar21[1], puVar21 != (ulong *)0x0));
      local_408 = (uint)uVar19 & 0xffff;
      iVar9 = FUN_031d8d9c(&local_458,param_1 + 0x68,&local_78);
      if (iVar9 < 0) {
        if (DAT_0488d510 == '\0') {
          if (DAT_046aaf68 != '\0') goto LAB_0332450c;
        }
        else {
          if (DAT_046aaf68 == '\0') {
            local_1c8 = (char *)0x0;
            local_1b8 = &DAT_0488d4c0;
            local_1b0 = 1;
            pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
            local_1a8 = nn::os::GetThreadId(pTVar11);
            local_1a0 = (char *)0x0;
            local_198 = 0;
            local_180 = 0;
            local_190 = (char *)0x0;
            local_188 = 0;
            FUN_0322c554(&local_1c8,"Failed to allocate type from builder",PTR_DAT_047d1b38);
            local_190 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkCompatPatcher.cpp"
            ;
            local_188 = 0x593;
            FUN_0322c8e0(&local_1c8);
          }
          else {
LAB_0332450c:
            local_1c8 = (char *)0x0;
            local_1b8 = &DAT_0488d4c0;
            local_1b0 = 1;
            pTVar11 = (ThreadType *)nn::os::GetCurrentThread();
            local_1a8 = nn::os::GetThreadId(pTVar11);
            local_198 = 0;
            local_190 = (char *)0x0;
            local_188 = 0;
            local_180 = 0;
            local_1c0 = (ulong *)0x10000000000;
            local_178[0] = '\0';
            local_1c8 = local_178;
            local_1a0 = local_178;
            FUN_0322c554(&local_1c8,"Failed to allocate type from builder",PTR_DAT_047d1b38);
            local_190 = 
            "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkCompatPatcher.cpp"
            ;
            local_188 = 0x593;
            if (local_178[0] != '\0') {
              sVar12 = strlen(local_178);
              (local_178 + (int)((int)sVar12 - (uint)((int)sVar12 == 0xff)))[0] = '\n';
              (local_178 + (int)((int)sVar12 - (uint)((int)sVar12 == 0xff)))[1] = '\0';
              printf("%s",local_178);
              fflush(__stream);
            }
          }
          if (((ulong)local_1a0 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1a0 + -1,0);
          }
        }
        bVar27 = false;
      }
      else {
        bVar27 = true;
        *local_478 = local_78;
        puVar31 = (ulong *)puVar31[1];
        local_478 = (ulong **)(local_78 + 1);
      }
      FUN_031d798c(&local_458);
      if (!bVar27) goto joined_r0x03324ec8;
    }
    uVar23 = puVar31[2] & 0x1f;
    if ((puVar31 != (ulong *)0x0) && (uVar23 == 7)) {
      uVar23 = 0;
      puVar21 = puVar31;
      if (((uint)uVar19 >> 0x15 & 1) != 0) goto LAB_033245f8;
      do {
        uVar24 = 0;
        while( true ) {
          uVar23 = uVar24 | uVar23;
          if (((uVar19 & 1) != 0) || (puVar21 = (ulong *)puVar21[1], puVar21 == (ulong *)0x0)) {
            if (((uint)uVar23 >> 5 & 1) != 0) goto LAB_033248e0;
            local_458 = &DAT_03c886bc;
            puStack_450 = &DAT_03c886bc;
            puVar13 = (undefined8 *)FUN_033364d4(param_1 + 0x68,&local_458,0,puVar31);
            if (puVar13 == (undefined8 *)0x0) goto LAB_03324a88;
            *local_478 = (ulong *)*puVar13;
            goto LAB_033248e0;
          }
          uVar19 = *puVar21;
          if (((uint)uVar19 >> 0x15 & 1) == 0) break;
LAB_033245f8:
          uVar24 = CONCAT44((int)uVar19,(int)uVar19) & 0x1fffff001fffff;
          uVar24 = puVar21[(ulong)(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8)) +
                                        POPCOUNT((char)(uVar24 >> 0x10))) + 2];
        }
      } while( true );
    }
    if ((puVar31 != (ulong *)0x0) && (uVar23 == 6)) {
      local_458 = &DAT_00000070;
      plVar33 = (long *)(param_1 + 0x68);
      puVar25 = (ulong *)(**(code **)(*plVar33 + 0x10))(plVar33,0x70,&local_458);
      puVar21 = puVar31;
      goto LAB_03324680;
    }
    if ((puVar31 == (ulong *)0x0) || (uVar23 != 3)) goto LAB_033248e0;
    local_458 = &DAT_00000038;
    puVar25 = (ulong *)(**(code **)(*(long *)(param_1 + 0x68) + 0x10))
                                 ((long *)(param_1 + 0x68),0x38,&local_458);
    uVar19 = *puVar31;
    uVar17 = (uint)uVar19;
    bVar22 = (byte)uVar19;
    puVar21 = puVar31;
    if ((uVar19 & 1) == 0) {
      do {
        puVar21 = (ulong *)puVar21[1];
      } while ((*puVar21 & 1) == 0);
    }
    uVar23 = puVar21[2];
    puVar21 = puVar31;
    while ((uVar17 >> 3 & 1) == 0) {
      if (((uVar19 & 1) != 0) || (puVar21 = (ulong *)puVar21[1], puVar21 == (ulong *)0x0))
      goto LAB_033248b0;
      uVar19 = *puVar21;
      bVar22 = (byte)uVar19;
      uVar17 = (uint)uVar19;
    }
    if (puVar21 == (ulong *)0x0) goto LAB_033248b0;
    uVar19 = puVar21[(ulong)(byte)POPCOUNT(bVar22 & 7) + 2];
LAB_033248b4:
    puVar25[6] = 0;
    *puVar25 = 0x30000d;
    puVar25[1] = 0;
    puVar25[2] = uVar23 & 0x80 | 3;
    puVar25[3] = param_1 + 0x1c8;
    puVar25[4] = uVar19;
    puVar25[5] = 0x80008;
    *local_478 = puVar25;
    goto LAB_033248e0;
  }
joined_r0x03324ec8:
  if ((uVar29 & 1) != 0) {
    plVar10 = (long *)(uVar29 & 0xfffffffffffffffe);
    plVar33 = plVar10 + 1;
    do {
      lVar18 = *plVar33;
      cVar8 = '\x01';
      bVar27 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar27) {
        *(int *)plVar33 = (int)lVar18 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if ((plVar10 != (long *)0x0) && ((int)lVar18 == 1)) {
      (**(code **)(*plVar10 + 8))();
    }
  }
  return;
  while (puVar21 = (ulong *)puVar21[1], puVar21 != (ulong *)0x0) {
LAB_03324680:
    if (((byte)*puVar21 >> 1 & 1) != 0) {
      puVar21 = (ulong *)puVar21[3];
      goto LAB_03324768;
    }
  }
  puVar21 = (ulong *)0x0;
LAB_03324768:
  puVar20 = puVar31;
  while (uVar19 = *puVar20, ((uint)uVar19 >> 3 & 1) == 0) {
    if (((uVar19 & 1) != 0) || (puVar20 = (ulong *)puVar20[1], puVar20 == (ulong *)0x0))
    goto LAB_033247ac;
  }
  if (puVar20 != (ulong *)0x0) {
    uVar19 = puVar20[(ulong)(byte)POPCOUNT((byte)uVar19 & 7) + 2];
    goto LAB_033247b0;
  }
LAB_033247ac:
  uVar19 = 0;
LAB_033247b0:
  puVar20 = puVar21;
  if ((*puVar21 & 1) == 0) {
    do {
      puVar20 = (ulong *)puVar20[1];
    } while ((*puVar20 & 1) == 0);
  }
  if ((puVar21 != (ulong *)0x0) && ((puVar20[2] & 0x1f) == 7)) {
    uVar23 = 0;
    puVar20 = puVar21;
    do {
      uVar17 = (uint)*puVar20;
      if ((uVar17 >> 0x15 & 1) == 0) {
        uVar24 = 0;
      }
      else {
        uVar24 = CONCAT44(uVar17,uVar17) & 0x1fffff001fffff;
        uVar24 = puVar20[(ulong)(byte)(POPCOUNT((char)uVar24) + POPCOUNT((char)(uVar24 >> 8)) +
                                      POPCOUNT((char)(uVar24 >> 0x10))) + 2];
      }
      uVar23 = uVar24 | uVar23;
    } while (((*puVar20 & 1) == 0) && (puVar20 = (ulong *)puVar20[1], puVar20 != (ulong *)0x0));
    if (((uint)uVar23 >> 5 & 1) == 0) {
      local_458 = &DAT_03c886bc;
      puStack_450 = &DAT_03c886bc;
      puVar13 = (undefined8 *)FUN_033364d4(plVar33,&local_458,0,puVar21);
      if (puVar13 != (undefined8 *)0x0) {
        puVar21 = (ulong *)*puVar13;
      }
    }
  }
  *puVar25 = 0x30800f;
  puVar25[1] = 0;
  puVar25[2] = 6;
  puVar25[3] = (ulong)puVar21;
  puVar2 = PTR_DAT_047e66c0;
  puVar25[7] = 0x80008;
  puVar25[8] = 0;
  puVar25[0xb] = 1;
  puVar25[0xc] = (ulong)puVar21;
  puVar25[4] = (ulong)puVar2;
  puVar25[5] = uVar19;
  puVar25[10] = 0;
  puVar25[6] = (ulong)(puVar25 + 10);
  puVar25[0xd] = (ulong)&DAT_03c4f61e;
  puVar25[4] = *(ulong *)(param_1 + 0x60);
  *local_478 = puVar25;
LAB_033248e0:
  puVar21 = local_70[0];
  if (local_70[0] != (ulong *)0x0) {
    uVar17 = *(uint *)(param_1 + 0x54);
    plVar33 = (long *)(param_1 + 0x48);
    iVar32 = (int)local_70[0];
    iVar9 = (int)((ulong)local_70[0] >> 0x20);
    if (0 < (int)uVar17) {
      uVar16 = iVar32 * -0x61c8864f;
      uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
      uVar7 = uVar16 >> 0x10 | uVar16 << 0x10;
      uVar16 = iVar9 * -0x61c8864f;
      uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
      uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
      uVar16 = uVar7 + (uVar7 >> 2) + uVar16 * 0x40 + 0x9e3779b9 ^ uVar16;
      while( true ) {
        uVar16 = uVar17 & uVar16;
        puVar25 = *(ulong **)(*plVar33 + (ulong)uVar16 * 0x10);
        if (puVar25 == (ulong *)0xffffffffffffffff) break;
        if (puVar25 == local_70[0]) {
          if ((int)uVar16 <= (int)uVar17) goto LAB_03324a40;
          break;
        }
        uVar16 = uVar16 + 1;
      }
    }
    iVar6 = *(int *)(param_1 + 0x1e8);
    if ((int)uVar17 < *(int *)(param_1 + 0x50) * 2) {
      FUN_02ef5fd4(plVar33,PTR_PTR_047d1a50,uVar17 * 2 + 2);
      uVar17 = *(uint *)(param_1 + 0x54);
    }
    uVar16 = iVar32 * -0x61c8864f;
    uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
    uVar7 = uVar16 >> 0x10 | uVar16 << 0x10;
    uVar16 = iVar9 * -0x61c8864f;
    uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
    uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
    uVar16 = uVar7 + (uVar7 >> 2) + uVar16 * 0x40 + 0x9e3779b9 ^ uVar16;
    while( true ) {
      uVar16 = uVar17 & uVar16;
      puVar25 = *(ulong **)(*plVar33 + (ulong)uVar16 * 0x10);
      if (puVar25 == (ulong *)0xffffffffffffffff) break;
      if (puVar25 == puVar21) {
        iVar9 = 0;
        goto LAB_033249e4;
      }
      uVar16 = uVar16 + 1;
    }
    iVar9 = 1;
LAB_033249e4:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar9;
    *(ulong **)(*plVar33 + (-(ulong)(uVar16 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar16 << 4)) =
         puVar21;
    *(long *)(*(long *)(param_1 + 0x48) + (long)(int)uVar16 * 0x10 + 8) = (long)iVar6;
    iVar9 = *(int *)(param_1 + 0x1e8);
    lVar18 = (long)iVar9;
    if ((int)(*(uint *)(param_1 + 0x1ec) & 0x7fffffff) <= iVar9) {
      FUN_033273cc(param_1 + 0x1e0,lVar18 + 1);
      iVar9 = *(int *)(param_1 + 0x1e8);
    }
    puVar13 = (undefined8 *)(*(long *)(param_1 + 0x1e0) + (long)iVar9 * 0x10);
    *(int *)(param_1 + 0x1e8) = (int)(lVar18 + 1);
    *puVar13 = 0;
    puVar13[1] = 0x8000000000000000;
LAB_03324a40:
    if (puVar31 == puVar21) {
      lVar18 = FUN_031fa694(param_1 + 0x2b8,puVar31);
    }
    else {
      lVar18 = FUN_031fa91c(param_1 + 0x2b8,puVar31,puVar21);
    }
    if (lVar18 != 0) {
      puVar25 = puVar21;
      do {
        uVar17 = (uint)*puVar25;
        if ((uVar17 >> 0x14 & 1) != 0) {
          uVar16 = 0;
          if (puVar25 != (ulong *)0x0) {
            uVar19 = CONCAT44(uVar17,uVar17) & 0xfffff000fffff;
            uVar16 = (uint)(ushort)puVar25[(ulong)(byte)(POPCOUNT((char)uVar19) +
                                                         POPCOUNT((char)(uVar19 >> 8)) +
                                                        POPCOUNT((char)(uVar19 >> 0x10))) + 2];
          }
          goto LAB_03324b14;
        }
        if ((*puVar25 & 1) != 0) {
          uVar16 = 0;
          goto LAB_03324b14;
        }
        puVar25 = (ulong *)puVar25[1];
      } while (puVar25 != (ulong *)0x0);
      uVar16 = 0;
LAB_03324b14:
      puVar30 = (undefined1 *)(ulong)(uVar16 * local_4b4);
      local_458 = puVar30;
      __s = (char *)(**(code **)(*(long *)(param_1 + 0x238) + 0x10))
                              (param_1 + 0x238,puVar30,&local_458);
      memset(__s,0,(size_t)puVar30);
      memset(&local_458,0,0x288);
      local_3b8 = FUN_03225a30;
      local_3a8 = PTR_LAB_047e5f00;
      local_318 = FUN_032259b8;
      local_328 = PTR_LAB_047e5f08;
      local_368 = &LAB_03225af8;
      local_3a0 = PTR_LAB_047e5f10;
      local_2e0 = PTR_FUN_047e5f18;
      local_310 = PTR_LAB_047e5f28;
      local_2c8 = FUN_03225a94;
      local_2d0 = PTR_FUN_047e5f20;
      local_1d0 = param_1;
      if (local_4b4 != 0) {
        puVar25 = puVar21;
        while( true ) {
          uVar17 = (uint)*puVar25;
          if ((uVar17 >> 0x14 & 1) != 0) break;
          if (((*puVar25 & 1) != 0) || (puVar25 = (ulong *)puVar25[1], puVar25 == (ulong *)0x0))
          goto LAB_03324c1c;
        }
        if (puVar25 != (ulong *)0x0) {
          uVar19 = CONCAT44(uVar17,uVar17) & 0xfffff000fffff;
          uVar14 = (undefined2)
                   puVar25[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)) +
                                        POPCOUNT((char)(uVar19 >> 0x10))) + 2];
          goto LAB_03324c20;
        }
LAB_03324c1c:
        uVar14 = 0;
LAB_03324c20:
        uVar17 = (uint)*puVar31;
        if ((uVar17 >> 0x14 & 1) == 0) {
          if (((*puVar31 & 1) != 0) || (puVar31 = (ulong *)puVar31[1], puVar31 == (ulong *)0x0))
          goto LAB_03324c60;
          goto LAB_03324c20;
        }
        if (puVar31 != (ulong *)0x0) {
          uVar19 = CONCAT44(uVar17,uVar17) & 0xfffff000fffff;
          uVar15 = (undefined2)
                   puVar31[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)) +
                                        POPCOUNT((char)(uVar19 >> 0x10))) + 2];
          goto LAB_03324c64;
        }
LAB_03324c60:
        uVar15 = 0;
LAB_03324c64:
        FUN_03328288(&local_458,lVar18,__s,uVar5,uVar14,uVar15,local_4b4);
      }
      puStack_468 = puVar21;
      puVar31 = puVar21;
      do {
        uVar19 = *puVar31;
        if (((uint)uVar19 >> 2 & 1) != 0) {
          local_460 = puVar31[(uVar19 >> 1 & 1) + (uVar19 & 1) + 2];
          goto LAB_03324cac;
        }
        puVar31 = (ulong *)puVar31[1];
      } while (puVar31 != (ulong *)0x0);
      local_460 = 0;
LAB_03324cac:
      if ((local_460 & 1) != 0) {
        piVar4 = (int *)((local_460 & 0xfffffffffffffffe) + 8);
        do {
          cVar8 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar27) {
            *piVar4 = *piVar4 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      puVar31 = puVar21;
      while( true ) {
        uVar17 = (uint)*puVar31;
        if ((uVar17 >> 0x14 & 1) != 0) break;
        if (((*puVar31 & 1) != 0) || (puVar31 = (ulong *)puVar31[1], puVar31 == (ulong *)0x0))
        goto LAB_03324d10;
      }
      if (puVar31 != (ulong *)0x0) {
        uVar19 = CONCAT44(uVar17,uVar17) & 0xfffff000fffff;
        uVar14 = (undefined2)
                 puVar31[(ulong)(byte)(POPCOUNT((char)uVar19) + POPCOUNT((char)(uVar19 >> 8)) +
                                      POPCOUNT((char)(uVar19 >> 0x10))) + 2];
        goto LAB_03324d14;
      }
LAB_03324d10:
      uVar14 = 0;
LAB_03324d14:
      local_470 = __s;
      FUN_03322638(param_1,&local_470,local_4b4,uVar14,0xffffffff,param_2);
      if ((local_460 & 1) != 0) {
        plVar10 = (long *)(local_460 & 0xfffffffffffffffe);
        plVar33 = plVar10 + 1;
        do {
          lVar18 = *plVar33;
          cVar8 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar27) {
            *(int *)plVar33 = (int)lVar18 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar18 == 1)) {
          (**(code **)(*plVar10 + 8))();
        }
      }
      *(undefined4 *)(*(long *)(param_1 + 0x290) + lVar28 * 4) = 1;
      local_1c0 = puVar21;
      do {
        uVar19 = *puVar21;
        if (((uint)uVar19 >> 2 & 1) != 0) {
          local_1b8 = (undefined8 *)puVar21[(uVar19 >> 1 & 1) + (uVar19 & 1) + 2];
          goto LAB_03324da4;
        }
        puVar21 = (ulong *)puVar21[1];
      } while (puVar21 != (ulong *)0x0);
      local_1b8 = (undefined8 *)0x0;
LAB_03324da4:
      local_1c8 = __s;
      if (((ulong)local_1b8 & 1) == 0) {
        local_1b0 = CONCAT44(local_1b0._4_4_,local_4b4);
        FUN_03323a58(param_1 + 0x200,param_2,&local_1c8);
      }
      else {
        plVar10 = (long *)((ulong)local_1b8 & 0xfffffffffffffffe);
        plVar33 = plVar10 + 1;
        do {
          cVar8 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar27) {
            *(int *)plVar33 = (int)*plVar33 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        local_1b0 = CONCAT44(local_1b0._4_4_,local_4b4);
        FUN_03323a58(param_1 + 0x200,param_2,&local_1c8);
        do {
          lVar18 = *plVar33;
          cVar8 = '\x01';
          bVar27 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar27) {
            *(int *)plVar33 = (int)lVar18 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if ((plVar10 != (long *)0x0) && ((int)lVar18 == 1)) {
          (**(code **)(*plVar10 + 8))(plVar10);
        }
      }
      uVar17 = *(uint *)(param_1 + 0x2b4);
      if ((int)uVar17 < *(int *)(param_1 + 0x2b0) * 2) {
        FUN_02ef5fd4((long *)(param_1 + 0x2a8),PTR_PTR_047d1a50,uVar17 * 2 + 2);
        uVar17 = *(uint *)(param_1 + 0x2b4);
      }
      uVar16 = (int)__s * -0x61c8864f;
      uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
      uVar7 = uVar16 >> 0x10 | uVar16 << 0x10;
      uVar16 = (int)((ulong)__s >> 0x20) * -0x61c8864f;
      uVar16 = (uVar16 & 0xff00ff00) >> 8 | (uVar16 & 0xff00ff) << 8;
      uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
      uVar16 = uVar7 + (uVar7 >> 2) + uVar16 * 0x40 + 0x9e3779b9 ^ uVar16;
      lVar18 = *(long *)(param_1 + 0x2a8);
      while( true ) {
        uVar16 = uVar17 & uVar16;
        pcVar26 = *(char **)(lVar18 + (ulong)uVar16 * 0x10);
        if (pcVar26 == (char *)0xffffffffffffffff) break;
        if (pcVar26 == __s) {
          iVar9 = 0;
          goto LAB_03324ea8;
        }
        uVar16 = uVar16 + 1;
      }
      iVar9 = 1;
LAB_03324ea8:
      *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + iVar9;
      *(char **)(lVar18 + (-(ulong)(uVar16 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar16 << 4)) =
           __s;
      *(long *)(*(long *)(param_1 + 0x2a8) + (long)(int)uVar16 * 0x10 + 8) = lVar28;
      goto joined_r0x03324ec8;
    }
  }
LAB_03324a88:
  FUN_03328194(param_1,param_2);
  goto joined_r0x03324ec8;
LAB_033248b0:
  uVar19 = 0;
  goto LAB_033248b4;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033431ec; name: FUN_033431ec
 */


undefined8 FUN_033431ec(long param_1)

{
  undefined4 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  uint uVar22;
  ThreadType *pTVar23;
  void *pvVar24;
  size_t sVar25;
  uint uVar26;
  int iVar27;
  FILE *pFVar28;
  int *piVar29;
  int *piVar30;
  undefined4 *puVar31;
  undefined8 uVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  undefined4 *puVar38;
  ulong *puVar39;
  ulong uVar40;
  byte *pbVar41;
  ulong uVar42;
  undefined4 *puVar43;
  undefined8 *puVar44;
  long lVar45;
  char *pcVar46;
  long lVar47;
  char *pcVar48;
  long *plVar49;
  undefined1 auVar50 [16];
  undefined4 *local_2e0;
  ulong local_2d8;
  long local_2b8;
  long lStack_2b0;
  ulong local_2a8;
  ulong local_2a0;
  undefined8 local_298;
  undefined4 *local_290;
  undefined8 local_288;
  undefined4 *local_280;
  ulong local_278;
  int local_26c;
  long local_268;
  undefined8 local_260;
  long local_258;
  undefined8 local_250;
  undefined *local_248;
  undefined4 local_240;
  long local_238;
  undefined8 local_230;
  undefined *local_228;
  undefined4 local_220;
  long local_218;
  undefined8 local_210;
  undefined *local_208;
  undefined4 local_200;
  undefined1 local_1f8 [8];
  undefined8 local_1f0;
  undefined8 *local_1e8;
  ulong local_1e0;
  undefined8 local_1d8;
  char *local_1d0;
  undefined8 local_1c8;
  char *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  char local_1a8 [256];
  long local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined4 local_90;
  long local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined4 local_70;
  
  if (0 < *(int *)(param_1 + 0x1b8)) {
    *(undefined1 *)(param_1 + 0x1bc) = 1;
    return 0;
  }
  local_88 = 0;
  local_80 = -0x8000000000000000;
  local_78 = &DAT_03d7702c;
  local_70 = 0;
  uVar32 = *(undefined8 *)(param_1 + 0x90);
  local_98 = &DAT_03d7702c;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = -0x8000000000000000;
  if (*(int *)(param_1 + 0xb0) != 0) {
    lVar33 = *(long *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0xb0) = 0;
    if ((((lVar33 != 0) && (*(int *)(lVar33 + 4) != -2)) && (-1 < *(int *)(param_1 + 0xc0))) &&
       (*(undefined4 *)(lVar33 + 4) = 0xffffffff, 0 < *(int *)(param_1 + 0xc0))) {
      lVar33 = 0;
      lVar37 = 0xc;
      do {
        *(undefined4 *)(*(long *)(param_1 + 0xb8) + lVar37) = 0xffffffff;
        lVar33 = lVar33 + 1;
        lVar37 = lVar37 + 8;
      } while (lVar33 < *(int *)(param_1 + 0xc0));
    }
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    lVar33 = *(long *)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 0xd0) = 0;
    if (((lVar33 != 0) && (*(int *)(lVar33 + 4) != -2)) &&
       ((-1 < *(int *)(param_1 + 0xe0) &&
        (*(undefined4 *)(lVar33 + 4) = 0xffffffff, 0 < *(int *)(param_1 + 0xe0))))) {
      lVar33 = 0;
      lVar37 = 0xc;
      do {
        *(undefined4 *)(*(long *)(param_1 + 0xd8) + lVar37) = 0xffffffff;
        lVar33 = lVar33 + 1;
        lVar37 = lVar37 + 8;
      } while (lVar33 < *(int *)(param_1 + 0xe0));
    }
  }
  iVar15 = *(int *)(param_1 + 0xa0);
  plVar3 = (long *)(param_1 + 0xa8);
  plVar4 = (long *)(param_1 + 200);
  plVar5 = (long *)(param_1 + 0x98);
  if (0 < iVar15) {
    bVar11 = false;
    pFVar28 = *(FILE **)PTR_stdout_047cb860;
    iVar20 = 0;
    do {
      plVar49 = *(long **)(*plVar5 + (long)iVar20 * 8);
      if (plVar49 != (long *)0x0) {
        iVar15 = FUN_03342d98(plVar49);
        if (iVar15 == 0) {
          if (DAT_0488d790 == '\0') {
            if (DAT_046aaf68 != '\0') goto LAB_03343c18;
          }
          else {
            if (DAT_046aaf68 == '\0') {
              local_1f8 = (undefined1  [8])0x0;
              local_1e8 = &DAT_0488d740;
              local_1e0 = 1;
              pTVar23 = (ThreadType *)nn::os::GetCurrentThread();
              local_1d8 = nn::os::GetThreadId(pTVar23);
              local_1b0 = 0;
              local_1d0 = (char *)0x0;
              local_1c8 = 0;
              local_1c0 = (char *)0x0;
              local_1b8 = 0;
              FUN_0322c554(local_1f8,"Invalid patch registered {}",&DAT_047acc68,plVar49);
              local_1c0 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkReflectPatchRegistry.cpp"
              ;
              local_1b8 = 0x177;
              FUN_0322c8e0(local_1f8);
            }
            else {
LAB_03343c18:
              local_1f8 = (undefined1  [8])0x0;
              local_1e8 = &DAT_0488d740;
              local_1e0 = 1;
              pTVar23 = (ThreadType *)nn::os::GetCurrentThread();
              local_1d8 = nn::os::GetThreadId(pTVar23);
              local_1c8 = 0;
              local_1c0 = (char *)0x0;
              local_1b8 = 0;
              local_1b0 = 0;
              local_1a8[0] = '\0';
              local_1f0 = (char *)0x10000000000;
              local_1f8 = (undefined1  [8])local_1a8;
              local_1d0 = local_1a8;
              FUN_0322c554(local_1f8,"Invalid patch registered {}",&DAT_047acc68,plVar49);
              local_1c0 = 
              "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkReflectPatchRegistry.cpp"
              ;
              local_1b8 = 0x177;
              if (local_1a8[0] != '\0') {
                sVar25 = strlen(local_1a8);
                (local_1a8 + (int)((int)sVar25 - (uint)((int)sVar25 == 0xff)))[0] = '\n';
                (local_1a8 + (int)((int)sVar25 - (uint)((int)sVar25 == 0xff)))[1] = '\0';
                printf("%s",local_1a8);
                fflush(pFVar28);
              }
            }
            if (((ulong)local_1d0 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1d0 + -1,0);
            }
          }
          bVar11 = true;
        }
        local_1f8 = (undefined1  [8])*plVar49;
        local_1f0 = (char *)plVar49[1];
        lVar33 = (long)iVar20;
        if (local_1f8 == (undefined1  [8])local_1f0) {
          local_1f8 = (undefined1  [8])plVar49[2];
          local_1f0 = (char *)plVar49[3];
          local_218 = FUN_03342334(*(undefined8 *)(param_1 + 0x90),local_1f8,
                                   *(undefined4 *)((long)plVar49 + 0x24));
          lVar37 = FUN_03348c94(plVar4,&local_218);
          if (lVar37 == 0) {
            uVar26 = 0;
            uVar22 = 0xffffffff;
          }
          else {
            uVar22 = *(uint *)(lVar37 + 4);
            uVar26 = ((int)lVar37 - (int)*(undefined8 *)(param_1 + 0xd8)) * 0x20000000;
          }
          if (-1 < (int)(uVar22 | uVar26)) {
            if (DAT_0488d790 == '\0') {
              if (DAT_046aaf68 != '\0') goto LAB_03343cbc;
            }
            else {
              if (DAT_046aaf68 == '\0') {
                local_1f8 = (undefined1  [8])0x0;
                local_1e8 = &DAT_0488d740;
                local_1e0 = 1;
                pTVar23 = (ThreadType *)nn::os::GetCurrentThread();
                local_1d8 = nn::os::GetThreadId(pTVar23);
                local_1b0 = 0;
                local_1d0 = (char *)0x0;
                local_1c8 = 0;
                local_1c0 = (char *)0x0;
                local_1b8 = 0;
                FUN_0322c554(local_1f8,
                             "Found duplicated patch {}. The second definition will be ignored\n",
                             &DAT_047acc68,plVar49);
                local_1c0 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkReflectPatchRegistry.cpp"
                ;
                local_1b8 = 0x196;
                FUN_0322c8e0(local_1f8);
              }
              else {
LAB_03343cbc:
                local_1f8 = (undefined1  [8])0x0;
                local_1e8 = &DAT_0488d740;
                local_1e0 = 1;
                pTVar23 = (ThreadType *)nn::os::GetCurrentThread();
                local_1d8 = nn::os::GetThreadId(pTVar23);
                local_1c8 = 0;
                local_1c0 = (char *)0x0;
                local_1b8 = 0;
                local_1b0 = 0;
                local_1a8[0] = '\0';
                local_1f0 = (char *)0x10000000000;
                local_1f8 = (undefined1  [8])local_1a8;
                local_1d0 = local_1a8;
                FUN_0322c554(local_1f8,
                             "Found duplicated patch {}. The second definition will be ignored\n",
                             &DAT_047acc68,plVar49);
                local_1c0 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkReflectPatchRegistry.cpp"
                ;
                local_1b8 = 0x196;
                if (local_1a8[0] != '\0') {
                  sVar25 = strlen(local_1a8);
                  (local_1a8 + (int)((int)sVar25 - (uint)((int)sVar25 == 0xff)))[0] = '\n';
                  (local_1a8 + (int)((int)sVar25 - (uint)((int)sVar25 == 0xff)))[1] = '\0';
                  printf("%s",local_1a8);
                  fflush(pFVar28);
                }
              }
              if (((ulong)local_1d0 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1d0 + -1,0);
              }
            }
            iVar15 = *(int *)(param_1 + 0xa0) + -1;
            uVar22 = iVar15 - iVar20;
            *(int *)(param_1 + 0xa0) = iVar15;
            if (uVar22 != 0) {
              uVar34 = -(ulong)(uVar22 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar22 << 3;
              if (uVar34 < 9) {
                uVar34 = 8;
              }
              lVar37 = *(long *)(param_1 + 0x98);
              uVar42 = (uVar34 - 1 >> 3) + 1;
              uVar35 = uVar42 & 7;
              if (uVar34 - 1 < 0x38) {
                uVar34 = 0;
              }
              else {
                uVar34 = 0;
                puVar44 = (undefined8 *)(lVar37 + lVar33 * 8 + 0x20);
                do {
                  uVar34 = uVar34 + 8;
                  puVar44[-4] = puVar44[-3];
                  puVar44[-3] = puVar44[-2];
                  puVar44[-2] = puVar44[-1];
                  puVar44[-1] = *puVar44;
                  *puVar44 = puVar44[1];
                  puVar44[1] = puVar44[2];
                  puVar44[2] = puVar44[3];
                  puVar44[3] = puVar44[4];
                  puVar44 = puVar44 + 8;
                } while ((uVar42 & 0x3ffffffffffffff8) != uVar34);
              }
              if (uVar35 != 0) {
                lVar36 = -uVar35;
                puVar44 = (undefined8 *)(lVar37 + (uVar34 + lVar33) * 8);
                do {
                  *puVar44 = puVar44[1];
                  bVar14 = lVar36 != -1;
                  lVar36 = lVar36 + 1;
                  puVar44 = puVar44 + 1;
                } while (bVar14);
              }
            }
            goto LAB_0334398c;
          }
          uVar22 = FUN_0334924c(plVar4,&local_218);
          if (*(uint *)(param_1 + 0xd0) == uVar22) {
            iVar15 = uVar22 + 1;
            if ((int)(*(uint *)(param_1 + 0xd4) & 0x7fffffff) <= (int)uVar22) {
              FUN_03349368(plVar4,PTR_PTR_047d1a50,(long)iVar15);
              uVar22 = *(uint *)(param_1 + 0xd0);
            }
            plVar2 = (long *)(*(long *)(param_1 + 200) + (long)(int)uVar22 * 0x10);
            *plVar2 = local_218;
            *(int *)(plVar2 + 1) = iVar20;
            *(int *)(param_1 + 0xd0) = iVar15;
          }
          else {
            *(int *)(*plVar4 + ((long)((ulong)uVar22 << 0x20) >> 0x1c) + 8) = iVar20;
          }
        }
        else {
          local_218 = FUN_03342334(*(undefined8 *)(param_1 + 0x90),local_1f8,(int)plVar49[4]);
          lVar37 = FUN_03348c94(plVar3,&local_218);
          if (lVar37 == 0) {
            uVar26 = 0;
            uVar22 = 0xffffffff;
          }
          else {
            uVar22 = *(uint *)(lVar37 + 4);
            uVar26 = ((int)lVar37 - (int)*(undefined8 *)(param_1 + 0xb8)) * 0x20000000;
          }
          if (-1 < (int)(uVar22 | uVar26)) {
            if (DAT_0488d790 == '\0') {
              if (DAT_046aaf68 != '\0') goto LAB_03343b74;
            }
            else {
              if (DAT_046aaf68 == '\0') {
                local_1f8 = (undefined1  [8])0x0;
                local_1e8 = &DAT_0488d740;
                local_1e0 = 1;
                pTVar23 = (ThreadType *)nn::os::GetCurrentThread();
                local_1d8 = nn::os::GetThreadId(pTVar23);
                local_1b0 = 0;
                local_1d0 = (char *)0x0;
                local_1c8 = 0;
                local_1c0 = (char *)0x0;
                local_1b8 = 0;
                FUN_0322c554(local_1f8,
                             "Found duplicated patch {}. The second definition will be ignored\n",
                             &DAT_047acc68,plVar49);
                local_1c0 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkReflectPatchRegistry.cpp"
                ;
                local_1b8 = 0x183;
                FUN_0322c8e0(local_1f8);
              }
              else {
LAB_03343b74:
                local_1f8 = (undefined1  [8])0x0;
                local_1e8 = &DAT_0488d740;
                local_1e0 = 1;
                pTVar23 = (ThreadType *)nn::os::GetCurrentThread();
                local_1d8 = nn::os::GetThreadId(pTVar23);
                local_1c8 = 0;
                local_1c0 = (char *)0x0;
                local_1b8 = 0;
                local_1b0 = 0;
                local_1a8[0] = '\0';
                local_1f0 = (char *)0x10000000000;
                local_1f8 = (undefined1  [8])local_1a8;
                local_1d0 = local_1a8;
                FUN_0322c554(local_1f8,
                             "Found duplicated patch {}. The second definition will be ignored\n",
                             &DAT_047acc68,plVar49);
                local_1c0 = 
                "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkReflectPatchRegistry.cpp"
                ;
                local_1b8 = 0x183;
                if (local_1a8[0] != '\0') {
                  sVar25 = strlen(local_1a8);
                  (local_1a8 + (int)((int)sVar25 - (uint)((int)sVar25 == 0xff)))[0] = '\n';
                  (local_1a8 + (int)((int)sVar25 - (uint)((int)sVar25 == 0xff)))[1] = '\0';
                  printf("%s",local_1a8);
                  fflush(pFVar28);
                }
              }
              if (((ulong)local_1d0 & 1) != 0) {
                (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1d0 + -1,0);
              }
            }
            iVar15 = *(int *)(param_1 + 0xa0) + -1;
            uVar22 = iVar15 - iVar20;
            *(int *)(param_1 + 0xa0) = iVar15;
            if (uVar22 != 0) {
              uVar34 = -(ulong)(uVar22 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar22 << 3;
              if (uVar34 < 9) {
                uVar34 = 8;
              }
              lVar37 = *(long *)(param_1 + 0x98);
              uVar42 = (uVar34 - 1 >> 3) + 1;
              uVar35 = uVar42 & 7;
              if (uVar34 - 1 < 0x38) {
                uVar34 = 0;
              }
              else {
                uVar34 = 0;
                puVar44 = (undefined8 *)(lVar37 + lVar33 * 8 + 0x20);
                do {
                  uVar34 = uVar34 + 8;
                  puVar44[-4] = puVar44[-3];
                  puVar44[-3] = puVar44[-2];
                  puVar44[-2] = puVar44[-1];
                  puVar44[-1] = *puVar44;
                  *puVar44 = puVar44[1];
                  puVar44[1] = puVar44[2];
                  puVar44[2] = puVar44[3];
                  puVar44[3] = puVar44[4];
                  puVar44 = puVar44 + 8;
                } while ((uVar42 & 0x3ffffffffffffff8) != uVar34);
              }
              if (uVar35 != 0) {
                lVar36 = -uVar35;
                puVar44 = (undefined8 *)(lVar37 + (uVar34 + lVar33) * 8);
                do {
                  *puVar44 = puVar44[1];
                  bVar14 = lVar36 != -1;
                  lVar36 = lVar36 + 1;
                  puVar44 = puVar44 + 1;
                } while (bVar14);
              }
            }
LAB_0334398c:
            iVar20 = iVar20 + -1;
            goto LAB_03343b60;
          }
          uVar22 = FUN_0334924c(plVar3,&local_218);
          if (*(uint *)(param_1 + 0xb0) == uVar22) {
            iVar15 = uVar22 + 1;
            if ((int)(*(uint *)(param_1 + 0xb4) & 0x7fffffff) <= (int)uVar22) {
              FUN_03349368(plVar3,PTR_PTR_047d1a50,(long)iVar15);
              uVar22 = *(uint *)(param_1 + 0xb0);
            }
            plVar2 = (long *)(*(long *)(param_1 + 0xa8) + (long)(int)uVar22 * 0x10);
            *plVar2 = local_218;
            *(int *)(plVar2 + 1) = iVar20;
            *(int *)(param_1 + 0xb0) = iVar15;
          }
          else {
            *(int *)(*plVar3 + ((long)((ulong)uVar22 << 0x20) >> 0x1c) + 8) = iVar20;
          }
          pvVar24 = (void *)plVar49[2];
          if (pvVar24 == (void *)plVar49[3]) {
            pcVar48 = (char *)*plVar49;
            pcVar46 = (char *)plVar49[1];
          }
          else {
            pcVar48 = (char *)*plVar49;
            pcVar46 = (char *)plVar49[1];
            if (((long)pcVar46 - (long)pcVar48 == plVar49[3] - (long)pvVar24) &&
               (iVar15 = memcmp(pcVar48,pvVar24,(long)pcVar46 - (long)pcVar48), iVar15 == 0))
            goto LAB_033439ac;
          }
          local_1f8 = (undefined1  [8])pcVar48;
          local_1f0 = pcVar46;
          lVar33 = FUN_03349478(&local_a8,local_1f8);
          iVar15 = (int)lVar33;
          if ((int)local_a0 == iVar15) {
            if ((int)(local_a0._4_4_ & 0x7fffffff) <= iVar15) {
              FUN_03349630(&local_a8,(long)(iVar15 + 1));
              lVar33 = local_a0;
            }
            lVar33 = local_a8 + (long)(int)lVar33 * 0x18;
            FUN_031ca554(lVar33,pcVar48,pcVar46);
            *(undefined8 *)(lVar33 + 8) = 0;
            *(undefined8 *)(lVar33 + 0x10) = 0x8000000000000000;
            local_a0 = CONCAT44(local_a0._4_4_,iVar15 + 1);
          }
          lVar37 = local_a8 + (long)iVar15 * 0x18;
          piVar29 = (int *)(lVar37 + 0x10);
          iVar15 = *piVar29;
          lVar33 = (long)iVar15;
          if ((int)(*(uint *)(lVar37 + 0x14) & 0x7fffffff) <= iVar15) {
            FUN_0133bb88((long *)(lVar37 + 8),PTR_PTR_047d1a50,lVar33 + 1);
            iVar15 = *piVar29;
          }
          *(int *)(*(long *)(lVar37 + 8) + (long)iVar15 * 4) = iVar20;
          *piVar29 = (int)(lVar33 + 1);
        }
LAB_033439ac:
        if (*(int *)((long)plVar49 + 0x24) != -1) {
          local_218 = plVar49[2];
          local_210 = plVar49[3];
          if (local_218 == local_210) {
            local_218 = *plVar49;
            local_210 = plVar49[1];
          }
          _local_1f8 = FUN_03342334(uVar32,&local_218);
          lVar33 = FUN_03349844(&local_88,local_1f8);
          iVar15 = (int)lVar33;
          if ((int)local_80 == iVar15) {
            if ((int)(local_80._4_4_ & 0x7fffffff) <= iVar15) {
              FUN_03349960(&local_88,PTR_PTR_047d1a50,(long)(iVar15 + 1));
              lVar33 = local_80;
            }
            puVar44 = (undefined8 *)(local_88 + (long)(int)lVar33 * 0x18);
            puVar44[2] = 0x8000000000000000;
            *puVar44 = local_1f8;
            puVar44[1] = 0;
            local_80 = CONCAT44(local_80._4_4_,iVar15 + 1);
          }
          lVar37 = local_88 + (long)iVar15 * 0x18;
          piVar29 = (int *)(lVar37 + 0x10);
          iVar15 = *piVar29;
          lVar33 = (long)iVar15;
          if ((int)(*(uint *)(lVar37 + 0x14) & 0x7fffffff) <= iVar15) {
            FUN_0133bb88((long *)(lVar37 + 8),PTR_PTR_047d1a50,lVar33 + 1);
            iVar15 = *piVar29;
          }
          *(int *)(*(long *)(lVar37 + 8) + (long)iVar15 * 4) = iVar20;
          *piVar29 = (int)(lVar33 + 1);
          if (local_1f8 != (undefined1  [8])local_1f0) {
            lVar33 = FUN_03349844(&local_88,&local_1f0);
            iVar15 = (int)lVar33;
            if ((int)local_80 == iVar15) {
              if ((int)(local_80._4_4_ & 0x7fffffff) <= iVar15) {
                FUN_03349960(&local_88,PTR_PTR_047d1a50,(long)(iVar15 + 1));
                lVar33 = local_80;
              }
              puVar44 = (undefined8 *)(local_88 + (long)(int)lVar33 * 0x18);
              puVar44[2] = 0x8000000000000000;
              *puVar44 = local_1f0;
              puVar44[1] = 0;
              local_80 = CONCAT44(local_80._4_4_,iVar15 + 1);
            }
            lVar37 = local_88 + (long)iVar15 * 0x18;
            piVar29 = (int *)(lVar37 + 0x10);
            iVar15 = *piVar29;
            lVar33 = (long)iVar15;
            if ((int)(*(uint *)(lVar37 + 0x14) & 0x7fffffff) <= iVar15) {
              FUN_0133bb88((long *)(lVar37 + 8),PTR_PTR_047d1a50,lVar33 + 1);
              iVar15 = *piVar29;
            }
            *(int *)(*(long *)(lVar37 + 8) + (long)iVar15 * 4) = iVar20;
            *piVar29 = (int)(lVar33 + 1);
          }
        }
      }
LAB_03343b60:
      iVar15 = *(int *)(param_1 + 0xa0);
      iVar20 = iVar20 + 1;
    } while (iVar20 < iVar15);
    if (bVar11) {
      uVar32 = 0x80040200;
      goto LAB_033455b4;
    }
  }
  local_218 = 0;
  local_210 = -0x8000000000000000;
  local_208 = &DAT_03d7702c;
  local_200 = 0;
  local_228 = &DAT_03d7702c;
  local_220 = 0;
  local_248 = &DAT_03d7702c;
  local_240 = 0;
  local_238 = 0;
  local_230 = -0x8000000000000000;
  local_258 = 0;
  local_250 = -0x8000000000000000;
  if (0 < iVar15) {
    pFVar28 = *(FILE **)PTR_stdout_047cb860;
    lVar33 = 0;
    do {
      plVar49 = *(long **)(*plVar5 + lVar33 * 8);
      local_268 = *plVar49;
      local_260 = plVar49[1];
      iVar15 = (int)plVar49[4];
      if (iVar15 == -1) {
        local_268 = plVar49[2];
        local_260 = plVar49[3];
        iVar15 = *(int *)((long)plVar49 + 0x24);
      }
      local_2b8 = CONCAT44(local_2b8._4_4_,iVar15);
      local_290 = (undefined4 *)FUN_03342334(uVar32,&local_268);
      if ((int)plVar49[4] == -1) {
        lVar37 = FUN_03348c94(plVar4,&local_290);
        if (lVar37 == 0) {
          iVar15 = -1;
        }
        else {
          iVar15 = *(int *)(*plVar4 + (long)*(int *)(lVar37 + 4) * 0x10 + 8);
        }
        local_2a8 = CONCAT44(local_2a8._4_4_,iVar15);
      }
      else {
        lVar37 = FUN_03348c94(plVar3,&local_290);
        if (lVar37 == 0) {
          iVar15 = -1;
        }
        else {
          iVar15 = *(int *)(*plVar3 + (long)*(int *)(lVar37 + 4) * 0x10 + 8);
        }
        local_2a8 = CONCAT44(local_2a8._4_4_,iVar15);
        lVar37 = FUN_03349b40(&local_88,&local_290);
        if (lVar37 == 0) {
          uVar26 = 0;
          uVar22 = 0xffffffff;
        }
        else {
          uVar22 = *(uint *)(lVar37 + 4);
          uVar26 = ((int)lVar37 - (int)local_78) * 0x20000000;
        }
        if (-1 < (int)(uVar22 | uVar26)) {
          lVar37 = local_88 + (long)(int)(uVar22 | uVar26) * 0x18;
          iVar20 = *(int *)(lVar37 + 0x10);
          if (iVar20 != 0) {
            puVar43 = *(undefined4 **)(lVar37 + 8);
            lVar37 = (long)iVar20 << 2;
            do {
              uVar21 = *puVar43;
              lVar36 = FUN_03349bd4(&local_238,&local_2a8);
              iVar20 = (int)lVar36;
              if ((int)local_230 == iVar20) {
                if ((int)(local_230._4_4_ & 0x7fffffff) <= iVar20) {
                  FUN_03349cd0(&local_238,(long)(iVar20 + 1));
                  lVar36 = local_230;
                }
                piVar29 = (int *)(local_238 + (long)(int)lVar36 * 0x18);
                *piVar29 = iVar15;
                piVar29[2] = 0;
                piVar29[3] = 0;
                piVar29[4] = 0;
                piVar29[5] = -0x80000000;
                local_230 = CONCAT44(local_230._4_4_,iVar20 + 1);
              }
              lVar45 = local_238 + (long)iVar20 * 0x18;
              piVar29 = (int *)(lVar45 + 0x10);
              iVar20 = *piVar29;
              lVar36 = (long)iVar20;
              if ((int)(*(uint *)(lVar45 + 0x14) & 0x7fffffff) <= iVar20) {
                FUN_0133bb88((long *)(lVar45 + 8),PTR_PTR_047d1a50,lVar36 + 1);
                iVar20 = *piVar29;
              }
              puVar43 = puVar43 + 1;
              lVar37 = lVar37 + -4;
              *(undefined4 *)(*(long *)(lVar45 + 8) + (long)iVar20 * 4) = uVar21;
              *piVar29 = (int)(lVar36 + 1);
            } while (lVar37 != 0);
          }
        }
      }
      if (-1 < iVar15) {
        iVar20 = (int)plVar49[6];
        if (0 < iVar20) {
          lVar37 = 0;
          do {
            if ((*(char *)(plVar49[5] + lVar37 * 0x10) == '\a') &&
               (lVar36 = *(long *)(plVar49[5] + lVar37 * 0x10 + 8), lVar36 != 0)) {
              auVar50 = FUN_03342334(uVar32,lVar36,*(undefined4 *)(lVar36 + 0x10));
              _local_1f8 = auVar50;
              lVar36 = FUN_03348c94(plVar3,local_1f8);
              if (lVar36 == 0) {
                local_280 = (undefined4 *)CONCAT44(local_280._4_4_,0xffffffff);
              }
              else {
                iVar20 = *(int *)(*plVar3 + (long)*(int *)(lVar36 + 4) * 0x10 + 8);
                local_280 = (undefined4 *)CONCAT44(local_280._4_4_,iVar20);
                if (iVar20 != -1) {
                  lVar36 = FUN_03349bd4(&local_238,&local_280);
                  iVar16 = (int)lVar36;
                  if ((int)local_230 == iVar16) {
                    if ((int)(local_230._4_4_ & 0x7fffffff) <= iVar16) {
                      FUN_03349cd0(&local_238,(long)(iVar16 + 1));
                      lVar36 = local_230;
                    }
                    piVar29 = (int *)(local_238 + (long)(int)lVar36 * 0x18);
                    *piVar29 = iVar20;
                    piVar29[2] = 0;
                    piVar29[3] = 0;
                    piVar29[4] = 0;
                    piVar29[5] = -0x80000000;
                    local_230 = CONCAT44(local_230._4_4_,iVar16 + 1);
                  }
                  lVar45 = local_238 + (long)iVar16 * 0x18;
                  piVar29 = (int *)(lVar45 + 0x10);
                  iVar20 = *piVar29;
                  lVar36 = (long)iVar20;
                  if ((int)(*(uint *)(lVar45 + 0x14) & 0x7fffffff) <= iVar20) {
                    FUN_0133bb88((long *)(lVar45 + 8),PTR_PTR_047d1a50,lVar36 + 1);
                    iVar20 = *piVar29;
                  }
                  *(int *)(*(long *)(lVar45 + 8) + (long)iVar20 * 4) = iVar15;
                  *piVar29 = (int)(lVar36 + 1);
                }
              }
              if (*plVar49 != plVar49[1]) {
                lVar36 = FUN_03349b40(&local_88,local_1f8);
                if (lVar36 == 0) {
                  uVar26 = 0;
                  uVar22 = 0xffffffff;
                }
                else {
                  uVar22 = *(uint *)(lVar36 + 4);
                  uVar26 = ((int)lVar36 - (int)local_78) * 0x20000000;
                }
                if (-1 < (int)(uVar22 | uVar26)) {
                  lVar36 = local_88 + (long)(int)(uVar22 | uVar26) * 0x18;
                  iVar20 = *(int *)(lVar36 + 0x10);
                  if (iVar20 != 0) {
                    piVar29 = *(int **)(lVar36 + 8);
                    lVar36 = (long)iVar20 << 2;
                    do {
                      iVar20 = *piVar29;
                      if (*(char *)(*(long *)(*plVar5 + (long)iVar20 * 8) + 0x35) == '\0') {
                        lVar45 = FUN_03349bd4(&local_238,&local_2a8);
                        iVar16 = (int)lVar45;
                        if ((int)local_230 == iVar16) {
                          if ((int)(local_230._4_4_ & 0x7fffffff) <= iVar16) {
                            FUN_03349cd0(&local_238,(long)(iVar16 + 1));
                            lVar45 = local_230;
                          }
                          piVar30 = (int *)(local_238 + (long)(int)lVar45 * 0x18);
                          *piVar30 = iVar15;
                          piVar30[2] = 0;
                          piVar30[3] = 0;
                          piVar30[4] = 0;
                          piVar30[5] = -0x80000000;
                          local_230 = CONCAT44(local_230._4_4_,iVar16 + 1);
                        }
                        lVar47 = local_238 + (long)iVar16 * 0x18;
                        piVar30 = (int *)(lVar47 + 0x10);
                        iVar16 = *piVar30;
                        lVar45 = (long)iVar16;
                        if ((int)(*(uint *)(lVar47 + 0x14) & 0x7fffffff) <= iVar16) {
                          FUN_0133bb88((long *)(lVar47 + 8),PTR_PTR_047d1a50,lVar45 + 1);
                          iVar16 = *piVar30;
                        }
                        *(int *)(*(long *)(lVar47 + 8) + (long)iVar16 * 4) = iVar20;
                        *piVar30 = (int)(lVar45 + 1);
                      }
                      piVar29 = piVar29 + 1;
                      lVar36 = lVar36 + -4;
                    } while (lVar36 != 0);
                  }
                }
              }
              iVar20 = (int)plVar49[6];
            }
            lVar37 = lVar37 + 1;
          } while (lVar37 < iVar20);
        }
        if ((int)plVar49[4] == -1) {
          FUN_031ca554(local_1f8,local_268,local_260);
          lVar37 = FUN_03349ec0(&local_a8,local_1f8);
          if (lVar37 == 0) {
            uVar26 = 0;
            uVar22 = 0xffffffff;
          }
          else {
            uVar22 = *(uint *)(lVar37 + 4);
            uVar26 = ((int)lVar37 - (int)local_98) * 0x20000000;
          }
          if (((ulong)(byte)local_1f8[0] & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,(long)local_1f8 - 1,0);
          }
          if (-1 < (int)(uVar22 | uVar26)) {
            FUN_031ca554(&local_2a0,local_268,local_260);
            lVar37 = FUN_03349ec0(&local_a8,&local_2a0);
            if (lVar37 == 0) {
              uVar26 = 0;
              uVar22 = 0xffffffff;
            }
            else {
              uVar22 = *(uint *)(lVar37 + 4);
              uVar26 = ((int)lVar37 - (int)local_98) * 0x20000000;
            }
            if (-1 < (int)(uVar22 | uVar26)) {
              local_280 = local_290;
              while( true ) {
                lVar37 = FUN_03348c94(plVar3,&local_280);
                if ((lVar37 == 0) ||
                   (iVar20 = *(int *)(*plVar3 + (long)*(int *)(lVar37 + 4) * 0x10 + 8), iVar20 == -1
                   )) break;
                puVar44 = *(undefined8 **)(*(long *)(param_1 + 0x98) + (long)iVar20 * 8);
                pvVar24 = (void *)puVar44[2];
                pvVar6 = (void *)puVar44[3];
                if (pvVar24 == pvVar6) {
LAB_03344514:
                  plVar49 = &local_258;
                  goto LAB_0334453c;
                }
                sVar25 = puVar44[1] - (long)*puVar44;
                if (sVar25 != (long)pvVar6 - (long)pvVar24) goto LAB_03344514;
                iVar16 = memcmp((void *)*puVar44,pvVar24,sVar25);
                if (iVar16 != 0) goto LAB_03344514;
                local_1f8 = (undefined1  [8])pvVar24;
                local_1f0 = pvVar6;
                local_280 = (undefined4 *)
                            FUN_03342334(*(undefined8 *)(param_1 + 0x90),local_1f8,
                                         *(undefined4 *)((long)puVar44 + 0x24));
              }
              lVar37 = FUN_033418d0(&local_218,&local_2a0);
              if ((lVar37 != 0) &&
                 (iVar20 = *(int *)(local_218 + (long)*(int *)(lVar37 + 4) * 0x10 + 8), iVar20 != -1
                 )) {
                if (DAT_0488d790 == '\0') {
                  if (DAT_046aaf68 != '\0') goto LAB_03344674;
                }
                else if (DAT_046aaf68 == '\0') {
                  local_1f8 = (undefined1  [8])0x0;
                  local_1e8 = &DAT_0488d740;
                  local_1e0 = 1;
                  pTVar23 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1d8 = nn::os::GetThreadId(pTVar23);
                  local_1b0 = 0;
                  local_1d0 = (char *)0x0;
                  local_1c8 = 0;
                  local_1c0 = (char *)0x0;
                  local_1b8 = 0;
                  local_280 = (undefined4 *)
                              CONCAT44(local_280._4_4_,
                                       *(undefined4 *)(*(long *)(*plVar5 + (long)iVar20 * 8) + 0x24)
                                      );
                  FUN_0322c554(local_1f8,
                               "Found conflict in registered patches for class \'{}\'.\nThe class patch for version {} conflicts with patch for new class version {}."
                               ,&DAT_047acc78,&local_268,&local_280,&local_2b8);
                  local_1c0 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkReflectPatchRegistry.cpp"
                  ;
                  local_1b8 = 0x229;
                  FUN_0322c8e0(local_1f8);
                  if (((ulong)local_1d0 & 1) != 0) {
                    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1d0 + -1,0);
                  }
                }
                else {
LAB_03344674:
                  local_1f8 = (undefined1  [8])0x0;
                  local_1e8 = &DAT_0488d740;
                  local_1e0 = 1;
                  pTVar23 = (ThreadType *)nn::os::GetCurrentThread();
                  local_1d8 = nn::os::GetThreadId(pTVar23);
                  local_1c8 = 0;
                  local_1c0 = (char *)0x0;
                  local_1b8 = 0;
                  local_1b0 = 0;
                  local_1f0 = (char *)0x10000000000;
                  local_1a8[0] = '\0';
                  local_26c = *(int *)(*(long *)(*plVar5 + (long)iVar20 * 8) + 0x24);
                  local_1f8 = (undefined1  [8])local_1a8;
                  local_1d0 = local_1a8;
                  FUN_0322c554(local_1f8,
                               "Found conflict in registered patches for class \'{}\'.\nThe class patch for version {} conflicts with patch for new class version {}."
                               ,&DAT_047acc78,&local_268,&local_26c,&local_2b8);
                  local_1c0 = 
                  "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkReflectPatchRegistry.cpp"
                  ;
                  local_1b8 = 0x229;
                  if (local_1a8[0] != '\0') {
                    sVar25 = strlen(local_1a8);
                    (local_1a8 + (int)((int)sVar25 - (uint)((int)sVar25 == 0xff)))[0] = '\n';
                    (local_1a8 + (int)((int)sVar25 - (uint)((int)sVar25 == 0xff)))[1] = '\0';
                    printf("%s",local_1a8);
                    fflush(pFVar28);
                  }
                  if (((ulong)local_1d0 & 1) != 0) {
                    (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1d0 + -1,0);
                  }
                }
                if ((local_2a0 & 1) != 0) {
                  (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_2a0 - 1,0);
                }
                uVar32 = 0x80040200;
                goto LAB_0334536c;
              }
              uVar17 = FUN_03341604(&local_218,&local_2a0);
              if ((uint)local_210 == uVar17) {
                uVar18 = uVar17;
                if ((int)(local_210._4_4_ & 0x7fffffff) <= (int)uVar17) {
                  FUN_0334108c(&local_218,PTR_PTR_047d1a50,(long)(int)(uVar17 + 1));
                  uVar18 = (uint)local_210;
                }
                lVar37 = local_218;
                puVar39 = (ulong *)(local_218 + (long)(int)uVar18 * 0x10);
                *puVar39 = 0;
                pcVar48 = (char *)(local_2a0 & 0xfffffffffffffffe);
                if (pcVar48 != (char *)0x0) {
                  sVar25 = strlen(pcVar48);
                  sVar25 = (size_t)((int)sVar25 + 1);
                  pvVar24 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                              (PTR_PTR_047d1a50,sVar25);
                  memcpy(pvVar24,pcVar48,sVar25);
                  *puVar39 = (ulong)pvVar24 | 1;
                }
                *(int *)(lVar37 + (long)(int)uVar18 * 0x10 + 8) = (int)lVar33;
                local_210 = CONCAT44(local_210._4_4_,uVar17 + 1);
              }
              else {
                *(int *)(local_218 + ((long)((ulong)uVar17 << 0x20) >> 0x1c) + 8) = (int)lVar33;
              }
              plVar49 = &local_238;
              iVar20 = -1;
LAB_0334453c:
              lVar37 = local_a8 + (long)(int)(uVar22 | uVar26) * 0x18;
              iVar16 = *(int *)(lVar37 + 0x10);
              if (iVar16 != 0) {
                piVar29 = *(int **)(lVar37 + 8);
                lVar37 = (long)iVar16 << 2;
                do {
                  iVar16 = *piVar29;
                  if (iVar20 != iVar16) {
                    iVar19 = FUN_03349bd4(plVar49,&local_2a8);
                    if ((int)plVar49[1] == iVar19) {
                      iVar27 = iVar19;
                      if ((int)(*(uint *)((long)plVar49 + 0xc) & 0x7fffffff) <= iVar19) {
                        FUN_03349cd0(plVar49,(long)(iVar19 + 1));
                        iVar27 = (int)plVar49[1];
                      }
                      piVar30 = (int *)(*plVar49 + (long)iVar27 * 0x18);
                      *piVar30 = iVar15;
                      piVar30[2] = 0;
                      piVar30[3] = 0;
                      piVar30[4] = 0;
                      piVar30[5] = -0x80000000;
                      *(int *)(plVar49 + 1) = iVar19 + 1;
                    }
                    lVar45 = *plVar49 + (long)iVar19 * 0x18;
                    piVar30 = (int *)(lVar45 + 0x10);
                    iVar19 = *piVar30;
                    lVar36 = (long)iVar19;
                    if ((int)(*(uint *)(lVar45 + 0x14) & 0x7fffffff) <= iVar19) {
                      FUN_0133bb88((long *)(lVar45 + 8),PTR_PTR_047d1a50,lVar36 + 1);
                      iVar19 = *piVar30;
                    }
                    *(int *)(*(long *)(lVar45 + 8) + (long)iVar19 * 4) = iVar16;
                    *piVar30 = (int)(lVar36 + 1);
                  }
                  piVar29 = piVar29 + 1;
                  lVar37 = lVar37 + -4;
                } while (lVar37 != 0);
              }
            }
            if ((local_2a0 & 1) != 0) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_2a0 - 1,0);
            }
          }
        }
      }
      lVar33 = lVar33 + 1;
    } while (lVar33 < *(int *)(param_1 + 0xa0));
    iVar15 = (int)local_250 + -1;
    if (0 < (int)local_250) {
      do {
        lVar33 = (long)iVar15;
        puVar43 = (undefined4 *)(local_258 + (long)iVar15 * 0x18);
        uVar21 = *puVar43;
        local_268 = CONCAT44(local_268._4_4_,uVar21);
        uVar22 = puVar43[4];
        local_2d8 = (ulong)uVar22;
        if ((int)uVar22 < 1) {
          local_2e0 = (undefined4 *)0x0;
          local_2d8 = 0x80000000;
        }
        else {
          puVar31 = *(undefined4 **)(local_258 + lVar33 * 0x18 + 8);
          local_2e0 = (undefined4 *)
                      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                (PTR_PTR_047d1a50,local_2d8 << 2);
          uVar26 = uVar22 & 7;
          puVar43 = local_2e0;
          if (6 < uVar22 - 1) {
            iVar20 = -(uVar22 & 0xfffffff8);
            puVar38 = local_2e0;
            do {
              *puVar38 = *puVar31;
              puVar38[1] = puVar31[1];
              puVar38[2] = puVar31[2];
              puVar38[3] = puVar31[3];
              puVar38[4] = puVar31[4];
              puVar38[5] = puVar31[5];
              puVar38[6] = puVar31[6];
              puVar1 = puVar31 + 7;
              puVar43 = puVar38 + 8;
              puVar31 = puVar31 + 8;
              iVar20 = iVar20 + 8;
              puVar38[7] = *puVar1;
              puVar38 = puVar43;
            } while (iVar20 != 0);
          }
          for (; uVar26 != 0; uVar26 = uVar26 - 1) {
            *puVar43 = *puVar31;
            puVar43 = puVar43 + 1;
            puVar31 = puVar31 + 1;
          }
          uVar22 = *(uint *)(local_258 + lVar33 * 0x18 + 0x10);
        }
        if (uVar22 != 0) {
          puVar43 = *(undefined4 **)(local_258 + lVar33 * 0x18 + 8);
          lVar33 = (long)(int)uVar22 << 2;
          do {
            uVar9 = *puVar43;
            local_1e8 = (undefined8 *)&DAT_03d7702c;
            local_1f8 = (undefined1  [8])0x0;
            local_1f0 = (char *)0x8000000000000000;
            local_1e0 = local_1e0 & 0xffffffff00000000;
            iVar20 = FUN_033458b0(uVar21,uVar9,&local_238,local_1f8);
            if (iVar20 == 0) {
              lVar37 = FUN_03349bd4(&local_238,&local_268);
              iVar20 = (int)lVar37;
              if ((int)local_230 == iVar20) {
                if ((int)(local_230._4_4_ & 0x7fffffff) <= iVar20) {
                  FUN_03349cd0(&local_238,(long)(iVar20 + 1));
                  lVar37 = local_230;
                }
                puVar31 = (undefined4 *)(local_238 + (long)(int)lVar37 * 0x18);
                *puVar31 = uVar21;
                *(undefined8 *)(puVar31 + 2) = 0;
                *(undefined8 *)(puVar31 + 4) = 0x8000000000000000;
                local_230 = CONCAT44(local_230._4_4_,iVar20 + 1);
              }
              lVar36 = local_238 + (long)iVar20 * 0x18;
              piVar29 = (int *)(lVar36 + 0x10);
              iVar20 = *piVar29;
              lVar37 = (long)iVar20;
              if ((int)(*(uint *)(lVar36 + 0x14) & 0x7fffffff) <= iVar20) {
                FUN_0133bb88((long *)(lVar36 + 8),PTR_PTR_047d1a50,lVar37 + 1);
                iVar20 = *piVar29;
              }
              *(undefined4 *)(*(long *)(lVar36 + 8) + (long)iVar20 * 4) = uVar9;
              *piVar29 = (int)(lVar37 + 1);
            }
            if ((local_1e8 != (undefined8 *)0x0) && (*(int *)((long)local_1e8 + 4) != -2)) {
              (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_1e8,0);
              local_1e8 = (undefined8 *)&DAT_03d7702c;
              local_1e0 = local_1e0 & 0xffffffff00000000;
            }
            lVar37 = (long)local_1f0;
            uVar34 = (ulong)local_1f0._4_4_;
            local_1f0 = (char *)((ulong)local_1f0._4_4_ << 0x20);
            if ((-1 < lVar37) && (local_1f8 != (undefined1  [8])0x0)) {
              (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                        (PTR_PTR_047d1a50,local_1f8,uVar34 << 3);
            }
            puVar43 = puVar43 + 1;
            lVar33 = lVar33 + -4;
          } while (lVar33 != 0);
        }
        if ((local_2e0 != (undefined4 *)0x0) && (-1 < (int)local_2d8)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_2e0,local_2d8 << 2)
          ;
        }
        iVar15 = iVar15 + -1;
      } while (-1 < iVar15);
    }
  }
  local_268 = 0;
  local_260 = -0x8000000000000000;
  if (plVar5 == &local_268) {
    uVar22 = 0;
  }
  else {
    FUN_03349fc4(&local_268);
    FUN_03349fc4(plVar5);
    lVar37 = *(long *)(param_1 + 0x98);
    *(long *)(param_1 + 0x98) = local_268;
    uVar22 = *(uint *)(param_1 + 0xa0);
    lVar33 = *(long *)(param_1 + 0xa0);
    *(int *)(param_1 + 0xa0) = (int)local_260;
    *(uint *)(param_1 + 0xa4) = local_260._4_4_;
    local_268 = lVar37;
    local_260 = lVar33;
  }
  local_280 = (undefined4 *)0x0;
  local_278 = 0x8000000000000000;
  if ((int)uVar22 < 1) {
    local_278._0_4_ = 0;
  }
  else {
    FUN_0334a034(&local_280,uVar22);
  }
  puVar43 = local_280;
  uVar26 = (uint)local_278;
  if ((uint)local_278 != uVar22) {
    local_278 = CONCAT44(local_278._4_4_,uVar22);
    uVar26 = uVar22;
  }
  if (0 < (int)local_260) {
    uVar22 = 0x811c9dc5;
    lVar33 = 0;
    do {
      local_280[lVar33 * 2] = (int)lVar33;
      puVar39 = *(ulong **)(local_268 + lVar33 * 8);
      uVar34 = *puVar39;
      uVar42 = puVar39[1];
      if (uVar34 == uVar42) {
        uVar17 = 0;
      }
      else {
        uVar35 = uVar42 - uVar34;
        uVar17 = uVar22;
        if (0 < (long)uVar35) {
          uVar40 = uVar35 & 3;
          if (uVar42 + ~uVar34 < 3) {
            uVar42 = 0;
          }
          else {
            uVar42 = 0;
            do {
              pbVar41 = (byte *)(uVar34 + uVar42);
              uVar42 = uVar42 + 4;
              uVar17 = ((((uVar17 ^ *pbVar41) * 0x1000193 ^ (uint)pbVar41[1]) * 0x1000193 ^
                        (uint)pbVar41[2]) * 0x1000193 ^ (uint)pbVar41[3]) * 0x1000193;
            } while ((uVar35 & 0xfffffffffffffffc) != uVar42);
          }
          if (uVar40 != 0) {
            pbVar41 = (byte *)(uVar34 + uVar42);
            do {
              uVar17 = (uVar17 ^ *pbVar41) * 0x1000193;
              uVar40 = uVar40 - 1;
              pbVar41 = pbVar41 + 1;
            } while (uVar40 != 0);
          }
        }
      }
      uVar18 = (int)puVar39[4] * -0x61c8864f;
      uVar18 = (uVar18 & 0xff00ff00) >> 8 | (uVar18 & 0xff00ff) << 8;
      uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
      uVar17 = uVar17 * 0x40 + -0x61c88647 + uVar18 + (uVar18 >> 2) ^ uVar17;
      uVar34 = puVar39[2];
      uVar42 = puVar39[3];
      if (uVar34 == uVar42) {
        uVar18 = 0;
      }
      else {
        uVar35 = uVar42 - uVar34;
        uVar18 = uVar22;
        if (0 < (long)uVar35) {
          uVar40 = uVar35 & 3;
          if (uVar42 + ~uVar34 < 3) {
            uVar42 = 0;
          }
          else {
            uVar42 = 0;
            do {
              pbVar41 = (byte *)(uVar34 + uVar42);
              uVar42 = uVar42 + 4;
              uVar18 = ((((uVar18 ^ *pbVar41) * 0x1000193 ^ (uint)pbVar41[1]) * 0x1000193 ^
                        (uint)pbVar41[2]) * 0x1000193 ^ (uint)pbVar41[3]) * 0x1000193;
            } while ((uVar35 & 0xfffffffffffffffc) != uVar42);
          }
          if (uVar40 != 0) {
            pbVar41 = (byte *)(uVar34 + uVar42);
            do {
              uVar18 = (uVar18 ^ *pbVar41) * 0x1000193;
              uVar40 = uVar40 - 1;
              pbVar41 = pbVar41 + 1;
            } while (uVar40 != 0);
          }
        }
      }
      uVar10 = *(int *)((long)puVar39 + 0x24) * -0x61c8864f;
      uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
      uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
      uVar18 = uVar18 * 0x40 + -0x61c88647 + uVar10 + (uVar10 >> 2) ^ uVar18;
      lVar37 = lVar33 + 1;
      local_280[lVar33 * 2 + 1] = uVar17 * 0x40 + -0x61c88647 + uVar18 + (uVar18 >> 2) ^ uVar17;
      lVar33 = lVar37;
    } while (lVar37 < (int)local_260);
  }
  iVar15 = (int)local_260;
  if (uVar26 - 1 != 0 && 0 < (int)uVar26) {
    FUN_0334a1b0(local_280,0,uVar26 - 1);
    iVar15 = (int)local_260;
  }
  local_290 = (undefined4 *)0x0;
  local_288 = -0x8000000000000000;
  if (iVar15 < 1) {
    local_288._0_4_ = 0;
  }
  else {
    FUN_02e9b320(&local_290,PTR_PTR_047d1a50,iVar15);
  }
  if ((int)(uint)local_288 < iVar15) {
    lVar33 = (long)(int)(uint)local_288;
    uVar22 = ~(uint)local_288;
    local_288 = CONCAT44(local_288._4_4_,iVar15);
    memset(local_290 + lVar33,0xff,(ulong)(iVar15 + uVar22) * 4 + 4);
  }
  else if (iVar15 < (int)(uint)local_288) {
    local_288 = CONCAT44(local_288._4_4_,iVar15);
  }
  local_2a0 = 0;
  local_298 = -0x8000000000000000;
  if (0 < (int)uVar26) {
    uVar21 = 0;
    if ((int)uVar26 < 2) {
      uVar26 = 1;
    }
    uVar34 = (ulong)uVar26;
    puVar31 = puVar43;
    do {
      uVar21 = FUN_033459c0(*puVar31,&local_290,&local_238,uVar21,&local_2a0);
      uVar34 = uVar34 - 1;
      puVar31 = puVar31 + 2;
    } while (uVar34 != 0);
  }
  iVar15 = (int)local_260;
  if ((int)(*(uint *)(param_1 + 0xa4) & 0x7fffffff) < (int)local_260) {
    FUN_0334a28c(plVar5,(long)(int)local_260);
  }
  if (*(int *)(param_1 + 0xa0) != iVar15) {
    *(int *)(param_1 + 0xa0) = iVar15;
  }
  if (0 < (int)local_260) {
    lVar33 = 0;
    do {
      if ((int)local_290[lVar33] < 0) {
        if (DAT_0488d790 == '\0') {
          if (DAT_046aaf68 != '\0') goto LAB_033457c4;
        }
        else if (DAT_046aaf68 == '\0') {
          local_1f8 = (undefined1  [8])0x0;
          local_1e8 = &DAT_0488d740;
          local_1e0 = 1;
          pTVar23 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d8 = nn::os::GetThreadId(pTVar23);
          local_1d0 = (char *)0x0;
          local_1c8 = 0;
          local_1c0 = (char *)0x0;
          local_1b8 = 0;
          local_1b0 = 0;
          FUN_0322c554(local_1f8,"Found circular dependency in patches.",PTR_DAT_047d1b38);
          local_1c0 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkReflectPatchRegistry.cpp"
          ;
          local_1b8 = 0x27a;
          FUN_0322c8e0(local_1f8);
          if (((ulong)local_1d0 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1d0 + -1,0);
          }
        }
        else {
LAB_033457c4:
          local_1f8 = (undefined1  [8])0x0;
          local_1e8 = &DAT_0488d740;
          local_1e0 = 1;
          pTVar23 = (ThreadType *)nn::os::GetCurrentThread();
          local_1d8 = nn::os::GetThreadId(pTVar23);
          local_1c8 = 0;
          local_1c0 = (char *)0x0;
          local_1b8 = 0;
          local_1b0 = 0;
          local_1a8[0] = '\0';
          local_1f0 = (char *)0x10000000000;
          local_1f8 = (undefined1  [8])local_1a8;
          local_1d0 = local_1a8;
          FUN_0322c554(local_1f8,"Found circular dependency in patches.",PTR_DAT_047d1b38);
          local_1c0 = 
          "C:/gitlab-runner/builds/jTd3sth4/0/research_and_development/havok/hk2021_1_0_r1/Source/Common/Compat/Version/hkReflectPatchRegistry.cpp"
          ;
          local_1b8 = 0x27a;
          if (local_1a8[0] != '\0') {
            sVar25 = strlen(local_1a8);
            (local_1a8 + (int)((int)sVar25 - (uint)((int)sVar25 == 0xff)))[0] = '\n';
            (local_1a8 + (int)((int)sVar25 - (uint)((int)sVar25 == 0xff)))[1] = '\0';
            printf("%s",local_1a8);
            fflush(*(FILE **)PTR_stdout_047cb860);
          }
          if (((ulong)local_1d0 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_1d0 + -1,0);
          }
        }
        uVar32 = 0x80040200;
        if (plVar5 != &local_268) {
          FUN_03349fc4(plVar5);
          FUN_03349fc4(&local_268);
          lVar37 = *(long *)(param_1 + 0x98);
          *(long *)(param_1 + 0x98) = local_268;
          lVar33 = *(long *)(param_1 + 0xa0);
          *(int *)(param_1 + 0xa0) = (int)local_260;
          *(uint *)(param_1 + 0xa4) = local_260._4_4_;
          local_268 = lVar37;
          local_260 = lVar33;
        }
        goto LAB_033452fc;
      }
      *(undefined8 *)(*plVar5 + (ulong)(uint)local_290[lVar33] * 8) =
           *(undefined8 *)(local_268 + lVar33 * 8);
      lVar33 = lVar33 + 1;
    } while (lVar33 < (int)local_260);
  }
  local_1f8 = (undefined1  [8])0x0;
  local_1f0 = (char *)0x8000000000000000;
  if (*(int *)(param_1 + 0xb0) != 0) {
    lVar33 = *(long *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0xb0) = 0;
    if ((((lVar33 != 0) && (*(int *)(lVar33 + 4) != -2)) && (-1 < *(int *)(param_1 + 0xc0))) &&
       (*(undefined4 *)(lVar33 + 4) = 0xffffffff, 0 < *(int *)(param_1 + 0xc0))) {
      lVar33 = 0;
      lVar37 = 0xc;
      do {
        *(undefined4 *)(*(long *)(param_1 + 0xb8) + lVar37) = 0xffffffff;
        lVar33 = lVar33 + 1;
        lVar37 = lVar37 + 8;
      } while (lVar33 < *(int *)(param_1 + 0xc0));
    }
  }
  puVar12 = PTR_PTR_047d1a50;
  local_26c = 0;
  iVar15 = *(int *)(param_1 + 0xa0);
  if (0 < iVar15) {
    lVar33 = 0;
    plVar4 = (long *)(param_1 + 0xe8);
    do {
      plVar49 = *(long **)(*plVar5 + lVar33 * 8);
      uVar21 = (undefined4)lVar33;
      if (*plVar49 == plVar49[1]) {
        lVar37 = (long)(int)local_1f0;
        if ((int)(local_1f0._4_4_ & 0x7fffffff) <= (int)local_1f0) {
          FUN_0133bb88(local_1f8,puVar12,lVar37 + 1);
        }
        *(undefined4 *)((long)local_1f8 + (long)(int)local_1f0 * 4) = uVar21;
        local_1f0 = (char *)CONCAT44(local_1f0._4_4_,(int)(lVar37 + 1));
      }
      else {
        local_2b8 = *plVar49;
        lStack_2b0 = plVar49[1];
        local_2a8 = FUN_03342334(*(undefined8 *)(param_1 + 0x90),&local_2b8,(int)plVar49[4]);
        uVar22 = FUN_0334924c(plVar3,&local_2a8);
        if (*(uint *)(param_1 + 0xb0) == uVar22) {
          iVar15 = uVar22 + 1;
          if ((int)(*(uint *)(param_1 + 0xb4) & 0x7fffffff) <= (int)uVar22) {
            FUN_03349368(plVar3,puVar12,(long)iVar15);
            uVar22 = *(uint *)(param_1 + 0xb0);
          }
          puVar39 = (ulong *)(*(long *)(param_1 + 0xa8) + (long)(int)uVar22 * 0x10);
          *puVar39 = local_2a8;
          *(undefined4 *)(puVar39 + 1) = uVar21;
          *(int *)(param_1 + 0xb0) = iVar15;
        }
        else {
          *(undefined4 *)(*plVar3 + ((long)((ulong)uVar22 << 0x20) >> 0x1c) + 8) = uVar21;
        }
      }
      lVar37 = plVar49[2];
      lVar36 = plVar49[3];
      if (*plVar49 != plVar49[1] || lVar37 != lVar36) {
        lStack_2b0 = plVar49[1];
        local_2b8 = *plVar49;
        if (lVar37 != lVar36) {
          lStack_2b0 = lVar36;
          local_2b8 = lVar37;
        }
        lVar37 = FUN_03345b64(plVar4,&local_2b8,&local_26c);
        pvVar24 = (void *)*plVar49;
        pvVar7 = (void *)plVar49[1];
        pvVar6 = (void *)plVar49[2];
        pvVar8 = (void *)plVar49[3];
        if ((((long)pvVar7 - (long)pvVar24 != (long)pvVar8 - (long)pvVar6) ||
            (iVar15 = memcmp(pvVar24,pvVar6,(long)pvVar7 - (long)pvVar24), iVar15 != 0)) &&
           ((pvVar24 != pvVar7 && (pvVar6 != pvVar8)))) {
          FUN_031ca554(&local_2a8,pvVar24,pvVar7);
          lVar36 = FUN_033418d0(plVar4,&local_2a8);
          if (lVar36 != 0) {
            uVar21 = *(undefined4 *)(*plVar4 + (long)*(int *)(lVar36 + 4) * 0x10 + 8);
          }
          if ((local_2a8 & 1) != 0) {
            (**(code **)(PTR_DAT_047d1a08 + 8))(0,local_2a8 - 1,0);
          }
          *(undefined4 *)(*plVar4 + ((lVar37 << 0x20) >> 0x1c) + 8) = uVar21;
        }
      }
      lVar33 = lVar33 + 1;
      local_26c = (int)lVar33;
      iVar15 = *(int *)(param_1 + 0xa0);
    } while (local_26c < iVar15);
  }
  puVar12 = PTR_PTR_047d1a50;
  if (0 < (int)local_1f0) {
    lVar33 = 0;
    plVar4 = (long *)(param_1 + 0x108);
    iVar15 = (int)local_1f0;
    do {
      iVar20 = *(int *)((long)local_1f8 + lVar33 * 4);
      lVar37 = *(long *)(*plVar5 + (long)iVar20 * 8);
      if (lVar37 != 0) {
        while( true ) {
          if (*(long *)(lVar37 + 0x10) == *(long *)(lVar37 + 0x18)) break;
          local_2b8 = *(long *)(lVar37 + 0x10);
          lStack_2b0 = *(long *)(lVar37 + 0x18);
          local_2a8 = FUN_03342334(*(undefined8 *)(param_1 + 0x90),&local_2b8,
                                   *(undefined4 *)(lVar37 + 0x24));
          uVar22 = FUN_0334924c(plVar4,&local_2a8);
          if (*(uint *)(param_1 + 0x110) == uVar22) {
            iVar15 = uVar22 + 1;
            if ((int)(*(uint *)(param_1 + 0x114) & 0x7fffffff) <= (int)uVar22) {
              FUN_03349368(plVar4,puVar12,(long)iVar15);
              uVar22 = *(uint *)(param_1 + 0x110);
            }
            puVar39 = (ulong *)(*(long *)(param_1 + 0x108) + (long)(int)uVar22 * 0x10);
            *puVar39 = local_2a8;
            *(int *)(puVar39 + 1) = iVar20;
            *(int *)(param_1 + 0x110) = iVar15;
          }
          else {
            *(int *)(*plVar4 + ((long)((ulong)uVar22 << 0x20) >> 0x1c) + 8) = iVar20;
          }
          lVar37 = FUN_03348c94(plVar3,&local_2a8);
          if (((lVar37 == 0) ||
              (uVar22 = *(uint *)(*plVar3 + (long)*(int *)(lVar37 + 4) * 0x10 + 8), (int)uVar22 < 0)
              ) || (lVar37 = *(long *)(*plVar5 + (ulong)uVar22 * 8), lVar37 == 0)) break;
        }
        iVar15 = (int)local_1f0;
      }
      lVar33 = lVar33 + 1;
    } while (lVar33 < iVar15);
    iVar15 = *(int *)(param_1 + 0xa0);
  }
  if ((iVar15 != 0) && (*(long *)(*plVar5 + (long)(iVar15 + -1) * 8) == 0)) {
    *(int *)(param_1 + 0xa0) = iVar15 + -1;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  if (*(int *)(param_1 + 0x1b0) != 0) {
    lVar33 = (long)*(int *)(param_1 + 0x1b0) << 4;
    puVar44 = (undefined8 *)(*(long *)(param_1 + 0x1a8) + 8);
    do {
      if ((code *)puVar44[-1] != (code *)0x0) {
        (*(code *)puVar44[-1])(*puVar44);
      }
      lVar33 = lVar33 + -0x10;
      puVar44 = puVar44 + 2;
    } while (lVar33 != 0);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  lVar33 = (long)local_1f0;
  uVar34 = (ulong)local_1f0._4_4_;
  local_1f0 = (char *)((ulong)local_1f0._4_4_ << 0x20);
  if ((-1 < lVar33) && (local_1f8 != (undefined1  [8])0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_1f8,uVar34 << 2);
  }
  uVar32 = 0;
LAB_033452fc:
  lVar33 = local_298;
  uVar34 = (ulong)local_298._4_4_;
  local_298 = (ulong)local_298._4_4_ << 0x20;
  if ((-1 < lVar33) && (local_2a0 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_2a0,uVar34 << 2);
  }
  lVar33 = local_288;
  uVar34 = (ulong)local_288._4_4_;
  local_288 = (ulong)local_288._4_4_ << 0x20;
  if ((-1 < lVar33) && (local_290 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_290,uVar34 << 2);
  }
  uVar42 = local_278;
  uVar34 = local_278 >> 0x20;
  local_278 = uVar34 << 0x20;
  if ((puVar43 != (undefined4 *)0x0) && (-1 < (long)uVar42)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,puVar43,uVar34 << 3);
  }
  lVar33 = local_260;
  uVar34 = (ulong)local_260._4_4_;
  local_260 = (ulong)local_260._4_4_ << 0x20;
  if ((-1 < lVar33) && (local_268 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_268,uVar34 << 3);
  }
LAB_0334536c:
  if ((local_248 != (undefined *)0x0) && (*(int *)(local_248 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_248,0);
    local_248 = &DAT_03d7702c;
    local_240 = 0;
  }
  lVar33 = local_258;
  puVar12 = PTR_PTR_047d1a50;
  if ((int)local_250 != 0) {
    lVar37 = (long)(int)local_250 * 0x18;
    do {
      lVar36 = lVar33 + lVar37;
      *(undefined4 *)(lVar36 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar36 + -4)) && (*(long *)(lVar36 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar12 + 0x20))
                  (puVar12,*(long *)(lVar36 + -0x10),(ulong)*(uint *)(lVar36 + -4) << 2);
      }
      lVar37 = lVar37 + -0x18;
      *(undefined8 *)(lVar36 + -0x10) = 0;
      *(undefined4 *)(lVar36 + -4) = 0x80000000;
    } while (lVar37 != 0);
  }
  lVar33 = local_250;
  uVar34 = (ulong)local_250._4_4_;
  local_250 = (ulong)local_250._4_4_ << 0x20;
  if ((-1 < lVar33) && (local_258 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_258,uVar34 * 0x18);
  }
  if ((local_228 != (undefined *)0x0) && (*(int *)(local_228 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_228,0);
    local_228 = &DAT_03d7702c;
    local_220 = 0;
  }
  lVar33 = local_238;
  puVar12 = PTR_PTR_047d1a50;
  if ((int)local_230 != 0) {
    lVar37 = (long)(int)local_230 * 0x18;
    do {
      lVar36 = lVar33 + lVar37;
      *(undefined4 *)(lVar36 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar36 + -4)) && (*(long *)(lVar36 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar12 + 0x20))
                  (puVar12,*(long *)(lVar36 + -0x10),(ulong)*(uint *)(lVar36 + -4) << 2);
      }
      lVar37 = lVar37 + -0x18;
      *(undefined8 *)(lVar36 + -0x10) = 0;
      *(undefined4 *)(lVar36 + -4) = 0x80000000;
    } while (lVar37 != 0);
  }
  lVar33 = local_230;
  uVar34 = (ulong)local_230._4_4_;
  local_230 = (ulong)local_230._4_4_ << 0x20;
  if ((-1 < lVar33) && (local_238 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_238,uVar34 * 0x18);
  }
  if ((local_208 != (undefined *)0x0) && (*(int *)(local_208 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_208,0);
    local_208 = &DAT_03d7702c;
    local_200 = 0;
  }
  puVar12 = PTR_DAT_047d1a08;
  if ((uint)local_210 != 0) {
    lVar33 = (long)(int)(uint)local_210 << 4;
    lVar37 = local_218 + -0x10;
    do {
      uVar34 = *(ulong *)(lVar37 + lVar33);
      if ((uVar34 & 1) != 0) {
        (**(code **)(puVar12 + 8))(0,uVar34 - 1,0);
      }
      lVar33 = lVar33 + -0x10;
    } while (lVar33 != 0);
  }
  lVar33 = local_210;
  uVar34 = (ulong)local_210._4_4_;
  local_210 = (ulong)local_210._4_4_ << 0x20;
  if ((-1 < lVar33) && (local_218 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_218,uVar34 << 4);
  }
LAB_033455b4:
  if ((local_98 != (undefined *)0x0) && (*(int *)(local_98 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_98,0);
    local_98 = &DAT_03d7702c;
    local_90 = 0;
  }
  lVar33 = local_a8;
  puVar13 = PTR_PTR_047d1a50;
  puVar12 = PTR_DAT_047d1a08;
  if ((int)local_a0 != 0) {
    lVar37 = (long)(int)local_a0 * 0x18;
    do {
      lVar36 = lVar33 + lVar37;
      *(undefined4 *)(lVar36 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar36 + -4)) && (*(long *)(lVar36 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar13 + 0x20))
                  (puVar13,*(long *)(lVar36 + -0x10),(ulong)*(uint *)(lVar36 + -4) << 2);
      }
      *(undefined8 *)(lVar36 + -0x10) = 0;
      *(undefined4 *)(lVar36 + -4) = 0x80000000;
      if ((*(ulong *)(lVar36 + -0x18) & 1) != 0) {
        (**(code **)(puVar12 + 8))(0,*(ulong *)(lVar36 + -0x18) - 1,0);
      }
      lVar37 = lVar37 + -0x18;
    } while (lVar37 != 0);
  }
  lVar33 = local_a0;
  uVar34 = (ulong)local_a0._4_4_;
  local_a0 = (ulong)local_a0._4_4_ << 0x20;
  if ((-1 < lVar33) && (local_a8 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_a8,uVar34 * 0x18);
  }
  if ((local_78 != (undefined *)0x0) && (*(int *)(local_78 + 4) != -2)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],local_78,0);
    local_78 = &DAT_03d7702c;
    local_70 = 0;
  }
  lVar33 = local_88;
  puVar12 = PTR_PTR_047d1a50;
  if ((int)local_80 != 0) {
    lVar37 = (long)(int)local_80 * 0x18;
    do {
      lVar36 = lVar33 + lVar37;
      *(undefined4 *)(lVar36 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar36 + -4)) && (*(long *)(lVar36 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar12 + 0x20))
                  (puVar12,*(long *)(lVar36 + -0x10),(ulong)*(uint *)(lVar36 + -4) << 2);
      }
      lVar37 = lVar37 + -0x18;
      *(undefined8 *)(lVar36 + -0x10) = 0;
      *(undefined4 *)(lVar36 + -4) = 0x80000000;
    } while (lVar37 != 0);
  }
  lVar33 = local_80;
  uVar34 = (ulong)local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar33) && (local_88 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_88,uVar34 * 0x18);
  }
  return uVar32;
}



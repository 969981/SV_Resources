/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011d5490; name: FUN_011d5490
 */


void FUN_011d5490(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  uint *puVar4;
  long *plVar5;
  short sVar6;
  char cVar7;
  long *plVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  int *piVar17;
  char *pcVar18;
  undefined8 uVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 uVar24;
  long *plVar25;
  long *plVar26;
  long *local_4e8;
  ulong local_4e0;
  undefined1 *local_4d0;
  code *local_4c8;
  undefined1 *local_4c0;
  code *local_4b8;
  undefined1 auStack_4b0 [96];
  undefined8 *local_450;
  undefined8 uStack_448;
  code *local_440;
  code *local_438;
  undefined1 *local_430;
  code *local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  int local_3b8;
  int iStack_3b4;
  undefined8 *local_3b0;
  undefined8 uStack_3a8;
  undefined1 *local_3a0;
  code *local_398;
  undefined1 *local_390;
  code *local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined1 *local_320;
  code *local_318;
  undefined1 *local_310;
  code *local_308;
  undefined8 auStack_300 [13];
  long *local_298;
  undefined8 *local_290;
  undefined8 local_288;
  undefined2 local_90;
  undefined1 local_8e;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined8 *local_88;
  undefined8 uStack_80;
  long *local_78;
  long *aplStack_70 [2];
  
  lVar21 = *param_2;
  piVar17 = (int *)*param_3;
  uVar19 = *param_1;
  lVar12 = FUN_011d6574(lVar21 + 0x108,&local_290);
  local_288 = 0;
  local_290 = (undefined8 *)0x0;
  FUN_00c43ef0(&local_290,lVar21 + 0x30);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  lVar23 = 0;
  if (lVar21 != 0) {
    lVar23 = lVar21 + 0x28;
  }
  if (local_290[2] == lVar23) {
    FUN_011d6250(&local_88,&local_290);
  }
  puVar13 = local_290;
  if (local_290 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_290 + 3);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar2 = (int *)((long)local_290 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_320 = (undefined1 *)*puVar13;
        FUN_00c44438(lVar23 + 0x8040,&local_320);
      }
    }
    else if (sVar6 == 0) goto LAB_011d5a2c;
  }
  if ((*(ushort *)((long)piVar17 - (long)*piVar17) < 5) ||
     (uVar15 = (ulong)((ushort *)((long)piVar17 - (long)*piVar17))[2], uVar15 == 0)) {
    lVar23 = 0;
  }
  else {
    puVar4 = (uint *)((long)piVar17 + uVar15);
    lVar23 = (long)puVar4 + (ulong)*puVar4;
  }
  local_8a = 0;
  pcVar18 = (char *)(lVar23 + 8);
  local_8c = *(undefined2 *)pcVar18;
  local_8e = 0;
  local_90 = *(undefined2 *)(lVar23 + 0xb);
  iVar10 = atoi((char *)&local_8c);
  iVar11 = atoi((char *)&local_90);
  if (((iVar10 % 10 != 0 || iVar11 != 0) && (iVar10 < 0x5a)) && (iVar11 < 0x5a)) {
    if (iVar10 + 9U < 0x13) {
      snprintf((char *)&local_290,0x200,"ai_influence/%s.imap",pcVar18);
    }
    else {
      snprintf((char *)&local_290,0x200,"ai_influence%d/%s.imap",iVar10 / 10,pcVar18);
    }
    FUN_00f12608(&local_298,&local_290);
    plVar8 = local_298;
    plVar20 = (long *)PTR_DAT_047d8b70;
    if (local_298 != (long *)0x0) {
      plVar20 = local_298 + 6;
    }
    lVar23 = *plVar20;
    plVar20 = (long *)PTR_PTR_047d4508;
    if (local_298 != (long *)0x0) {
      plVar20 = local_298 + 7;
    }
    pcVar18 = (char *)*plVar20;
    if (local_298 == (long *)0x0) {
      lVar21 = 0;
    }
    else {
      lVar21 = local_298[8];
      (**(code **)(*local_298 + 0x18))(local_298);
    }
    local_320 = &LAB_00a2fa58;
    local_318 = FUN_00a2fa64;
    local_310 = &LAB_00a2fa68;
    local_308 = FUN_00a2fa74;
    local_3b0 = (undefined8 *)0x0;
    uStack_3a8 = 0;
    local_3b8 = iVar10;
    iStack_3b4 = iVar11;
    auStack_300[0] = uVar19;
    FUN_011a6c54(&local_3b0,&local_88);
    local_380 = CONCAT44(iStack_3b4,local_3b8);
    local_390 = (undefined1 *)0x0;
    local_388 = (code *)0x0;
    local_3a0 = (undefined1 *)0x0;
    local_398 = (code *)0x0;
    local_370 = 0;
    uStack_378 = 0;
    FUN_011a680c(&uStack_378,&local_3b0);
    local_3a0 = &LAB_01dba2bc;
    local_398 = FUN_01dba40c;
    local_390 = &LAB_01dba51c;
    local_388 = FUN_01dba53c;
    local_450 = (undefined8 *)0x0;
    uStack_448 = 0;
    FUN_011a6c54(&local_450,&local_88);
    local_420 = 0;
    uStack_418 = 0;
    local_430 = (undefined1 *)0x0;
    local_428 = (code *)0x0;
    local_440 = (code *)0x0;
    local_438 = (code *)0x0;
    FUN_011a680c(&local_420,&local_450);
    local_440 = thunk_FUN_01581280;
    local_438 = FUN_01dba55c;
    local_430 = &LAB_01dba66c;
    local_428 = FUN_01dba680;
    local_4d0 = &LAB_00a2fa80;
    local_4c8 = FUN_00a2fa84;
    local_4c0 = &LAB_00a2fa88;
    local_4b8 = FUN_00a2fa8c;
    if (*pcVar18 != '\0') {
      plVar20 = *(long **)(lVar12 + 8);
      puVar13 = (undefined8 *)(**(code **)(*plVar20 + 0x10))(plVar20,0x290,0x10);
      if (puVar13 != (undefined8 *)0x0) {
        if (((DAT_04865a38 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04865a38), iVar10 != 0))
        {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar14 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar20;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
        puVar13[4] = plVar8;
        *puVar13 = &PTR_LAB_045407b0;
        puVar13[1] = lVar23;
        puVar13[2] = pcVar18;
        puVar13[3] = lVar21;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x18))(plVar8);
        }
        puVar22 = puVar13 + 6;
        *puVar22 = 0;
        *puVar13 = &PTR_LAB_04540758;
        puVar13[0x16] = &PTR_FUN_04540808;
        puVar13[0x17] = 0;
        puVar13[8] = 0;
        puVar13[9] = 0;
        puVar13[7] = 0;
        *(undefined1 *)(puVar13 + 0x20) = 0;
        *(undefined2 *)(puVar13 + 0x21) = 0;
        *(undefined1 *)((long)puVar13 + 0x10a) = 0;
        puVar13[0x42] = 0;
        puVar13[0x43] = 0;
        puVar13[0x44] = 0;
        puVar13[0x45] = 0;
        puVar13[0x1a] = 0;
        puVar13[0x1b] = 0;
        puVar13[0x1c] = 0;
        puVar13[0x1d] = 0;
        puVar13[0x1e] = 0;
        puVar13[0x1f] = 0;
        puVar13[0x18] = &PTR_FUN_04540090;
        puVar13[0x19] = 0;
        puVar13[0x24] = 0;
        puVar13[0x25] = 0;
        puVar13[0x22] = 0;
        puVar13[0x23] = 0;
        puVar13[0x32] = 0;
        puVar13[0x33] = 0;
        puVar13[0x34] = 0;
        puVar13[0x35] = 0;
        *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
        pcVar16 = (code *)puVar13[7];
        if (pcVar16 != (code *)0x0) {
          puVar13[8] = 0;
          puVar13[9] = 0;
          *puVar22 = 0;
          puVar13[7] = 0;
          (*pcVar16)(puVar13 + 10);
        }
        if (local_308 != (code *)0x0) {
          (*local_308)(auStack_300,puVar13 + 10);
          pcVar16 = local_318;
          puVar13[9] = local_308;
          *puVar22 = local_320;
          puVar13[7] = local_318;
          puVar13[8] = local_310;
          if (local_318 != (code *)0x0) {
            local_310 = (undefined1 *)0x0;
            local_308 = (code *)0x0;
            local_320 = (undefined1 *)0x0;
            local_318 = (code *)0x0;
            (*pcVar16)(auStack_300);
          }
        }
        pcVar16 = (code *)puVar13[0x23];
        if (pcVar16 != (code *)0x0) {
          puVar13[0x24] = 0;
          puVar13[0x25] = 0;
          puVar13[0x22] = 0;
          puVar13[0x23] = 0;
          (*pcVar16)(puVar13 + 0x26);
        }
        if (local_388 != (code *)0x0) {
          (*local_388)(&local_380,puVar13 + 0x26);
          pcVar16 = local_398;
          puVar13[0x25] = local_388;
          puVar13[0x22] = local_3a0;
          puVar13[0x23] = local_398;
          puVar13[0x24] = local_390;
          if (local_398 != (code *)0x0) {
            local_390 = (undefined1 *)0x0;
            local_388 = (code *)0x0;
            local_3a0 = (undefined1 *)0x0;
            local_398 = (code *)0x0;
            (*pcVar16)(&local_380);
          }
        }
        pcVar16 = (code *)puVar13[0x33];
        if (pcVar16 != (code *)0x0) {
          puVar13[0x34] = 0;
          puVar13[0x35] = 0;
          puVar13[0x32] = 0;
          puVar13[0x33] = 0;
          (*pcVar16)(puVar13 + 0x36);
        }
        if (local_428 != (code *)0x0) {
          (*local_428)(&local_420,puVar13 + 0x36);
          pcVar16 = local_438;
          puVar13[0x35] = local_428;
          puVar13[0x32] = local_440;
          puVar13[0x33] = local_438;
          puVar13[0x34] = local_430;
          if (local_438 != (code *)0x0) {
            local_430 = (undefined1 *)0x0;
            local_428 = (code *)0x0;
            local_440 = (code *)0x0;
            local_438 = (code *)0x0;
            (*pcVar16)(&local_420);
          }
        }
        pcVar16 = (code *)puVar13[0x43];
        if (pcVar16 != (code *)0x0) {
          puVar13[0x44] = 0;
          puVar13[0x45] = 0;
          puVar13[0x42] = 0;
          puVar13[0x43] = 0;
          (*pcVar16)(puVar13 + 0x46);
        }
        if (local_4b8 != (code *)0x0) {
          (*local_4b8)(auStack_4b0,puVar13 + 0x46);
          pcVar16 = local_4c8;
          puVar13[0x45] = local_4b8;
          puVar13[0x42] = local_4d0;
          puVar13[0x43] = local_4c8;
          puVar13[0x44] = local_4c0;
          if (local_4c8 != (code *)0x0) {
            local_4c0 = (undefined1 *)0x0;
            local_4b8 = (code *)0x0;
            local_4d0 = (undefined1 *)0x0;
            local_4c8 = (code *)0x0;
            (*pcVar16)(auStack_4b0);
          }
        }
        puVar22 = *(undefined8 **)(lVar12 + 0x220);
        *(undefined8 **)(lVar12 + 0x220) = puVar13;
        if (puVar22 != (undefined8 *)0x0) {
          FUN_00c4e600();
          FUN_00c4e600();
          lVar23 = FUN_00c4e600();
          iVar11 = *(int *)(lVar23 + 0x12c8);
          iVar10 = iVar11 + 1;
          *(int *)(lVar23 + 0x12c8) = iVar10;
          if (*(int *)(lVar23 + 0x12cc) <= iVar11) {
            *(int *)(lVar23 + 0x12cc) = iVar10;
          }
          (**(code **)*puVar22)(puVar22);
          plVar26 = *(long **)(lVar12 + 0x228);
          uVar19 = *(undefined8 *)(lVar12 + 0x230);
          uVar24 = *(undefined8 *)(lVar12 + 0x238);
          uVar15 = (**(code **)(*plVar26 + 0xf8))(plVar26);
          if (((uVar15 & 1) == 0) || (lVar23 = FUN_00c4e600(), *(int *)(lVar23 + 0x12c8) < 1)) {
            (**(code **)(*plVar26 + 0x18))(plVar26,puVar22,uVar19,uVar24);
          }
          else {
            FUN_00c48fe8(plVar26,puVar22,uVar19,uVar24);
          }
          lVar23 = FUN_00c4e600();
          iVar10 = *(int *)(lVar23 + 0x12c8) + -1;
          *(int *)(lVar23 + 0x12c8) = iVar10;
          if (iVar10 == 0) {
            plVar26 = (long *)FUN_00c4e600();
            if (plVar26[600] != 0) {
              local_78 = plVar26 + plVar26[600] * 3;
              aplStack_70[0] = plVar26;
              FUN_00c4ea30(aplStack_70,&local_78);
              plVar25 = (long *)*plVar26;
              plVar5 = plVar26;
              if (plVar26[600] != 0) {
                plVar5 = plVar26 + plVar26[600] * 3;
              }
              if (plVar5 == plVar26) {
                local_4e0 = 0;
                uVar15 = 0;
              }
              else {
                (**(code **)(*(long *)*plVar26 + 0xd0))();
                if ((long *)*plVar26 != plVar25) {
                  (**(code **)(*plVar25 + 0x100))(plVar25,plVar26,plVar26);
                  plVar25 = (long *)*plVar26;
                }
                plVar3 = plVar26 + 3;
                if (plVar5 == plVar3) {
                  local_4e0 = 0;
                  uVar15 = 1;
                }
                else {
                  (**(code **)(*(long *)*plVar3 + 0xd0))();
                  bVar9 = (long *)*plVar3 != plVar25;
                  if (bVar9) {
                    (**(code **)(*plVar25 + 0x100))(plVar25,plVar26,plVar26 + 3);
                    plVar25 = (long *)plVar26[3];
                  }
                  local_4e0 = (ulong)bVar9;
                  plVar3 = plVar26 + 6;
                  if (plVar5 == plVar3) {
                    uVar15 = 2;
                  }
                  else {
                    (**(code **)(*(long *)*plVar3 + 0xd0))();
                    if ((long *)*plVar3 != plVar25) {
                      (**(code **)(*plVar25 + 0x100))(plVar25,plVar26 + local_4e0 * 3,plVar26 + 6);
                      plVar25 = (long *)plVar26[6];
                      local_4e0 = 2;
                    }
                    plVar3 = plVar26 + 9;
                    if (plVar5 == plVar3) {
                      uVar15 = 3;
                    }
                    else {
                      (**(code **)(*(long *)*plVar3 + 0xd0))();
                      if ((long *)*plVar3 != plVar25) {
                        (**(code **)(*plVar25 + 0x100))(plVar25,plVar26 + local_4e0 * 3,plVar26 + 9)
                        ;
                        plVar25 = (long *)plVar26[9];
                        local_4e0 = 3;
                      }
                      plVar3 = plVar26 + 0xc;
                      if (plVar5 == plVar3) {
                        uVar15 = 4;
                      }
                      else {
                        (**(code **)(*(long *)*plVar3 + 0xd0))();
                        if ((long *)*plVar3 != plVar25) {
                          (**(code **)(*plVar25 + 0x100))
                                    (plVar25,plVar26 + local_4e0 * 3,plVar26 + 0xc);
                          plVar25 = (long *)plVar26[0xc];
                          local_4e0 = 4;
                        }
                        plVar3 = plVar26 + 0xf;
                        if (plVar5 == plVar3) {
                          uVar15 = 5;
                        }
                        else {
                          (**(code **)(*(long *)*plVar3 + 0xd0))();
                          if ((long *)*plVar3 != plVar25) {
                            (**(code **)(*plVar25 + 0x100))
                                      (plVar25,plVar26 + local_4e0 * 3,plVar26 + 0xf);
                            plVar25 = (long *)plVar26[0xf];
                            local_4e0 = 5;
                          }
                          uVar15 = 6;
                          for (local_4e8 = plVar26 + 0x12; plVar5 != local_4e8;
                              local_4e8 = local_4e8 + 3) {
                            (**(code **)(*(long *)*local_4e8 + 0xd0))();
                            if ((long *)*local_4e8 != plVar25) {
                              (**(code **)(*plVar25 + 0x100))
                                        (plVar25,plVar26 + local_4e0 * 3,local_4e8);
                              plVar25 = (long *)*local_4e8;
                              local_4e0 = uVar15;
                            }
                            uVar15 = uVar15 + 1;
                          }
                        }
                      }
                    }
                  }
                }
              }
              (**(code **)(*plVar25 + 0x100))(plVar25,plVar26 + local_4e0 * 3,plVar26 + uVar15 * 3);
              plVar26[600] = 0;
            }
            *(undefined4 *)(lVar23 + 0x12cc) = 0;
          }
        }
        *(undefined8 *)(lVar12 + 0x230) = 0x290;
        *(long **)(lVar12 + 0x228) = plVar20;
        *(undefined8 *)(lVar12 + 0x238) = 0x10;
      }
    }
    pcVar16 = local_4c8;
    if (local_4c8 != (code *)0x0) {
      local_4c0 = (undefined1 *)0x0;
      local_4b8 = (code *)0x0;
      local_4d0 = (undefined1 *)0x0;
      local_4c8 = (code *)0x0;
      (*pcVar16)(auStack_4b0);
    }
    pcVar16 = local_438;
    if (local_438 != (code *)0x0) {
      local_430 = (undefined1 *)0x0;
      local_428 = (code *)0x0;
      local_440 = (code *)0x0;
      local_438 = (code *)0x0;
      (*pcVar16)(&local_420);
    }
    puVar13 = local_450;
    if (local_450 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_450 + 3);
      do {
        sVar6 = *psVar1;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        piVar17 = (int *)((long)local_450 + 0x1c);
        do {
          iVar10 = *piVar17;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar9) {
            *piVar17 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar23 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar23;
          local_4d0 = (undefined1 *)*puVar13;
          FUN_00c44438(lVar23 + 0x8040,&local_4d0);
        }
      }
      else if (sVar6 == 0) goto LAB_011d5a2c;
    }
    pcVar16 = local_398;
    if (local_398 != (code *)0x0) {
      local_390 = (undefined1 *)0x0;
      local_388 = (code *)0x0;
      local_3a0 = (undefined1 *)0x0;
      local_398 = (code *)0x0;
      (*pcVar16)(&local_380);
    }
    puVar13 = local_3b0;
    if (local_3b0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_3b0 + 3);
      do {
        sVar6 = *psVar1;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar6 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (sVar6 == 1) {
        piVar17 = (int *)((long)local_3b0 + 0x1c);
        do {
          iVar10 = *piVar17;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar9) {
            *piVar17 = -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar23 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar23;
          local_440 = (code *)*puVar13;
          FUN_00c44438(lVar23 + 0x8040,&local_440);
        }
      }
      else if (sVar6 == 0) goto LAB_011d5a2c;
    }
    pcVar16 = local_318;
    if (local_318 != (code *)0x0) {
      local_310 = (undefined1 *)0x0;
      local_308 = (code *)0x0;
      local_320 = (undefined1 *)0x0;
      local_318 = (code *)0x0;
      (*pcVar16)(auStack_300);
    }
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    if (local_298 != (long *)0x0) {
      (**(code **)(*local_298 + 0x20))();
    }
  }
  puVar13 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_88 + 3);
    do {
      sVar6 = *psVar1;
      cVar7 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar6 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar6 == 1) {
      piVar17 = (int *)((long)local_88 + 0x1c);
      do {
        iVar10 = *piVar17;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar9) {
          *piVar17 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar23 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar23;
        local_290 = (undefined8 *)*puVar13;
        FUN_00c44438(lVar23 + 0x8040,&local_290);
      }
    }
    else if (sVar6 == 0) {
LAB_011d5a2c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}



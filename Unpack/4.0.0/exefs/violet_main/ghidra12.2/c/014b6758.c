/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014b6758; name: FUN_014b6758
 */


undefined8 FUN_014b6758(long param_1)

{
  short *psVar1;
  MutexType *pMVar2;
  int *piVar3;
  int iVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  bool bVar12;
  int iVar13;
  undefined8 uVar14;
  uint *puVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  undefined4 uVar23;
  long *plVar24;
  short sVar25;
  long lVar26;
  undefined8 uVar27;
  long *plVar28;
  long *plVar29;
  undefined8 *puVar30;
  ulong uVar31;
  long *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long *local_128;
  long local_120;
  long *local_118;
  long *local_108;
  long *local_f8;
  code *local_f0;
  code *local_e8;
  code *local_e0;
  undefined1 *puStack_d8;
  long *local_d0;
  long local_c8;
  long *plStack_c0;
  long *local_68;
  
  uVar14 = 1;
  switch(*(undefined4 *)(param_1 + 0x130)) {
  case 0:
    goto switchD_014b67a4_caseD_0;
  case 1:
    goto switchD_014b67a4_caseD_1;
  case 2:
    goto switchD_014b67a4_caseD_2;
  case 3:
    goto switchD_014b67a4_caseD_3;
  case 4:
    goto switchD_014b67a4_caseD_4;
  case 5:
    goto switchD_014b67a4_caseD_5;
  case 6:
    plVar24 = *(long **)(param_1 + 0x1d0);
    if (plVar24 == (long *)0x0) {
      iVar13 = 7;
    }
    else {
      do {
        if ((*(long *)(plVar24[6] + 8) == 0) ||
           ((*(byte *)(*(long *)(plVar24[6] + 8) + 0x1e8) & 1) == 0)) goto switchD_014b67a4_caseD_b;
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
      iVar13 = *(int *)(param_1 + 0x130) + 1;
    }
    *(int *)(param_1 + 0x130) = iVar13;
  case 7:
    if (*(char *)(param_1 + 0x78) == '\0') {
      uVar18 = FUN_0105ed5c(param_1);
      uVar23 = 8;
      if ((uVar18 & 1) == 0) {
        uVar23 = 6;
      }
      goto LAB_014b75f0;
    }
    if ((*(long *)(param_1 + 0x68) != 0) && (*(short *)(*(long *)(param_1 + 0x68) + 0x1a) != 0)) {
      lVar26 = *(long *)(param_1 + 0x68);
      *(undefined4 *)(param_1 + 0x130) = 0xb;
      if ((lVar26 == 0) || (sVar25 = *(short *)(lVar26 + 0x1a), sVar25 == 0)) {
LAB_014b70e4:
        plVar24 = (long *)0x0;
        bVar12 = true;
      }
      else {
        puVar30 = *(undefined8 **)(lVar26 + 8);
        if (((*PTR_DAT_047d39b0 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d39b0), iVar13 != 0)) {
          if (((*PTR_DAT_047d39c0 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar13 != 0)) {
            *(undefined8 *)PTR_DAT_047d39c8 = 0;
            __cxa_guard_release(PTR_DAT_047d39c0);
          }
          *(undefined **)PTR_DAT_047d39b8 = PTR_DAT_047d39c8;
          __cxa_guard_release(PTR_DAT_047d39b0);
        }
        if (puVar30 == (undefined8 *)0x0) goto LAB_014b70e4;
        psVar1 = (short *)(lVar26 + 0x1a);
        bVar12 = true;
        do {
          if (puVar30 == (undefined8 *)PTR_DAT_047d39b8) {
            bVar12 = true;
            goto LAB_014b7de8;
          }
          puVar30 = (undefined8 *)*puVar30;
          plVar24 = (long *)0x0;
        } while (puVar30 != (undefined8 *)0x0);
      }
LAB_014b70ec:
      puVar8 = PTR_DAT_047dd4c0;
      if (((*PTR_DAT_047dd4c0 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar13 != 0)) {
        FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047dd4c0);
      }
      puVar10 = PTR_DAT_047dd4d0;
      puVar9 = PTR_DAT_047dd4c8;
      *(undefined8 *)PTR_DAT_047dd4d0 = *(undefined8 *)PTR_DAT_047dd4c8;
      if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar13 != 0)) {
        FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047dd4c0);
      }
      lVar26 = *(long *)puVar9;
      *(long *)puVar10 = lVar26;
      lVar26 = *(long *)(lVar26 + 0x28);
      if (((*PTR_DAT_047d8c58 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar13 != 0)) {
        FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d8c58);
      }
      uVar14 = *(undefined8 *)PTR_DAT_047d8c60;
      *(undefined8 *)PTR_DAT_047d8c68 = uVar14;
      FUN_00cbf5d4(&local_148,uVar14,*(undefined8 *)(lVar26 + 8));
      plVar17 = (long *)FUN_00f3afb4(&local_f0,*(undefined8 *)(lVar26 + 8),&local_148);
      if (plVar17 == (long *)0x0) {
        local_128 = (long *)0x0;
      }
      else {
        plVar29 = plVar17 + 5;
        do {
          lVar16 = *plVar29;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar7) {
            *(int *)plVar29 = (int)lVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((int)lVar16 == -1) goto LAB_014b7ed0;
        do {
          lVar16 = *plVar29;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar7) {
            *(int *)plVar29 = (int)lVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        local_128 = plVar17;
        if ((int)lVar16 == -1) goto LAB_014b7ed0;
      }
      plVar29 = local_128;
      local_120 = param_1;
      local_118 = plVar24;
      nn::os::LockMutex((MutexType *)(lVar26 + 0x3d0));
      local_e0 = (code *)0x0;
      puStack_d8 = (undefined1 *)0x0;
      local_f0 = (code *)0x0;
      local_e8 = (code *)0x0;
      local_d0 = plVar29;
      if (plVar29 == (long *)0x0) {
        plStack_c0 = plVar24;
        local_c8 = param_1;
      }
      else {
        plVar29 = plVar29 + 5;
        do {
          lVar16 = *plVar29;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar7) {
            *(int *)plVar29 = (int)lVar16 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((int)lVar16 == -1) goto LAB_014b7ed0;
        plStack_c0 = local_118;
        local_c8 = local_120;
      }
      if (plStack_c0 != (long *)0x0) {
        (**(code **)(*plStack_c0 + 0x10))();
      }
      local_f0 = FUN_0105eb68;
      local_e8 = FUN_02e697f8;
      local_e0 = FUN_02e6988c;
      puStack_d8 = &LAB_02e69910;
      FUN_00dd17e4(lVar26 + 0x360,&local_f0);
      pcVar11 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = (code *)0x0;
        puStack_d8 = (undefined1 *)0x0;
        local_f0 = (code *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar11)(&local_d0);
      }
      *(undefined8 *)(lVar26 + 0x3f8) = *(undefined8 *)(lVar26 + 0x3a8);
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar26 + 0x3f0));
      nn::os::UnlockMutex((MutexType *)(lVar26 + 0x3d0));
      plVar29 = *(long **)(lVar26 + 0x400);
      plVar28 = *(long **)(lVar26 + 0x408);
      if (plVar29 != plVar28) {
        lVar26 = *plVar29;
        pMVar2 = (MutexType *)(lVar26 + 0x3f0);
        nn::os::LockMutex(pMVar2);
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar26 + 0x410));
        nn::os::UnlockMutex(pMVar2);
        if (plVar29 + 1 != plVar28) {
          lVar26 = plVar29[1];
          pMVar2 = (MutexType *)(lVar26 + 0x3f0);
          nn::os::LockMutex(pMVar2);
          nn::os::SignalConditionVariable((ConditionVariableType *)(lVar26 + 0x410));
          nn::os::UnlockMutex(pMVar2);
          for (plVar29 = plVar29 + 2; plVar29 != plVar28; plVar29 = plVar29 + 1) {
            lVar26 = *plVar29;
            pMVar2 = (MutexType *)(lVar26 + 0x3f0);
            nn::os::LockMutex(pMVar2);
            nn::os::SignalConditionVariable((ConditionVariableType *)(lVar26 + 0x410));
            nn::os::UnlockMutex(pMVar2);
          }
        }
      }
      if (local_118 != (long *)0x0) {
        (**(code **)(*local_118 + 0x18))();
      }
      if (local_128 != (long *)0x0) {
        plVar29 = local_128 + 5;
        do {
          lVar26 = *plVar29;
          iVar13 = (int)lVar26 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar7) {
            *(int *)plVar29 = iVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 == 0) {
          (**(code **)(*local_128 + 0x10))();
          goto LAB_014b72b0;
        }
        if ((int)lVar26 != 0) goto LAB_014b72b0;
        goto LAB_014b7f68;
      }
LAB_014b72b0:
      if (plVar17 != (long *)0x0) {
        plVar29 = plVar17 + 5;
        do {
          lVar26 = *plVar29;
          iVar13 = (int)lVar26 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar7) {
            *(int *)plVar29 = iVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
        else if ((int)lVar26 == 0) goto LAB_014b7f68;
      }
      if (local_148 != (long *)0x0) {
        lVar26 = local_148[6];
        psVar1 = (short *)(lVar26 + 0x1a);
        do {
          sVar25 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar25 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        goto LAB_014b72f0;
      }
      goto LAB_014b72fc;
    }
    goto switchD_014b67a4_caseD_b;
  case 8:
    if (*(char *)(param_1 + 0x78) != '\0') {
      if ((*(long *)(param_1 + 0x68) != 0) && (*(short *)(*(long *)(param_1 + 0x68) + 0x1a) != 0)) {
        lVar26 = *(long *)(param_1 + 0x68);
        *(undefined4 *)(param_1 + 0x130) = 0xb;
        if ((lVar26 != 0) && (sVar25 = *(short *)(lVar26 + 0x1a), sVar25 != 0)) {
          puVar30 = *(undefined8 **)(lVar26 + 8);
          if ((*PTR_DAT_047d39b0 & 1) == 0) {
            iVar13 = __cxa_guard_acquire(PTR_DAT_047d39b0);
            puVar8 = PTR_DAT_047d39c8;
            if (iVar13 != 0) {
              if (((*PTR_DAT_047d39c0 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar13 != 0)) {
                *(undefined8 *)puVar8 = 0;
                __cxa_guard_release(PTR_DAT_047d39c0);
              }
              *(undefined **)PTR_DAT_047d39b8 = puVar8;
              __cxa_guard_release(PTR_DAT_047d39b0);
            }
          }
          if (puVar30 != (undefined8 *)0x0) {
            psVar1 = (short *)(lVar26 + 0x1a);
            bVar12 = true;
            do {
              if (puVar30 == (undefined8 *)PTR_DAT_047d39b8) {
                bVar12 = true;
                goto LAB_014b7cf4;
              }
              puVar30 = (undefined8 *)*puVar30;
              plVar24 = (long *)0x0;
            } while (puVar30 != (undefined8 *)0x0);
            goto LAB_014b6e60;
          }
        }
LAB_014b6e58:
        plVar24 = (long *)0x0;
        bVar12 = true;
        goto LAB_014b6e60;
      }
      goto switchD_014b67a4_caseD_b;
    }
    FUN_0132577c(param_1);
    uVar23 = 9;
    goto LAB_014b75f0;
  case 9:
    plVar24 = *(long **)(param_1 + 0x2a0);
    if (plVar24 == (long *)0x0) {
      iVar13 = 10;
    }
    else {
      do {
        if ((*(long *)(plVar24[6] + 8) == 0) ||
           ((*(byte *)(*(long *)(plVar24[6] + 8) + 0x1e8) & 1) == 0)) goto switchD_014b67a4_caseD_b;
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
      iVar13 = *(int *)(param_1 + 0x130) + 1;
    }
    *(int *)(param_1 + 0x130) = iVar13;
    return 1;
  default:
    goto switchD_014b67a4_caseD_a;
  case 0xb:
    goto switchD_014b67a4_caseD_b;
  }
  while( true ) {
    plVar24 = (long *)0x0;
    sVar25 = sVar5;
    if (sVar5 == 0) break;
LAB_014b7cf4:
    sVar5 = *psVar1;
    if (sVar5 == sVar25) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar25 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_014b7d18;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_014b7d18:
      bVar7 = false;
    }
    if (bVar7) {
      if (*(long *)(lVar26 + 0x10) == 0) goto LAB_014b6e58;
      plVar24 = (long *)(*(long *)(lVar26 + 0x10) + -8);
      (**(code **)(*plVar24 + 0x10))(plVar24);
      bVar12 = false;
      break;
    }
  }
LAB_014b6e60:
  puVar8 = PTR_DAT_047dd4c0;
  if (((*PTR_DAT_047dd4c0 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd4c0);
  }
  puVar10 = PTR_DAT_047dd4d0;
  puVar9 = PTR_DAT_047dd4c8;
  *(undefined8 *)PTR_DAT_047dd4d0 = *(undefined8 *)PTR_DAT_047dd4c8;
  if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047dd4c0);
  }
  lVar26 = *(long *)puVar9;
  *(long *)puVar10 = lVar26;
  lVar26 = *(long *)(lVar26 + 0x28);
  if (((*PTR_DAT_047d8c58 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar13 != 0)) {
    FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c58);
  }
  uVar14 = *(undefined8 *)PTR_DAT_047d8c60;
  *(undefined8 *)PTR_DAT_047d8c68 = uVar14;
  FUN_00cbf5d4(&local_148,uVar14,*(undefined8 *)(lVar26 + 8));
  plVar17 = (long *)FUN_00f3afb4(&local_f0,*(undefined8 *)(lVar26 + 8),&local_148);
  if (plVar17 == (long *)0x0) {
    local_128 = (long *)0x0;
  }
  else {
    plVar29 = plVar17 + 5;
    do {
      lVar16 = *plVar29;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar7) {
        *(int *)plVar29 = (int)lVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar16 == -1) goto LAB_014b7ed0;
    do {
      lVar16 = *plVar29;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar7) {
        *(int *)plVar29 = (int)lVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    local_128 = plVar17;
    if ((int)lVar16 == -1) goto LAB_014b7ed0;
  }
  plVar29 = local_128;
  local_120 = param_1;
  local_118 = plVar24;
  nn::os::LockMutex((MutexType *)(lVar26 + 0x3d0));
  local_e0 = (code *)0x0;
  puStack_d8 = (undefined1 *)0x0;
  local_f0 = (code *)0x0;
  local_e8 = (code *)0x0;
  local_d0 = plVar29;
  if (plVar29 == (long *)0x0) {
    plStack_c0 = plVar24;
    local_c8 = param_1;
  }
  else {
    plVar29 = plVar29 + 5;
    do {
      lVar16 = *plVar29;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar7) {
        *(int *)plVar29 = (int)lVar16 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((int)lVar16 == -1) goto LAB_014b7ed0;
    plStack_c0 = local_118;
    local_c8 = local_120;
  }
  if (plStack_c0 != (long *)0x0) {
    (**(code **)(*plStack_c0 + 0x10))();
  }
  local_f0 = (code *)&LAB_01325594;
  local_e8 = FUN_02e69934;
  local_e0 = FUN_02e699c8;
  puStack_d8 = &LAB_02e69a4c;
  FUN_00dd17e4(lVar26 + 0x360,&local_f0);
  pcVar11 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    puStack_d8 = (undefined1 *)0x0;
    local_f0 = (code *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar11)(&local_d0);
  }
  *(undefined8 *)(lVar26 + 0x3f8) = *(undefined8 *)(lVar26 + 0x3a8);
  nn::os::SignalConditionVariable((ConditionVariableType *)(lVar26 + 0x3f0));
  nn::os::UnlockMutex((MutexType *)(lVar26 + 0x3d0));
  plVar29 = *(long **)(lVar26 + 0x400);
  plVar28 = *(long **)(lVar26 + 0x408);
  if (plVar29 != plVar28) {
    lVar26 = *plVar29;
    pMVar2 = (MutexType *)(lVar26 + 0x3f0);
    nn::os::LockMutex(pMVar2);
    nn::os::SignalConditionVariable((ConditionVariableType *)(lVar26 + 0x410));
    nn::os::UnlockMutex(pMVar2);
    if (plVar29 + 1 != plVar28) {
      lVar26 = plVar29[1];
      pMVar2 = (MutexType *)(lVar26 + 0x3f0);
      nn::os::LockMutex(pMVar2);
      nn::os::SignalConditionVariable((ConditionVariableType *)(lVar26 + 0x410));
      nn::os::UnlockMutex(pMVar2);
      for (plVar29 = plVar29 + 2; plVar29 != plVar28; plVar29 = plVar29 + 1) {
        lVar26 = *plVar29;
        pMVar2 = (MutexType *)(lVar26 + 0x3f0);
        nn::os::LockMutex(pMVar2);
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar26 + 0x410));
        nn::os::UnlockMutex(pMVar2);
      }
    }
  }
  if (local_118 != (long *)0x0) {
    (**(code **)(*local_118 + 0x18))();
  }
  if (local_128 != (long *)0x0) {
    plVar29 = local_128 + 5;
    do {
      lVar26 = *plVar29;
      iVar13 = (int)lVar26 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar7) {
        *(int *)plVar29 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*local_128 + 0x10))();
      goto LAB_014b7024;
    }
    if ((int)lVar26 != 0) goto LAB_014b7024;
    goto LAB_014b7f68;
  }
LAB_014b7024:
  if (plVar17 != (long *)0x0) {
    plVar29 = plVar17 + 5;
    do {
      lVar26 = *plVar29;
      iVar13 = (int)lVar26 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar7) {
        *(int *)plVar29 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
    else if ((int)lVar26 == 0) goto LAB_014b7f68;
  }
  if (local_148 != (long *)0x0) {
    lVar26 = local_148[6];
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar25 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar25 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    goto LAB_014b72f0;
  }
  goto LAB_014b72fc;
  while( true ) {
    plVar24 = (long *)0x0;
    sVar25 = sVar5;
    if (sVar5 == 0) break;
LAB_014b7de8:
    sVar5 = *psVar1;
    if (sVar5 == sVar25) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar25 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_014b7e0c;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_014b7e0c:
      bVar7 = false;
    }
    if (bVar7) {
      if (*(long *)(lVar26 + 0x10) == 0) goto LAB_014b70e4;
      plVar24 = (long *)(*(long *)(lVar26 + 0x10) + -8);
      (**(code **)(*plVar24 + 0x10))(plVar24);
      bVar12 = false;
      break;
    }
  }
  goto LAB_014b70ec;
code_r0x014b790c:
  sVar25 = sVar5;
  if (sVar5 == 0) goto LAB_014b67b0;
  goto LAB_014b78e0;
  while( true ) {
    plVar24 = (long *)0x0;
    sVar25 = sVar5;
    if (sVar5 == 0) break;
LAB_014b7c44:
    sVar5 = *psVar1;
    if (sVar5 == sVar25) {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar25 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_014b7c68;
      bVar7 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_014b7c68:
      bVar7 = false;
    }
    if (bVar7) {
      if (*(long *)(lVar26 + 0x10) == 0) goto LAB_014b6ad4;
      plVar24 = (long *)(*(long *)(lVar26 + 0x10) + -8);
      (**(code **)(*plVar24 + 0x10))(plVar24);
      bVar12 = false;
      break;
    }
  }
  goto LAB_014b6adc;
switchD_014b67a4_caseD_0:
  lVar26 = *(long *)(param_1 + 0x80);
  if ((lVar26 != 0) && (*(short *)(lVar26 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar26 + 0x1a);
    sVar25 = *(short *)(lVar26 + 0x1a);
LAB_014b78e0:
    sVar5 = *psVar1;
    if (sVar5 == sVar25) {
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar25 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 != '\0') goto LAB_014b7904;
      bVar12 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_014b7904:
      bVar12 = false;
    }
    if (!bVar12) goto code_r0x014b790c;
    lVar26 = *(long *)(lVar26 + 0x10);
    if (lVar26 != 0) {
      plVar24 = (long *)(lVar26 + -0x28);
      uVar18 = FUN_029eef40(plVar24);
      if ((uVar18 & 1) == 0) {
        iVar13 = 2;
      }
      else {
        uVar18 = FUN_0125cc64(plVar24,param_1);
        if ((uVar18 & 1) == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = 1;
          *(undefined4 *)(param_1 + 0x130) = 10;
        }
      }
      lVar26 = *(long *)(lVar26 + 8);
      psVar1 = (short *)(lVar26 + 0x1a);
      do {
        sVar25 = *psVar1;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar25 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar25 == 1) {
        *(undefined8 *)(lVar26 + 0x10) = 0;
        (**(code **)(*plVar24 + 0x50))(plVar24);
      }
      else if (sVar25 == 0) goto LAB_014b6de0;
      if (iVar13 != 2) {
        if (iVar13 == 1) {
          return 1;
        }
        goto LAB_014b67b0;
      }
      goto switchD_014b67a4_caseD_b;
    }
  }
LAB_014b67b0:
  FUN_014b80f8(param_1 + 0x138,(long)(32.0 / *(float *)(param_1 + 0x198)));
  FUN_014b80f8(param_1 + 0x1a0,(long)(32.0 / *(float *)(param_1 + 0x200)));
  FUN_014b80f8(param_1 + 0x208,(long)(32.0 / *(float *)(param_1 + 0x268)));
  FUN_014b8200(param_1 + 0x270,(long)(64.0 / *(float *)(param_1 + 0x2d0)));
  FUN_014b8304(param_1 + 0x2d8,(long)(32.0 / *(float *)(param_1 + 0x338)));
  plVar24 = *(long **)(param_1 + 0x308);
  if (plVar24 != (long *)0x0) {
    FUN_0106078c(plVar24 + 6,(long)(64.0 / *(float *)(plVar24 + 0x12)));
    for (plVar24 = (long *)*plVar24; plVar24 != (long *)0x0; plVar24 = (long *)*plVar24) {
      FUN_0106078c(plVar24 + 6,(long)(64.0 / *(float *)(plVar24 + 0x12)));
    }
  }
  *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
switchD_014b67a4_caseD_1:
  snprintf((char *)&local_f0,0x80,"%s/%s.trabt",*(char **)(param_1 + 0x28),*(char **)(param_1 + 8));
  FUN_00da52ec(&local_128,&local_f0);
  uVar14 = *(undefined8 *)(param_1 + 0x60);
  FUN_010601e8(&local_f0,param_1,&local_128);
  FUN_01060010(&local_148,uVar14,&local_f0);
  plVar24 = local_148;
  local_148 = (long *)0x0;
  lVar26 = *(long *)(param_1 + 0xd0);
  *(long **)(param_1 + 0xd0) = plVar24;
  if (lVar26 != 0) {
    FUN_00c4e600();
    FUN_00c4e600();
    lVar16 = FUN_00c4e600();
    iVar4 = *(int *)(lVar16 + 0x12c8);
    iVar13 = iVar4 + 1;
    *(int *)(lVar16 + 0x12c8) = iVar13;
    if (*(int *)(lVar16 + 0x12cc) <= iVar4) {
      *(int *)(lVar16 + 0x12cc) = iVar13;
    }
    FUN_00db239c(lVar26);
    plVar24 = *(long **)(param_1 + 0xd8);
    uVar14 = *(undefined8 *)(param_1 + 0xe0);
    uVar27 = *(undefined8 *)(param_1 + 0xe8);
    uVar18 = (**(code **)(*plVar24 + 0xf8))(plVar24);
    if (((uVar18 & 1) == 0) || (lVar16 = FUN_00c4e600(), *(int *)(lVar16 + 0x12c8) < 1)) {
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar26,uVar14,uVar27);
    }
    else {
      FUN_00c48fe8(plVar24,lVar26,uVar14,uVar27);
    }
    lVar26 = FUN_00c4e600();
    iVar13 = *(int *)(lVar26 + 0x12c8) + -1;
    *(int *)(lVar26 + 0x12c8) = iVar13;
    if (iVar13 == 0) {
      plVar24 = (long *)FUN_00c4e600();
      if (plVar24[600] != 0) {
        local_f8 = plVar24 + plVar24[600] * 3;
        local_68 = plVar24;
        FUN_00c4ea30(&local_68,&local_f8);
        plVar29 = (long *)*plVar24;
        plVar17 = plVar24;
        if (plVar24[600] != 0) {
          plVar17 = plVar24 + plVar24[600] * 3;
        }
        if (plVar17 == plVar24) {
          uVar31 = 0;
          uVar18 = 0;
        }
        else {
          (**(code **)(*(long *)*plVar24 + 0xd0))();
          if ((long *)*plVar24 != plVar29) {
            (**(code **)(*plVar29 + 0x100))(plVar29,plVar24,plVar24);
            plVar29 = (long *)*plVar24;
          }
          plVar28 = plVar24 + 3;
          if (plVar17 == plVar28) {
            uVar31 = 0;
            uVar18 = 1;
          }
          else {
            (**(code **)(*(long *)*plVar28 + 0xd0))();
            bVar12 = (long *)*plVar28 != plVar29;
            if (bVar12) {
              (**(code **)(*plVar29 + 0x100))(plVar29,plVar24,plVar24 + 3);
              plVar29 = (long *)plVar24[3];
            }
            uVar31 = (ulong)bVar12;
            plVar28 = plVar24 + 6;
            if (plVar17 == plVar28) {
              uVar18 = 2;
            }
            else {
              (**(code **)(*(long *)*plVar28 + 0xd0))();
              if ((long *)*plVar28 != plVar29) {
                (**(code **)(*plVar29 + 0x100))(plVar29,plVar24 + uVar31 * 3,plVar24 + 6);
                plVar29 = (long *)plVar24[6];
                uVar31 = 2;
              }
              plVar28 = plVar24 + 9;
              if (plVar17 == plVar28) {
                uVar18 = 3;
              }
              else {
                (**(code **)(*(long *)*plVar28 + 0xd0))();
                if ((long *)*plVar28 != plVar29) {
                  (**(code **)(*plVar29 + 0x100))(plVar29,plVar24 + uVar31 * 3,plVar24 + 9);
                  plVar29 = (long *)plVar24[9];
                  uVar31 = 3;
                }
                plVar28 = plVar24 + 0xc;
                if (plVar17 == plVar28) {
                  uVar18 = 4;
                }
                else {
                  (**(code **)(*(long *)*plVar28 + 0xd0))();
                  if ((long *)*plVar28 != plVar29) {
                    (**(code **)(*plVar29 + 0x100))(plVar29,plVar24 + uVar31 * 3,plVar24 + 0xc);
                    plVar29 = (long *)plVar24[0xc];
                    uVar31 = 4;
                  }
                  plVar28 = plVar24 + 0xf;
                  if (plVar17 == plVar28) {
                    uVar18 = 5;
                  }
                  else {
                    (**(code **)(*(long *)*plVar28 + 0xd0))();
                    if ((long *)*plVar28 != plVar29) {
                      (**(code **)(*plVar29 + 0x100))(plVar29,plVar24 + uVar31 * 3,plVar24 + 0xf);
                      plVar29 = (long *)plVar24[0xf];
                      uVar31 = 5;
                    }
                    uVar18 = 6;
                    for (plVar28 = plVar24 + 0x12; plVar17 != plVar28; plVar28 = plVar28 + 3) {
                      (**(code **)(*(long *)*plVar28 + 0xd0))();
                      if ((long *)*plVar28 != plVar29) {
                        (**(code **)(*plVar29 + 0x100))(plVar29,plVar24 + uVar31 * 3,plVar28);
                        plVar29 = (long *)*plVar28;
                        uVar31 = uVar18;
                      }
                      uVar18 = uVar18 + 1;
                    }
                  }
                }
              }
            }
          }
        }
        (**(code **)(*plVar29 + 0x100))(plVar29,plVar24 + uVar31 * 3,plVar24 + uVar18 * 3);
        plVar24[600] = 0;
      }
      *(undefined4 *)(lVar26 + 0x12cc) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0xe0) = uStack_138;
  *(undefined8 *)(param_1 + 0xe8) = local_130;
  *(undefined8 *)(param_1 + 0xd8) = local_140;
  FUN_00db239c(&local_f0);
  lVar26 = *(long *)(param_1 + 0xd0);
  if (*(long *)(lVar26 + 8) == 0) {
LAB_014b68bc:
    uVar18 = FUN_00dc5c18(lVar26,1,&local_128,0,*(undefined8 *)(param_1 + 0x60));
    if (((uVar18 & 1) == 0) || (plVar24 = *(long **)(lVar26 + 0x20), plVar24 == (long *)0x0))
    goto LAB_014b68e0;
    lVar26 = plVar24[6];
    if (*(long *)(lVar26 + 0x10) == 0) goto LAB_014b7f20;
    psVar1 = (short *)(lVar26 + 0x1a);
    do {
      sVar25 = *psVar1;
      cVar6 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar12) {
        *psVar1 = sVar25 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar25 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      *(undefined8 *)(lVar26 + 8) = uVar14;
      *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
LAB_014b6dbc:
      lVar26 = plVar24[6];
      psVar1 = (short *)(lVar26 + 0x1a);
      do {
        sVar25 = *psVar1;
        cVar6 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar12) {
          *psVar1 = sVar25 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar25 == 1) {
        *(undefined8 *)(lVar26 + 0x10) = 0;
        (**(code **)(*plVar24 + 0x50))(plVar24);
      }
      else if (sVar25 == 0) goto LAB_014b6de0;
      goto LAB_014b68e0;
    }
    if (sVar25 != -1) goto LAB_014b6dbc;
LAB_014b7f40:
    pcVar19 = "count != 0";
    pcVar20 = "AddReference";
    pcVar21 = 
    "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
    ;
    pcVar22 = "Reference counter overflows.";
    goto LAB_014b7f60;
  }
  if ((*(byte *)(*(long *)(lVar26 + 8) + 0x1e8) & 1) == 0) {
    lVar26 = *(long *)(param_1 + 0xd0);
    goto LAB_014b68bc;
  }
LAB_014b68e0:
  *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  if (local_128 != (long *)0x0) {
    (**(code **)(*local_128 + 0x20))();
  }
switchD_014b67a4_caseD_2:
  lVar26 = *(long *)(*(long *)(param_1 + 0xd0) + 8);
  if ((lVar26 != 0) && ((*(byte *)(lVar26 + 0x1e8) & 1) != 0)) {
    *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
switchD_014b67a4_caseD_3:
    puVar15 = (uint *)(**(code **)(**(long **)(*(long *)(param_1 + 0xd0) + 8) + 0x70))();
    if (puVar15 != (uint *)0x0) {
      piVar3 = (int *)((long)puVar15 + (ulong)*puVar15);
      if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
         (uVar18 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar18 != 0)) {
        puVar15 = (uint *)((long)piVar3 + uVar18);
        piVar3 = (int *)((long)puVar15 + (ulong)*puVar15);
        if ((4 < *(ushort *)((long)piVar3 - (long)*piVar3)) &&
           (uVar18 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar18 != 0)) {
          puVar15 = (uint *)((long)piVar3 + uVar18);
          snprintf((char *)&local_f0,0x80,"%s/%s.trabb",*(char **)(param_1 + 0x48),
                   (char *)((long)puVar15 + (ulong)*puVar15 + 4));
          FUN_00da52ec(&local_128,&local_f0);
          FUN_013261b0(&local_f0,param_1,&local_128);
          FUN_010ef684(param_1 + 0x90,&local_f0);
          FUN_00db239c(&local_f0);
          if ((((*(long *)(param_1 + 0x98) == 0) ||
               ((*(byte *)(*(long *)(param_1 + 0x98) + 0x1e8) & 1) == 0)) &&
              (uVar18 = FUN_00dc5c18(param_1 + 0x90,1,&local_128,0,*(undefined8 *)(param_1 + 0x60)),
              (uVar18 & 1) != 0)) && (plVar24 = *(long **)(param_1 + 0xb0), plVar24 != (long *)0x0))
          {
            lVar26 = plVar24[6];
            if (*(long *)(lVar26 + 0x10) == 0) {
LAB_014b7f20:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("m_object != nullptr","AddReference",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                         ,0x3d);
            }
            psVar1 = (short *)(lVar26 + 0x1a);
            do {
              sVar25 = *psVar1;
              cVar6 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar12) {
                *psVar1 = sVar25 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar25 == 0) {
              uVar14 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
              *(undefined8 *)(lVar26 + 8) = uVar14;
              *(undefined4 *)(lVar26 + 0x1c) = 0xfffffffe;
            }
            else if (sVar25 == -1) goto LAB_014b7f40;
            lVar26 = plVar24[6];
            psVar1 = (short *)(lVar26 + 0x1a);
            do {
              sVar25 = *psVar1;
              cVar6 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(psVar1,0x10);
              if (bVar12) {
                *psVar1 = sVar25 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (sVar25 == 1) {
              *(undefined8 *)(lVar26 + 0x10) = 0;
              (**(code **)(*plVar24 + 0x50))(plVar24);
            }
            else if (sVar25 == 0) goto LAB_014b6de0;
          }
          if (local_108 != (long *)0x0) {
            (**(code **)(*local_108 + 0x20))();
          }
          if (local_128 != (long *)0x0) {
            (**(code **)(*local_128 + 0x20))();
          }
        }
      }
    }
    *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
switchD_014b67a4_caseD_4:
    if ((*(long *)(param_1 + 0x98) != 0) &&
       ((*(byte *)(*(long *)(param_1 + 0x98) + 0x1e8) & 1) != 0)) {
      *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1;
switchD_014b67a4_caseD_5:
      if (*(char *)(param_1 + 0x78) == '\0') {
        FUN_0105f008(param_1,param_1 + 0xd0);
        uVar23 = 6;
LAB_014b75f0:
        *(undefined4 *)(param_1 + 0x130) = uVar23;
      }
      else if ((*(long *)(param_1 + 0x68) != 0) &&
              (*(short *)(*(long *)(param_1 + 0x68) + 0x1a) != 0)) {
        lVar26 = *(long *)(param_1 + 0x68);
        *(undefined4 *)(param_1 + 0x130) = 0xb;
        if ((lVar26 == 0) || (sVar25 = *(short *)(lVar26 + 0x1a), sVar25 == 0)) {
LAB_014b6ad4:
          plVar24 = (long *)0x0;
          bVar12 = true;
        }
        else {
          puVar30 = *(undefined8 **)(lVar26 + 8);
          if (((*PTR_DAT_047d39b0 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_047d39b0), iVar13 != 0)) {
            if (((*PTR_DAT_047d39c0 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar13 != 0)) {
              *(undefined8 *)PTR_DAT_047d39c8 = 0;
              __cxa_guard_release(PTR_DAT_047d39c0);
            }
            *(undefined **)PTR_DAT_047d39b8 = PTR_DAT_047d39c8;
            __cxa_guard_release(PTR_DAT_047d39b0);
          }
          if (puVar30 == (undefined8 *)0x0) goto LAB_014b6ad4;
          psVar1 = (short *)(lVar26 + 0x1a);
          bVar12 = true;
          do {
            if (puVar30 == (undefined8 *)PTR_DAT_047d39b8) {
              bVar12 = true;
              goto LAB_014b7c44;
            }
            puVar30 = (undefined8 *)*puVar30;
            plVar24 = (long *)0x0;
          } while (puVar30 != (undefined8 *)0x0);
        }
LAB_014b6adc:
        puVar8 = PTR_DAT_047dd4c0;
        if (((*PTR_DAT_047dd4c0 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047dd4c0);
        }
        puVar10 = PTR_DAT_047dd4d0;
        puVar9 = PTR_DAT_047dd4c8;
        *(undefined8 *)PTR_DAT_047dd4d0 = *(undefined8 *)PTR_DAT_047dd4c8;
        if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_047dd4c0), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047dd520,PTR_DAT_047dd4c8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047dd4c0);
        }
        lVar26 = *(long *)puVar9;
        *(long *)puVar10 = lVar26;
        lVar26 = *(long *)(lVar26 + 0x28);
        if (((*PTR_DAT_047d8c58 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_047d8c58), iVar13 != 0)) {
          FUN_00100190(PTR_LAB_047d9368,PTR_DAT_047d8c60,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8c58);
        }
        uVar14 = *(undefined8 *)PTR_DAT_047d8c60;
        *(undefined8 *)PTR_DAT_047d8c68 = uVar14;
        FUN_00cbf5d4(&local_148,uVar14,*(undefined8 *)(lVar26 + 8));
        plVar17 = (long *)FUN_00f3afb4(&local_f0,*(undefined8 *)(lVar26 + 8),&local_148);
        if (plVar17 == (long *)0x0) {
          local_128 = (long *)0x0;
        }
        else {
          plVar29 = plVar17 + 5;
          do {
            lVar16 = *plVar29;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar7) {
              *(int *)plVar29 = (int)lVar16 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((int)lVar16 == -1) goto LAB_014b7ed0;
          do {
            lVar16 = *plVar29;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar7) {
              *(int *)plVar29 = (int)lVar16 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          local_128 = plVar17;
          if ((int)lVar16 == -1) goto LAB_014b7ed0;
        }
        plVar29 = local_128;
        local_120 = param_1;
        local_118 = plVar24;
        nn::os::LockMutex((MutexType *)(lVar26 + 0x3d0));
        local_e0 = (code *)0x0;
        puStack_d8 = (undefined1 *)0x0;
        local_f0 = (code *)0x0;
        local_e8 = (code *)0x0;
        local_d0 = plVar29;
        if (plVar29 == (long *)0x0) {
          plStack_c0 = plVar24;
          local_c8 = param_1;
        }
        else {
          plVar29 = plVar29 + 5;
          do {
            lVar16 = *plVar29;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar7) {
              *(int *)plVar29 = (int)lVar16 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if ((int)lVar16 == -1) {
LAB_014b7ed0:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","IncrementReferenceInternal",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                       ,0x53,"Reference counter overflows.");
          }
          plStack_c0 = local_118;
          local_c8 = local_120;
        }
        if (plStack_c0 != (long *)0x0) {
          (**(code **)(*plStack_c0 + 0x10))();
        }
        local_f0 = FUN_029ef39c;
        local_e8 = FUN_02e696bc;
        local_e0 = FUN_02e69750;
        puStack_d8 = &LAB_02e697d4;
        FUN_00dd17e4(lVar26 + 0x360,&local_f0);
        pcVar11 = local_e8;
        if (local_e8 != (code *)0x0) {
          local_e0 = (code *)0x0;
          puStack_d8 = (undefined1 *)0x0;
          local_f0 = (code *)0x0;
          local_e8 = (code *)0x0;
          (*pcVar11)(&local_d0);
        }
        *(undefined8 *)(lVar26 + 0x3f8) = *(undefined8 *)(lVar26 + 0x3a8);
        nn::os::SignalConditionVariable((ConditionVariableType *)(lVar26 + 0x3f0));
        nn::os::UnlockMutex((MutexType *)(lVar26 + 0x3d0));
        plVar29 = *(long **)(lVar26 + 0x400);
        plVar28 = *(long **)(lVar26 + 0x408);
        if (plVar29 != plVar28) {
          lVar26 = *plVar29;
          pMVar2 = (MutexType *)(lVar26 + 0x3f0);
          nn::os::LockMutex(pMVar2);
          nn::os::SignalConditionVariable((ConditionVariableType *)(lVar26 + 0x410));
          nn::os::UnlockMutex(pMVar2);
          if (plVar29 + 1 != plVar28) {
            lVar26 = plVar29[1];
            pMVar2 = (MutexType *)(lVar26 + 0x3f0);
            nn::os::LockMutex(pMVar2);
            nn::os::SignalConditionVariable((ConditionVariableType *)(lVar26 + 0x410));
            nn::os::UnlockMutex(pMVar2);
            for (plVar29 = plVar29 + 2; plVar29 != plVar28; plVar29 = plVar29 + 1) {
              lVar26 = *plVar29;
              pMVar2 = (MutexType *)(lVar26 + 0x3f0);
              nn::os::LockMutex(pMVar2);
              nn::os::SignalConditionVariable((ConditionVariableType *)(lVar26 + 0x410));
              nn::os::UnlockMutex(pMVar2);
            }
          }
        }
        if (local_118 != (long *)0x0) {
          (**(code **)(*local_118 + 0x18))();
        }
        if (local_128 != (long *)0x0) {
          plVar29 = local_128 + 5;
          do {
            lVar26 = *plVar29;
            iVar13 = (int)lVar26 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar7) {
              *(int *)plVar29 = iVar13;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar13 == 0) {
            (**(code **)(*local_128 + 0x10))();
            goto LAB_014b6ca0;
          }
          if ((int)lVar26 != 0) goto LAB_014b6ca0;
LAB_014b7f68:
          pcVar19 = "count != std::numeric_limits<uint32_t>::max()";
          pcVar20 = "DecrementReferenceInternal";
          pcVar21 = 
          "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
          ;
          pcVar22 = "Reference counter underflows.";
LAB_014b7f60:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl(pcVar19,pcVar20,pcVar21,0x58,pcVar22);
        }
LAB_014b6ca0:
        if (plVar17 != (long *)0x0) {
          plVar29 = plVar17 + 5;
          do {
            lVar26 = *plVar29;
            iVar13 = (int)lVar26 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
            if (bVar7) {
              *(int *)plVar29 = iVar13;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar13 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
          else if ((int)lVar26 == 0) goto LAB_014b7f68;
        }
        if (local_148 != (long *)0x0) {
          lVar26 = local_148[6];
          psVar1 = (short *)(lVar26 + 0x1a);
          do {
            sVar25 = *psVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar7) {
              *psVar1 = sVar25 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
LAB_014b72f0:
          if (sVar25 == 1) {
            *(undefined8 *)(lVar26 + 0x10) = 0;
            (**(code **)(*local_148 + 0x50))();
          }
          else if (sVar25 == 0) {
LAB_014b6de0:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
LAB_014b72fc:
        if (!bVar12) {
          (**(code **)(*plVar24 + 0x18))(plVar24);
        }
      }
    }
  }
switchD_014b67a4_caseD_b:
  uVar14 = 0;
switchD_014b67a4_caseD_a:
  return uVar14;
}



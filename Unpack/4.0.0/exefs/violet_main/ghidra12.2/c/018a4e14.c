/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018a4e14; name: FUN_018a4e14
 */


void FUN_018a4e14(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined8 *local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined1 *local_38;
  
  FUN_018a5ab8(&local_d0,*(undefined8 *)(param_1 + 8));
  plVar10 = *(long **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (plVar10 != (long *)0x0) {
    lVar18 = plVar10[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_018a5450;
  }
  *(undefined8 *)(param_1 + 0x28) = local_d0;
  FUN_018a5b7c(&local_d0,*(undefined8 *)(param_1 + 8));
  plVar10 = *(long **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar10 != (long *)0x0) {
    lVar18 = plVar10[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_018a5450;
  }
  *(undefined8 *)(param_1 + 0x30) = local_d0;
  FUN_018a5c40(&local_d0,*(undefined8 *)(param_1 + 8));
  plVar10 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar10 != (long *)0x0) {
    lVar18 = plVar10[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_018a5450;
  }
  *(undefined8 *)(param_1 + 0x38) = local_d0;
  FUN_018a5d04(&local_d0,*(undefined8 *)(param_1 + 8));
  plVar20 = (long *)(param_1 + 0x40);
  plVar10 = (long *)*plVar20;
  *plVar20 = 0;
  if (plVar10 != (long *)0x0) {
    lVar18 = plVar10[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_018a5450;
  }
  *(undefined8 *)(param_1 + 0x40) = local_d0;
  local_f0 = (undefined8 *)&DAT_80aab8649adc4b33;
  local_38 = &DAT_cbf29ce484222645;
  FUN_018a5dc8(&local_d0,*(undefined8 *)(param_1 + 8),&local_f0,&local_38,plVar20);
  plVar20 = (long *)(param_1 + 0x48);
  plVar10 = (long *)*plVar20;
  *plVar20 = 0;
  if (plVar10 != (long *)0x0) {
    lVar18 = plVar10[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_018a5450;
  }
  *(undefined8 *)(param_1 + 0x48) = local_d0;
  FUN_018a5a4c(&local_d0,*(undefined8 *)(param_1 + 8),plVar20);
  plVar10 = *(long **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (plVar10 != (long *)0x0) {
    plVar20 = plVar10 + 5;
    do {
      lVar18 = *plVar20;
      iVar9 = (int)lVar18 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *(int *)plVar20 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar18 == 0) {
      pcVar14 = "count != std::numeric_limits<uint32_t>::max()";
      pcVar15 = "DecrementReferenceInternal";
      pcVar16 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
      ;
      pcVar17 = "Reference counter underflows.";
      goto LAB_018a59a0;
    }
  }
  *(undefined8 *)(param_1 + 0x50) = local_d0;
  puVar11 = (undefined8 *)FUN_018a6ff4(*(undefined8 *)(param_1 + 8));
  local_f0 = puVar11;
  if (puVar11 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar11 + 6);
    do {
      iVar9 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  local_d0 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_018a59dc(&local_d0);
  local_f0 = (undefined8 *)0x0;
  *(undefined8 **)(param_1 + 0x58) = puVar11;
  FUN_018a59dc(&local_f0);
  puVar6 = PTR_DAT_047d4df8;
  if (((*PTR_DAT_047d4df8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  puVar8 = PTR_DAT_047d4e08;
  puVar7 = PTR_DAT_047d4e00;
  *(undefined8 *)PTR_DAT_047d4e08 = *(undefined8 *)PTR_DAT_047d4e00;
  uVar12 = FUN_018a59d0();
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d4e10,PTR_DAT_047d4e00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4df8);
  }
  lVar19 = *(long *)puVar7;
  *(long *)puVar8 = lVar19;
  lVar18 = 0;
  if (lVar19 != 0) {
    lVar18 = lVar19 + 0x20;
  }
  FUN_018a671c(uVar12,lVar18,*(undefined8 *)(param_1 + 0x58));
  puVar6 = PTR_DAT_047d3e28;
  uVar12 = *(undefined8 *)(param_1 + 8);
  local_d0 = 0;
  if (((*PTR_DAT_047d3e28 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  puVar7 = PTR_DAT_047d3e30;
  local_c8 = *(undefined8 *)PTR_DAT_047d3e30;
  local_c0 = *(char **)(PTR_DAT_047d3e30 + 8);
  local_b8 = *(undefined8 *)(PTR_DAT_047d3e30 + 0x10);
  plStack_b0 = *(long **)(PTR_DAT_047d3e30 + 0x18);
  if (plStack_b0 != (long *)0x0) {
    (**(code **)(*plStack_b0 + 0x18))();
  }
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  local_a8 = *(undefined8 *)puVar7;
  pcStack_a0 = *(char **)(puVar7 + 8);
  local_98 = *(undefined8 *)(puVar7 + 0x10);
  plStack_90 = *(long **)(puVar7 + 0x18);
  if (plStack_90 != (long *)0x0) {
    (**(code **)(*plStack_90 + 0x18))();
  }
  local_58 = 0;
  local_a8 = 0x980c8397c930ba1e;
  pcStack_a0 = "ai_behavior/blackboard";
  local_98 = 0x16;
  local_d0 = 0x100;
  local_c8 = 0x84997ed2e343078e;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_c0 = "ai_behavior/behavior_tree";
  local_b8 = 0x19;
  FUN_013d8878(&local_f0,*(undefined8 *)(param_1 + 0x28));
  FUN_013d7b3c(&local_88,&local_f0);
  puVar11 = local_f0;
  if (local_f0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_f0 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_38 = (undefined1 *)*puVar11;
        FUN_00c44438(lVar18 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_018a54e0;
  }
  FUN_013d92c0(&local_f0,*(undefined8 *)(param_1 + 0x38));
  FUN_013d8184(&local_78,&local_f0);
  puVar11 = local_f0;
  if (local_f0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_f0 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_38 = (undefined1 *)*puVar11;
        FUN_00c44438(lVar18 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) goto LAB_018a54e0;
  }
  FUN_013d8d9c(&local_f0,*(undefined8 *)(param_1 + 0x30));
  FUN_013d7e60(&local_68,&local_f0);
  puVar11 = local_f0;
  if (local_f0 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_f0 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_f0 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar18 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar18;
        local_38 = (undefined1 *)*puVar11;
        FUN_00c44438(lVar18 + 0x8040,&local_38);
      }
    }
    else if (sVar3 == 0) {
LAB_018a54e0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  local_58 = 1;
  FUN_018a5e8c(&local_f0,uVar12,&local_d0);
  plVar10 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar10 != (long *)0x0) {
    lVar18 = plVar10[6];
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar18 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_018a5450:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  *(undefined8 **)(param_1 + 0x60) = local_f0;
  puVar6 = PTR_DAT_047d89c8;
  if (((*PTR_DAT_047d89c8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  puVar8 = PTR_DAT_047d89d8;
  puVar7 = PTR_DAT_047d89d0;
  lVar18 = *(long *)PTR_DAT_047d89d0;
  *(long *)PTR_DAT_047d89d8 = lVar18;
  uVar12 = *(undefined8 *)(lVar18 + 0x38);
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d89c8), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d9110,PTR_DAT_047d89d0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89c8);
  }
  lVar18 = *(long *)puVar7;
  *(long *)puVar8 = lVar18;
  uVar21 = *(undefined8 *)(lVar18 + 0x40);
  plVar10 = *(long **)(*(long *)(param_1 + 0x60) + 0xc0);
  if (plVar10 != (long *)0x0) {
    lVar18 = plVar10[6];
    if (*(long *)(lVar18 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar18 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar18 + 0x10))();
      *(undefined8 *)(lVar18 + 8) = uVar13;
      *(undefined4 *)(lVar18 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
      pcVar14 = "count != 0";
      pcVar15 = "AddReference";
      pcVar16 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
      ;
      pcVar17 = "Reference counter overflows.";
LAB_018a59a0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl(pcVar14,pcVar15,pcVar16,0x58,pcVar17);
    }
  }
  *(undefined4 *)(plVar10 + 0x6a) = 2;
  plVar20 = plVar10 + 0x3a;
  lVar18 = nn::os::GetCurrentThread();
  while (*plVar20 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar5) {
      *plVar20 = lVar18;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_018a5228;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(plVar10 + 0x3b));
  do {
    if (*plVar20 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(plVar10 + 0x3b));
        while (*plVar20 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar5) {
            *plVar20 = lVar18;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_018a5228;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar5) {
      *plVar20 = lVar18;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_018a5228:
  FUN_00e220f4(plVar10,uVar12,0);
  FUN_00e220f4(plVar10,0,uVar21);
  local_f0 = (undefined8 *)0xd78de23cba4fb78;
  pcStack_e8 = "wild_pokemon_base_behavior/wild_pokemon_base_behavior";
  local_e0 = 0x35;
  local_d8 = (long *)0x0;
  FUN_018a90b4(*(undefined8 *)(param_1 + 0x60),&local_f0,1);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  local_f0 = (undefined8 *)0x7abb7644a46c6108;
  pcStack_e8 = "partner_pokemon_base_behavior/partner_pokemon_base_behavior";
  local_e0 = 0x3b;
  local_d8 = (long *)0x0;
  FUN_018a90b4(*(undefined8 *)(param_1 + 0x60),&local_f0,1);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  local_f0 = (undefined8 *)0xae2578303f17e564;
  pcStack_e8 = "picnic_pokemon_base_behavior/picnic_pokemon_base_behavior";
  local_e0 = 0x39;
  local_d8 = (long *)0x0;
  FUN_018a90b4(*(undefined8 *)(param_1 + 0x60),&local_f0,1);
  if (local_d8 != (long *)0x0) {
    (**(code **)(*local_d8 + 0x20))();
  }
  plVar10[0x3a] = 0;
  nn::os::SignalLightEvent((LightEventType *)(plVar10 + 0x3b));
  if (plVar10 == (long *)0x0) {
LAB_018a5334:
    FUN_018a7814(&local_d0);
    return;
  }
  lVar18 = plVar10[6];
  psVar1 = (short *)(lVar18 + 0x1a);
  do {
    sVar3 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar3 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar3 == 1) {
    *(undefined8 *)(lVar18 + 0x10) = 0;
    (**(code **)(*plVar10 + 0x50))(plVar10);
    goto LAB_018a5334;
  }
  if (sVar3 != 0) goto LAB_018a5334;
  goto LAB_018a5450;
}



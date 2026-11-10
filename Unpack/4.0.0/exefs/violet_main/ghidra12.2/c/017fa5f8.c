/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017fa5f8; name: FUN_017fa5f8
 */


void FUN_017fa5f8(long param_1,uint param_2,long param_3,undefined4 param_4,undefined4 param_5)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  short sVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined1 local_e2;
  undefined1 local_e1;
  undefined1 uStack_e0;
  undefined2 uStack_df;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  long *local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar15 = *(ulong *)(param_1 + 0x50);
  if (uVar15 == 0) {
    return;
  }
  uVar13 = uVar15 - (uVar15 >> 1 & 0x5555555555555555);
  uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
  uVar18 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  uVar13 = (ulong)param_2;
  if (uVar18 < 2) {
    uVar17 = (ulong)((int)uVar15 - 1U & param_2);
  }
  else {
    uVar17 = uVar13;
    if (uVar15 <= uVar13) {
      uVar17 = 0;
      if (uVar15 != 0) {
        uVar17 = uVar13 / uVar15;
      }
      uVar17 = uVar13 - uVar17 * uVar15;
    }
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x48) + uVar17 * 8);
  if (plVar14 == (long *)0x0) {
    return;
  }
  plVar14 = (long *)*plVar14;
  if (plVar14 == (long *)0x0) {
    return;
  }
  if (1 < uVar18) {
    do {
      uVar18 = plVar14[1];
      if (uVar18 == uVar13) {
        if (*(uint *)(plVar14 + 2) == param_2) goto LAB_017fa698;
      }
      else {
        if (uVar15 <= uVar18) {
          uVar6 = 0;
          if (uVar15 != 0) {
            uVar6 = uVar18 / uVar15;
          }
          uVar18 = uVar18 - uVar6 * uVar15;
        }
        if (uVar18 != uVar17) {
          return;
        }
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        return;
      }
    } while( true );
  }
  do {
    if (plVar14[1] == uVar13) {
      if (*(uint *)(plVar14 + 2) == param_2) break;
    }
    else if ((plVar14[1] & uVar15 - 1) != uVar17) {
      return;
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      return;
    }
  } while( true );
LAB_017fa698:
  if ((((plVar14[5] == 0) || (*(short *)(plVar14[5] + 0x1a) == 0)) ||
      (lVar12 = plVar14[5], lVar12 == 0)) || (*(short *)(lVar12 + 0x1a) == 0)) {
    return;
  }
  psVar1 = (short *)(lVar12 + 0x1a);
  sVar16 = *(short *)(lVar12 + 0x1a);
LAB_017fa714:
  sVar3 = *psVar1;
  if (sVar3 == sVar16) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar16 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 != '\0') goto LAB_017fa73c;
    bVar5 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_017fa73c:
    bVar5 = false;
  }
  if (!bVar5) {
    sVar16 = sVar3;
    if (sVar3 == 0) {
      return;
    }
    goto LAB_017fa714;
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  if (lVar12 == 0) {
    return;
  }
  local_78 = 0xdeda0913e9ef23dd;
  pcStack_70 = "CAM_POS";
  local_68 = 7;
  local_60 = (long *)0x0;
  local_48 = param_5;
  uStack_44 = param_4;
  if (*(code **)(param_3 + 0x10) == (code *)0x0) {
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
  }
  else {
    (**(code **)(param_3 + 0x10))(&local_58,param_3 + 0x30,&local_78);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
  }
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  FUN_00d0a71c(&local_90,&local_58);
  uVar10 = FUN_01180e7c(param_3,&local_90);
  puVar8 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_90 + 3);
    do {
      sVar16 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_90 + 0x1c);
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
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_f0 = *puVar8;
        FUN_00c44438(lVar19 + 0x8040,&local_f0);
      }
    }
    else if (sVar16 == 0) goto LAB_017faa34;
  }
  local_c0 = 0x37a5913ff3d5f98;
  pcStack_b8 = "CAM_TRG";
  local_b0 = 7;
  local_a8 = (long *)0x0;
  local_80 = uVar10;
  if (*(code **)(param_3 + 0x10) == (code *)0x0) {
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
  }
  else {
    (**(code **)(param_3 + 0x10))(&local_a0,param_3 + 0x30,&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  FUN_00d0a71c(&local_d8,&local_a0);
  uVar10 = FUN_01180e7c(param_3,&local_d8);
  puVar8 = local_d8;
  if (local_d8 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_d8 + 3);
    do {
      sVar16 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_d8 + 0x1c);
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
        lVar19 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar19;
        local_f0 = *puVar8;
        FUN_00c44438(lVar19 + 0x8040,&local_f0);
      }
    }
    else if (sVar16 == 0) goto LAB_017faa34;
  }
  uStack_df = 0;
  uStack_e0 = 0x45;
  local_e1 = 0x30;
  local_e2 = 0x32;
  local_e4 = 0x3937;
  local_e8 = 0x42413439;
  local_f0 = 0x4430394646393453;
  local_c8 = uVar10;
  if (((*PTR_DAT_047d6c20 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c20), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d89a0,PTR_DAT_047d6c28,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c20);
  }
  lVar19 = *(long *)PTR_DAT_047d6c28;
  *(long *)PTR_DAT_047d6c30 = lVar19;
  if (*(undefined8 **)(lVar12 + 0x28) == (undefined8 *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = **(undefined8 **)(lVar12 + 0x28);
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04865a38), iVar9 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar11 = nn::os::GetTlsValue(DAT_04865a30);
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0x90) != -1)) {
    *(undefined8 *)(lVar19 + (long)*(int *)(lVar11 + 0x90) * 8 + 0x6a0) = uVar10;
  }
  puVar7 = PTR_DAT_047d38f8;
  lVar20 = *(long *)(lVar12 + 0xd8);
  lVar11 = *(long *)PTR_DAT_047d38f8;
  lVar19 = nn::os::GetCurrentThread();
  if (lVar19 == lVar11) {
    FUN_0210daf4(*(undefined8 *)(lVar20 + 0x70),*(undefined8 *)(lVar20 + 0x80),
                 *(undefined8 *)(lVar12 + 0x98),&local_f0,plVar14 + 3,&uStack_44,&local_48,&local_80
                 ,&local_c8);
LAB_017fa948:
    puVar8 = local_a0;
    if (local_a0 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_a0 + 3);
      do {
        sVar16 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 1) {
        piVar2 = (int *)((long)local_a0 + 0x1c);
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
          lVar19 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar19;
          local_f0 = *puVar8;
          FUN_00c44438(lVar19 + 0x8040,&local_f0);
        }
      }
      else if (sVar16 == 0) goto LAB_017faa34;
    }
    puVar8 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_58 + 3);
      do {
        sVar16 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 1) {
        piVar2 = (int *)((long)local_58 + 0x1c);
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
          lVar19 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar19;
          local_f0 = *puVar8;
          FUN_00c44438(lVar19 + 0x8040,&local_f0);
        }
      }
      else if (sVar16 == 0) {
LAB_017faa34:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    lVar19 = *(long *)(lVar12 + 8);
    psVar1 = (short *)(lVar19 + 0x1a);
    do {
      sVar16 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 1) {
      *(undefined8 *)(lVar19 + 0x10) = 0;
      (**(code **)(*(long *)(lVar12 + -0x28) + 0x50))();
      return;
    }
    if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
    return;
  }
  uVar10 = nn::os::GetCurrentThread();
  while (*(long *)puVar7 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar5) {
      *(undefined8 *)puVar7 = uVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_017faa74;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
  do {
    if (*(long *)puVar7 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(puVar7 + 8));
        while (*(long *)puVar7 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar7,0x10);
          if (bVar5) {
            *(undefined8 *)puVar7 = uVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_017faa74;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar5) {
      *(undefined8 *)puVar7 = uVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_017faa74:
  FUN_0210daf4(*(undefined8 *)(lVar20 + 0x70),*(undefined8 *)(lVar20 + 0x80),
               *(undefined8 *)(lVar12 + 0x98),&local_f0,plVar14 + 3,&uStack_44,&local_48,&local_80,
               &local_c8);
  *(undefined8 *)puVar7 = 0;
  nn::os::SignalLightEvent((LightEventType *)(puVar7 + 8));
  goto LAB_017fa948;
}



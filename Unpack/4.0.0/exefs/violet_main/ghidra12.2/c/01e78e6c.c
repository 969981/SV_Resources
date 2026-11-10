/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e78e6c; name: FUN_01e78e6c
 */


void FUN_01e78e6c(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  code *pcVar9;
  int iVar10;
  long lVar11;
  short sVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *local_150;
  undefined8 uStack_148;
  long *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  long *local_120;
  undefined1 auStack_118 [8];
  undefined8 *local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [100];
  undefined4 local_8c;
  long local_88;
  long lStack_80;
  long local_78;
  long *local_70;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_38;
  
  local_110 = (undefined8 *)0x0;
  local_108 = (code *)0x0;
  local_60 = param_5;
  uStack_58 = param_4;
  FUN_00c43ef0(&local_110,param_2 + 0x30);
  local_140 = (long *)0x0;
  local_138 = 0;
  lVar11 = 0;
  if (param_2 != 0) {
    lVar11 = param_2 + 0x28;
  }
  if (local_110[2] == lVar11) {
    FUN_015d2a6c(&local_140,&local_110);
  }
  puVar8 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_110 + 3);
    do {
      sVar12 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)local_110 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_38 = (long *)*puVar8;
        FUN_00c44438(lVar15 + 0x8040,&local_38);
      }
    }
    else if (sVar12 == 0) goto LAB_01e79198;
  }
  plVar4 = local_140;
  if (local_140 == (long *)0x0) {
    plVar13 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_140 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_140 + 0x1a);
      sVar12 = *(short *)((long)local_140 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar12) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar12 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_01e79264;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01e79264:
          bVar7 = false;
        }
        if (bVar7) {
          plVar13 = (long *)0x0;
          if (local_140[2] != 0) {
            plVar13 = (long *)(local_140[2] + -0x28);
          }
          goto LAB_01e7928c;
        }
        sVar12 = sVar5;
      } while (sVar5 != 0);
    }
    plVar13 = (long *)0x0;
LAB_01e7928c:
    plVar2 = local_140 + 3;
    do {
      sVar12 = (short)*plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(short *)plVar2 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)local_140 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar15;
        local_110 = (undefined8 *)*plVar4;
        FUN_00c44438(lVar15 + 0x8040,&local_110);
      }
    }
    else if (sVar12 == 0) goto LAB_01e79198;
  }
  FUN_01e7a65c(auStack_68,*(undefined8 *)(param_2 + 8),&uStack_58,&local_60);
  FUN_01050714(&local_38,param_3);
  plVar2 = local_38;
  plVar4 = (long *)PTR_DAT_047d8b70;
  if (local_38 != (long *)0x0) {
    plVar4 = local_38 + 6;
  }
  local_88 = *plVar4;
  plVar4 = (long *)PTR_PTR_047d4508;
  if (local_38 != (long *)0x0) {
    plVar4 = local_38 + 7;
  }
  lStack_80 = *plVar4;
  if (local_38 == (long *)0x0) {
    local_78 = 0;
  }
  else {
    local_78 = local_38[8];
  }
  local_70 = (long *)0x0;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))(local_38);
  }
  local_70 = plVar2;
  local_8c = 0;
  local_140 = plVar13;
  if (plVar13 != (long *)0x0) {
    lVar15 = plVar13[6];
    if (*(long *)(lVar15 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar12 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      *(undefined8 *)(lVar15 + 8) = uVar14;
      *(undefined4 *)(lVar15 + 0x1c) = 0xfffffffe;
    }
    else if (sVar12 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  local_138 = *param_3;
  uStack_130 = param_3[1];
  local_128 = param_3[2];
  local_120 = (long *)param_3[3];
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x18))();
  }
  FUN_01e7a720(auStack_118,auStack_68);
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = (undefined8 *)0x0;
  local_108 = (code *)0x0;
  FUN_01e7a7e0(&local_110,&local_140);
  FUN_01e7a920(param_1,&local_88,&local_8c,&local_110);
  pcVar9 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = (undefined8 *)0x0;
    local_108 = (code *)0x0;
    (*pcVar9)(auStack_f0);
  }
  FUN_01e7a9dc(auStack_118);
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  if (local_140 != (long *)0x0) {
    lVar15 = local_140[6];
    psVar1 = (short *)(lVar15 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar15 + 0x10) = 0;
      (**(code **)(*local_140 + 0x50))();
    }
    else if (sVar12 == 0) goto LAB_01e795b4;
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  uVar14 = *param_1;
  local_110 = (undefined8 *)0x0;
  local_108 = (code *)0x0;
  FUN_00c43ef0(&local_110,param_2 + 0x30);
  local_140 = (long *)0x0;
  local_138 = 0;
  if (local_110[2] == lVar11) {
    FUN_015d2a6c(&local_140,&local_110);
  }
  puVar8 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_110 + 3);
    do {
      sVar12 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)local_110 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_38 = (long *)*puVar8;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
      }
    }
    else if (sVar12 == 0) goto LAB_01e79198;
  }
  local_150 = (undefined8 *)0x0;
  uStack_148 = 0;
  FUN_0177de7c(&local_150,&local_140);
  FUN_01e7aa54(uVar14,&local_150);
  puVar8 = local_150;
  if (local_150 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_150 + 3);
    do {
      sVar12 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)local_150 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_110 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar11 + 0x8040,&local_110);
      }
    }
    else if (sVar12 == 0) goto LAB_01e79198;
  }
  plVar4 = local_140;
  if (local_140 != (long *)0x0) {
    plVar2 = local_140 + 3;
    do {
      sVar12 = (short)*plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(short *)plVar2 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      piVar3 = (int *)((long)local_140 + 0x1c);
      do {
        iVar10 = *piVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar7) {
          *piVar3 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_110 = (undefined8 *)*plVar4;
        FUN_00c44438(lVar11 + 0x8040,&local_110);
      }
    }
    else if (sVar12 == 0) {
LAB_01e79198:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_01e7a9dc(auStack_68);
  if (plVar13 != (long *)0x0) {
    lVar11 = plVar13[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar12 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar12 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar13 + 0x50))(plVar13);
    }
    else if (sVar12 == 0) {
LAB_01e795b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}



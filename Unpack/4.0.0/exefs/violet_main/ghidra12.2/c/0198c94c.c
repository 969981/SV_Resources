/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0198c94c; name: FUN_0198c94c
 */


void FUN_0198c94c(long *param_1,long param_2,undefined8 *param_3)

{
  short *psVar1;
  long *plVar2;
  long *plVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  code *pcVar9;
  int iVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  short sVar14;
  long *plVar15;
  long lVar16;
  undefined8 *local_140;
  undefined8 uStack_138;
  long *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  long *local_110;
  long *local_108;
  undefined8 *local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [100];
  undefined4 local_7c;
  undefined1 auStack_78 [24];
  long *local_60;
  long *local_58;
  
  local_100 = (undefined8 *)0x0;
  local_f8 = (code *)0x0;
  FUN_00c43ef0(&local_100,param_2 + 0x30);
  local_130 = (long *)0x0;
  local_128 = 0;
  lVar13 = 0;
  if (param_2 != 0) {
    lVar13 = param_2 + 0x28;
  }
  if (local_100[2] == lVar13) {
    FUN_015d2a6c(&local_130,&local_100);
  }
  puVar8 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_100 + 3);
    do {
      sVar14 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar14 == 1) {
      piVar4 = (int *)((long)local_100 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_58 = (long *)*puVar8;
        FUN_00c44438(lVar16 + 0x8040,&local_58);
      }
    }
    else if (sVar14 == 0) goto LAB_0198ccd4;
  }
  plVar11 = local_130;
  if (local_130 == (long *)0x0) {
    plVar15 = (long *)0x0;
  }
  else {
    if (*(short *)((long)local_130 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_130 + 0x1a);
      sVar14 = *(short *)((long)local_130 + 0x1a);
      do {
        sVar5 = *psVar1;
        if (sVar5 == sVar14) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar14 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 != '\0') goto LAB_0198cdf0;
          bVar7 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0198cdf0:
          bVar7 = false;
        }
        if (bVar7) {
          plVar15 = (long *)0x0;
          if (local_130[2] != 0) {
            plVar15 = (long *)(local_130[2] + -0x28);
          }
          goto LAB_0198ce18;
        }
        sVar14 = sVar5;
      } while (sVar5 != 0);
    }
    plVar15 = (long *)0x0;
LAB_0198ce18:
    plVar3 = local_130 + 3;
    do {
      sVar14 = (short)*plVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar7) {
        *(short *)plVar3 = sVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar14 == 1) {
      piVar4 = (int *)((long)local_130 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar16;
        local_100 = (undefined8 *)*plVar11;
        FUN_00c44438(lVar16 + 0x8040,&local_100);
      }
    }
    else if (sVar14 == 0) goto LAB_0198ccd4;
  }
  plVar11 = (long *)FUN_0198d218(*(undefined8 *)(param_2 + 8));
  if (plVar11 != (long *)0x0) {
    lVar16 = plVar11[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_0198d194;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar14 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar12;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar14 == -1) goto LAB_0198d1b4;
  }
  FUN_01050714(&local_58,param_3);
  FUN_0135d26c(auStack_78,&local_58);
  local_7c = 0;
  local_130 = plVar15;
  if (plVar15 != (long *)0x0) {
    lVar16 = plVar15[6];
    if (*(long *)(lVar16 + 0x10) == 0) goto LAB_0198d194;
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar14 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar12;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar14 == -1) goto LAB_0198d1b4;
  }
  local_128 = *param_3;
  uStack_120 = param_3[1];
  local_118 = param_3[2];
  local_110 = (long *)param_3[3];
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x18))();
  }
  local_108 = plVar11;
  if (plVar11 != (long *)0x0) {
    lVar16 = plVar11[6];
    if (*(long *)(lVar16 + 0x10) == 0) {
LAB_0198d194:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar14 == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
      *(undefined8 *)(lVar16 + 8) = uVar12;
      *(undefined4 *)(lVar16 + 0x1c) = 0xfffffffe;
    }
    else if (sVar14 == -1) {
LAB_0198d1b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = (undefined8 *)0x0;
  local_f8 = (code *)0x0;
  FUN_0198d35c(&local_100,&local_130);
  FUN_015d1ba8(param_1,auStack_78,&local_7c,&local_100);
  pcVar9 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = (undefined8 *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar9)(auStack_e0);
  }
  if (local_108 != (long *)0x0) {
    lVar16 = local_108[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*local_108 + 0x50))();
    }
    else if (sVar14 == 0) goto LAB_0198d16c;
  }
  if (local_110 != (long *)0x0) {
    (**(code **)(*local_110 + 0x20))();
  }
  if (local_130 != (long *)0x0) {
    lVar16 = local_130[6];
    psVar1 = (short *)(lVar16 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar16 + 0x10) = 0;
      (**(code **)(*local_130 + 0x50))();
    }
    else if (sVar14 == 0) goto LAB_0198d16c;
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  lVar16 = *param_1;
  local_100 = (undefined8 *)0x0;
  local_f8 = (code *)0x0;
  FUN_00c43ef0(&local_100,param_2 + 0x30);
  local_130 = (long *)0x0;
  local_128 = 0;
  if (local_100[2] == lVar13) {
    FUN_015d2a6c(&local_130,&local_100);
  }
  puVar8 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_100 + 3);
    do {
      sVar14 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar14 == 1) {
      piVar4 = (int *)((long)local_100 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_58 = (long *)*puVar8;
        FUN_00c44438(lVar13 + 0x8040,&local_58);
      }
    }
    else if (sVar14 == 0) goto LAB_0198ccd4;
  }
  local_140 = (undefined8 *)0x0;
  uStack_138 = 0;
  FUN_0177de7c(&local_140,&local_130);
  if (((*(char *)(lVar16 + 0x140) != '\0') && (local_140 != (undefined8 *)0x0)) &&
     (local_140[2] != 0)) {
    (**(code **)(*(long *)(local_140[2] + -0x28) + 0x78))();
  }
  FUN_0154631c(lVar16 + 0x130,&local_140);
  puVar8 = local_140;
  if (local_140 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_140 + 3);
    do {
      sVar14 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar14 == 1) {
      piVar4 = (int *)((long)local_140 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_100 = (undefined8 *)*puVar8;
        FUN_00c44438(lVar13 + 0x8040,&local_100);
      }
    }
    else if (sVar14 == 0) goto LAB_0198ccd4;
  }
  plVar3 = local_130;
  if (local_130 != (long *)0x0) {
    plVar2 = local_130 + 3;
    do {
      sVar14 = (short)*plVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(short *)plVar2 = sVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar14 == 1) {
      piVar4 = (int *)((long)local_130 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar13;
        local_100 = (undefined8 *)*plVar3;
        FUN_00c44438(lVar13 + 0x8040,&local_100);
      }
    }
    else if (sVar14 == 0) {
LAB_0198ccd4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  if (plVar11 != (long *)0x0) {
    lVar13 = plVar11[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))(plVar11);
    }
    else if (sVar14 == 0) goto LAB_0198d16c;
  }
  if (plVar15 != (long *)0x0) {
    lVar13 = plVar15[6];
    psVar1 = (short *)(lVar13 + 0x1a);
    do {
      sVar14 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar14 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar14 == 1) {
      *(undefined8 *)(lVar13 + 0x10) = 0;
      (**(code **)(*plVar15 + 0x50))(plVar15);
    }
    else if (sVar14 == 0) {
LAB_0198d16c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}



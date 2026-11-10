/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd81d4; name: FUN_01dd81d4
 */


void FUN_01dd81d4(long param_1,int param_2,uint param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  if (param_2 == 2) {
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_00f3e8f8(&local_50,param_1 + 0x58);
    puVar6 = local_50;
    if (local_50 == (undefined8 *)0x0) {
      return;
    }
    if (*(short *)((long)local_50 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_50 + 0x1a);
      sVar10 = *(short *)((long)local_50 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar10) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01dd82c8;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01dd82c8:
          bVar5 = false;
        }
        if (bVar5) {
          plVar11 = (long *)0x0;
          if (local_50[2] != 0) {
            plVar11 = (long *)(local_50[2] + -0x28);
          }
          goto LAB_01dd8388;
        }
        sVar10 = sVar3;
      } while (sVar3 != 0);
    }
    plVar11 = (long *)0x0;
LAB_01dd8388:
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_28 = *puVar6;
        FUN_00c44438(lVar8 + 0x8040,&local_28);
      }
    }
    else if (sVar10 == 0) goto LAB_01dd87f0;
    if (plVar11 == (long *)0x0) {
      return;
    }
    lVar8 = *(long *)(param_1 + 0xf8);
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar10 = *(short *)(lVar8 + 0x1a);
LAB_01dd85d0:
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01dd85f4;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01dd85f4:
        bVar5 = false;
      }
      if (!bVar5) goto code_r0x01dd85fc;
      lVar8 = *(long *)(lVar8 + 0x10);
      if (lVar8 != 0) {
        FUN_0111e3d4(plVar11,lVar8 + 0x18,param_3 & 1);
        lVar9 = *(long *)(lVar8 + 8);
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))((long *)(lVar8 + -0x28));
        }
        else if (sVar10 == 0) goto LAB_01dd83e8;
        goto LAB_01dd83c4;
      }
    }
LAB_01dd83b4:
    FUN_0111e3d4(plVar11,0x40,param_3 & 1);
LAB_01dd83c4:
    lVar8 = plVar11[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    if (param_2 != 0) {
      return;
    }
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_00f3e8f8(&local_50,param_1 + 0x38);
    puVar6 = local_50;
    if (local_50 == (undefined8 *)0x0) {
      return;
    }
    if (*(short *)((long)local_50 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_50 + 0x1a);
      sVar10 = *(short *)((long)local_50 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar10) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_01dd824c;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01dd824c:
          bVar5 = false;
        }
        if (bVar5) {
          plVar11 = (long *)0x0;
          if (local_50[2] != 0) {
            plVar11 = (long *)(local_50[2] + -0x28);
          }
          goto LAB_01dd82f0;
        }
        sVar10 = sVar3;
      } while (sVar3 != 0);
    }
    plVar11 = (long *)0x0;
LAB_01dd82f0:
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_28 = *puVar6;
        FUN_00c44438(lVar8 + 0x8040,&local_28);
      }
    }
    else if (sVar10 == 0) {
LAB_01dd87f0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
    if (plVar11 == (long *)0x0) {
      return;
    }
    lVar8 = *(long *)(param_1 + 0xa8);
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar10 = *(short *)(lVar8 + 0x1a);
LAB_01dd84f8:
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01dd851c;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01dd851c:
        bVar5 = false;
      }
      if (!bVar5) goto code_r0x01dd8524;
      lVar8 = *(long *)(lVar8 + 0x10);
      if (lVar8 != 0) {
        FUN_0111e3d4(plVar11,lVar8 + 0x18,param_3 & 1);
        lVar9 = *(long *)(lVar8 + 8);
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))((long *)(lVar8 + -0x28));
        }
        else if (sVar10 == 0) goto LAB_01dd83e8;
        goto LAB_01dd832c;
      }
    }
LAB_01dd831c:
    FUN_0111e3d4(plVar11,0x40,param_3 & 1);
LAB_01dd832c:
    lVar8 = *(long *)(param_1 + 0xd8);
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar10 = *(short *)(lVar8 + 0x1a);
LAB_01dd8540:
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01dd8564;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01dd8564:
        bVar5 = false;
      }
      if (!bVar5) goto code_r0x01dd856c;
      lVar8 = *(long *)(lVar8 + 0x10);
      if (lVar8 != 0) {
        FUN_0111e3d4(plVar11,lVar8 + 0x18,param_3 & 1);
        lVar9 = *(long *)(lVar8 + 8);
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))((long *)(lVar8 + -0x28));
        }
        else if (sVar10 == 0) goto LAB_01dd83e8;
        goto LAB_01dd8344;
      }
    }
LAB_01dd8334:
    FUN_0111e3d4(plVar11,0x40,param_3 & 1);
LAB_01dd8344:
    lVar8 = *(long *)(param_1 + 0xb8);
    if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar8 + 0x1a);
      sVar10 = *(short *)(lVar8 + 0x1a);
LAB_01dd8588:
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01dd85ac;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01dd85ac:
        bVar5 = false;
      }
      if (!bVar5) goto code_r0x01dd85b4;
      lVar8 = *(long *)(lVar8 + 0x10);
      if (lVar8 != 0) {
        FUN_0111e3d4(plVar11,lVar8 + 0x18,param_3 & 1);
        lVar9 = *(long *)(lVar8 + 8);
        psVar1 = (short *)(lVar9 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*(long *)(lVar8 + -0x28) + 0x50))((long *)(lVar8 + -0x28));
        }
        else if (sVar10 == 0) goto LAB_01dd83e8;
        goto LAB_01dd835c;
      }
    }
LAB_01dd834c:
    FUN_0111e3d4(plVar11,0x40,param_3 & 1);
LAB_01dd835c:
    lVar8 = plVar11[6];
    psVar1 = (short *)(lVar8 + 0x1a);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (sVar10 == 1) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*plVar11 + 0x50))(plVar11);
  }
  else if (sVar10 == 0) {
LAB_01dd83e8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  return;
code_r0x01dd85fc:
  sVar10 = sVar3;
  if (sVar3 == 0) goto LAB_01dd83b4;
  goto LAB_01dd85d0;
code_r0x01dd8524:
  sVar10 = sVar3;
  if (sVar3 == 0) goto LAB_01dd831c;
  goto LAB_01dd84f8;
code_r0x01dd856c:
  sVar10 = sVar3;
  if (sVar3 == 0) goto LAB_01dd8334;
  goto LAB_01dd8540;
code_r0x01dd85b4:
  sVar10 = sVar3;
  if (sVar3 == 0) goto LAB_01dd834c;
  goto LAB_01dd8588;
}



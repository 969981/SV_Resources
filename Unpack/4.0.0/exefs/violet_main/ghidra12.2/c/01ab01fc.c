/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ab01fc; name: FUN_01ab01fc
 */


void FUN_01ab01fc(long *param_1)

{
  int *piVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  short *psVar10;
  short sVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50 [2];
  undefined8 local_28;
  
  if (0 < *(int *)((long)param_1 + 0xde4)) {
    if (0 < (int)param_1[0x1c7]) {
      *(int *)(param_1 + 0x1c7) = (int)param_1[0x1c7] + -1;
      goto LAB_01ab0230;
    }
    plVar9 = (long *)param_1[0x1b2];
    if (plVar9 == (long *)0x0) {
      local_60 = (undefined8 *)0x0;
      uStack_58 = 0;
      goto LAB_01ab0230;
    }
    (**(code **)(*plVar9 + 0x18))(local_50,plVar9);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    if ((long *)local_50[0][2] == plVar9 + 5) {
      FUN_01ab09f0(&local_60,local_50);
    }
    puVar5 = local_50[0];
    if (local_50[0] != (undefined8 *)0x0) {
      psVar10 = (short *)(local_50[0] + 3);
      do {
        sVar11 = *psVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar10,0x10);
        if (bVar4) {
          *psVar10 = sVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar11 == 1) {
        piVar1 = (int *)((long)local_50[0] + 0x1c);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = *puVar5;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
        }
      }
      else if (sVar11 == 0) goto LAB_01ab031c;
    }
    puVar5 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      if (*(short *)((long)local_60 + 0x1a) != 0) {
        psVar10 = (short *)((long)local_60 + 0x1a);
        sVar11 = *(short *)((long)local_60 + 0x1a);
        do {
          sVar2 = *psVar10;
          if (sVar2 == sVar11) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(psVar10,0x10);
            if (bVar4) {
              *psVar10 = sVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 != '\0') goto LAB_01ab02e4;
            bVar4 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01ab02e4:
            bVar4 = false;
          }
          if (bVar4) {
            plVar9 = (long *)0x0;
            if (local_60[2] != 0) {
              plVar9 = (long *)(local_60[2] + -0x28);
            }
            goto LAB_01ab0600;
          }
          sVar11 = sVar2;
        } while (sVar2 != 0);
      }
      plVar9 = (long *)0x0;
LAB_01ab0600:
      psVar10 = (short *)(local_60 + 3);
      do {
        sVar11 = *psVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar10,0x10);
        if (bVar4) {
          *psVar10 = sVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar11 == 1) {
        piVar1 = (int *)((long)local_60 + 0x1c);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_50[0] = (undefined8 *)*puVar5;
          FUN_00c44438(lVar8 + 0x8040,local_50);
        }
      }
      else if (sVar11 == 0) {
LAB_01ab031c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      if (plVar9 != (long *)0x0) {
        if ((*(float *)(plVar9 + 0x86) <= 1.1920929e-07) ||
           (*(float *)(plVar9 + 0x86) - *(float *)((long)plVar9 + 0x434) <= 1.1920929e-07)) {
          if (0 < *(int *)((long)param_1 + 0xde4)) {
            lVar8 = 0;
            plVar12 = param_1 + 0x1bd;
            do {
              FUN_018dc6e0(plVar9,plVar12,1);
              lVar8 = lVar8 + 1;
              plVar12 = plVar12 + 1;
            } while (lVar8 < *(int *)((long)param_1 + 0xde4));
          }
          *(undefined4 *)((long)param_1 + 0xde4) = 0;
        }
        lVar8 = plVar9[6];
        psVar10 = (short *)(lVar8 + 0x1a);
        do {
          sVar11 = *psVar10;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar10,0x10);
          if (bVar4) {
            *psVar10 = sVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar9 + 0x50))(plVar9);
        }
        else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
    }
  }
LAB_01ab0230:
  lVar8 = param_1[0x25];
  if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) {
    return;
  }
  psVar10 = (short *)(lVar8 + 0x1a);
  sVar11 = *(short *)(lVar8 + 0x1a);
LAB_01ab0354:
  sVar2 = *psVar10;
  if (sVar2 == sVar11) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar10,0x10);
    if (bVar4) {
      *psVar10 = sVar11 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 != '\0') goto LAB_01ab037c;
    bVar4 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_01ab037c:
    bVar4 = false;
  }
  if (!bVar4) {
    sVar11 = sVar2;
    if (sVar2 == 0) {
      return;
    }
    goto LAB_01ab0354;
  }
  lVar8 = *(long *)(lVar8 + 0x10);
  if (lVar8 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x18))(local_50,param_1);
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  plVar9 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    plVar9 = param_1 + 5;
  }
  if ((long *)local_50[0][2] == plVar9) {
    FUN_01017a0c(&local_60,local_50);
  }
  puVar5 = local_50[0];
  if (local_50[0] != (undefined8 *)0x0) {
    psVar10 = (short *)(local_50[0] + 3);
    do {
      sVar11 = *psVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar10,0x10);
      if (bVar4) {
        *psVar10 = sVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar11 == 1) {
      piVar1 = (int *)((long)local_50[0] + 0x1c);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_28 = *puVar5;
        FUN_00c44438(lVar7 + 0x8040,&local_28);
      }
    }
    else if (sVar11 == 0) goto LAB_01ab031c;
  }
  puVar5 = local_60;
  if (local_60 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    psVar10 = (short *)(local_60 + 3);
    puVar13 = (undefined8 *)*local_60;
    do {
      sVar11 = *psVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar10,0x10);
      if (bVar4) {
        *psVar10 = sVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar11 == 1) {
      piVar1 = (int *)((long)local_60 + 0x1c);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar7 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar7;
        local_50[0] = (undefined8 *)*puVar5;
        FUN_00c44438(lVar7 + 0x8040,local_50);
      }
    }
    else if (sVar11 == 0) goto LAB_01ab031c;
  }
  if (((char)param_1[0x1bb] == '\0') || ((undefined8 *)param_1[0x1ba] == puVar13))
  goto LAB_01ab0428;
  FUN_01f8c918(local_50);
  if ((local_50[0] != (undefined8 *)0x0) &&
     (((*(short *)((long)local_50[0] + 0x1a) != 0 && (local_50[0] != (undefined8 *)0x0)) &&
      (*(short *)((long)local_50[0] + 0x1a) != 0)))) {
    psVar10 = (short *)((long)local_50[0] + 0x1a);
    sVar11 = *(short *)((long)local_50[0] + 0x1a);
    do {
      sVar2 = *psVar10;
      if (sVar2 == sVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar10,0x10);
        if (bVar4) {
          *psVar10 = sVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01ab091c;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01ab091c:
        bVar4 = false;
      }
      if (bVar4) {
        lVar7 = local_50[0][2];
        if (lVar7 != 0) {
          if (param_1[0x1b8] != -1) {
            FUN_0198491c(*(undefined8 *)(lVar7 + 0x2e8));
          }
          if (param_1[0x1b9] != -1) {
            FUN_0198491c(*(undefined8 *)(lVar7 + 0x2e8));
          }
          (**(code **)(*(long *)(lVar7 + -0x28) + 0x60))((long *)(lVar7 + -0x28));
        }
        break;
      }
      sVar11 = sVar2;
    } while (sVar2 != 0);
  }
  puVar5 = local_50[0];
  param_1[0x1b9] = -1;
  param_1[0x1b8] = -1;
  if ((char)param_1[0x1bb] != '\0') {
    *(undefined1 *)(param_1 + 0x1bb) = 0;
  }
  if (local_50[0] == (undefined8 *)0x0) {
LAB_01ab0428:
    if (param_1[0x1b8] == -1) {
      param_1[0x1ba] = (long)puVar13;
      *(undefined1 *)(param_1 + 0x1bb) = 1;
      uVar14 = NEON_ucvtf((int)param_1[0x22]);
      local_50[0] = puVar13;
      lVar7 = FUN_01677030(uVar14,*(undefined8 *)(lVar8 + 0x2e8),local_50);
      param_1[0x1b8] = lVar7;
    }
    if (param_1[0x1b9] == -1) {
      param_1[0x1ba] = (long)puVar13;
      *(undefined1 *)(param_1 + 0x1bb) = 1;
      local_50[0] = puVar13;
      lVar7 = FUN_017532dc(*(undefined8 *)(lVar8 + 0x2e8),local_50);
      param_1[0x1b9] = lVar7;
    }
    (**(code **)(*(long *)(lVar8 + -0x28) + 0x60))((long *)(lVar8 + -0x28));
    return;
  }
  psVar10 = (short *)(local_50[0] + 3);
  do {
    sVar11 = *psVar10;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar10,0x10);
    if (bVar4) {
      *psVar10 = sVar11 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar11 == 1) {
    piVar1 = (int *)((long)local_50[0] + 0x1c);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 != -1) {
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar7 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar7;
      local_60 = (undefined8 *)*puVar5;
      FUN_00c44438(lVar7 + 0x8040,&local_60);
    }
    goto LAB_01ab0428;
  }
  if (sVar11 != 0) goto LAB_01ab0428;
  goto LAB_01ab031c;
}



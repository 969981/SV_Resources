/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0092d9dc; name: FUN_0092d9dc
 */


void FUN_0092d9dc(long *param_1,undefined1 *param_2)

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
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_28;
  
  switch(*param_2) {
  case 0:
  case 1:
    if (*(long *)(param_2 + 8) == 0) goto switchD_0092da18_default;
    break;
  case 2:
  case 3:
    if ((*(long *)(param_2 + 8) == 0) || (*(short *)(*(long *)(param_2 + 8) + 0x1a) == 0))
    goto switchD_0092da18_default;
    break;
  default:
    goto switchD_0092da18_default;
  }
  switch(*param_2) {
  case 0:
  case 1:
    goto switchD_0092da60_caseD_0;
  case 2:
    local_58 = (undefined8 *)0x0;
    local_50 = (undefined8 *)0x0;
    FUN_0092e510(&local_58,param_2 + 8);
    *param_1 = 0;
    param_1[1] = 0;
    puVar6 = PTR_DAT_047d3908;
    do {
      puVar13 = local_50;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(&local_50,0x10);
      if (bVar5) {
        local_50 = (undefined8 *)0x0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    puVar8 = PTR_DAT_047d3918;
    puVar7 = PTR_DAT_047d3910;
    uVar10 = *(undefined8 *)PTR_DAT_047d3910;
    *(undefined8 *)PTR_DAT_047d3918 = uVar10;
    FUN_00c44204(&local_48,uVar10,puVar13);
    puVar11 = local_58;
    local_58 = (undefined8 *)0x0;
    if (puVar11 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar11 + 3);
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
        piVar2 = (int *)((long)puVar11 + 0x1c);
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
          if ((*puVar6 & 1) == 0) {
            local_60 = puVar11;
            iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908);
            puVar11 = local_60;
            if (iVar9 != 0) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
              puVar11 = local_60;
            }
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_28 = (undefined8 *)*puVar11;
          FUN_00c44438(lVar12 + 0x8040,&local_28);
        }
      }
      else if (sVar3 == 0) goto LAB_0092dc10;
    }
    puVar11 = (undefined8 *)*param_1;
    *param_1 = 0;
    if (local_48 == (undefined8 *)0x0) {
      if (puVar11 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar11 + 3);
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
          piVar2 = (int *)((long)puVar11 + 0x1c);
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
            if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
            {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)puVar7;
            *(long *)puVar8 = lVar12;
            local_28 = (undefined8 *)*puVar11;
            FUN_00c44438(lVar12 + 0x8040,&local_28);
          }
        }
        else if (sVar3 == 0) goto LAB_0092dc10;
      }
      puVar13 = (undefined8 *)0x0;
    }
    else {
      if (puVar11 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar11 + 3);
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
          piVar2 = (int *)((long)puVar11 + 0x1c);
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
            if (((*puVar6 & 1) == 0) &&
               (local_60 = puVar11, iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908),
               puVar11 = local_60, iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
              puVar11 = local_60;
            }
            lVar12 = *(long *)puVar7;
            *(long *)puVar8 = lVar12;
            local_28 = (undefined8 *)*puVar11;
            FUN_00c44438(lVar12 + 0x8040,&local_28);
          }
        }
        else if (sVar3 == 0) goto LAB_0092dc10;
      }
      puVar11 = local_48;
      local_48 = (undefined8 *)0x0;
      *param_1 = (long)puVar11;
    }
    puVar11 = local_48;
    param_1[1] = (long)puVar13;
    if (local_48 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_48 + 3);
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
        piVar2 = (int *)((long)local_48 + 0x1c);
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
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_28 = (undefined8 *)*puVar11;
          FUN_00c44438(lVar12 + 0x8040,&local_28);
        }
      }
      else if (sVar3 == 0) goto LAB_0092dc10;
    }
    puVar13 = local_58;
    if (local_58 == (undefined8 *)0x0) {
      return;
    }
    psVar1 = (short *)(local_58 + 3);
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
      if (iVar9 == -1) {
        return;
      }
      if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar12 = *(long *)puVar7;
      *(long *)puVar8 = lVar12;
      local_28 = (undefined8 *)*puVar13;
      FUN_00c44438(lVar12 + 0x8040,&local_28);
      return;
    }
    if (sVar3 != 0) {
      return;
    }
LAB_0092dc10:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x33,"Reference counter underflows.");
  case 3:
    *param_1 = 0;
    param_1[1] = 0;
    FUN_0092e510(param_1,param_2 + 8);
    return;
  default:
switchD_0092da18_default:
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
code_r0x0092dfbc:
  puVar13 = (undefined8 *)*puVar13;
  if (puVar13 == (undefined8 *)0x0) goto LAB_0092e0d8;
  goto LAB_0092dfb4;
switchD_0092da60_caseD_0:
  local_50 = (undefined8 *)0x0;
  local_48 = (undefined8 *)0x0;
  FUN_00c43ef0(&local_50,*(long *)(param_2 + 8) + 0x30);
  local_60 = (undefined8 *)0x0;
  local_58 = (undefined8 *)0x0;
  FUN_00c96b7c(&local_60,&local_50);
  puVar13 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_50 + 3);
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
      piVar2 = (int *)((long)local_50 + 0x1c);
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
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_28 = (undefined8 *)*puVar13;
        FUN_00c44438(lVar12 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) goto LAB_0092e458;
  }
  *param_1 = 0;
  param_1[1] = 0;
  puVar6 = PTR_DAT_047d4900;
  if (local_60 != (undefined8 *)0x0) {
    puVar13 = (undefined8 *)local_60[1];
    if (puVar13 != (undefined8 *)0x0) {
      if (((*PTR_DAT_047d48f8 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d48f8), iVar9 != 0)) {
        uVar10 = FUN_01b3fb0c();
        *(undefined8 *)puVar6 = uVar10;
        __cxa_guard_release(PTR_DAT_047d48f8);
      }
LAB_0092dfb4:
      puVar7 = PTR_DAT_047d3908;
      if (puVar13 != (undefined8 *)puVar6) goto code_r0x0092dfbc;
      do {
        puVar13 = local_58;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(&local_58,0x10);
        if (bVar5) {
          local_58 = (undefined8 *)0x0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (((*PTR_DAT_047d3908 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      puVar8 = PTR_DAT_047d3918;
      puVar6 = PTR_DAT_047d3910;
      uVar10 = *(undefined8 *)PTR_DAT_047d3910;
      *(undefined8 *)PTR_DAT_047d3918 = uVar10;
      FUN_00c44204(&local_28,uVar10,puVar13);
      puVar11 = local_60;
      local_60 = (undefined8 *)0x0;
      if (puVar11 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar11 + 3);
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
          piVar2 = (int *)((long)puVar11 + 0x1c);
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
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
            {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)puVar6;
            *(long *)puVar8 = lVar12;
            local_50 = (undefined8 *)*puVar11;
            FUN_00c44438(lVar12 + 0x8040,&local_50);
          }
        }
        else if (sVar3 == 0) goto LAB_0092e458;
      }
      puVar11 = (undefined8 *)*param_1;
      *param_1 = 0;
      if (local_28 == (undefined8 *)0x0) {
        if (puVar11 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar11 + 3);
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
            piVar2 = (int *)((long)puVar11 + 0x1c);
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
              if (((*puVar7 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)puVar6;
              *(long *)puVar8 = lVar12;
              local_50 = (undefined8 *)*puVar11;
              FUN_00c44438(lVar12 + 0x8040,&local_50);
            }
          }
          else if (sVar3 == 0) goto LAB_0092e458;
        }
        puVar13 = (undefined8 *)0x0;
      }
      else {
        if (puVar11 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar11 + 3);
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
            piVar2 = (int *)((long)puVar11 + 0x1c);
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
              if (((*puVar7 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar12 = *(long *)puVar6;
              *(long *)puVar8 = lVar12;
              local_50 = (undefined8 *)*puVar11;
              FUN_00c44438(lVar12 + 0x8040,&local_50);
            }
          }
          else if (sVar3 == 0) goto LAB_0092e458;
        }
        puVar11 = local_28;
        local_28 = (undefined8 *)0x0;
        *param_1 = (long)puVar11;
      }
      puVar11 = local_28;
      param_1[1] = (long)puVar13;
      if (local_28 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_28 + 3);
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
          piVar2 = (int *)((long)local_28 + 0x1c);
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
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
            {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)puVar6;
            *(long *)puVar8 = lVar12;
            local_50 = (undefined8 *)*puVar11;
            FUN_00c44438(lVar12 + 0x8040,&local_50);
          }
        }
        else if (sVar3 == 0) goto LAB_0092e458;
      }
    }
LAB_0092e0d8:
    puVar13 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_60 + 3);
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
        piVar2 = (int *)((long)local_60 + 0x1c);
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
          lVar12 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar12;
          local_50 = (undefined8 *)*puVar13;
          FUN_00c44438(lVar12 + 0x8040,&local_50);
        }
      }
      else if (sVar3 == 0) {
LAB_0092e458:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
  }
  return;
}



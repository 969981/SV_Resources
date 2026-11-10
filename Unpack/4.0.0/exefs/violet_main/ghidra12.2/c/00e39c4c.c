/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e39c4c; name: FUN_00e39c4c
 */


/* WARNING: Removing unreachable block (ram,0x00e39e94) */
/* WARNING: Removing unreachable block (ram,0x00e39e98) */
/* WARNING: Removing unreachable block (ram,0x00e39ea0) */
/* WARNING: Removing unreachable block (ram,0x00e39ea8) */
/* WARNING: Removing unreachable block (ram,0x00e3a0b0) */
/* WARNING: Removing unreachable block (ram,0x00e3a0b8) */
/* WARNING: Removing unreachable block (ram,0x00e3a0bc) */
/* WARNING: Removing unreachable block (ram,0x00e3a0c4) */
/* WARNING: Removing unreachable block (ram,0x00e3a0cc) */
/* WARNING: Removing unreachable block (ram,0x00e3a3c8) */
/* WARNING: Removing unreachable block (ram,0x00e3a3d8) */
/* WARNING: Removing unreachable block (ram,0x00e3a0d4) */
/* WARNING: Removing unreachable block (ram,0x00e39eb0) */
/* WARNING: Removing unreachable block (ram,0x00e39eb4) */

void FUN_00e39c4c(long *param_1,long *param_2)

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
  long lVar13;
  undefined8 *local_70;
  long local_68;
  undefined8 *local_60;
  long local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar13 = *param_2;
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_00c43ef0(&local_60,lVar13 + 0x30);
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  puVar6 = PTR_DAT_047d3908;
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  lVar12 = 0;
  if (lVar13 != 0) {
    lVar12 = lVar13 + 0x28;
  }
  if (local_60[2] == lVar12) {
    do {
      lVar12 = local_58;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(&local_58,0x10);
      if (bVar5) {
        local_58 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    uVar10 = *(undefined8 *)puVar7;
    *(undefined8 *)puVar8 = uVar10;
    FUN_00c44204(&local_50,uVar10,lVar12);
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
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)puVar7;
          *(long *)puVar8 = lVar13;
          local_48 = (undefined8 *)*puVar11;
          FUN_00c44438(lVar13 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) goto LAB_00e39ed8;
    }
    puVar11 = local_70;
    if (local_50 == (undefined8 *)0x0) {
      FUN_00e40128(&local_70);
    }
    else {
      local_70 = (undefined8 *)0x0;
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
            lVar13 = *(long *)puVar7;
            *(long *)puVar8 = lVar13;
            local_48 = (undefined8 *)*puVar11;
            FUN_00c44438(lVar13 + 0x8040,&local_48);
          }
        }
        else if (sVar3 == 0) goto LAB_00e39ed8;
      }
      local_70 = local_50;
      local_50 = (undefined8 *)0x0;
      local_68 = lVar12;
    }
  }
  puVar11 = local_60;
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
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)puVar7;
        *(long *)puVar8 = lVar12;
        local_48 = (undefined8 *)*puVar11;
        FUN_00c44438(lVar12 + 0x8040,&local_48);
      }
    }
    else if (sVar3 == 0) goto LAB_00e39ed8;
  }
  do {
    lVar12 = local_68;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(&local_68,0x10);
    if (bVar5) {
      local_68 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  uVar10 = *(undefined8 *)puVar7;
  *(undefined8 *)puVar8 = uVar10;
  FUN_00c44204(&local_48,uVar10,lVar12);
  puVar11 = local_70;
  local_70 = (undefined8 *)0x0;
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
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)puVar7;
        *(long *)puVar8 = lVar13;
        local_60 = (undefined8 *)*puVar11;
        FUN_00c44438(lVar13 + 0x8040,&local_60);
      }
    }
    else if (sVar3 == 0) goto LAB_00e39ed8;
  }
  puVar11 = (undefined8 *)*param_1;
  *param_1 = 0;
  if (local_48 == (undefined8 *)0x0) {
    lVar12 = 0;
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
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_60 = (undefined8 *)*puVar11;
          FUN_00c44438(lVar12 + 0x8040,&local_60);
        }
      }
      else if (sVar3 == 0) goto LAB_00e39ed8;
      lVar12 = 0;
    }
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
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)puVar7;
          *(long *)puVar8 = lVar13;
          local_60 = (undefined8 *)*puVar11;
          FUN_00c44438(lVar13 + 0x8040,&local_60);
        }
      }
      else if (sVar3 == 0) goto LAB_00e39ed8;
    }
    puVar11 = local_48;
    local_48 = (undefined8 *)0x0;
    *param_1 = (long)puVar11;
  }
  puVar11 = local_48;
  param_1[1] = lVar12;
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
        local_60 = (undefined8 *)*puVar11;
        FUN_00c44438(lVar12 + 0x8040,&local_60);
      }
    }
    else if (sVar3 == 0) goto LAB_00e39ed8;
  }
  puVar11 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_70 + 3);
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
      piVar2 = (int *)((long)local_70 + 0x1c);
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
        local_60 = (undefined8 *)*puVar11;
        FUN_00c44438(lVar12 + 0x8040,&local_60);
      }
    }
    else if (sVar3 == 0) {
LAB_00e39ed8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}



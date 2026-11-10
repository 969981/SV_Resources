/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b53ecc; name: FUN_00b53ecc
 */


/* WARNING: Removing unreachable block (ram,0x00b53fe8) */
/* WARNING: Removing unreachable block (ram,0x00b53fec) */
/* WARNING: Removing unreachable block (ram,0x00b53ff4) */
/* WARNING: Removing unreachable block (ram,0x00b53ffc) */
/* WARNING: Removing unreachable block (ram,0x00b54444) */
/* WARNING: Removing unreachable block (ram,0x00b5444c) */
/* WARNING: Removing unreachable block (ram,0x00b54450) */
/* WARNING: Removing unreachable block (ram,0x00b54458) */
/* WARNING: Removing unreachable block (ram,0x00b54460) */
/* WARNING: Removing unreachable block (ram,0x00b54784) */
/* WARNING: Removing unreachable block (ram,0x00b5479c) */
/* WARNING: Removing unreachable block (ram,0x00b54468) */
/* WARNING: Removing unreachable block (ram,0x00b54004) */
/* WARNING: Removing unreachable block (ram,0x00b53fb4) */
/* WARNING: Removing unreachable block (ram,0x00b53fb8) */
/* WARNING: Removing unreachable block (ram,0x00b53fc0) */
/* WARNING: Removing unreachable block (ram,0x00b53fc8) */
/* WARNING: Removing unreachable block (ram,0x00b543fc) */
/* WARNING: Removing unreachable block (ram,0x00b54404) */
/* WARNING: Removing unreachable block (ram,0x00b54408) */
/* WARNING: Removing unreachable block (ram,0x00b54410) */
/* WARNING: Removing unreachable block (ram,0x00b54418) */
/* WARNING: Removing unreachable block (ram,0x00b5473c) */
/* WARNING: Removing unreachable block (ram,0x00b54754) */
/* WARNING: Removing unreachable block (ram,0x00b54420) */
/* WARNING: Removing unreachable block (ram,0x00b53fd0) */
/* WARNING: Removing unreachable block (ram,0x00b5416c) */
/* WARNING: Removing unreachable block (ram,0x00b54170) */
/* WARNING: Removing unreachable block (ram,0x00b54178) */
/* WARNING: Removing unreachable block (ram,0x00b54180) */
/* WARNING: Removing unreachable block (ram,0x00b54294) */
/* WARNING: Removing unreachable block (ram,0x00b5429c) */
/* WARNING: Removing unreachable block (ram,0x00b542a0) */
/* WARNING: Removing unreachable block (ram,0x00b542a8) */
/* WARNING: Removing unreachable block (ram,0x00b542b0) */
/* WARNING: Removing unreachable block (ram,0x00b545c4) */
/* WARNING: Removing unreachable block (ram,0x00b545d4) */
/* WARNING: Removing unreachable block (ram,0x00b542b8) */
/* WARNING: Removing unreachable block (ram,0x00b54188) */

void FUN_00b53ecc(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *local_78;
  long local_70;
  long *local_68;
  long local_60;
  long *local_58;
  undefined8 *local_38;
  
  (**(code **)(*param_2 + 0x18))(&local_68,param_2);
  puVar10 = PTR_DAT_047d3918;
  puVar9 = PTR_DAT_047d3910;
  puVar8 = PTR_DAT_047d3908;
  local_78 = (long *)0x0;
  local_70 = 0;
  plVar14 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar14 = param_2 + 5;
  }
  plVar1 = local_68;
  if ((long *)local_68[2] == plVar14) {
    do {
      lVar15 = local_60;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(&local_60,0x10);
      if (bVar7) {
        local_60 = 0;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    uVar13 = *(undefined8 *)puVar9;
    *(undefined8 *)puVar10 = uVar13;
    FUN_00c44204(&local_58,uVar13,lVar15);
    plVar14 = local_68;
    local_68 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      plVar1 = plVar14 + 3;
      do {
        sVar5 = (short)*plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(short *)plVar1 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar4 = (int *)((long)plVar14 + 0x1c);
        do {
          iVar12 = *piVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar12 != -1) {
          if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)puVar9;
          *(long *)puVar10 = lVar16;
          local_38 = (undefined8 *)*plVar14;
          FUN_00c44438(lVar16 + 0x8040,&local_38);
        }
      }
      else if (sVar5 == 0) goto LAB_00b54648;
    }
    plVar14 = local_58;
    local_78 = (long *)0x0;
    if (local_58 == (long *)0x0) {
      lVar15 = 0;
    }
    else {
      local_58 = (long *)0x0;
      local_78 = plVar14;
    }
    plVar14 = local_58;
    local_70 = lVar15;
    plVar1 = local_68;
    if (local_58 != (long *)0x0) {
      plVar2 = local_58 + 3;
      do {
        sVar5 = (short)*plVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(short *)plVar2 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar4 = (int *)((long)local_58 + 0x1c);
        do {
          iVar12 = *piVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar12 != -1) {
          if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)puVar9;
          *(long *)puVar10 = lVar15;
          local_38 = (undefined8 *)*plVar14;
          FUN_00c44438(lVar15 + 0x8040,&local_38);
          plVar1 = local_68;
        }
      }
      else if (sVar5 == 0) goto LAB_00b54648;
    }
  }
  local_68 = plVar1;
  if (plVar1 != (long *)0x0) {
    plVar14 = plVar1 + 3;
    do {
      sVar5 = (short)*plVar14;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *(short *)plVar14 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)plVar1 + 0x1c);
      do {
        iVar12 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 != -1) {
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)puVar9;
        *(long *)puVar10 = lVar15;
        local_38 = (undefined8 *)*plVar1;
        FUN_00c44438(lVar15 + 0x8040,&local_38);
      }
    }
    else if (sVar5 == 0) goto LAB_00b54648;
  }
  *param_1 = 0;
  param_1[1] = 0;
  do {
    lVar15 = local_70;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(&local_70,0x10);
    if (bVar7) {
      local_70 = 0;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  uVar13 = *(undefined8 *)puVar9;
  *(undefined8 *)puVar10 = uVar13;
  FUN_00c44204(&local_38,uVar13,lVar15);
  if (local_78 != (long *)0x0) {
    plVar14 = local_78 + 3;
    do {
      sVar5 = (short)*plVar14;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *(short *)plVar14 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)local_78 + 0x1c);
      do {
        iVar12 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 != -1) {
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar16 = *(long *)puVar9;
        *(long *)puVar10 = lVar16;
        local_68 = (long *)*local_78;
        FUN_00c44438(lVar16 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) goto LAB_00b54648;
  }
  plVar14 = (long *)*param_1;
  *param_1 = 0;
  if (local_38 == (undefined8 *)0x0) {
    if (plVar14 != (long *)0x0) {
      plVar1 = plVar14 + 3;
      do {
        sVar5 = (short)*plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(short *)plVar1 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar4 = (int *)((long)plVar14 + 0x1c);
        do {
          iVar12 = *piVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar12 != -1) {
          if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)puVar9;
          *(long *)puVar10 = lVar15;
          local_68 = (long *)*plVar14;
          FUN_00c44438(lVar15 + 0x8040,&local_68);
        }
      }
      else if (sVar5 == 0) goto LAB_00b54648;
    }
    lVar15 = 0;
  }
  else {
    if (plVar14 != (long *)0x0) {
      plVar1 = plVar14 + 3;
      do {
        sVar5 = (short)*plVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(short *)plVar1 = sVar5 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar5 == 1) {
        piVar4 = (int *)((long)plVar14 + 0x1c);
        do {
          iVar12 = *piVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar12 != -1) {
          if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar16 = *(long *)puVar9;
          *(long *)puVar10 = lVar16;
          local_68 = (long *)*plVar14;
          FUN_00c44438(lVar16 + 0x8040,&local_68);
        }
      }
      else if (sVar5 == 0) goto LAB_00b54648;
    }
    puVar11 = local_38;
    local_38 = (undefined8 *)0x0;
    *param_1 = puVar11;
  }
  puVar11 = local_38;
  param_1[1] = lVar15;
  if (local_38 != (undefined8 *)0x0) {
    psVar3 = (short *)(local_38 + 3);
    do {
      sVar5 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)local_38 + 0x1c);
      do {
        iVar12 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 != -1) {
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar12 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)puVar9;
        *(long *)puVar10 = lVar15;
        local_68 = (long *)*puVar11;
        FUN_00c44438(lVar15 + 0x8040,&local_68);
      }
    }
    else if (sVar5 == 0) {
LAB_00b54648:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  *(undefined1 *)(param_1 + 3) = 0;
  plVar14 = (long *)0x0;
  if (param_2 != (long *)0x0) {
    plVar14 = param_2 + 0x17;
  }
  param_1[2] = plVar14;
  return;
}



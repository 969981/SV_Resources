/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f03dc8; name: FUN_00f03dc8
 */


/* WARNING: Removing unreachable block (ram,0x00f03f34) */
/* WARNING: Removing unreachable block (ram,0x00f03f38) */
/* WARNING: Removing unreachable block (ram,0x00f03f40) */
/* WARNING: Removing unreachable block (ram,0x00f03f48) */
/* WARNING: Removing unreachable block (ram,0x00f04078) */
/* WARNING: Removing unreachable block (ram,0x00f04080) */
/* WARNING: Removing unreachable block (ram,0x00f04084) */
/* WARNING: Removing unreachable block (ram,0x00f0408c) */
/* WARNING: Removing unreachable block (ram,0x00f04094) */
/* WARNING: Removing unreachable block (ram,0x00f04230) */
/* WARNING: Removing unreachable block (ram,0x00f04240) */
/* WARNING: Removing unreachable block (ram,0x00f0409c) */
/* WARNING: Removing unreachable block (ram,0x00f03f50) */
/* WARNING: Removing unreachable block (ram,0x00f03f54) */

undefined8 FUN_00f03dc8(long *param_1)

{
  int *piVar1;
  long *plVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  short *psVar13;
  undefined8 uVar14;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_28;
  
  (**(code **)(*param_1 + 0x18))(&local_58);
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  puVar6 = PTR_DAT_047d3908;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  plVar2 = (long *)0x0;
  if (param_1 != (long *)0x0) {
    plVar2 = param_1 + 5;
  }
  if ((long *)local_58[2] == plVar2) {
    do {
      uVar14 = local_50;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(&local_50,0x10);
      if (bVar5) {
        local_50 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (((*PTR_DAT_047d3908 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
      FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3908);
    }
    uVar11 = *(undefined8 *)puVar7;
    *(undefined8 *)puVar8 = uVar11;
    FUN_00c44204(&local_48,uVar11,uVar14);
    puVar9 = local_58;
    local_58 = (undefined8 *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      psVar13 = (short *)(puVar9 + 3);
      do {
        sVar3 = *psVar13;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar13,0x10);
        if (bVar5) {
          *psVar13 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        piVar1 = (int *)((long)puVar9 + 0x1c);
        do {
          iVar10 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar12 = *(long *)puVar7;
          *(long *)puVar8 = lVar12;
          local_28 = *puVar9;
          FUN_00c44438(lVar12 + 0x8040,&local_28);
        }
      }
      else if (sVar3 == 0) goto LAB_00f03f78;
    }
    puVar9 = local_68;
    if (local_48 == (undefined8 *)0x0) {
      FUN_00f07dcc(&local_68);
    }
    else {
      local_68 = (undefined8 *)0x0;
      if (puVar9 != (undefined8 *)0x0) {
        psVar13 = (short *)(puVar9 + 3);
        do {
          sVar3 = *psVar13;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar13,0x10);
          if (bVar5) {
            *psVar13 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar1 = (int *)((long)puVar9 + 0x1c);
          do {
            iVar10 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar10 != -1) {
            if (((*puVar6 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)puVar7;
            *(long *)puVar8 = lVar12;
            local_28 = *puVar9;
            FUN_00c44438(lVar12 + 0x8040,&local_28);
          }
        }
        else if (sVar3 == 0) goto LAB_00f03f78;
      }
      local_68 = local_48;
      local_48 = (undefined8 *)0x0;
      local_60 = uVar14;
    }
  }
  puVar9 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    psVar13 = (short *)(local_58 + 3);
    do {
      sVar3 = *psVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar13,0x10);
      if (bVar5) {
        *psVar13 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar1 = (int *)((long)local_58 + 0x1c);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)puVar7;
        *(long *)puVar8 = lVar12;
        local_28 = *puVar9;
        FUN_00c44438(lVar12 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) goto LAB_00f03f78;
  }
  puVar9 = local_68;
  if (local_68 == (undefined8 *)0x0) {
    uVar14 = 0;
  }
  else {
    psVar13 = (short *)(local_68 + 3);
    uVar14 = *local_68;
    do {
      sVar3 = *psVar13;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar13,0x10);
      if (bVar5) {
        *psVar13 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar1 = (int *)((long)local_68 + 0x1c);
      do {
        iVar10 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)puVar7;
        *(long *)puVar8 = lVar12;
        local_58 = (undefined8 *)*puVar9;
        FUN_00c44438(lVar12 + 0x8040,&local_58);
      }
    }
    else if (sVar3 == 0) {
LAB_00f03f78:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return uVar14;
}



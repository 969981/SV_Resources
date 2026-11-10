/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e1a618; name: FUN_01e1a618
 */


void FUN_01e1a618(long param_1,undefined8 param_2,undefined8 param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  plVar8 = (long *)(param_1 + 0x78);
  if ((*plVar8 != 0) && (puVar9 = *(undefined8 **)(*plVar8 + 8), puVar9 != (undefined8 *)0x0)) {
    puVar11 = (undefined8 *)PTR_DAT_047d6528;
    if (((*PTR_DAT_047d6520 & 1) == 0) &&
       (uVar7 = __cxa_guard_acquire(PTR_DAT_047d6520), puVar11 = (undefined8 *)PTR_DAT_047d6528,
       (int)uVar7 != 0)) {
      uVar7 = FUN_0151c130(uVar7,plVar8);
      *(undefined8 *)PTR_DAT_047d6528 = uVar7;
      __cxa_guard_release(PTR_DAT_047d6520);
      puVar11 = (undefined8 *)PTR_DAT_047d6528;
    }
    do {
      if (puVar9 == puVar11) {
        FUN_00d7c390(&local_38,plVar8);
        break;
      }
      puVar9 = (undefined8 *)*puVar9;
    } while (puVar9 != (undefined8 *)0x0);
  }
  if (local_38 != (undefined8 *)0x0) {
    if (*(short *)((long)local_38 + 0x1a) != 0) {
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
      FUN_013dbad8(&local_48,&local_38);
      FUN_01904e28(param_2,&local_48,param_3,0,0);
      puVar9 = local_48;
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
            iVar6 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_28 = *puVar9;
            FUN_00c44438(lVar10 + 0x8040,&local_28);
          }
        }
        else if (sVar3 == 0) goto LAB_01e1a6fc;
      }
    }
    puVar9 = local_38;
    if (local_38 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_38 + 3);
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
        piVar2 = (int *)((long)local_38 + 0x1c);
        do {
          iVar6 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar10 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar10;
          local_48 = (undefined8 *)*puVar9;
          FUN_00c44438(lVar10 + 0x8040,&local_48);
        }
      }
      else if (sVar3 == 0) {
LAB_01e1a6fc:
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



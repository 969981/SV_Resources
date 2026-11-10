/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d52ad8; name: FUN_00d52ad8
 */


void FUN_00d52ad8(undefined8 *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *local_50;
  undefined8 uStack_48;
  long *local_40;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  FUN_00d52e08(&local_40);
  if (local_40 == (long *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar11 = local_40 + 5;
    (**(code **)(*local_40 + 0x18))(local_38);
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    if ((long *)local_38[0][2] == plVar11) {
      FUN_00d53104(&local_50,local_38);
    }
    puVar8 = local_38[0];
    if (local_38[0] != (undefined8 *)0x0) {
      psVar1 = (short *)(local_38[0] + 3);
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
        piVar2 = (int *)((long)local_38[0] + 0x1c);
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
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_28 = *puVar8;
          FUN_00c44438(lVar9 + 0x8040,&local_28);
        }
      }
      else if (sVar3 == 0) goto LAB_00d52c00;
    }
    *param_1 = 0;
    param_1[1] = 0;
    if (local_50 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)local_50[1];
      if (puVar8 != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)PTR_DAT_047d9198;
        if (((*PTR_DAT_047d9190 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d9190), puVar10 = (undefined8 *)PTR_DAT_047d9198,
           iVar6 != 0)) {
          uVar7 = FUN_00d52ff0();
          *(undefined8 *)PTR_DAT_047d9198 = uVar7;
          __cxa_guard_release(PTR_DAT_047d9190);
          puVar10 = (undefined8 *)PTR_DAT_047d9198;
        }
        do {
          if (puVar8 == puVar10) {
            FUN_00d53428(param_1,&local_50);
            break;
          }
          puVar8 = (undefined8 *)*puVar8;
        } while (puVar8 != (undefined8 *)0x0);
      }
      puVar8 = local_50;
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
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_38[0] = (undefined8 *)*puVar8;
            FUN_00c44438(lVar9 + 0x8040,local_38);
          }
        }
        else if (sVar3 == 0) {
LAB_00d52c00:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    if (local_40 != (long *)0x0) {
      lVar9 = local_40[6];
      psVar1 = (short *)(lVar9 + 0x1a);
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
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_40 + 0x50))();
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}



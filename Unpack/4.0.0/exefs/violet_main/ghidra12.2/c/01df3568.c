/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01df3568; name: FUN_01df3568
 */


undefined8 FUN_01df3568(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  short sVar10;
  long *plVar11;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (*(int *)(*(long *)(param_1 + 0x30) + 0x108) == 2) {
    local_38 = (undefined8 *)0x0;
    uStack_30 = 0;
    FUN_00f3e8f8(&local_38,*(long *)(param_1 + 0x30) + 0x58);
    puVar6 = local_38;
    if (local_38 != (undefined8 *)0x0) {
      if (*(short *)((long)local_38 + 0x1a) != 0) {
        psVar1 = (short *)((long)local_38 + 0x1a);
        sVar10 = *(short *)((long)local_38 + 0x1a);
        do {
          sVar3 = *psVar1;
          if (sVar3 == sVar10) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar10 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 != '\0') goto LAB_01df35e8;
            bVar5 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_01df35e8:
            bVar5 = false;
          }
          if (bVar5) {
            plVar11 = (long *)0x0;
            if (local_38[2] != 0) {
              plVar11 = (long *)(local_38[2] + -0x28);
            }
            goto LAB_01df3610;
          }
          sVar10 = sVar3;
        } while (sVar3 != 0);
      }
      plVar11 = (long *)0x0;
LAB_01df3610:
      psVar1 = (short *)(local_38 + 3);
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
        piVar2 = (int *)((long)local_38 + 0x1c);
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
          lVar9 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar9;
          local_28 = *puVar6;
          FUN_00c44438(lVar9 + 0x8040,&local_28);
        }
      }
      else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      if (plVar11 != (long *)0x0) {
        uVar8 = FUN_01dcd22c(plVar11);
        lVar9 = plVar11[6];
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
          (**(code **)(*plVar11 + 0x50))(plVar11);
        }
        else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        if (uVar8 >> 0x20 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



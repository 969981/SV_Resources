/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e2cf28; name: FUN_01e2cf28
 */


void FUN_01e2cf28(long param_1,undefined4 param_2)

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
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_18;
  
  lVar9 = *(long *)(param_1 + 0x28);
  if ((lVar9 != 0) && (*(short *)(lVar9 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar9 + 0x1a);
    sVar10 = *(short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01e2cf90;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e2cf90:
        bVar5 = false;
      }
      if (bVar5) {
        lVar9 = *(long *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          return;
        }
        plVar11 = (long *)(lVar9 + -0x28);
        local_48 = (undefined8 *)0x0;
        uStack_40 = 0;
        FUN_013dbad8(&local_48,(long *)(param_1 + 0x28));
        local_38 = 0;
        local_18 = CONCAT44(local_18._4_4_,param_2);
        FUN_015a29ac(plVar11,*(undefined8 *)(lVar9 + -0x20),&local_18);
        FUN_00d19810(plVar11,*(undefined8 *)(lVar9 + -0x20),&local_48);
        puVar6 = local_48;
        if (local_48 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_48 + 3);
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
            piVar2 = (int *)((long)local_48 + 0x1c);
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
              local_18 = *puVar6;
              FUN_00c44438(lVar8 + 0x8040,&local_18);
            }
          }
          else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        lVar9 = *(long *)(lVar9 + 8);
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
          return;
        }
        if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
        return;
      }
      sVar10 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}



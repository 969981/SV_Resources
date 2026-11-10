/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02af7b5c; name: FUN_02af7b5c
 */


void FUN_02af7b5c(undefined1 *param_1,long *param_2,long *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *local_50;
  undefined8 uStack_48;
  long *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_40 = *(long **)(DAT_04840888 + 0x40);
  if (local_40 != *(long **)(DAT_04840888 + 0x48)) {
    do {
      if ((*local_40 == *param_2) && (local_40[1] == *param_3)) {
        local_50 = (undefined8 *)0x0;
        uStack_48 = 0;
        local_38 = (undefined8 *)0x0;
        local_30 = 0;
        FUN_00ca1a48(&local_38,&local_50);
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(long **)(param_1 + 8) = local_40;
        *(undefined8 *)(param_1 + 0x10) = 0;
        FUN_00ca1ea4(param_1 + 0x10,&local_38);
        puVar6 = local_38;
        *param_1 = 1;
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
          else if (sVar3 == 0) goto LAB_02af7c5c;
        }
        puVar6 = local_50;
        if (local_50 == (undefined8 *)0x0) {
          return;
        }
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
            iVar7 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 == -1) {
            return;
          }
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_28 = *puVar6;
          FUN_00c44438(lVar8 + 0x8040,&local_28);
          return;
        }
        if (sVar3 != 0) {
          return;
        }
LAB_02af7c5c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
      local_40 = local_40 + 0x40;
    } while (*(long **)(DAT_04840888 + 0x48) != local_40);
  }
  *param_1 = 0;
  return;
}



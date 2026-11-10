/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01443484; name: FUN_01443484
 */


void FUN_01443484(long param_1)

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
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined8 uStack_28;
  undefined8 local_8;
  
  if (*(long *)(param_1 + 0x1c8) != 0) {
    FUN_01dd5744();
  }
  iVar7 = *(int *)(param_1 + 0x171c);
  if (iVar7 == 3) {
    uVar8 = FUN_01dd5838(param_1,1);
    if ((int)uVar8 != 0) {
      FUN_01dd589c(uVar8,uVar8 & 0xffffffff);
      local_30 = (undefined8 *)0x0;
      uStack_28 = 0;
      FUN_01084328(&local_30,param_1 + 0x140);
      FUN_0199332c(&local_30,s_F344E928923DC26C8_04541c31);
      puVar6 = local_30;
      if (local_30 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_30 + 3);
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
          piVar2 = (int *)((long)local_30 + 0x1c);
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
            local_8 = *puVar6;
            FUN_00c44438(lVar9 + 0x8040,&local_8);
          }
        }
        else if (sVar3 == 0) goto LAB_014435b4;
      }
      *(undefined4 *)(param_1 + 0x171c) = 5;
      if (*(long *)(param_1 + 0x1b8) == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x170) = 0x1c;
      *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x30) = 0x1c;
    }
    iVar7 = *(int *)(param_1 + 0x171c);
  }
  if ((iVar7 == 6) && (uVar8 = FUN_01dd5838(param_1,1), (int)uVar8 != 0)) {
    FUN_01dd589c(uVar8,uVar8 & 0xffffffff);
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    FUN_01084328(&local_40,param_1 + 0x140);
    FUN_0199332c(&local_40,s_F344E928923DC26C8_04541c31);
    puVar6 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_40 + 3);
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
        piVar2 = (int *)((long)local_40 + 0x1c);
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
          local_8 = *puVar6;
          FUN_00c44438(lVar9 + 0x8040,&local_8);
        }
      }
      else if (sVar3 == 0) {
LAB_014435b4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    *(undefined4 *)(param_1 + 0x171c) = 8;
  }
  return;
}



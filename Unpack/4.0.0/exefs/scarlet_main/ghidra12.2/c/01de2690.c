/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01de2690; name: FUN_01de2690
 */


void FUN_01de2690(long param_1,undefined8 param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  short sVar7;
  int iVar8;
  long lVar9;
  undefined8 *local_48;
  undefined8 uStack_40;
  long local_38;
  long *local_30;
  undefined8 local_28;
  
  FUN_01dc02fc(&local_30);
  FUN_00feea48(local_30,param_2);
  local_38 = FUN_0119579c(param_1);
  if (local_38 != 0) {
    if (((*(byte *)(*(long *)(*(long *)(local_38 + 0x70) + 0x10) + 4) >> 2 & 1) != 0) ||
       (sVar7 = FUN_00cf44f4(), sVar7 != 0)) {
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
      FUN_01084328(&local_48,param_1 + 0x130);
      FUN_01de2870(&local_48,s_F4154A4632CE7A627_04541c1e,&local_38,&local_30);
      puVar6 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        psVar2 = (short *)(local_48 + 3);
        do {
          sVar7 = *psVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar5) {
            *psVar2 = sVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar7 == 1) {
          piVar3 = (int *)((long)local_48 + 0x1c);
          do {
            iVar8 = *piVar3;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar5) {
              *piVar3 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar9 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar9;
            local_28 = *puVar6;
            FUN_00c44438(lVar9 + 0x8040,&local_28);
          }
        }
        else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      FUN_0196891c(param_1);
    }
  }
  if (local_30 != (long *)0x0) {
    plVar1 = local_30 + 5;
    do {
      lVar9 = *plVar1;
      iVar8 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
    else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}



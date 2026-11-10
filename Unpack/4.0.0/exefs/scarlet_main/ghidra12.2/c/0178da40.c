/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0178da40; name: FUN_0178da40
 */


void FUN_0178da40(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *local_58 [4];
  undefined8 local_38;
  undefined8 local_18;
  
  if (*(long *)(param_1 + 0x7638) == 0) {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar9 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar9;
    if (lVar9 != 0) {
      FUN_0178dc64(local_58,param_1);
      FUN_0178e4dc(&local_38,lVar9,param_1 + 0x50,local_58);
      plVar8 = *(long **)(param_1 + 0x7638);
      *(undefined8 *)(param_1 + 0x7638) = 0;
      if (plVar8 != (long *)0x0) {
        lVar9 = plVar8[6];
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
          (**(code **)(*plVar8 + 0x50))();
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      uVar6 = local_38;
      local_38 = 0;
      *(undefined8 *)(param_1 + 0x7638) = uVar6;
      if (local_58[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_58[0] + 3);
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
          piVar2 = (int *)((long)local_58[0] + 0x1c);
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
            local_18 = *local_58[0];
            FUN_00c44438(lVar9 + 0x8040,&local_18);
          }
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
  }
  return;
}



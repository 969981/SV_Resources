/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01760fa0; name: FUN_01760fa0
 */


long * FUN_01760fa0(long param_1,uint param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *local_18;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x90));
  uVar6 = *(ulong *)(param_1 + 0x30);
  if (uVar6 != 0) {
    uVar7 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
    uVar10 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar7 = (ulong)param_2;
    if (uVar10 < 2) {
      uVar8 = (ulong)((int)uVar6 - 1U & param_2);
    }
    else {
      uVar8 = uVar7;
      if (uVar6 <= uVar7) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar7 / uVar6;
        }
        uVar8 = uVar7 - uVar8 * uVar6;
      }
    }
    plVar9 = *(long **)(*(long *)(param_1 + 0x28) + uVar8 * 8);
    if ((plVar9 != (long *)0x0) && (plVar9 = (long *)*plVar9, plVar9 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar9[1] == uVar7) {
            if (*(uint *)(plVar9 + 2) == param_2) goto LAB_01761048;
          }
          else if ((plVar9[1] & uVar6 - 1) != uVar8) goto LAB_01761104;
          plVar9 = (long *)*plVar9;
          plVar11 = (long *)0x0;
        } while (plVar9 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar9[1];
          if (uVar10 == uVar7) {
            if (*(uint *)(plVar9 + 2) == param_2) goto LAB_01761048;
          }
          else {
            if (uVar6 <= uVar10) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar10 / uVar6;
              }
              uVar10 = uVar10 - uVar4 * uVar6;
            }
            if (uVar10 != uVar8) goto LAB_01761104;
          }
          plVar9 = (long *)*plVar9;
          plVar11 = (long *)0x0;
        } while (plVar9 != (long *)0x0);
      }
      goto LAB_0176105c;
    }
  }
LAB_01761104:
  plVar11 = (long *)0x0;
  goto LAB_0176105c;
LAB_01761048:
  FUN_01761150(&local_18,plVar9[3]);
  plVar11 = local_18;
  if (local_18 != (long *)0x0) {
    plVar9 = local_18 + 5;
    do {
      lVar5 = *plVar9;
      iVar3 = (int)lVar5 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *(int *)plVar9 = iVar3;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar3 == 0) {
      (**(code **)(*local_18 + 0x10))(local_18);
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
LAB_0176105c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
  return plVar11;
}



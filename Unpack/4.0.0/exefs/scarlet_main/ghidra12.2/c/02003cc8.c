/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02003cc8; name: FUN_02003cc8
 */


void FUN_02003cc8(undefined8 *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = &PTR_FUN_0456f6c8;
  param_1[4] = &PTR_LAB_0456f700;
  plVar6 = (long *)param_1[0x16];
  param_1[0x16] = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar9 = *plVar1;
      iVar5 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    else if ((int)lVar9 == 0) goto LAB_02003de0;
  }
  lVar9 = param_1[0x17];
  if (lVar9 != 0) {
    plVar6 = (long *)param_1[1];
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if ((uVar7 & 1) != 0) {
      lVar8 = FUN_00c4e600();
      if (0 < *(int *)(lVar8 + 0x12c8)) {
        FUN_00c48fe8(plVar6,lVar9,uVar2,0x10);
        goto LAB_02003d20;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar9,uVar2,0x10);
  }
LAB_02003d20:
  plVar6 = (long *)param_1[0x16];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 5;
    do {
      lVar9 = *plVar1;
      iVar5 = (int)lVar9 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02003db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))();
      return;
    }
    if ((int)lVar9 == 0) {
LAB_02003de0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}



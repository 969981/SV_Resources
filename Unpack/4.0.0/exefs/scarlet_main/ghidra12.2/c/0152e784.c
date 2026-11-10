/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0152e784; name: FUN_0152e784
 */


void FUN_0152e784(undefined8 param_1,undefined4 param_2,undefined4 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *local_58;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar11 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar11;
  puVar7 = PTR_DAT_047d8f00;
  puVar6 = PTR_DAT_047d8ef8;
  plVar1 = *(long **)(lVar11 + 0x1c0);
  plVar2 = *(long **)(lVar11 + 0x1c8);
  for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar11 = *plVar1;
    plVar9 = (long *)(*(code *)**(undefined8 **)(lVar11 + 0x28))((undefined8 *)(lVar11 + 0x28));
    if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
      uVar10 = FUN_01b3fb0c();
      *(undefined8 *)puVar7 = uVar10;
      __cxa_guard_release(puVar6);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)puVar7) goto LAB_0152e838;
    }
  }
  lVar11 = 0;
LAB_0152e838:
  param_4 = (long *)*param_4;
  local_58 = param_4;
  if (param_4 == (long *)0x0) {
    FUN_0152e9a8(lVar11,param_2,param_3,&local_58);
  }
  else {
    plVar1 = param_4 + 5;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    FUN_0152e9a8(lVar11,param_2,param_3,&local_58);
    if (param_4 != (long *)0x0) {
      plVar1 = param_4 + 5;
      do {
        lVar11 = *plVar1;
        iVar8 = (int)lVar11 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0152e8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_4 + 0x10))(param_4);
        return;
      }
      if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  return;
}



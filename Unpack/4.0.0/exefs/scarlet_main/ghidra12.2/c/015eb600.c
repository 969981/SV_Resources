/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015eb600; name: FUN_015eb600
 */


void FUN_015eb600(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 local_28;
  
  if (((*PTR_DAT_047d8c28 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar7 != 0))
  {
    local_28 = FUN_00d44228();
    puVar6 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_28);
    FUN_00100190(PTR_LAB_047d9240,puVar6,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar10 = *(long **)PTR_DAT_047d8c30;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  plVar8 = *(long **)(param_1 + 0x18);
  *(long **)(param_1 + 0x18) = plVar10;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  *(undefined1 *)(param_1 + 0x25) = 0;
  plVar10 = *(long **)(param_1 + 0x58);
  uVar1 = *(undefined8 *)PTR_DAT_047e2f98;
  uVar2 = *(undefined8 *)(PTR_DAT_047e2f98 + 8);
  uVar9 = *(undefined8 *)(PTR_DAT_047e2f98 + 0x10);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(PTR_DAT_047e2f98 + 0x18);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar9;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  if (plVar10 != (long *)0x0) {
    if (plVar10[6] == param_1) {
      plVar10[6] = 0;
      plVar10 = *(long **)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (plVar10 == (long *)0x0) {
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    plVar8 = plVar10 + 5;
    do {
      lVar5 = *plVar8;
      iVar7 = (int)lVar5 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
    else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return;
}



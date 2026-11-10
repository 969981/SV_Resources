/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d89948; name: FUN_01d89948
 */


void FUN_01d89948(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined4 local_2c;
  undefined1 auStack_28 [8];
  
  if (((DAT_048371d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_048371d8), iVar5 != 0)) {
    FUN_00100190(&LAB_00a8a92c,&DAT_048371c8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_048371d8);
  }
  lVar7 = DAT_048371c8;
  DAT_048371e0 = DAT_048371c8;
  plVar8 = (long *)*param_2;
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar6 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar6 == -1) goto LAB_01d89a68;
  }
  local_2c = 0x10;
  lVar6 = FUN_0152bfac(auStack_28,*(undefined8 *)(lVar7 + 8),&local_2c);
  *param_1 = lVar6;
  lVar7 = 0;
  if (lVar6 != 0) {
    piVar2 = (int *)(lVar6 + 0x28);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == -1) {
LAB_01d89a68:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar7 = *param_1;
  }
  FUN_015514e4(lVar7,plVar8);
  plVar1 = plVar8 + 5;
  do {
    lVar7 = *plVar1;
    iVar5 = (int)lVar7 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  else if ((int)lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return;
}



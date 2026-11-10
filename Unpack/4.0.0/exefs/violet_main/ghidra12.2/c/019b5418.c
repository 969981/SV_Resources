/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019b5418; name: FUN_019b5418
 */


void FUN_019b5418(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_90 [128];
  
  if (((*PTR_DAT_047d8550 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_047d8550), iVar5 != 0))
  {
    FUN_00100190(PTR_LAB_047d8568,PTR_DAT_047d8558,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8550);
  }
  lVar6 = *(long *)PTR_DAT_047d8558;
  *(long *)PTR_DAT_047d8560 = lVar6;
  plVar7 = *(long **)(lVar6 + 0x140);
  *(undefined8 *)(lVar6 + 0x140) = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 5;
    do {
      lVar4 = *plVar1;
      iVar5 = (int)lVar4 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  *(undefined8 *)(lVar6 + 0x148) = 0;
  FUN_0149c1c0(auStack_90 + 0x88);
  return;
}



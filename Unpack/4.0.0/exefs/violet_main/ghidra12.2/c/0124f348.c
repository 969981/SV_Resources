/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124f348; name: FUN_0124f348
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0124f348(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((param_2 != 0) && (*(uint *)(*(long *)(param_1 + 0x38) + 0x30) < 2)) {
    plVar6 = (long *)(*(code *)**(undefined8 **)(param_2 + 0x28))((undefined8 *)(param_2 + 0x28));
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar5 != 0)) {
      uVar7 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar7;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)PTR_DAT_047d3f08) {
        plVar6 = *(long **)(param_1 + 0x130);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        plVar1 = plVar6 + 5;
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","IncrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                     ,0x53,"Reference counter overflows.");
        }
        (**(code **)(*plVar6 + 0x30))(plVar6,param_2);
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
                    /* WARNING: Could not recover jumptable at 0x0124f42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return;
        }
        if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
        return;
      }
    }
  }
  return;
}



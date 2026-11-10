/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0210c380; name: FUN_0210c380
 */


uint FUN_0210c380(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  
  if (param_2 != 0) {
    puVar7 = (undefined8 *)
             (*(code *)**(undefined8 **)(param_2 + 0x28))((undefined8 *)(param_2 + 0x28));
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar6 != 0)) {
      uVar8 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar8;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    if (puVar7 != (undefined8 *)0x0) {
      do {
        if (puVar7 == (undefined8 *)PTR_DAT_047d3f08) {
          plVar9 = *(long **)(param_1 + 0x130);
          if (plVar9 != (long *)0x0) {
            plVar1 = plVar9 + 5;
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
          }
          uVar5 = (**(code **)(*plVar9 + 0x28))(plVar9,param_2);
          if (plVar9 != (long *)0x0) {
            plVar1 = plVar9 + 5;
            do {
              lVar4 = *plVar1;
              iVar6 = (int)lVar4 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *(int *)plVar1 = iVar6;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
            else if ((int)lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != std::numeric_limits<uint32_t>::max()",
                         "DecrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                         ,0x58,"Reference counter underflows.");
            }
          }
          break;
        }
        puVar7 = (undefined8 *)*puVar7;
        uVar5 = 0;
      } while (puVar7 != (undefined8 *)0x0);
      goto LAB_0210c42c;
    }
  }
  uVar5 = 0;
LAB_0210c42c:
  return uVar5 & 1;
}



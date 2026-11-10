/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010a1220; name: FUN_010a1220
 */


void FUN_010a1220(undefined8 param_1,long *param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *local_38;
  
  puVar6 = PTR_DAT_047dcd58;
  puVar5 = PTR_DAT_047dcd50;
  bVar2 = *(byte *)(*param_2 + 0x60);
  if ((ulong)bVar2 != 0) {
    uVar12 = 0;
    do {
      if (uVar12 < 6) {
        lVar11 = *(long *)(*param_2 + uVar12 * 8 + 0x30);
      }
      else {
        lVar11 = 0;
      }
      puVar8 = (undefined8 *)
               (*(code *)**(undefined8 **)(lVar11 + 0x28))((undefined8 *)(lVar11 + 0x28));
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
        uVar9 = FUN_01af5520();
        *(undefined8 *)puVar6 = uVar9;
        __cxa_guard_release(puVar5);
      }
      for (; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
        if (puVar8 == (undefined8 *)puVar6) {
          plVar10 = *(long **)(lVar11 + 0x48);
          local_38 = plVar10;
          if (plVar10 == (long *)0x0) {
            FUN_010a13d0(param_1,&local_38);
          }
          else {
            plVar1 = plVar10 + 5;
            do {
              lVar11 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = (int)lVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if ((int)lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl
                        ("count != 0","IncrementReferenceInternal",
                         "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                         ,0x53,"Reference counter overflows.");
            }
            FUN_010a13d0(param_1,&local_38);
            if (plVar10 != (long *)0x0) {
              plVar1 = plVar10 + 5;
              do {
                lVar11 = *plVar1;
                iVar7 = (int)lVar11 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar4) {
                  *(int *)plVar1 = iVar7;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar7 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
              else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint32_t>::max()",
                           "DecrementReferenceInternal",
                           "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/reference_object.h"
                           ,0x58,"Reference counter underflows.");
              }
            }
          }
          break;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != bVar2);
  }
  return;
}



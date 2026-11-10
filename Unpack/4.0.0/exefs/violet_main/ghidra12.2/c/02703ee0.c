/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02703ee0; name: FUN_02703ee0
 */


void FUN_02703ee0(long param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  short sVar7;
  long *plVar8;
  long lVar9;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar7 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar7) {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_02703f40;
        bVar6 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_02703f40:
        bVar6 = false;
      }
      if (bVar6) {
        lVar5 = *(long *)(lVar5 + 0x10);
        if (lVar5 == 0) {
          return;
        }
        plVar8 = *(long **)(lVar5 + 0x148);
        if (plVar8 != (long *)0x0) {
          lVar9 = plVar8[6];
          if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("m_object != nullptr","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x3d);
          }
          psVar1 = (short *)(lVar9 + 0x1a);
          do {
            sVar7 = *psVar1;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar7 == 0) {
            uVar4 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
            *(undefined8 *)(lVar9 + 8) = uVar4;
            *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
          }
          else if (sVar7 == -1) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != 0","AddReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x58,"Reference counter overflows.");
          }
          FUN_011cd274(plVar8,param_2);
          lVar9 = plVar8[6];
          psVar1 = (short *)(lVar9 + 0x1a);
          do {
            sVar7 = *psVar1;
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar6) {
              *psVar1 = sVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (sVar7 == 1) {
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*plVar8 + 0x50))(plVar8);
          }
          else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
                    /* WARNING: Could not recover jumptable at 0x02703fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar5 + -0x28) + 0x60))((long *)(lVar5 + -0x28));
        return;
      }
      sVar7 = sVar2;
    } while (sVar2 != 0);
  }
  return;
}



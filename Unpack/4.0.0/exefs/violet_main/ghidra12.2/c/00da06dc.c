/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00da06dc; name: FUN_00da06dc
 */


void FUN_00da06dc(undefined8 *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  plVar8 = (long *)*param_1;
  if (plVar8[0x81] != plVar8[0x80]) {
    uVar9 = 0;
    do {
      if (plVar8 != (long *)0x0) {
        lVar10 = plVar8[6];
        if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("m_object != nullptr","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x3d);
        }
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar5 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          *(undefined8 *)(lVar10 + 8) = uVar5;
          *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != 0","AddReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x58,"Reference counter overflows.");
        }
      }
      lVar10 = *(long *)(plVar8[0x80] + uVar9 * 8);
      plVar7 = *(long **)(lVar10 + 0x3b0);
      plVar6 = *(long **)(lVar10 + 0x3b8);
      if ((plVar7 != plVar6) && (*plVar7 != param_2)) {
        do {
          plVar7 = plVar7 + 1;
          if (plVar6 == plVar7) {
            plVar7 = plVar6;
            goto LAB_00da0794;
          }
        } while (*plVar7 != param_2);
      }
LAB_00da0794:
      if (plVar6 != plVar7) {
        *plVar7 = plVar6[-1];
        lVar10 = *(long *)(plVar8[0x80] + uVar9 * 8);
        *(long *)(lVar10 + 0x3b8) = *(long *)(lVar10 + 0x3b8) + -8;
        if (plVar8 == (long *)0x0) {
          return;
        }
        lVar10 = plVar8[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00da089c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar8 + 0x50))(plVar8);
          return;
        }
        if (sVar2 != 0) {
          return;
        }
LAB_00da08e8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      if (plVar8 != (long *)0x0) {
        lVar10 = plVar8[6];
        psVar1 = (short *)(lVar10 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar10 + 0x10) = 0;
          (**(code **)(*plVar8 + 0x50))(plVar8);
        }
        else if (sVar2 == 0) goto LAB_00da08e8;
      }
      plVar8 = (long *)*param_1;
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(plVar8[0x81] - plVar8[0x80] >> 3));
  }
  return;
}



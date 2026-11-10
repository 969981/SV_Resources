/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014acdd4; name: FUN_014acdd4
 */


void FUN_014acdd4(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  long *plVar7;
  
  if (((*(long *)(param_1 + 0xb0) != 0) && (*(short *)(*(long *)(param_1 + 0xb0) + 0x1a) != 0)) &&
     (*(long *)(param_1 + 0xa8) != 0)) {
    lVar5 = *(long *)(param_1 + 0xb0);
    if ((lVar5 == 0) || (*(short *)(lVar5 + 0x1a) == 0)) {
      plVar7 = (long *)0x0;
    }
    else {
      psVar1 = (short *)(lVar5 + 0x1a);
      sVar6 = *(short *)(lVar5 + 0x1a);
      do {
        sVar2 = *psVar1;
        if (sVar2 == sVar6) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar6 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_014acee0;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_014acee0:
          bVar4 = false;
        }
        if (bVar4) {
          plVar7 = (long *)0x0;
          if (*(long *)(lVar5 + 0x10) != 0) {
            plVar7 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
          }
          break;
        }
        plVar7 = (long *)0x0;
        sVar6 = sVar2;
      } while (sVar2 != 0);
    }
    lVar5 = FUN_0113ca0c(*(undefined8 *)(param_1 + 0xa8));
    *(undefined8 *)(*(long *)(lVar5 + 0x18) + (long)*(int *)(param_1 + 0xc0) * 0x10 + 8) =
         *(undefined8 *)(param_1 + 200);
    *(undefined1 *)(param_1 + 0x1e4) = 1;
    if (plVar7 != (long *)0x0) {
      lVar5 = plVar7[6];
      psVar1 = (short *)(lVar5 + 0x1a);
      do {
        sVar6 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar6 == 1) {
        *(undefined8 *)(lVar5 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x014acea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x50))(plVar7);
        return;
      }
      if (sVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d9dcc0; name: FUN_00d9dcc0
 */


void FUN_00d9dcc0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_00d9dd8c(0,*(long *)(param_1 + 0x58),4);
    plVar6 = *(long **)(param_1 + 0x58);
    if (plVar6 != (long *)0x0) {
      if (plVar6[6] == param_1) {
        plVar6[6] = 0;
        plVar6 = *(long **)(param_1 + 0x58);
        *(undefined8 *)(param_1 + 0x58) = 0;
        if (plVar6 == (long *)0x0) goto LAB_00d9dcec;
      }
      else {
        *(undefined8 *)(param_1 + 0x58) = 0;
      }
      plVar1 = plVar6 + 5;
      do {
        lVar5 = *plVar1;
        iVar4 = (int)lVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
LAB_00d9dcec:
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar7 = 5;
  }
  else {
    uVar7 = 0;
    *(undefined2 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = uVar7;
  return;
}



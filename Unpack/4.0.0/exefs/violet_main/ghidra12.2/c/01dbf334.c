/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dbf334; name: FUN_01dbf334
 */


void FUN_01dbf334(long *param_1,long param_2,int param_3)

{
  int *piVar1;
  short *psVar2;
  short sVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  
  piVar10 = *(int **)(param_2 + 0x28);
  piVar4 = *(int **)(param_2 + 0x30);
  if ((piVar10 != piVar4) && (*piVar10 != param_3)) {
    piVar9 = piVar10;
    do {
      if (piVar4 + -4 == piVar9) goto LAB_01dbf3dc;
      piVar10 = piVar9 + 4;
      piVar1 = piVar9 + 4;
      piVar9 = piVar10;
    } while (*piVar1 != param_3);
  }
  if (piVar10 == piVar4) {
LAB_01dbf3dc:
    *param_1 = 0;
  }
  else {
    lVar8 = *(long *)(piVar10 + 2);
    *param_1 = lVar8;
    if (lVar8 != 0) {
      lVar8 = *(long *)(lVar8 + 0x30);
      if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar2 = (short *)(lVar8 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar6) {
          *psVar2 = sVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar3 == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar7;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar3 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
  }
  return;
}



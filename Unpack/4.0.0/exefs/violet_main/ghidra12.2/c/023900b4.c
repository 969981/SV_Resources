/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 023900b4; name: FUN_023900b4
 */


void FUN_023900b4(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar8 = param_1[2];
  uVar4 = param_1[3];
  uVar3 = *param_1;
  uVar5 = param_1[1];
  param_2[5] = 0;
  param_2[2] = uVar8;
  param_2[3] = uVar4;
  *param_2 = uVar3;
  param_2[1] = uVar5;
  param_2[4] = 0;
  FUN_00d32adc(param_2 + 4,param_1 + 4);
  lVar9 = param_1[6];
  param_2[6] = lVar9;
  if (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x30);
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar2 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar8;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  return;
}



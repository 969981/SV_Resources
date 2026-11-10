/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025feaf8; name: FUN_025feaf8
 */


void FUN_025feaf8(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar6 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar6;
  uVar6 = param_1[2];
  param_2[4] = 0;
  param_2[2] = uVar6;
  param_2[3] = 0;
  FUN_0227dc64(param_2 + 3,param_1 + 3);
  uVar6 = param_1[5];
  uVar3 = param_1[6];
  uVar8 = param_1[7];
  param_2[8] = 0;
  param_2[5] = uVar6;
  param_2[9] = 0;
  param_2[6] = uVar3;
  param_2[7] = uVar8;
  FUN_00d32adc(param_2 + 8,param_1 + 8);
  lVar7 = param_1[10];
  param_2[10] = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar6;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  FUN_00c43ef0(param_2 + 0xb,param_1 + 0xb);
  param_2[0xd] = param_1[0xd];
  *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(param_1 + 0xe);
  return;
}



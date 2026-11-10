/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02395040; name: FUN_02395040
 */


void FUN_02395040(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  
  pcVar9 = (code *)param_1[1];
  if (pcVar9 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar9)(param_1 + 4);
  }
  uVar8 = *param_2;
  uVar4 = param_2[1];
  uVar3 = param_2[2];
  uVar5 = param_2[3];
  param_1[8] = 0;
  param_1[4] = uVar8;
  param_1[5] = uVar4;
  param_1[6] = uVar3;
  param_1[7] = uVar5;
  param_1[9] = 0;
  FUN_00d32adc(param_1 + 8,param_2 + 4);
  lVar10 = param_2[6];
  param_1[10] = lVar10;
  if (lVar10 != 0) {
    lVar10 = *(long *)(lVar10 + 0x30);
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
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar2 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar8;
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
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  FUN_00c43ef0(param_1 + 0xb,param_2 + 7);
  *param_1 = &LAB_02395438;
  param_1[1] = &LAB_02395608;
  param_1[2] = &LAB_0239a1e4;
  param_1[3] = &LAB_0239a2e8;
  return;
}



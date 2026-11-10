/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025897e4; name: FUN_025897e4
 */


void FUN_025897e4(undefined8 *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  
  pcVar7 = (code *)param_1[1];
  if (pcVar7 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar7)(param_1 + 4);
  }
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_021c4af4(param_1 + 4,param_2);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  param_1[9] = 0;
  param_1[6] = uVar6;
  param_1[10] = 0;
  param_1[7] = uVar3;
  param_1[8] = uVar9;
  FUN_00d32adc(param_1 + 9,param_2 + 0x28);
  lVar8 = *(long *)(param_2 + 0x38);
  param_1[0xb] = lVar8;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 0x30);
    if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar8 + 0x1a);
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
      uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      *(undefined8 *)(lVar8 + 8) = uVar6;
      *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  FUN_00c43ef0(param_1 + 0xc,param_2 + 0x40);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x50);
  *param_1 = &LAB_02589b2c;
  param_1[1] = FUN_02589c60;
  param_1[2] = FUN_0258a150;
  param_1[3] = FUN_0258a274;
  return;
}



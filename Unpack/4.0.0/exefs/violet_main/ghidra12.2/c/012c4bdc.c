/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c4bdc; name: FUN_012c4bdc
 */


void FUN_012c4bdc(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  
  pcVar8 = (code *)param_1[1];
  if (pcVar8 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar8)(param_1 + 4);
  }
  lVar9 = *param_2;
  param_1[4] = lVar9;
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
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar2 == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar7;
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
  lVar9 = param_2[1];
  lVar3 = param_2[2];
  lVar4 = param_2[4];
  param_1[7] = param_2[3];
  param_1[8] = lVar4;
  param_1[5] = lVar9;
  param_1[6] = lVar3;
  *param_1 = FUN_0188ca88;
  param_1[1] = &LAB_02dfe574;
  param_1[2] = &LAB_02dfe5ec;
  param_1[3] = &LAB_02dfe6cc;
  return;
}



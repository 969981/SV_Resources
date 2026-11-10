/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d40df8; name: FUN_00d40df8
 */


void FUN_00d40df8(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  
  FUN_00d1a240(param_1,0x800d8080);
  param_1[0x24] = PTR_DAT_047dd5a0 + 0x10;
  param_1[0x25] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x26,0,1);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FUN_00e53184(param_1 + 0x2a);
  param_1[0x2f] = 0;
  *(undefined4 *)((long)param_1 + 0x18c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x30,0,1);
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  FUN_00e53240(param_1 + 0x35);
  param_1[0x40] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = &DAT_cbf29ce484222645;
  param_1[0x3e] = &DAT_03c886bc;
  param_1[0x3f] = 0;
  *param_1 = &DAT_045a0758;
  param_1[4] = &PTR_LAB_045a0908;
  param_1[5] = &DAT_045a0a30;
  param_1[0x24] = &PTR_LAB_045a0ae8;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[6] = &PTR_LAB_045a0a88;
  param_1[7] = &PTR_LAB_045a0ab0;
  lVar7 = *param_2;
  param_1[0x41] = lVar7;
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
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
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
  lVar7 = *param_2;
  plVar5 = *(long **)(lVar7 + 0x80);
  param_1[0x42] = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  param_1[0x43] = *(undefined8 *)(lVar7 + 0x88);
  param_1[0x44] = *(undefined8 *)(lVar7 + 0x90);
  param_1[0x45] = *(undefined8 *)(lVar7 + 0x98);
  plVar5 = *(long **)(lVar7 + 0xa0);
  param_1[0x46] = plVar5;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x47) = *(undefined4 *)(lVar7 + 0xa8);
  *(undefined1 *)(param_1 + 0x48) = 1;
  return;
}



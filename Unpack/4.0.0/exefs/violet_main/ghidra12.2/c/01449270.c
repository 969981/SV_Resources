/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01449270; name: FUN_01449270
 */


void FUN_01449270(undefined8 *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00c43ef0();
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[3] = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  plVar7 = *(long **)(param_2 + 0x28);
  param_1[5] = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  plVar7 = *(long **)(param_2 + 0x48);
  param_1[9] = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  plVar7 = *(long **)(param_2 + 0x68);
  param_1[0xd] = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  FUN_00e4dbbc(param_1 + 0xe,param_2 + 0x70);
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  FUN_00e4de20(param_1 + 0x10,param_2 + 0x80);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_00e4e084(param_1 + 0x12,param_2 + 0x90);
  lVar9 = *(long *)(param_2 + 0xa0);
  param_1[0x14] = lVar9;
  if (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x30);
    if (*(long *)(lVar9 + 0x10) == 0) goto LAB_01449478;
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
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar8;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_01449498;
  }
  lVar9 = *(long *)(param_2 + 0xa8);
  param_1[0x15] = lVar9;
  if (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x30);
    if (*(long *)(lVar9 + 0x10) == 0) {
LAB_01449478:
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
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar8;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_01449498:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  uVar8 = *(undefined8 *)(param_2 + 0xb0);
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  uVar4 = *(undefined1 *)(param_2 + 0xc0);
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x18) = uVar4;
  param_1[0x16] = uVar8;
  param_1[0x17] = uVar3;
  param_1[0x19] = 0;
  FUN_00e499d4(param_1 + 0x19,param_2 + 200);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_00c43ef0(param_1 + 0x1b,param_2 + 0xd8);
  param_1[0x1d] = *(undefined8 *)(param_2 + 0xe8);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0xf0);
  return;
}



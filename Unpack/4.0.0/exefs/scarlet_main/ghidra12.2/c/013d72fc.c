/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013d72fc; name: FUN_013d72fc
 */


void FUN_013d72fc(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar6 = (long *)param_2[3];
  param_1[3] = plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  plVar6 = (long *)param_2[7];
  param_1[7] = plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  plVar6 = (long *)param_2[0xb];
  param_1[0xb] = plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  plVar6 = (long *)param_2[0xf];
  param_1[0xf] = plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  FUN_00e4dbbc(param_1 + 0x10,param_2 + 0x10);
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  FUN_00e4de20(param_1 + 0x12,param_2 + 0x12);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_00e4e084(param_1 + 0x14,param_2 + 0x14);
  lVar7 = param_2[0x16];
  param_1[0x16] = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if (*(long *)(lVar7 + 0x10) == 0) goto LAB_013d7570;
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
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar8;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_013d7590;
  }
  lVar7 = param_2[0x17];
  param_1[0x17] = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if (*(long *)(lVar7 + 0x10) == 0) {
LAB_013d7570:
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
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar8;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_013d7590:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  uVar8 = param_2[0x18];
  uVar3 = *(undefined1 *)(param_2 + 0x19);
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x19) = uVar3;
  param_1[0x18] = uVar8;
  param_1[0x1a] = 0;
  FUN_00e499d4(param_1 + 0x1a,param_2 + 0x1a);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_00c43ef0(param_1 + 0x1c,param_2 + 0x1c);
  param_1[0x1e] = param_2[0x1e];
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  if ((code *)param_2[0x22] != (code *)0x0) {
    (*(code *)param_2[0x22])(param_2 + 0x24,param_1 + 0x24);
    uVar8 = param_2[0x23];
    param_1[0x21] = param_2[0x21];
    param_1[0x23] = uVar8;
    uVar8 = param_2[0x20];
    param_1[0x22] = param_2[0x22];
    param_1[0x20] = uVar8;
  }
  *(undefined2 *)(param_1 + 0x30) = *(undefined2 *)(param_2 + 0x30);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01704478; name: FUN_01704478
 */


void FUN_01704478(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 auStack_18 [8];
  
  FUN_00d1a240(param_1,0x800b8080);
  *param_1 = &PTR_FUN_045cfb78;
  param_1[4] = &PTR_LAB_045cfcc0;
  param_1[5] = &DAT_045cfde8;
  param_1[6] = &PTR_LAB_045cfe40;
  puVar10 = param_1 + 7;
  *puVar10 = &PTR_LAB_045cfe68;
  param_1[0x24] = 0;
  if ((*(char *)(param_1 + 0xb) != '\0') || (*(char *)((long)param_1 + 0x59) != '\0')) {
    uVar3 = *(undefined2 *)(param_1 + 0xb);
    *(undefined2 *)(param_1 + 0xb) = 0;
    if (param_1[9] == 0) {
      ppuVar9 = &PTR_LAB_045cfe68;
    }
    else {
      FUN_00c6a584(param_1[9],puVar10);
      ppuVar9 = (undefined **)*puVar10;
    }
    (*(code *)ppuVar9[4])(puVar10,uVar3);
  }
  lVar6 = FUN_01704640(auStack_18,param_1[1]);
  if (lVar6 != 0) {
    lVar11 = *(long *)(lVar6 + 0x30);
    if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar11 + 0x1a);
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
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar8;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar7 = (long *)param_1[0x24];
  param_1[0x24] = 0;
  if (plVar7 != (long *)0x0) {
    lVar11 = plVar7[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  param_1[0x24] = lVar6;
  return;
}



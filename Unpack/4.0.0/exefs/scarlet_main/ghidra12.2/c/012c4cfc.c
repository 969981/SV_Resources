/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012c4cfc; name: FUN_012c4cfc
 */


void FUN_012c4cfc(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long *local_48;
  long local_40;
  undefined8 local_38;
  undefined1 auStack_18 [4];
  undefined1 local_14 [4];
  
  *(undefined8 *)(param_1 + 0x460) = 3;
  local_38 = *(undefined8 *)(param_1 + 0x1e8);
  local_40 = 0;
  if (*(long *)(param_1 + 0x360) != 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x360) + 0x10);
    local_40 = 0;
    if (lVar7 != 0) {
      local_40 = lVar7 + -8;
    }
  }
  local_14[0] = *(undefined1 *)(param_1 + 0x374);
  plVar5 = (long *)FUN_00da2d2c(auStack_18,*(undefined8 *)(param_1 + 8),&local_38,&local_40,local_14
                               );
  if (plVar5 != (long *)0x0) {
    lVar7 = plVar5[6];
    plVar5[0x37] = plVar5[0x37] | 8;
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
  pcVar8 = (code *)plVar5[0x71];
  if (pcVar8 != (code *)0x0) {
    plVar5[0x72] = 0;
    plVar5[0x73] = 0;
    plVar5[0x70] = 0;
    plVar5[0x71] = 0;
    (*pcVar8)(plVar5 + 0x74);
  }
  plVar5[0x70] = (long)FUN_019bacc8;
  plVar5[0x71] = (long)&LAB_02dfe310;
  plVar5[0x74] = param_1;
  plVar5[0x72] = (long)&LAB_02dfe314;
  plVar5[0x73] = (long)&LAB_02dfe320;
  local_48 = plVar5;
  FUN_00da3a8c(param_1,&local_48);
  if (local_48 != (long *)0x0) {
    lVar7 = local_48[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  FUN_012c4ef4(param_1);
  return;
}



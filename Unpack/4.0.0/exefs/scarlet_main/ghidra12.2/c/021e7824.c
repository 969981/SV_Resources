/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021e7824; name: FUN_021e7824
 */


void FUN_021e7824(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined1 local_c8 [8];
  undefined1 *local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long *plStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  long *local_68;
  undefined1 local_60 [24];
  long *local_48;
  
  plVar7 = *(long **)(*param_3 + 0x40);
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[6];
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
  plVar9 = (long *)plVar7[0xb];
  plVar3 = (long *)PTR_DAT_047d8b70;
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 6;
  }
  local_80 = *plVar3;
  plVar3 = (long *)PTR_PTR_047d4508;
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 7;
  }
  lStack_78 = *plVar3;
  if (plVar9 == (long *)0x0) {
    local_70 = 0;
  }
  else {
    local_70 = plVar9[8];
  }
  local_68 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  local_a0 = *param_4;
  uStack_98 = param_4[1];
  local_90 = param_4[2];
  plVar3 = (long *)param_4[3];
  plStack_88 = plVar3;
  local_68 = plVar9;
  if (plVar3 == (long *)0x0) {
    FUN_021e5cb8(local_60,param_1,&local_80,&local_a0);
  }
  else {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    FUN_021e5cb8(local_60,param_1,&local_80,&local_a0);
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  lVar8 = plVar7[6];
  psVar1 = (short *)(lVar8 + 0x1a);
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
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*plVar7 + 0x50))(plVar7);
  }
  else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  local_c0 = &DAT_e4d07a996e5ef5e8;
  puStack_b8 = &DAT_03c60f6f;
  local_b0 = 4;
  local_a8 = (long *)0x0;
  uVar6 = FUN_00f844f4(param_2,&local_c0);
  FUN_018837a8(uVar6,local_c8,param_4 + 5);
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}



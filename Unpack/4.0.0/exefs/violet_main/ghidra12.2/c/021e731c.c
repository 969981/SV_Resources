/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021e731c; name: FUN_021e731c
 */


void FUN_021e731c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined1 local_180 [8];
  undefined1 *local_178;
  undefined *puStack_170;
  undefined8 local_168;
  long *local_160;
  undefined8 local_158;
  char *pcStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long *plStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long *local_108;
  undefined1 local_100 [24];
  long *local_e8;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long *plStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long *local_90;
  undefined1 local_88 [24];
  long *local_70;
  
  plVar8 = *(long **)(*param_3 + 0x40);
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[6];
    if (*(long *)(lVar10 + 0x10) == 0) goto LAB_021e77b4;
    psVar1 = (short *)(lVar10 + 0x1a);
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
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar7;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_021e77d4;
  }
  plVar6 = (long *)PTR_DAT_047d8b70;
  plVar3 = (long *)PTR_PTR_047d4508;
  plVar11 = (long *)plVar8[0xb];
  plVar9 = (long *)PTR_DAT_047d8b70;
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 6;
  }
  local_a8 = *plVar9;
  plVar9 = (long *)PTR_PTR_047d4508;
  if (plVar11 != (long *)0x0) {
    plVar9 = plVar11 + 7;
  }
  lStack_a0 = *plVar9;
  if (plVar11 == (long *)0x0) {
    local_98 = 0;
  }
  else {
    local_98 = plVar11[8];
  }
  local_90 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  local_c8 = *param_4;
  uStack_c0 = param_4[1];
  local_b8 = param_4[2];
  plVar9 = (long *)param_4[3];
  plStack_b0 = plVar9;
  local_90 = plVar11;
  if (plVar9 == (long *)0x0) {
    local_e0 = 0x6e1486ec4f098a25;
    pcStack_d8 = "IsTriggering";
    local_d0 = 0xc;
    FUN_021e57bc(local_88,param_1,&local_a8,&local_c8,&local_e0);
  }
  else {
    (**(code **)(*plVar9 + 0x18))(plVar9);
    local_e0 = 0x6e1486ec4f098a25;
    pcStack_d8 = "IsTriggering";
    local_d0 = 0xc;
    FUN_021e57bc(local_88,param_1,&local_a8,&local_c8,&local_e0);
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x20))(plVar11);
  }
  lVar10 = plVar8[6];
  psVar1 = (short *)(lVar10 + 0x1a);
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
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*plVar8 + 0x50))(plVar8);
  }
  else if (sVar2 == 0) goto LAB_021e77fc;
  plVar8 = *(long **)(*param_3 + 0x40);
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[6];
    if (*(long *)(lVar10 + 0x10) == 0) {
LAB_021e77b4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar10 + 0x1a);
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
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      *(undefined8 *)(lVar10 + 8) = uVar7;
      *(undefined4 *)(lVar10 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_021e77d4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  plVar9 = (long *)plVar8[0xb];
  if (plVar9 != (long *)0x0) {
    plVar3 = plVar9 + 7;
    plVar6 = plVar9 + 6;
  }
  local_120 = *plVar6;
  lStack_118 = *plVar3;
  if (plVar9 == (long *)0x0) {
    local_110 = 0;
  }
  else {
    local_110 = plVar9[8];
  }
  local_108 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  local_140 = *param_4;
  uStack_138 = param_4[1];
  local_130 = param_4[2];
  plVar3 = (long *)param_4[3];
  plStack_128 = plVar3;
  local_108 = plVar9;
  if (plVar3 == (long *)0x0) {
    local_158 = 0x3217b81c8e57c8e2;
    pcStack_150 = "TriggerCount";
    local_148 = 0xc;
    FUN_021e57bc(local_100,param_1,&local_120,&local_140,&local_158);
  }
  else {
    (**(code **)(*plVar3 + 0x18))(plVar3);
    local_158 = 0x3217b81c8e57c8e2;
    pcStack_150 = "TriggerCount";
    local_148 = 0xc;
    FUN_021e57bc(local_100,param_1,&local_120,&local_140,&local_158);
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  lVar10 = plVar8[6];
  psVar1 = (short *)(lVar10 + 0x1a);
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
    *(undefined8 *)(lVar10 + 0x10) = 0;
    (**(code **)(*plVar8 + 0x50))(plVar8);
  }
  else if (sVar2 == 0) {
LAB_021e77fc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  local_178 = &DAT_e4d07a996e5ef5e8;
  puStack_170 = &DAT_03c60f6f;
  local_168 = 4;
  local_160 = (long *)0x0;
  uVar7 = FUN_00f844f4(param_2,&local_178);
  FUN_018837a8(uVar7,local_180,param_4 + 5);
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 0x20))();
  }
  local_178 = &DAT_e4d07a996e5ef5e8;
  puStack_170 = &DAT_03c60f6f;
  local_168 = 4;
  local_160 = (long *)0x0;
  uVar7 = FUN_00f844f4(param_2,&local_178);
  FUN_020f0260(uVar7,local_180,param_4 + 4);
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 0x20))();
  }
  if (local_e8 != (long *)0x0) {
    (**(code **)(*local_e8 + 0x20))();
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  return;
}



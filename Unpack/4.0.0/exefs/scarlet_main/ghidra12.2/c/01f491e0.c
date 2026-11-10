/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f491e0; name: FUN_01f491e0
 */


void FUN_01f491e0(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  byte bVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *local_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  long *local_c0;
  long local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  long local_88;
  long lStack_80;
  undefined1 *local_78;
  undefined1 *puStack_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  long local_50 [2];
  long *local_28;
  
  lVar9 = *param_2;
  if (DAT_04839fc0 == 1) {
    bVar6 = 0;
  }
  else {
    if (DAT_0485e950 == '\x01') {
      bVar6 = nn::nifm::IsNetworkAvailable();
    }
    else {
      bVar6 = 0;
    }
    bVar6 = bVar6 & DAT_04839fc0 == 4;
  }
  FUN_01986a90(local_50,param_2[1]);
  if (((bVar6 == 0) || (local_50[0] == 0)) || (*(short *)(local_50[0] + 0x1a) == 0)) {
    FUN_019870e4(&local_90);
    local_b0 = &DAT_cbf29ce484222645;
    puStack_a8 = &DAT_03c886bc;
    local_a0 = 0;
    local_98 = (long *)0x0;
    local_b8 = param_2[1];
    FUN_01f4a074(&local_28,local_90,&local_b0,&local_b8);
    local_d8 = &DAT_cbf29ce484222645;
    puStack_d0 = &DAT_03c886bc;
    local_c8 = 0;
    local_c0 = (long *)0x0;
    lStack_80 = param_2[1];
    local_88 = lVar9;
    FUN_01f4a830(&local_58,local_28,&local_d8,&local_88);
    if (local_c0 != (long *)0x0) {
      (**(code **)(*local_c0 + 0x20))();
    }
    if (local_28 != (long *)0x0) {
      lVar7 = local_28[6];
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
        (**(code **)(*local_28 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01f495e8;
    }
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x20))();
    }
    if (local_90 != (long *)0x0) {
      lVar7 = local_90[6];
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
        (**(code **)(*local_90 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01f495e8;
    }
    if (local_58 == (long *)0x0) goto LAB_01f49534;
    uVar8 = *(undefined8 *)(lVar9 + 8);
    lVar7 = param_2[2];
    FUN_017944b8(&local_88,*(undefined8 *)(lVar9 + 0x48));
    uVar8 = FUN_01f48e5c(uVar8,&local_58,lVar7,&local_88);
    FUN_01f49f40(&local_90,uVar8);
    local_28 = *(long **)(lVar9 + 0x40);
    *(undefined8 *)(lVar9 + 0x40) = 0;
    FUN_018b3450(&local_28);
    plVar5 = local_90;
    local_90 = (long *)0x0;
    *(long **)(lVar9 + 0x40) = plVar5;
    FUN_01f49ffc(&local_90);
    FUN_017943a8(&local_88);
    if (*(long *)(lVar9 + 0x40) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      FUN_019812f8(param_1);
    }
    if (local_58 == (long *)0x0) goto LAB_01f49514;
    lVar9 = local_58[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    if (*(long **)(param_2[1] + 0x48) == (long *)0x0) {
      local_28 = (long *)0x0;
    }
    else {
      (**(code **)(**(long **)(param_2[1] + 0x48) + 0x90))(&local_28);
    }
    local_68 = 0;
    local_60 = (long *)0x0;
    local_78 = &DAT_cbf29ce484222645;
    puStack_70 = &DAT_03c886bc;
    local_88 = 0;
    if (local_50[0] != 0) {
      local_88 = 0;
      if (*(long *)(local_50[0] + 0x10) != 0) {
        local_88 = *(long *)(local_50[0] + 0x10) + -0x28;
      }
    }
    lStack_80 = lVar9;
    FUN_01f49610(&local_58,local_28,&local_78,&local_88);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x20))();
    }
    if (local_28 != (long *)0x0) {
      lVar7 = local_28[6];
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
        (**(code **)(*local_28 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01f495e8;
    }
    if (local_58 == (long *)0x0) {
LAB_01f49534:
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_01f49514;
    }
    uVar8 = *(undefined8 *)(lVar9 + 8);
    lVar7 = param_2[2];
    FUN_017944b8(&local_88,*(undefined8 *)(lVar9 + 0x48));
    uVar8 = FUN_01f49dd0(uVar8,&local_58,lVar7,&local_88);
    FUN_01f49f40(&local_90,uVar8);
    local_28 = *(long **)(lVar9 + 0x40);
    *(undefined8 *)(lVar9 + 0x40) = 0;
    FUN_018b3450(&local_28);
    plVar5 = local_90;
    local_90 = (long *)0x0;
    *(long **)(lVar9 + 0x40) = plVar5;
    FUN_01f49ffc(&local_90);
    FUN_017943a8(&local_88);
    if (*(long *)(lVar9 + 0x40) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      FUN_019812f8(param_1);
    }
    if (local_58 == (long *)0x0) goto LAB_01f49514;
    lVar9 = local_58[6];
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (sVar2 == 1) {
    *(undefined8 *)(lVar9 + 0x10) = 0;
    (**(code **)(*local_58 + 0x50))();
  }
  else if (sVar2 == 0) {
LAB_01f495e8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_01f49514:
  FUN_01986be0(local_50);
  return;
}



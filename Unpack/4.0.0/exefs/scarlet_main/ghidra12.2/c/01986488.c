/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01986488; name: FUN_01986488
 */


void FUN_01986488(undefined8 *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  byte bVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined8 local_130;
  long *local_128;
  long local_120;
  undefined1 *local_118;
  undefined1 *puStack_110;
  undefined8 local_108;
  long *local_100;
  long *local_f8;
  undefined8 local_f0;
  char *pcStack_e8;
  undefined8 local_e0;
  long *local_d8;
  long *local_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined8 local_b8;
  long *local_b0;
  long *local_a8;
  long *local_a0;
  long local_98;
  long local_90 [2];
  long *local_80;
  long local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  long local_50 [2];
  
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
    local_98 = 0;
    FUN_019869b0(&local_98);
    FUN_01986a1c(lVar9 + 0x50,&local_98);
    FUN_019870e4(&local_f8);
    local_118 = &DAT_cbf29ce484222645;
    puStack_110 = &DAT_03c886bc;
    local_108 = 0;
    local_100 = (long *)0x0;
    local_120 = param_2[1];
    FUN_0198b7a0(&local_a8,local_f8,&local_118,&local_120);
    local_140 = &DAT_cbf29ce484222645;
    puStack_138 = &DAT_03c886bc;
    local_130 = 0;
    local_128 = (long *)0x0;
    lStack_70 = param_2[1];
    local_78 = lVar9;
    FUN_0198c074(&local_a0,local_a8,&local_140,&local_78);
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    if (local_a8 != (long *)0x0) {
      lVar8 = local_a8[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_a8 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01986960;
    }
    if (local_100 != (long *)0x0) {
      (**(code **)(*local_100 + 0x20))();
    }
    if (local_f8 != (long *)0x0) {
      lVar8 = local_f8[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_f8 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01986960;
    }
    if (local_a0 == (long *)0x0) goto LAB_01986880;
    uVar7 = FUN_01986dac(*(undefined8 *)(lVar9 + 8),&local_a0,param_2[2]);
    FUN_01986cf0(&local_78,uVar7);
    lVar8 = local_78;
    if (local_78 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      FUN_01986988(local_78,&local_98);
      FUN_018b3414(lVar9 + 0x40,lVar8);
      FUN_019812f8(param_1,*(undefined8 *)(lVar9 + 0x40));
    }
    FUN_01986b68(&local_78);
    if (local_a0 == (long *)0x0) goto LAB_01986658;
    lVar9 = local_a0[6];
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
    local_58 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    lStack_70 = 0;
    FUN_0195a874(&local_98,lVar9 + 0x50);
    snprintf((char *)&local_78,0x21,"%s",local_90[0]);
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    FUN_01986a1c(lVar9 + 0x50,&local_78);
    if (*(long **)(param_2[1] + 0x48) == (long *)0x0) {
      local_a8 = (long *)0x0;
    }
    else {
      (**(code **)(**(long **)(param_2[1] + 0x48) + 0x90))(&local_a8);
    }
    local_c8 = &DAT_cbf29ce484222645;
    puStack_c0 = &DAT_03c886bc;
    local_b8 = 0;
    local_b0 = (long *)0x0;
    local_98 = 0;
    if (local_50[0] != 0) {
      local_98 = 0;
      if (*(long *)(local_50[0] + 0x10) != 0) {
        local_98 = *(long *)(local_50[0] + 0x10) + -0x28;
      }
    }
    local_90[0] = lVar9;
    FUN_01f42c20(&local_a0,local_a8,&local_c8,&local_98);
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    if (local_a8 != (long *)0x0) {
      lVar8 = local_a8[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_a8 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01986960;
    }
    plVar5 = local_a0;
    if (local_a0 == (long *)0x0) {
LAB_01986880:
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_01986658;
    }
    local_90[1] = 0;
    local_f0 = 0xb7e34acadbe0eb52;
    pcStack_e8 = "SetPassword";
    local_e0 = 0xb;
    local_d8 = (long *)0x0;
    local_90[0] = 0;
    local_98 = lVar9;
    FUN_01f433e0(local_90,local_50);
    FUN_01f43640(&local_d0,plVar5,&local_f0,&local_98);
    if (local_d0 != (long *)0x0) {
      lVar8 = local_d0[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*local_d0 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_01986960;
    }
    FUN_01986be0(local_90);
    if (local_d8 != (long *)0x0) {
      (**(code **)(*local_d8 + 0x20))();
    }
    uVar7 = FUN_01f43734(*(undefined8 *)(lVar9 + 8),&local_a0,param_2[2]);
    FUN_01986cf0(&local_a8,uVar7);
    local_98 = *(long *)(lVar9 + 0x40);
    *(undefined8 *)(lVar9 + 0x40) = 0;
    FUN_018b3450(&local_98);
    plVar5 = local_a8;
    local_a8 = (long *)0x0;
    *(long **)(lVar9 + 0x40) = plVar5;
    FUN_01986b68(&local_a8);
    if (*(long *)(lVar9 + 0x40) == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      FUN_019812f8(param_1);
    }
    if (local_a0 == (long *)0x0) goto LAB_01986658;
    lVar9 = local_a0[6];
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
    (**(code **)(*local_a0 + 0x50))();
  }
  else if (sVar2 == 0) {
LAB_01986960:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_01986658:
  FUN_01986be0(local_50);
  return;
}



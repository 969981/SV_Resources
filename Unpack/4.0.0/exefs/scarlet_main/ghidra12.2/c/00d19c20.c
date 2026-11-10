/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d19c20; name: FUN_00d19c20
 */


void FUN_00d19c20(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  short *psVar3;
  short sVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 local_180;
  char *pcStack_178;
  undefined8 local_170;
  long *local_168;
  undefined8 local_160;
  char *pcStack_158;
  undefined8 local_150;
  long *local_148;
  undefined8 local_140;
  char *pcStack_138;
  undefined8 local_130;
  long *local_128;
  undefined8 local_120;
  char *pcStack_118;
  undefined8 local_110;
  long *local_108;
  undefined8 local_100;
  char *pcStack_f8;
  undefined8 local_f0;
  long *local_e8;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  long *local_38;
  
  FUN_00d1a22c(param_1,9);
  *param_1 = &PTR_FUN_04569418;
  param_1[0x32] = 0;
  param_1[6] = &PTR_LAB_045696d8;
  param_1[7] = &PTR_LAB_04569700;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0xf4b17a579f18960;
  param_1[4] = &PTR_LAB_04569558;
  param_1[5] = &DAT_04569680;
  puVar1 = param_1 + 0x29;
  puVar2 = param_1 + 0x2a;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0x82a2b175229d6a5b;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  FUN_00d1b19c(param_1 + 0x33);
  uVar11 = param_1[1];
  *(undefined2 *)(param_1 + 0x2f) = 0;
  param_1[0x2e] = 0;
  FUN_00d1b07c(param_1 + 0x30);
  param_1[0x34] = 0x3ffffffffffffff;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = uVar11;
  *(undefined4 *)((long)param_1 + 0x17c) = *(undefined4 *)(param_2 + 0x10);
  iVar5 = *(int *)(param_2 + 0x10);
  if (iVar5 == 3) {
    local_58 = param_1;
    FUN_00d1b42c(&local_38,param_1[1],param_2,&local_58);
    FUN_00d1b254(puVar1,&local_38);
    if (local_38 != (long *)0x0) {
      lVar9 = local_38[6];
      psVar3 = (short *)(lVar9 + 0x1a);
      do {
        sVar4 = *psVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar7) {
          *psVar3 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar4 == 0) goto LAB_00d1a184;
    }
    local_140 = 0x5fc4cc43cf6c3f34;
    pcStack_138 = "world/data/stain/high_prec_stain_data/mud_player";
    local_130 = 0x30;
    local_128 = (long *)0x0;
    FUN_00d1d21c(*puVar1,&local_140);
    if (local_128 != (long *)0x0) {
      (**(code **)(*local_128 + 0x20))();
    }
    local_58 = param_1;
    FUN_00d1b2f0(&local_38,param_1[1],param_2,&local_58);
    FUN_00d1b100(puVar2,&local_38);
    if (local_38 != (long *)0x0) {
      lVar9 = local_38[6];
      psVar3 = (short *)(lVar9 + 0x1a);
      do {
        sVar4 = *psVar3;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
        if (bVar7) {
          *psVar3 = sVar4 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (sVar4 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar4 == 0) {
LAB_00d1a184:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    local_160 = 0x8dd2c4d2f6531ff7;
    pcStack_158 = "world/data/stain/high_prec_stain_data/snow_player";
    local_150 = 0x31;
    local_148 = (long *)0x0;
    FUN_00d1b980(*puVar2,&local_160,0);
    if (local_148 != (long *)0x0) {
      (**(code **)(*local_148 + 0x20))();
    }
    local_180 = 0x4792a3d2f902f8e4;
    pcStack_178 = "world/data/stain/high_prec_stain_data/sand_player";
    local_170 = 0x31;
    local_168 = (long *)0x0;
    FUN_00d1b980(*puVar2,&local_180,1);
    plVar8 = local_168;
joined_r0x00d19f24:
    if (plVar8 == (long *)0x0) goto LAB_00d19f28;
    pcVar10 = *(code **)(*plVar8 + 0x20);
  }
  else {
    if (iVar5 - 1U < 2) {
      local_58 = param_1;
      FUN_00d1b42c(&local_38,param_1[1],param_2,&local_58);
      FUN_00d1b254(puVar1,&local_38);
      if (local_38 != (long *)0x0) {
        lVar9 = local_38[6];
        psVar3 = (short *)(lVar9 + 0x1a);
        do {
          sVar4 = *psVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar7) {
            *psVar3 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*local_38 + 0x50))();
        }
        else if (sVar4 == 0) goto LAB_00d1a184;
      }
      local_58 = param_1;
      FUN_00d1b2f0(&local_38,param_1[1],param_2,&local_58);
      FUN_00d1b100(puVar2,&local_38);
      if (local_38 != (long *)0x0) {
        lVar9 = local_38[6];
        psVar3 = (short *)(lVar9 + 0x1a);
        do {
          sVar4 = *psVar3;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
          if (bVar7) {
            *psVar3 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          *(undefined8 *)(lVar9 + 0x10) = 0;
          (**(code **)(*local_38 + 0x50))();
        }
        else if (sVar4 == 0) goto LAB_00d1a184;
      }
      if (*(int *)(param_2 + 0x10) == 1) {
        local_80 = 0x4731f6a5e4df24af;
        pcStack_78 = "world/data/stain/high_prec_stain_data/mud_ride_a";
        local_70 = 0x30;
        local_68 = (long *)0x0;
        FUN_00d1d21c(*puVar1,&local_80);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        local_a0 = 0x1fd6cfccfd6c45f0;
        pcStack_98 = "world/data/stain/high_prec_stain_data/snow_ride_a";
        local_90 = 0x31;
        local_88 = (long *)0x0;
        FUN_00d1b980(*puVar2,&local_a0,0);
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        local_c0 = 0x980a5d01548c217f;
        pcStack_b8 = "world/data/stain/high_prec_stain_data/sand_ride_a";
        local_b0 = 0x31;
        local_a8 = (long *)0x0;
        FUN_00d1b980(*puVar2,&local_c0,1);
        plVar8 = local_a8;
      }
      else {
        local_e0 = 0x4731f7a5e4df2662;
        pcStack_d8 = "world/data/stain/high_prec_stain_data/mud_ride_b";
        local_d0 = 0x30;
        local_c8 = (long *)0x0;
        FUN_00d1d21c(*puVar1,&local_e0);
        if (local_c8 != (long *)0x0) {
          (**(code **)(*local_c8 + 0x20))();
        }
        local_100 = 0x1fd6d2ccfd6c4b09;
        pcStack_f8 = "world/data/stain/high_prec_stain_data/snow_ride_b";
        local_f0 = 0x31;
        local_e8 = (long *)0x0;
        FUN_00d1b980(*puVar2,&local_100,0);
        if (local_e8 != (long *)0x0) {
          (**(code **)(*local_e8 + 0x20))();
        }
        local_120 = 0x980a5e01548c2332;
        pcStack_118 = "world/data/stain/high_prec_stain_data/sand_ride_b";
        local_110 = 0x31;
        local_108 = (long *)0x0;
        FUN_00d1b980(*puVar2,&local_120,1);
        plVar8 = local_108;
      }
      goto joined_r0x00d19f24;
    }
    if (iVar5 != 0) goto LAB_00d19f28;
    local_60 = param_1;
    uVar11 = FUN_00d1d7c4(param_1[1],param_2,&local_60);
    FUN_00d1bff0(&local_58,uVar11);
    local_38 = (long *)param_1[0x28];
    param_1[0x28] = 0;
    FUN_00d1b3b4(&local_38);
    puVar1 = local_58;
    local_58 = (undefined8 *)0x0;
    param_1[0x28] = puVar1;
    FUN_00d1b3b4(&local_58);
    local_58 = param_1;
    FUN_00d1b2f0(&local_38,param_1[1],param_2,&local_58);
    FUN_00d1b100(puVar2,&local_38);
    if (local_38 == (long *)0x0) goto LAB_00d19f28;
    lVar9 = local_38[6];
    psVar3 = (short *)(lVar9 + 0x1a);
    do {
      sVar4 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar4 != 1) {
      if (sVar4 == 0) goto LAB_00d1a184;
      goto LAB_00d19f28;
    }
    *(undefined8 *)(lVar9 + 0x10) = 0;
    pcVar10 = *(code **)(*local_38 + 0x50);
  }
  (*pcVar10)();
LAB_00d19f28:
  FUN_00d1af18(param_1 + 0x2b);
  return;
}



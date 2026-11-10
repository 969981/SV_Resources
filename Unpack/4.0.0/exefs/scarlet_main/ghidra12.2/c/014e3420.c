/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014e3420; name: FUN_014e3420
 */


void FUN_014e3420(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *local_e8;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined1 *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_2 == 0) {
    plVar8 = *(long **)(param_1 + 0x30);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x58))(plVar8);
    }
    local_60 = 0x1eff1a6095dc07c;
    pcStack_58 = "L_header_team_00/P_lock_00";
    local_50 = 0x1a;
    uStack_48 = 0;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x58))(plVar8);
      lVar6 = FUN_00c8c7b4(plVar8[0x2e],&local_60);
      (**(code **)(*plVar8 + 0x60))(plVar8);
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
      }
      (**(code **)(*plVar8 + 0x60))(plVar8);
    }
    local_80 = 0x9b5261aff48e9036;
    pcStack_78 = "L_header_team_00/T_name_box_00";
    local_70 = 0x1e;
    local_68 = (long *)0x0;
    local_a0 = &DAT_e6b50e272d8cd992;
    puStack_98 = &DAT_03c3b7e8;
    local_90 = 3;
    uStack_88 = 0;
    local_c0 = 0xbc3d87418a07cff8;
    pcStack_b8 = "msg_ui_box_top_00";
    local_b0 = 0x11;
    local_a8 = (long *)0x0;
    FUN_014a9284(param_1,&local_80,&local_a0,&local_c0);
    plVar8 = local_68;
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
      plVar8 = local_68;
    }
  }
  else {
    uVar7 = FUN_01195854();
    plVar8 = *(long **)(param_1 + 0x30);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x58))(plVar8);
    }
    local_60 = 0x1eff1a6095dc07c;
    pcStack_58 = "L_header_team_00/P_lock_00";
    local_50 = 0x1a;
    uStack_48 = 0;
    bVar5 = FUN_014e797c(uVar7,param_2 + -1);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x58))(plVar8);
      lVar6 = FUN_00c8c7b4(plVar8[0x2e],&local_60);
      (**(code **)(*plVar8 + 0x60))(plVar8);
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe | bVar5 & 1;
      }
      (**(code **)(*plVar8 + 0x60))(plVar8);
    }
    local_e0 = 0x9b5261aff48e9036;
    pcStack_d8 = "L_header_team_00/T_name_box_00";
    local_d0 = 0x1e;
    local_c8 = (long *)0x0;
    FUN_014e8ffc(&local_e8,uVar7,param_2 + -1);
    FUN_014e4b9c(param_1,&local_e0,&local_e8);
    plVar8 = local_c8;
    if (local_e8 != (long *)0x0) {
      plVar1 = local_e8 + 5;
      do {
        lVar6 = *plVar1;
        iVar4 = (int)lVar6 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_e8 + 0x10))();
        plVar8 = local_c8;
      }
      else if ((int)lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  return;
}



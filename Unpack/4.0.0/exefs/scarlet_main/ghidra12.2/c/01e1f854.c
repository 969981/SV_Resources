/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e1f854; name: FUN_01e1f854
 */


float FUN_01e1f854(long param_1,int param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  float local_74;
  undefined1 *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  lVar8 = *(long *)(param_1 + 0x90);
  if ((lVar8 != 0) && (*(short *)(lVar8 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar9 = *(short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01e1f8bc;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01e1f8bc:
        bVar4 = false;
      }
      if (bVar4) {
        lVar8 = *(long *)(lVar8 + 0x10);
        if (lVar8 == 0) {
          return 0.0;
        }
        plVar10 = (long *)(lVar8 + -0x28);
        local_74 = 0.0;
        if (param_2 == 0) {
          local_50 = 0xc83b26997b3b80eb;
          pcStack_48 = "Top/poke_default/ground_state/move/move_base/turn/0_turn";
        }
        else if (param_2 == 2) {
          local_50 = 0xb93a711180525431;
          pcStack_48 = "Top/poke_default/ground_state/move/move_base/turn/2_turn";
        }
        else {
          if (param_2 != 1) goto LAB_01e1f988;
          local_50 = 0x6389dec2cd2dc7e2;
          pcStack_48 = "Top/poke_default/ground_state/move/move_base/turn/1_turn";
        }
        local_40 = 0x38;
        local_38 = (long *)0x0;
        local_70 = &DAT_afc4d6c05abef19e;
        pcStack_68 = "default";
        local_60 = 7;
        local_58 = (long *)0x0;
        lVar7 = FUN_011c61c0(plVar10,&local_50,0,&local_70,0);
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x20))();
        }
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x20))();
        }
        if (lVar7 != 0) {
          uVar5 = FUN_01e1fa5c(lVar7);
          uVar6 = FUN_01e1fa9c(lVar7);
          if (uVar6 != 0) {
            local_74 = (float)uVar5 / (float)uVar6;
          }
        }
LAB_01e1f988:
        lVar8 = *(long *)(lVar8 + 0x70);
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar9 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar9 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar10 + 0x50))(plVar10);
          return local_74;
        }
        if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.",local_74);
        }
        return local_74;
      }
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  return 0.0;
}



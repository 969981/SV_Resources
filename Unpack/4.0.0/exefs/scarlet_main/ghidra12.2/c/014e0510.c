/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014e0510; name: FUN_014e0510
 */


void FUN_014e0510(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined1 *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  lVar8 = *(long *)(param_1 + 0x120);
  if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) {
    plVar9 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar5 = *(short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar5) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_014e08a0;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_014e08a0:
        bVar4 = false;
      }
      if (bVar4) {
        plVar9 = (long *)0x0;
        if (*(long *)(lVar8 + 0x10) != 0) {
          plVar9 = (long *)(*(long *)(lVar8 + 0x10) + -0x28);
        }
        break;
      }
      plVar9 = (long *)0x0;
      sVar5 = sVar2;
    } while (sVar2 != 0);
  }
  lVar8 = *(long *)(param_1 + 0x140);
  if ((lVar8 == 0) || (*(short *)(lVar8 + 0x1a) == 0)) {
    plVar10 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar8 + 0x1a);
    sVar5 = *(short *)(lVar8 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar5) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_014e0840;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_014e0840:
        bVar4 = false;
      }
      if (bVar4) {
        plVar10 = (long *)0x0;
        if (*(long *)(lVar8 + 0x10) != 0) {
          plVar10 = (long *)(*(long *)(lVar8 + 0x10) + -0x28);
        }
        break;
      }
      plVar10 = (long *)0x0;
      sVar5 = sVar2;
    } while (sVar2 != 0);
  }
  if (plVar9 == (long *)0x0) {
    if (plVar10 == (long *)0x0) {
      return;
    }
  }
  else {
    if (plVar10 == (long *)0x0) goto LAB_014e0728;
    plVar11 = (long *)plVar10[0xe];
    if (plVar11 != (long *)0x0) {
      lVar8 = plVar11[6];
      if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar5 == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        *(undefined8 *)(lVar8 + 8) = uVar7;
        *(undefined4 *)(lVar8 + 0x1c) = 0xfffffffe;
      }
      else if (sVar5 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      local_60 = 0xd7b816a637206678;
      pcStack_58 = "control_left_foot_ik";
      local_50 = 0x14;
      local_48 = (long *)0x0;
      uVar6 = (**(code **)(*plVar11 + 0x90))(plVar11,&local_60);
      *(undefined4 *)(param_1 + 0x160) = uVar6;
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      local_60 = 0x22e5b1e124cc411;
      pcStack_58 = "left_foot";
      local_50 = 9;
      local_48 = (long *)0x0;
      local_80 = &DAT_afc4d6c05abef19e;
      pcStack_78 = "default";
      local_70 = 7;
      local_68 = (long *)0x0;
      sVar5 = FUN_01407a7c(plVar9,&local_60,&local_80);
      *(int *)(param_1 + 0x164) = (int)sVar5;
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      local_60 = 0xf7dc12c57c22eda1;
      pcStack_58 = "control_right_foot_ik";
      local_50 = 0x15;
      local_48 = (long *)0x0;
      uVar6 = (**(code **)(*plVar11 + 0x90))(plVar11,&local_60);
      *(undefined4 *)(param_1 + 0x168) = uVar6;
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      local_60 = 0x9623aa0dff63508e;
      pcStack_58 = "right_foot";
      local_50 = 10;
      local_48 = (long *)0x0;
      local_80 = &DAT_afc4d6c05abef19e;
      pcStack_78 = "default";
      local_70 = 7;
      local_68 = (long *)0x0;
      sVar5 = FUN_01407a7c(plVar9,&local_60,&local_80);
      *(int *)(param_1 + 0x16c) = (int)sVar5;
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      *(undefined1 *)(param_1 + 0x170) = 1;
      lVar8 = plVar11[6];
      psVar1 = (short *)(lVar8 + 0x1a);
      do {
        sVar5 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar5 == 1) {
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar11 + 0x50))(plVar11);
      }
      else if (sVar5 == 0) goto LAB_014e08cc;
    }
  }
  lVar8 = plVar10[6];
  psVar1 = (short *)(lVar8 + 0x1a);
  do {
    sVar5 = *psVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar4) {
      *psVar1 = sVar5 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar5 == 1) {
    *(undefined8 *)(lVar8 + 0x10) = 0;
    (**(code **)(*plVar10 + 0x50))(plVar10);
  }
  else if (sVar5 == 0) {
LAB_014e08cc:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
  if (plVar9 == (long *)0x0) {
    return;
  }
LAB_014e0728:
  (**(code **)(*plVar9 + 0x60))(plVar9);
  return;
}



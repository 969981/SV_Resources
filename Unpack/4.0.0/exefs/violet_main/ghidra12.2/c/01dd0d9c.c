/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dd0d9c; name: FUN_01dd0d9c
 */


void FUN_01dd0d9c(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  short sVar8;
  long *plVar9;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  long *local_30;
  long *local_28;
  
  lVar6 = *(long *)(param_1 + 0x120);
  if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
    plVar9 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar6 + 0x1a);
    sVar8 = *(short *)(lVar6 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01dd0fc0;
        bVar4 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01dd0fc0:
        bVar4 = false;
      }
      if (bVar4) {
        plVar9 = (long *)0x0;
        if (*(long *)(lVar6 + 0x10) != 0) {
          plVar9 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
        }
        break;
      }
      plVar9 = (long *)0x0;
      sVar8 = sVar2;
    } while (sVar2 != 0);
  }
  FUN_00cebc38(&local_30,plVar9);
  local_50 = 0xd319af951538745b;
  pcStack_48 = "pokebox_search_00";
  local_40 = 0x11;
  local_38 = (long *)0x0;
  FUN_00cb7f10(&local_28,local_30 + 8,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x60))();
  }
  if (plVar9 != (long *)0x0) {
    lVar6 = plVar9[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar8 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar9 + 0x50))(plVar9);
    }
    else if (sVar8 == 0) goto LAB_01dd0f08;
  }
  uVar5 = FUN_0104cf4c(local_28 + 0x21,&local_50);
  local_50 = 0xd0abee268fd3cd32;
  pcStack_48 = "Box";
  local_40 = 3;
  local_38 = (long *)0x0;
  FUN_01513174(uVar5,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (*(int *)(param_1 + 0x1718) == 0x14) {
    lVar6 = *(long *)(param_1 + 0x1b8);
    if (lVar6 != 0) {
      uVar7 = 0x14;
LAB_01dd0e70:
      *(undefined4 *)(param_1 + 0x170) = uVar7;
      *(undefined4 *)(lVar6 + 0x30) = uVar7;
    }
  }
  else if (*(int *)(param_1 + 0x284) - 1U < 4) {
    FUN_01dd0fec(param_1);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x1b8);
    if (lVar6 != 0) {
      uVar7 = 2;
      goto LAB_01dd0e70;
    }
  }
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar8 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar8 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*local_28 + 0x50))();
    }
    else if (sVar8 == 0) {
LAB_01dd0f08:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}



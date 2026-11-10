/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01de2a8c; name: FUN_01de2a8c
 */


void FUN_01de2a8c(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  short sVar9;
  long *plVar10;
  long alStack_c0 [12];
  long *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  lVar5 = *(long *)(param_1 + 0x120);
  if (lVar5 == 0) {
    return;
  }
  if (*(short *)(lVar5 + 0x1a) == 0) {
    return;
  }
  psVar1 = (short *)(lVar5 + 0x1a);
  sVar9 = *(short *)(lVar5 + 0x1a);
  do {
    sVar2 = *psVar1;
    if (sVar2 == sVar9) {
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_01de2af4;
      bVar8 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01de2af4:
      bVar8 = false;
    }
    if (bVar8) {
      lVar5 = *(long *)(lVar5 + 0x10);
      if (lVar5 == 0) {
        return;
      }
      lVar6 = *(long *)(param_1 + 0x120);
      if ((lVar6 == 0) || (*(short *)(lVar6 + 0x1a) == 0)) {
        plVar10 = (long *)0x0;
        goto LAB_01de2b30;
      }
      psVar1 = (short *)(lVar6 + 0x1a);
      sVar9 = *(short *)(lVar6 + 0x1a);
      break;
    }
    sVar9 = sVar2;
    if (sVar2 == 0) {
      return;
    }
  } while( true );
  while( true ) {
    plVar10 = (long *)0x0;
    sVar9 = sVar2;
    if (sVar2 == 0) break;
    sVar2 = *psVar1;
    if (sVar2 == sVar9) {
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_01de2e38;
      bVar8 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_01de2e38:
      bVar8 = false;
    }
    if (bVar8) {
      plVar10 = (long *)0x0;
      if (*(long *)(lVar6 + 0x10) != 0) {
        plVar10 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
      }
      break;
    }
  }
LAB_01de2b30:
  FUN_00cebc38(&local_60,plVar10);
  plVar4 = local_60;
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x60))(local_60);
  }
  if (plVar10 != (long *)0x0) {
    lVar6 = plVar10[6];
    psVar1 = (short *)(lVar6 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar9 == 1) {
      *(undefined8 *)(lVar6 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar9 == 0) goto LAB_01de2d3c;
  }
  lVar6 = *(long *)(lVar5 + 8);
  psVar1 = (short *)(lVar6 + 0x1a);
  do {
    sVar9 = *psVar1;
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar8) {
      *psVar1 = sVar9 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (sVar9 == 1) {
    *(undefined8 *)(lVar6 + 0x10) = 0;
    (**(code **)(*(long *)(lVar5 + -0x28) + 0x50))((long *)(lVar5 + -0x28));
  }
  else if (sVar9 == 0) goto LAB_01de2d3c;
  if (plVar4 == (long *)0x0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x120);
  if ((lVar5 == 0) || (*(short *)(lVar5 + 0x1a) == 0)) {
    plVar10 = (long *)0x0;
  }
  else {
    psVar1 = (short *)(lVar5 + 0x1a);
    sVar9 = *(short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      if (sVar2 == sVar9) {
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01de2e98;
        bVar8 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01de2e98:
        bVar8 = false;
      }
      if (bVar8) {
        plVar10 = (long *)0x0;
        if (*(long *)(lVar5 + 0x10) != 0) {
          plVar10 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
        }
        break;
      }
      plVar10 = (long *)0x0;
      sVar9 = sVar2;
    } while (sVar2 != 0);
  }
  FUN_00cebc38(&local_40,plVar10);
  local_60 = (long *)0xd319af951538745b;
  pcStack_58 = "pokebox_search_00";
  local_50 = 0x11;
  local_48 = (long *)0x0;
  FUN_00cb7f10(&local_38,local_40 + 8,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x60))();
  }
  if (plVar10 != (long *)0x0) {
    lVar5 = plVar10[6];
    psVar1 = (short *)(lVar5 + 0x1a);
    do {
      sVar9 = *psVar1;
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar9 == 1) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))(plVar10);
    }
    else if (sVar9 == 0) goto LAB_01de2d3c;
  }
  if (local_38 != (long *)0x0) {
    lVar5 = FUN_0104cf4c(local_38 + 0x21,&local_60);
    if (lVar5 != 0) {
      local_60 = (long *)0xd0abee268fd3cd32;
      pcStack_58 = "Box";
      local_50 = 3;
      local_48 = (long *)0x0;
      FUN_01513174(lVar5,&local_60);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      pcVar7 = *(code **)(lVar5 + 1000);
      alStack_c0[0] = param_1;
      if (pcVar7 != (code *)0x0) {
        *(undefined8 *)(lVar5 + 0x3f0) = 0;
        *(undefined8 *)(lVar5 + 0x3f8) = 0;
        *(undefined8 *)(lVar5 + 0x3e0) = 0;
        *(undefined8 *)(lVar5 + 1000) = 0;
        (*pcVar7)(lVar5 + 0x400);
      }
      FUN_00a6c864(alStack_c0,lVar5 + 0x400);
      *(undefined1 **)(lVar5 + 0x3f8) = &LAB_00a6c870;
      *(undefined8 *)(lVar5 + 0x3e0) = &LAB_00a6c844;
      *(code **)(lVar5 + 1000) = FUN_00a6c860;
      *(code **)(lVar5 + 0x3f0) = FUN_00a6c864;
      FUN_00a6c860(alStack_c0);
    }
    if (local_38 != (long *)0x0) {
      lVar5 = local_38[6];
      psVar1 = (short *)(lVar5 + 0x1a);
      do {
        sVar9 = *psVar1;
        cVar3 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar8) {
          *psVar1 = sVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar9 == 1) {
        *(undefined8 *)(lVar5 + 0x10) = 0;
        (**(code **)(*local_38 + 0x50))();
      }
      else if (sVar9 == 0) {
LAB_01de2d3c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01797a8c; name: FUN_01797a8c
 */


void FUN_01797a8c(long *param_1,char *param_2,undefined4 param_3,char *param_4)

{
  short *psVar1;
  ulong uVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  short sVar8;
  code *pcVar9;
  long *plVar10;
  long *local_50;
  undefined4 local_44;
  long *local_28;
  
  pcVar9 = (code *)*param_1;
  uVar2 = param_1[1];
  cVar3 = *param_4;
  local_44 = param_3;
  if (cVar3 == '\x02') {
    lVar7 = *(long *)(param_4 + 8);
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar8 = *(short *)(lVar7 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar8) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01797be4;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01797be4:
          bVar5 = false;
        }
        if (bVar5) {
          plVar10 = (long *)0x0;
          if (*(long *)(lVar7 + 0x10) != 0) {
            plVar10 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
          }
          plVar6 = plVar10;
          local_50 = plVar10;
          goto LAB_01797ad4;
        }
        sVar8 = sVar4;
      } while (sVar4 != 0);
    }
  }
  else if ((cVar3 == '\x01') || (cVar3 == '\0')) {
    plVar10 = *(long **)(param_4 + 8);
    local_50 = plVar10;
    if (plVar10 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar10 + 0x58))(plVar10);
      plVar6 = plVar10;
    }
    goto LAB_01797ad4;
  }
  plVar10 = (long *)0x0;
  local_50 = (long *)0x0;
  plVar6 = (long *)0x0;
LAB_01797ad4:
  if (*param_2 == '\x01') {
    if (*(long *)(param_2 + 8) != 0) {
      plVar6 = (long *)(*(long *)(param_2 + 8) + ((long)uVar2 >> 1));
      if ((uVar2 & 1) != 0) {
        pcVar9 = *(code **)(pcVar9 + *plVar6);
      }
      local_50 = (long *)0x0;
      local_28 = plVar10;
      (*pcVar9)(plVar6,param_3,&local_28);
      plVar6 = (long *)0x0;
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x60))(local_28);
        plVar6 = (long *)0x0;
      }
    }
  }
  else if (*param_2 == '\0') {
    FUN_01797c14(*(undefined8 *)(param_2 + 8),pcVar9,uVar2,&local_44,&local_50);
    plVar6 = local_50;
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x60))();
  }
  return;
}



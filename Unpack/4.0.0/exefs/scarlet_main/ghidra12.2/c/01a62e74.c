/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a62e74; name: FUN_01a62e74
 */


void FUN_01a62e74(undefined8 param_1,char *param_2,char *param_3,undefined8 param_4)

{
  short *psVar1;
  undefined *puVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  long *local_48;
  long *local_40;
  long *local_38;
  
  cVar3 = *param_2;
  puVar2 = PTR_LAB_047d4f70;
  if (DAT_0480bda8 == '\0') {
    puVar2 = (undefined *)0x0;
  }
  if (cVar3 == '\x02') {
    lVar6 = *(long *)(param_2 + 8);
    if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar6 + 0x1a);
      sVar7 = *(short *)(lVar6 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar7) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01a62fd8;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01a62fd8:
          bVar5 = false;
        }
        if (bVar5) {
          local_38 = (long *)0x0;
          if (*(long *)(lVar6 + 0x10) != 0) {
            local_38 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
          }
          goto LAB_01a62ec4;
        }
        sVar7 = sVar4;
      } while (sVar4 != 0);
    }
LAB_01a62ec0:
    local_38 = (long *)0x0;
  }
  else {
    if ((cVar3 != '\x01') && (cVar3 != '\0')) goto LAB_01a62ec0;
    local_38 = *(long **)(param_2 + 8);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x58))();
    }
  }
LAB_01a62ec4:
  cVar3 = *param_3;
  if (cVar3 == '\x02') {
    lVar6 = *(long *)(param_3 + 8);
    if ((lVar6 != 0) && (*(short *)(lVar6 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar6 + 0x1a);
      sVar7 = *(short *)(lVar6 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar7) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_01a63020;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01a63020:
          bVar5 = false;
        }
        if (bVar5) {
          local_40 = (long *)0x0;
          if (*(long *)(lVar6 + 0x10) != 0) {
            local_40 = (long *)(*(long *)(lVar6 + 0x10) + -0x28);
          }
          goto LAB_01a62edc;
        }
        sVar7 = sVar4;
      } while (sVar4 != 0);
    }
  }
  else if ((cVar3 == '\x01') || (cVar3 == '\0')) {
    local_40 = *(long **)(param_3 + 8);
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x58))();
    }
    goto LAB_01a62edc;
  }
  local_40 = (long *)0x0;
LAB_01a62edc:
  FUN_017c3fdc(&local_48,param_4);
  FUN_01a63064(param_1,puVar2,0,&local_38,&local_40,&local_48);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x60))();
  }
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x60))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x60))();
  }
  return;
}



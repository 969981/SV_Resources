/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01b2de48; name: FUN_01b2de48
 */


void FUN_01b2de48(char *param_1,undefined4 param_2)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  long *plVar7;
  long *local_28;
  
  cVar2 = *param_1;
  if (cVar2 == '\x02') {
    lVar5 = *(long *)(param_1 + 8);
    if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar5 + 0x1a);
      sVar6 = *(short *)(lVar5 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar6) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_01b2df08;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01b2df08:
          bVar4 = false;
        }
        if (bVar4) {
          plVar7 = (long *)0x0;
          if (*(long *)(lVar5 + 0x10) != 0) {
            plVar7 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
          }
          break;
        }
        plVar7 = (long *)0x0;
        sVar6 = sVar3;
      } while (sVar3 != 0);
      goto LAB_01b2de74;
    }
  }
  else if ((cVar2 == '\x01') || (cVar2 == '\0')) {
    plVar7 = *(long **)(param_1 + 8);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x58))(plVar7);
    }
    goto LAB_01b2de74;
  }
  plVar7 = (long *)0x0;
LAB_01b2de74:
  local_28 = plVar7;
  FUN_01b2f568(&local_28,param_2);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x60))();
  }
  return;
}



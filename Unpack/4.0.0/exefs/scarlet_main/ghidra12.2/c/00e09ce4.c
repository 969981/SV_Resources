/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e09ce4; name: FUN_00e09ce4
 */


void FUN_00e09ce4(long param_1)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_30;
  undefined4 local_28;
  
  local_28 = *(undefined4 *)(param_1 + 0x23c);
  local_30 = 0x4b08000010;
  FUN_00e08a00(*(long *)(param_1 + 0x180) + 0x28,*(long *)(param_1 + 0x180),&local_30);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(long *)(param_1 + 0x210) != 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x210) + 0x20) = 3;
    plVar6 = *(long **)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x210) = 0;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar1 = plVar6 + 2;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
  }
  lVar7 = *(long *)(param_1 + 0x228);
  if (lVar7 != 0) {
    pcVar2 = (char *)(lVar7 + 100);
    do {
      cVar3 = *pcVar2;
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar2,0x10);
      if (bVar4) {
        *pcVar2 = '\x04';
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (cVar3 == '\x01') {
      *(undefined1 *)(*(long *)(lVar7 + 0x68) + 0x20) = 3;
      plVar6 = *(long **)(lVar7 + 0x68);
      *(undefined8 *)(lVar7 + 0x68) = 0;
      if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
        plVar1 = plVar6 + 2;
        do {
          lVar7 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar6 + 0x18))();
        }
      }
    }
    plVar6 = *(long **)(param_1 + 0x228);
    *(undefined8 *)(param_1 + 0x228) = 0;
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar1 = plVar6 + 2;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))();
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0x220);
  *(undefined8 *)(param_1 + 0x220) = 0;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  *(undefined4 *)(param_1 + 400) = 1;
  *(undefined1 *)(param_1 + 0x198) = 0;
  return;
}



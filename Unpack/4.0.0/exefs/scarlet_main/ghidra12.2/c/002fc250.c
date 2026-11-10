/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002fc250; name: FUN_002fc250
 */


void FUN_002fc250(long *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  iVar3 = FUN_0038dac0(param_1 + 1);
  if (iVar3 == 0) {
    return;
  }
  if ((*param_1 != 0) && (pcVar4 = *(code **)(*param_1 + 0x20), pcVar4 != (code *)0x0)) {
    (*pcVar4)(param_1);
  }
  FUN_0036a810(param_1[9]);
  FUN_0036a810(param_1[10]);
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_00373780(param_1 + 0xc);
  puVar5 = (undefined8 *)param_1[0x17];
  if ((puVar5 != (undefined8 *)0x0) && (plVar6 = (long *)*puVar5, plVar6 != (long *)0x0)) {
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)puVar5[3])(puVar5[4]);
    }
  }
  puVar5 = (undefined8 *)param_1[0x12];
  if ((puVar5 != (undefined8 *)0x0) && (plVar6 = (long *)*puVar5, plVar6 != (long *)0x0)) {
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)puVar5[3])(puVar5[4]);
    }
  }
  FUN_00305490(param_1[0x11]);
  free((void *)param_1[0x1b]);
  puVar5 = (undefined8 *)param_1[0x22];
  if ((puVar5 != (undefined8 *)0x0) && (plVar6 = (long *)*puVar5, plVar6 != (long *)0x0)) {
    do {
      lVar7 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (*(code *)puVar5[3])(puVar5[4]);
    }
  }
  FUN_0038db20(param_1 + 0x26);
  free(param_1);
  return;
}



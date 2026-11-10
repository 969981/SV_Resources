/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005209d8; name: FUN_005209d8
 */


undefined8 * FUN_005209d8(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  for (puVar5 = (undefined8 *)*param_1; puVar5 != (undefined8 *)0x0;
      puVar5 = (undefined8 *)puVar5[4]) {
    if (puVar5[1] == param_2) goto LAB_00520aa0;
  }
  uVar6 = param_1[5];
  if (uVar6 < 0x61) {
    uVar6 = 0x60;
  }
  puVar4 = (undefined8 *)(*(code *)param_1[9])(uVar6);
  *puVar4 = 0;
  puVar4[1] = 0x18;
  plVar1 = param_1 + 2;
  puVar4[2] = uVar6;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + uVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar5 = puVar4 + 3;
  *puVar5 = param_1;
  puVar4[1] = 0x60;
  puVar4[4] = param_2;
  puVar4[5] = puVar4;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[6] = 0;
  puVar4[8] = puVar4 + 0xc;
  puVar4[9] = (long)puVar4 + puVar4[2];
  lVar8 = *param_1;
  puVar4[7] = lVar8;
  lVar7 = *param_1;
  if (lVar7 == lVar8) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = (long)puVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
LAB_00520aa0:
      lVar7 = tpidr_el0;
      *(long *)(lVar7 + 0x10) = param_1[4];
      *(undefined8 **)(lVar7 + 0x18) = puVar5;
      param_1[1] = (long)puVar5;
      return puVar5;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    puVar4[7] = lVar7;
    lVar8 = *param_1;
    if (lVar8 == lVar7) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar3) {
        *param_1 = (long)puVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') goto LAB_00520aa0;
    }
    else {
      ClearExclusiveLocal();
    }
    lVar7 = lVar8;
  } while( true );
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002ecf80; name: FUN_002ecf80
 */


long * FUN_002ecf80(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  
  if (((param_1 == (undefined8 *)0x0) || (param_2 == (undefined8 *)0x0)) || (param_3 != 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar1 = param_1 + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar2 = param_2 + 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = *plVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar6 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  puVar5 = PTR_DAT_047cc970;
  if (plVar6 != (long *)0x0) {
    plVar6[2] = param_1[2];
    plVar6[3] = (long)param_1;
    plVar6[4] = (long)param_2;
    *plVar6 = (long)(puVar5 + 0x10);
    plVar6[1] = 1;
    return plVar6;
  }
  do {
    lVar7 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 + -1 == 0) {
    (**(code **)*param_2)(param_2);
    FUN_0049e790(PTR_LAB_047cba48,param_2);
  }
  do {
    lVar7 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 == 1) {
    (**(code **)*param_1)(param_1);
    FUN_0049e790(PTR_LAB_047cba48,param_1);
  }
  return (long *)0x0;
}



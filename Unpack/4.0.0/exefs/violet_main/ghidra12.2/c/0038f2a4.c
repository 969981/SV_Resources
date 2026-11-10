/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038f2a4; name: FUN_0038f2a4
 */


long * FUN_0038f2a4(undefined8 *param_1,undefined1 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  plVar4 = (long *)param_1[8];
  plVar1 = param_1 + 9;
  plVar6 = (long *)*plVar4;
  if (plVar4 == plVar1) {
    if (plVar6 == (long *)0x0) {
      *param_2 = 1;
      return (long *)0x0;
    }
    param_1[8] = plVar6;
    plVar4 = plVar6;
    plVar6 = (long *)*plVar6;
  }
  if (plVar6 != (long *)0x0) {
    *param_2 = 0;
    param_1[8] = plVar6;
    return plVar4;
  }
  if (plVar4 != (long *)*param_1) {
    *param_2 = 0;
    return (long *)0x0;
  }
  *plVar1 = 0;
  do {
    puVar7 = (undefined8 *)*param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = plVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *puVar7 = plVar1;
  lVar5 = *plVar4;
  *param_2 = 0;
  if (lVar5 == 0) {
    return (long *)0x0;
  }
  param_1[8] = lVar5;
  return plVar4;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002ecb20; name: FUN_002ecb20
 */


undefined8 FUN_002ecb20(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *local_28;
  undefined8 *local_18;
  
  if (((param_3 != 0) || (param_1 == (undefined8 *)0x0)) || (param_2 == (undefined8 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar1 = param_1 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar1 = param_2 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
                    /* try { // try from 002ecb68 to 002ecb73 has its CatchHandler @ 002ecc20 */
  local_28 = param_2;
  local_18 = param_1;
  uVar6 = FUN_002ed408(&local_18,&local_28);
  puVar5 = local_28;
  puVar4 = local_18;
  if (local_28 != (undefined8 *)0x0) {
    plVar1 = local_28 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)*local_28)(local_28);
      FUN_0049e790(PTR_LAB_047cba48,puVar5);
      puVar4 = local_18;
    }
  }
  if (puVar4 != (undefined8 *)0x0) {
    plVar1 = puVar4 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      local_18 = puVar4;
      (**(code **)*puVar4)(puVar4);
      FUN_0049e790(PTR_LAB_047cba48,puVar4);
    }
  }
  return uVar6;
}



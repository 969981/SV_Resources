/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f2c34; name: FUN_002f2c34
 */


void FUN_002f2c34(long *param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *local_30;
  undefined8 *local_28;
  
  local_30 = (undefined8 *)0x0;
  local_28 = (undefined8 *)0x0;
                    /* try { // try from 002f2c4c to 002f2c5b has its CatchHandler @ 002f2d10 */
  FUN_002f48d0(param_1,0,&local_28,&local_30);
  puVar6 = local_30;
  puVar5 = local_28;
  if (local_30 != (undefined8 *)0x0) {
    plVar1 = local_30 + 1;
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
      (**(code **)*local_30)(local_30);
      FUN_0049e790(PTR_LAB_047cba48,puVar6);
      puVar5 = local_28;
    }
  }
  if (puVar5 != (undefined8 *)0x0) {
    plVar1 = puVar5 + 1;
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
      local_28 = puVar5;
      (**(code **)*puVar5)(puVar5);
      FUN_0049e790(PTR_LAB_047cba48,puVar5);
    }
  }
  puVar2 = PTR_DAT_047cc9a8 + 0x10;
  param_1[6] = 0;
  param_1[7] = param_2;
  *param_1 = (long)puVar2;
  return;
}



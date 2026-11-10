/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002c2254; name: FUN_002c2254
 */


void FUN_002c2254(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_002c2254(param_1,*param_2);
  FUN_002c2254(param_1,param_2[1]);
  FUN_002c1d5c(param_2 + 9,param_2[10]);
  puVar5 = (undefined8 *)param_2[4];
  if (puVar5 != (undefined8 *)0x0) {
    plVar1 = puVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)*puVar5)(puVar5);
      FUN_0049e790(PTR_LAB_047cba48,puVar5);
    }
  }
  FUN_0049e790(PTR_LAB_047cba48,param_2);
  return;
}



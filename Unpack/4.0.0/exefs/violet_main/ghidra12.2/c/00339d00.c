/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00339d00; name: FUN_00339d00
 */


void FUN_00339d00(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  *param_1 = (long)(PTR_DAT_047ccc88 + 0x10);
                    /* try { // try from 00339d20 to 00339d6b has its CatchHandler @ 00339d98 */
  FUN_00343d90(param_1[3]);
  plVar3 = (long *)param_1[2];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    FUN_0037af30();
  }
  puVar5 = (undefined8 *)param_1[4];
  if (puVar5 != (undefined8 *)0x0) {
    plVar3 = puVar5 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)*puVar5)(puVar5);
      FUN_0049e790(PTR_LAB_047cba48,puVar5);
      return;
    }
  }
  return;
}



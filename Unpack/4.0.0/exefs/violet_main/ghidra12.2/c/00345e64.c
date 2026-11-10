/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00345e64; name: FUN_00345e64
 */


void FUN_00345e64(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  if (param_1 == 0) {
    return;
  }
  puVar3 = *(undefined8 **)(param_1 + 8);
  if ((puVar3 != (undefined8 *)0x0) && (plVar4 = (long *)*puVar3, plVar4 != (long *)0x0)) {
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
                    /* try { // try from 00345e9c to 00345e9f has its CatchHandler @ 00345f08 */
      (*(code *)puVar3[3])(puVar3[4]);
    }
  }
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  if (puVar3 != (undefined8 *)0x0) {
    plVar4 = puVar3 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*puVar3)(puVar3);
      FUN_0049e790(PTR_LAB_047cba48,puVar3);
    }
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1);
  return;
}



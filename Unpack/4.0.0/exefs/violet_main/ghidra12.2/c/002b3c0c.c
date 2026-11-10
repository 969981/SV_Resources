/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b3c0c; name: FUN_002b3c0c
 */


void FUN_002b3c0c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = (long)(PTR_DAT_047cc780 + 0x10);
                    /* try { // try from 002b3c2c to 002b3c2f has its CatchHandler @ 002b3cbc */
  FUN_00370390(param_1[3]);
  puVar4 = (undefined8 *)param_1[7];
  param_1[7] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 002b3c44 to 002b3c47 has its CatchHandler @ 002b3cb8 */
    (**(code **)*puVar4)();
  }
  puVar4 = (undefined8 *)param_1[6];
  param_1[6] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 002b3c5c to 002b3c5f has its CatchHandler @ 002b3cb4 */
    (**(code **)*puVar4)();
  }
  plVar6 = (long *)param_1[2];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar6 + 8))(plVar6);
      FUN_0049e790(PTR_LAB_047cba48,plVar6);
      return;
    }
  }
  return;
}



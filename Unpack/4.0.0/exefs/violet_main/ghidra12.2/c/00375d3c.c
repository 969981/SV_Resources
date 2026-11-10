/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00375d3c; name: FUN_00375d3c
 */


void FUN_00375d3c(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  
  puVar3 = (undefined8 *)*param_1;
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
                    /* try { // try from 00375d70 to 00375d9f has its CatchHandler @ 00375dc4 */
      (*(code *)puVar3[3])(puVar3[4]);
    }
  }
  puVar3 = (undefined8 *)param_1[4];
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
      (*(code *)puVar3[3])(puVar3[4]);
    }
  }
  if (param_1[0xf] != 0) {
                    /* try { // try from 00375dac to 00375daf has its CatchHandler @ 00375dc8 */
    (*(code *)param_1[0xe])();
  }
                    /* try { // try from 00375db4 to 00375db7 has its CatchHandler @ 00375ddc */
  FUN_0038db20(param_1 + 10);
  return;
}



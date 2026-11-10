/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00305f14; name: FUN_00305f14
 */


void FUN_00305f14(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  
  *param_1 = (long)(PTR_DAT_047cca90 + 0x10);
  if (param_1[0xc] != 0) {
                    /* try { // try from 00305f38 to 00305f3b has its CatchHandler @ 00305f94 */
    FUN_00350f40();
  }
  puVar5 = (undefined8 *)param_1[0x11];
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
                    /* try { // try from 00305f60 to 00305f63 has its CatchHandler @ 00305fb0 */
  FUN_0038db20(param_1 + 2);
  return;
}



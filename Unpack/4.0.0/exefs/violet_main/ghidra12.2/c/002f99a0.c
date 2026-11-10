/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f99a0; name: FUN_002f99a0
 */


void FUN_002f99a0(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  iVar3 = FUN_0038dac0(param_1 + 0x430);
  if ((param_1 == 0) || (iVar3 == 0)) {
    return;
  }
                    /* try { // try from 002f99bc to 002f9a47 has its CatchHandler @ 002f9a64 */
  FUN_00350f40(*(undefined8 *)(param_1 + 8));
  FUN_0038bfe0(*(undefined8 *)(param_1 + 0x10));
  FUN_00300ae0(*(undefined8 *)(param_1 + 0x18));
  FUN_00368470(param_1 + 0x78);
  FUN_00368470(param_1 + 0x1a0);
  puVar4 = *(undefined8 **)(param_1 + 0x2c8);
  if ((puVar4 != (undefined8 *)0x0) && (plVar5 = (long *)*puVar4, plVar5 != (long *)0x0)) {
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)puVar4[3])(puVar4[4]);
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x2e8);
  if ((puVar4 != (undefined8 *)0x0) && (plVar5 = (long *)*puVar4, plVar5 != (long *)0x0)) {
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)puVar4[3])(puVar4[4]);
    }
  }
  FUN_00368470(param_1 + 0x308);
  FUN_0038db20(param_1 + 0x20);
  FUN_0049e790(PTR_LAB_047cba48,param_1);
  return;
}



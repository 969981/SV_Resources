/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032d470; name: FUN_0032d470
 */


void FUN_0032d470(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
                    /* try { // try from 0032d494 to 0032d497 has its CatchHandler @ 0032d504 */
  FUN_002814ac();
  uVar6 = *(undefined8 *)(param_2 + 0x98);
  puVar5 = (undefined8 *)param_1[0x13];
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
  param_1[0x13] = uVar6;
  *(undefined8 *)(param_2 + 0x98) = 0;
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_2 + 0xa0) = 0;
  return;
}



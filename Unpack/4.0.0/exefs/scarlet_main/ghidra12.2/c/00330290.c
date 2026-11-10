/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00330290; name: FUN_00330290
 */


void FUN_00330290(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
                    /* try { // try from 003302b4 to 003302b7 has its CatchHandler @ 00330324 */
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
  uVar6 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_2 + 0x98) = 0;
  param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x14] = uVar6;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  return;
}



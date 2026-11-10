/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002865a8; name: FUN_002865a8
 */


void FUN_002865a8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_LAB_0448d3e8;
                    /* try { // try from 002865c4 to 002865c7 has its CatchHandler @ 00286690 */
  FUN_00343d90(param_1[7]);
  puVar4 = (undefined8 *)param_1[10];
  param_1[10] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 002865dc to 002865df has its CatchHandler @ 0028668c */
    (**(code **)*puVar4)();
  }
  plVar6 = (long *)param_1[8];
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
      puVar4 = (undefined8 *)param_1[6];
      goto joined_r0x00286604;
    }
  }
  puVar4 = (undefined8 *)param_1[6];
joined_r0x00286604:
  if (puVar4 != (undefined8 *)0x0) {
    plVar6 = puVar4 + 1;
    do {
      lVar5 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)*puVar4)(puVar4);
      FUN_0049e790(PTR_LAB_047cba48,puVar4);
      FUN_0032d30c(param_1);
      return;
    }
  }
  FUN_0032d30c(param_1);
  return;
}



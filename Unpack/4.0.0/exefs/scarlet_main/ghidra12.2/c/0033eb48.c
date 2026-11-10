/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0033eb48; name: FUN_0033eb48
 */


void FUN_0033eb48(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = (long)(PTR_DAT_047cccd8 + 0x10);
  puVar4 = (undefined8 *)param_1[0xc];
  param_1[0xc] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 0033eb78 to 0033eb7b has its CatchHandler @ 0033ec68 */
    (**(code **)*puVar4)();
  }
  plVar6 = (long *)param_1[10];
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
    }
  }
                    /* try { // try from 0033eba0 to 0033eba3 has its CatchHandler @ 0033ec6c */
  FUN_0038db20(param_1 + 6);
  puVar4 = (undefined8 *)param_1[5];
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
      puVar4 = (undefined8 *)param_1[3];
      goto joined_r0x0033ebc8;
    }
  }
  puVar4 = (undefined8 *)param_1[3];
joined_r0x0033ebc8:
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
      return;
    }
  }
  return;
}



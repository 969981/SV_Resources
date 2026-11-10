/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00295ce8; name: FUN_00295ce8
 */


void FUN_00295ce8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_LAB_0448d8a0;
  if (param_1[3] == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00295df8 to 00295dfb has its CatchHandler @ 00295dfc */
    abort();
  }
                    /* try { // try from 00295d08 to 00295d57 has its CatchHandler @ 00295dfc */
  FUN_0036b880();
  FUN_00373780(param_1 + 4);
  FUN_00373780(param_1 + 0x16);
  FUN_0036a810(param_1[7]);
  FUN_0036a810(param_1[0xc]);
  puVar4 = (undefined8 *)param_1[0x1a];
  if ((puVar4 != (undefined8 *)0x0) && (plVar5 = (long *)*puVar4, plVar5 != (long *)0x0)) {
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (*(code *)puVar4[3])(puVar4[4]);
    }
  }
  puVar4 = (undefined8 *)param_1[0x1e];
  if (puVar4 != (undefined8 *)0x0) {
    plVar5 = puVar4 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)*puVar4)(puVar4);
      FUN_0049e790(PTR_LAB_047cba48,puVar4);
      plVar5 = (long *)param_1[2];
      goto joined_r0x00295d7c;
    }
  }
  plVar5 = (long *)param_1[2];
joined_r0x00295d7c:
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 8))(plVar5);
      FUN_0049e790(PTR_LAB_047cba48,plVar5);
      return;
    }
  }
  return;
}



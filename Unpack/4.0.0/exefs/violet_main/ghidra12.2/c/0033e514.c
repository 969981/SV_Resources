/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033e514; name: FUN_0033e514
 */


void FUN_0033e514(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_18 [8];
  
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_047cccc8 + 0x10;
  param_1[4] = param_2;
  *param_1 = (long)puVar1;
  param_1[1] = 1;
  plVar2 = (long *)(param_2 + 0x40);
  do {
    lVar6 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar6 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = param_1[4];
  plVar2 = (long *)(lVar6 + 0x40);
  do {
    lVar7 = *plVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar7 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar7 + -1 == 0) {
                    /* try { // try from 0033e570 to 0033e5b3 has its CatchHandler @ 0033e5b4 */
    puVar5 = (undefined8 *)FUN_0038c780(0x30);
    *puVar5 = &LAB_0033bc60;
    puVar5[1] = lVar6;
    puVar5[3] = PTR_FUN_047cc978;
    puVar5[4] = puVar5;
    puVar5[5] = 0;
    FUN_0035351c(auStack_18,puVar5 + 2,0);
  }
  return;
}



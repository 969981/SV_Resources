/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033d658; name: FUN_0033d658
 */


void FUN_0033d658(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  void *__ptr;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_18 [8];
  
  lVar7 = param_1[4];
  *param_1 = (long)(PTR_DAT_047cccc0 + 0x10);
  plVar6 = (long *)(lVar7 + 0x40);
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
                    /* try { // try from 0033d690 to 0033d6c3 has its CatchHandler @ 0033d76c */
    puVar4 = (undefined8 *)FUN_0038c780(0x30);
    *puVar4 = &LAB_0033bc60;
    puVar4[1] = lVar7;
    puVar4[3] = PTR_FUN_047cc978;
    puVar4[4] = puVar4;
    puVar4[5] = 0;
    FUN_0035351c(auStack_18,puVar4 + 2,0);
  }
  FUN_0033d134(param_1 + 8,param_1[9]);
  puVar4 = (undefined8 *)param_1[6];
  param_1[8] = (long)(param_1 + 9);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[6] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 0033d6f0 to 0033d6f3 has its CatchHandler @ 0033d768 */
    (**(code **)*puVar4)();
  }
  __ptr = (void *)param_1[5];
  param_1[5] = 0;
  if (__ptr != (void *)0x0) {
                    /* try { // try from 0033d700 to 0033d703 has its CatchHandler @ 0033d764 */
    free(__ptr);
  }
  *param_1 = (long)(PTR_DAT_047cc5a8 + 0x10);
  plVar6 = (long *)param_1[3];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}



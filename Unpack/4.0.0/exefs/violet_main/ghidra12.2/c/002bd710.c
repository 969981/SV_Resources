/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002bd710; name: FUN_002bd710
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_002bd710(long *param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  
  *param_1 = (long)(PTR_DAT_047cc7f0 + 0x10);
  FUN_002c5f4c(param_1 + 0x2a,param_1[0x2b]);
  FUN_002c5eb0(param_1 + 0x27,param_1[0x28]);
  FUN_002c5e3c(param_1 + 0x24,param_1[0x25]);
  FUN_002c5d8c(param_1 + 0x21,param_1[0x22]);
  if ((char)param_1[0x1d] != '\0') {
    plVar7 = param_1 + 0x1e;
    if (*plVar7 != 0) {
      FUN_002c14bc(plVar7);
      FUN_0049e790(PTR_LAB_047cba48,*plVar7);
    }
    *(undefined1 *)(param_1 + 0x1d) = 0;
  }
  if ((char)param_1[0x15] != '\0') {
    if ((char)param_1[0x19] != '\0') {
      plVar7 = param_1 + 0x1a;
      if (*plVar7 != 0) {
        FUN_002c14bc(plVar7);
        FUN_0049e790(PTR_LAB_047cba48,*plVar7);
      }
      *(undefined1 *)(param_1 + 0x19) = 0;
    }
    if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,param_1[0x18]);
    }
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  puVar5 = (undefined8 *)param_1[0x14];
  param_1[0x14] = 0;
  if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 002bd7f4 to 002bd7f7 has its CatchHandler @ 002bd8f0 */
    (**(code **)*puVar5)();
  }
  puVar5 = (undefined8 *)param_1[0x13];
  param_1[0x13] = 0;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    FUN_0049e790(PTR_LAB_047cba48,puVar5);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0xd);
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,param_1[0x12]);
    bVar2 = *(byte *)(param_1 + 0xd);
  }
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10);
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,param_1[0xf]);
    bVar2 = *(byte *)(param_1 + 10);
  }
  if ((bVar2 & 1) == 0) {
    lVar6 = param_1[6];
    param_1[6] = 0;
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,param_1[0xc]);
    lVar6 = param_1[6];
    param_1[6] = 0;
  }
  if (lVar6 != 0) {
    FUN_002c5a30();
  }
  plVar7 = (long *)param_1[4];
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}



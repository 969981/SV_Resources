/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00299f48; name: FUN_00299f48
 */


void FUN_00299f48(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long *local_108;
  long *local_100;
  undefined1 auStack_f0 [176];
  
  lVar7 = param_1 + 0x10;
                    /* try { // try from 00299f68 to 00299f6f has its CatchHandler @ 0029a1d8 */
  FUN_0038db40(lVar7);
  plVar8 = *(long **)(param_1 + 0x30);
  if (plVar8 == (long *)0x0) {
    *(undefined1 *)(param_1 + 0xe8) = 1;
    FUN_00330450(param_1 + 0x38,param_2);
                    /* try { // try from 0029a104 to 0029a10b has its CatchHandler @ 0029a124 */
    FUN_0038db60(lVar7);
  }
  else {
    plVar1 = plVar8 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
                    /* try { // try from 00299f8c to 00299f93 has its CatchHandler @ 0029a1d4 */
    FUN_0038db60(lVar7);
    puVar6 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0xc0);
    if (puVar6 != (undefined8 *)0x0) {
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_00330290(auStack_f0,param_2);
      *puVar6 = plVar8;
      FUN_00330290(puVar6 + 1,auStack_f0);
      *(undefined2 *)(puVar6 + 0x17) = 0x100;
      FUN_00330188(auStack_f0);
    }
    lVar7 = plVar8[2];
    plVar3 = (long *)plVar8[3];
    if (plVar3 != (long *)0x0) {
      plVar2 = plVar3 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = *plVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_100 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    local_100[4] = (long)puVar6;
    *local_100 = (long)&PTR_LAB_0448dde8;
    local_100[1] = 0;
    local_100[2] = 0;
    local_108 = local_100 + 3;
    *local_108 = (long)&PTR_LAB_0448de20;
                    /* try { // try from 0029a03c to 0029a04b has its CatchHandler @ 0029a128 */
    FUN_003627bc(lVar7,&local_108,auStack_f0);
    if (local_100 != (long *)0x0) {
      plVar2 = local_100 + 1;
      do {
        lVar7 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*local_100 + 0x10))(local_100);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plVar3 != (long *)0x0) {
      plVar2 = plVar3 + 1;
      do {
        lVar7 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
    do {
      lVar7 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar8 + 8))(plVar8);
      FUN_0049e790(PTR_LAB_047cba48,plVar8);
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002995dc; name: FUN_002995dc
 */


void FUN_002995dc(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *local_108;
  long *local_100;
  undefined1 auStack_f0 [176];
  
  FUN_0038db40(param_1 + 0x10);
  uVar7 = *param_2;
  plVar6 = *(long **)(param_1 + 0x30);
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
      *(undefined8 *)(param_1 + 0x30) = uVar7;
      *param_2 = 0;
      lVar5 = *(long *)(param_1 + 0x30);
      goto joined_r0x00299634;
    }
  }
  *(undefined8 *)(param_1 + 0x30) = uVar7;
  *param_2 = 0;
  lVar5 = *(long *)(param_1 + 0x30);
joined_r0x00299634:
  if ((lVar5 != 0) && (*(char *)(param_1 + 0xe8) != '\0')) {
    puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0xc0);
    if (puVar4 != (undefined8 *)0x0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        uVar7 = 0;
      }
      else {
        plVar6 = (long *)(*(long *)(param_1 + 0x30) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = *plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar7 = *(undefined8 *)(param_1 + 0x30);
      }
      FUN_00330290(auStack_f0,param_1 + 0x38);
      *puVar4 = uVar7;
      FUN_00330290(puVar4 + 1,auStack_f0);
      *(undefined2 *)(puVar4 + 0x17) = 0x100;
      FUN_00330188(auStack_f0);
    }
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x10);
    plVar6 = *(long **)(*(long *)(param_1 + 0x30) + 0x18);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_100 = (long *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    local_100[4] = (long)puVar4;
    *local_100 = (long)&PTR_LAB_0448de48;
    local_100[1] = 0;
    local_100[2] = 0;
    local_108 = local_100 + 3;
    *local_108 = (long)&PTR_LAB_0448de80;
                    /* try { // try from 00299704 to 00299713 has its CatchHandler @ 002997d8 */
    FUN_003627bc(uVar7,&local_108,auStack_f0);
    if (local_100 != (long *)0x0) {
      plVar1 = local_100 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*local_100 + 0x10))(local_100);
        std::__shared_weak_count::__release_weak();
      }
    }
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
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
      }
    }
    *(undefined1 *)(param_1 + 0xe8) = 0;
  }
                    /* try { // try from 00299784 to 0029978b has its CatchHandler @ 0029985c */
  FUN_0038db60(param_1 + 0x10);
  return;
}



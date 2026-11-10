/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bf394c; name: FUN_00bf394c
 */


undefined8 *
FUN_00bf394c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined1 local_68;
  
  lVar8 = tpidr_el0;
  plVar7 = *(long **)(lVar8 + 0x30);
  if (plVar7 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar7 = DAT_04859430;
    *(long **)(lVar8 + 0x30) = DAT_04859430;
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7,0x58,8);
  if (DAT_0483a688 != 2) {
    local_68 = 0;
    local_78 = PTR_DAT_047daba0 + 0x10;
    puStack_70 = &LAB_00ba6670;
    if (DAT_0483a688 != 2) {
      do {
        lVar8 = DAT_0483a688;
        if (DAT_0483a688 != 0) break;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x483a688,0x10);
        if (bVar2) {
          DAT_0483a688 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      DataMemoryBarrier(2,3);
      if (lVar8 == 0) {
        FUN_00bb162c(&local_78);
        DAT_0483a688 = 2;
      }
      else {
        while (lVar8 == 1) {
          sched_yield();
          lVar8 = DAT_0483a688;
        }
      }
    }
  }
  lVar8 = DAT_0483a678;
  if (DAT_0483a9d8 != 2) {
    local_68 = 0;
    local_78 = PTR_DAT_047daba0 + 0x10;
    puStack_70 = &LAB_00bf7390;
    if (DAT_0483a9d8 != 2) {
      do {
        lVar3 = DAT_0483a9d8;
        if (DAT_0483a9d8 != 0) break;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x483a9d8,0x10);
        if (bVar2) {
          DAT_0483a9d8 = 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      DataMemoryBarrier(2,3);
      if (lVar3 == 0) {
        FUN_00bb162c(&local_78);
        DAT_0483a9d8 = 2;
      }
      else {
        while (lVar3 == 1) {
          sched_yield();
          lVar3 = DAT_0483a9d8;
        }
      }
    }
  }
  uVar4 = DAT_0483a9e0;
  *puVar6 = &PTR_LAB_0455ba10;
  puVar6[1] = param_1;
  *(undefined4 *)(puVar6 + 6) = param_5;
  *(undefined4 *)((long)puVar6 + 0x34) = param_6;
  *(undefined4 *)(puVar6 + 7) = param_8;
  *(undefined4 *)((long)puVar6 + 0x3c) = param_9;
  puVar6[2] = param_2;
  puVar6[4] = param_3;
  *(undefined4 *)(puVar6 + 5) = param_4;
  *(undefined4 *)(puVar6 + 8) = param_7;
  if (lVar8 == 0) {
    if (DAT_0483a688 != 2) {
      local_68 = 0;
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = &LAB_00ba6670;
      if (DAT_0483a688 != 2) {
        do {
          lVar8 = DAT_0483a688;
          if (DAT_0483a688 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x483a688,0x10);
          if (bVar2) {
            DAT_0483a688 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar8 == 0) {
          FUN_00bb162c(&local_78);
          DAT_0483a688 = 2;
        }
        else {
          while (lVar8 == 1) {
            sched_yield();
            lVar8 = DAT_0483a688;
          }
        }
      }
    }
    lVar8 = DAT_0483a678;
  }
  puVar6[9] = lVar8;
  puVar6[10] = uVar4;
  return puVar6;
}



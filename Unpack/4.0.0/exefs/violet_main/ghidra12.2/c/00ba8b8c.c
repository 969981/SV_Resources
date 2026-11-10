/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ba8b8c; name: FUN_00ba8b8c
 */


long * FUN_00ba8b8c(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined *local_48;
  undefined *puStack_40;
  undefined1 local_38;
  
  if (param_2 == 0) {
    lVar8 = tpidr_el0;
    plVar7 = *(long **)(lVar8 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x28,8);
    puVar3 = PTR_DAT_047dab98;
    *plVar7 = (long)(PTR_DAT_047dacf8 + 0x10);
    plVar7[1] = 0;
    puStack_40 = PTR_LAB_047daba8;
    puVar4 = PTR_DAT_047dab98;
    if (*(long *)puVar3 != 2) {
      local_48 = PTR_DAT_047daba0 + 0x10;
      local_38 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar8 = *(long *)puVar4;
          if (lVar8 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar2) {
            *(undefined8 *)puVar4 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar3 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar8 == 0) {
          FUN_00bb162c(&local_48);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar8 == 1) {
            sched_yield();
            lVar8 = *(long *)puVar3;
          }
        }
      }
    }
    *(undefined4 *)((long)plVar7 + 0x14) = 0;
    plVar7[3] = *(long *)PTR_DAT_047dabb0;
    plVar7[4] = 0;
    *(undefined4 *)(plVar7 + 2) = 0;
  }
  else {
    plVar7 = (long *)FUN_00c0e238(param_2,0,0x28);
    puVar3 = PTR_DAT_047dab98;
    *plVar7 = (long)(PTR_DAT_047dacf8 + 0x10);
    plVar7[1] = 0;
    puVar5 = PTR_LAB_047daba8;
    puVar4 = PTR_DAT_047dab98;
    if (*(long *)puVar3 != 2) {
      local_48 = PTR_DAT_047daba0 + 0x10;
      puStack_40 = PTR_LAB_047daba8;
      local_38 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar8 = *(long *)puVar4;
          if (lVar8 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar2) {
            *(undefined8 *)puVar4 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar3 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar8 == 0) {
          FUN_00bb162c(&local_48);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar8 == 1) {
            sched_yield();
            lVar8 = *(long *)puVar3;
          }
        }
      }
    }
    *(undefined4 *)((long)plVar7 + 0x14) = 0;
    plVar7[3] = *(long *)PTR_DAT_047dabb0;
    plVar7[4] = 0;
    *(undefined4 *)(plVar7 + 2) = 0;
    FUN_00c0e13c(param_2,plVar7,PTR_LAB_047dad00);
  }
  return plVar7;
}



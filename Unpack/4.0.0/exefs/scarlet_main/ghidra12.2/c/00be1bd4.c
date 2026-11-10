/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00be1bd4; name: FUN_00be1bd4
 */


undefined8 * FUN_00be1bd4(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined *local_48;
  undefined *puStack_40;
  undefined1 local_38;
  
  if (param_1 == 0) {
    lVar7 = tpidr_el0;
    plVar8 = *(long **)(lVar7 + 0x30);
    if (plVar8 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar8 = DAT_04859430;
      *(long **)(lVar7 + 0x30) = DAT_04859430;
    }
    puVar6 = (undefined8 *)(**(code **)(*plVar8 + 0x10))(plVar8,0xd8,8);
    *puVar6 = &PTR_FUN_0455a690;
    puVar6[1] = 0;
    memset(puVar6 + 5,0,0x98);
    puStack_40 = PTR_LAB_047daba8;
    puVar3 = PTR_DAT_047dab98;
    if (*(long *)PTR_DAT_047dab98 != 2) {
      local_48 = PTR_DAT_047daba0 + 0x10;
      local_38 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar7 = *(long *)puVar3;
          if (lVar7 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar2) {
            *(undefined8 *)puVar3 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar3 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar7 == 0) {
          FUN_00bb162c(&local_48);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar7 == 1) {
            sched_yield();
            lVar7 = *(long *)puVar3;
          }
        }
      }
    }
    *(undefined4 *)((long)puVar6 + 0x14) = 0;
    uVar9 = *(undefined8 *)PTR_DAT_047dabb0;
    puVar6[3] = uVar9;
    puVar6[4] = uVar9;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = uVar9;
    *(undefined4 *)(puVar6 + 2) = 0;
  }
  else {
    puVar6 = (undefined8 *)FUN_00c0e238(param_1,0,0xd8);
    *puVar6 = &PTR_FUN_0455a690;
    puVar6[1] = 0;
    memset(puVar6 + 5,0,0x98);
    puVar4 = PTR_LAB_047daba8;
    puVar3 = PTR_DAT_047dab98;
    if (*(long *)PTR_DAT_047dab98 != 2) {
      local_48 = PTR_DAT_047daba0 + 0x10;
      puStack_40 = PTR_LAB_047daba8;
      local_38 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar7 = *(long *)puVar3;
          if (lVar7 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar2) {
            *(undefined8 *)puVar3 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar3 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar7 == 0) {
          FUN_00bb162c(&local_48);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar7 == 1) {
            sched_yield();
            lVar7 = *(long *)puVar3;
          }
        }
      }
    }
    *(undefined4 *)((long)puVar6 + 0x14) = 0;
    uVar9 = *(undefined8 *)PTR_DAT_047dabb0;
    puVar6[0x1a] = uVar9;
    puVar6[3] = uVar9;
    puVar6[4] = uVar9;
    *(undefined4 *)(puVar6 + 2) = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    FUN_00c0e13c(param_1,puVar6,&LAB_00be1e90);
  }
  return puVar6;
}



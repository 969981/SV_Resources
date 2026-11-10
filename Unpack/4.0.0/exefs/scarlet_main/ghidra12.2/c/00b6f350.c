/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00b6f350; name: FUN_00b6f350
 */


void FUN_00b6f350(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined *local_68;
  undefined *puStack_60;
  undefined1 local_58;
  
  if ((DAT_0483a668 & 1) == 0) {
    DAT_0483a668 = 1;
    FUN_00baf670(3000000,3000000,
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/proto/saturday.pb.cc"
                );
    FUN_00b7b1c0(&DAT_03d5c0e4,0x5e1);
    FUN_00bf67f0("saturday.proto",&LAB_00b6fe00);
    lVar15 = tpidr_el0;
    plVar12 = *(long **)(lVar15 + 0x30);
    if (plVar12 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar12 = DAT_04859430;
      *(long **)(lVar15 + 0x30) = DAT_04859430;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x38,8);
    *puVar10 = &PTR_FUN_04559da0;
    puVar10[1] = 0;
    puVar3 = PTR_DAT_047dab98;
    *(undefined1 *)(puVar10 + 2) = 0;
    puVar5 = PTR_LAB_047daba8;
    puVar4 = PTR_DAT_047dab98;
    if (*(long *)puVar3 != 2) {
      local_68 = PTR_DAT_047daba0 + 0x10;
      puStack_60 = PTR_LAB_047daba8;
      local_58 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar13 = *(long *)puVar4;
          if (lVar13 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar2) {
            *(undefined8 *)puVar4 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar3 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar13 == 0) {
          FUN_00bb162c(&local_68);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar13 == 1) {
            sched_yield();
            lVar13 = *(long *)puVar3;
          }
        }
      }
    }
    puVar10[6] = 0;
    puVar3 = PTR_DAT_047dabb0;
    uVar14 = *(undefined8 *)PTR_DAT_047dabb0;
    puVar10[5] = uVar14;
    puVar10[3] = 0;
    puVar10[4] = uVar14;
    plVar12 = *(long **)(lVar15 + 0x30);
    DAT_0483a5d8 = puVar10;
    if (plVar12 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar12 = DAT_04859430;
      *(long **)(lVar15 + 0x30) = DAT_04859430;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x30,8);
    *puVar10 = &PTR_FUN_04559e70;
    puVar10[1] = 0;
    puVar4 = PTR_DAT_047dab98;
    *(undefined1 *)(puVar10 + 2) = 0;
    puVar7 = PTR_LAB_047daba8;
    puVar6 = PTR_DAT_047daba0;
    puVar5 = PTR_DAT_047dab98;
    if (*(long *)puVar4 != 2) {
      local_68 = PTR_DAT_047daba0 + 0x10;
      puStack_60 = PTR_LAB_047daba8;
      local_58 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar13 = *(long *)puVar5;
          if (lVar13 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(undefined8 *)puVar5 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar4 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar13 == 0) {
          (**(code **)(puVar6 + 0x20))(&local_68);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar13 == 1) {
            sched_yield();
            lVar13 = *(long *)puVar4;
          }
        }
      }
    }
    *(undefined4 *)(puVar10 + 5) = 0;
    uVar14 = *(undefined8 *)puVar3;
    puVar10[3] = 0;
    puVar10[4] = uVar14;
    plVar12 = *(long **)(lVar15 + 0x30);
    DAT_0483a5f0 = puVar10;
    if (plVar12 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar12 = DAT_04859430;
      *(long **)(lVar15 + 0x30) = DAT_04859430;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x30,8);
    *puVar10 = &PTR_FUN_04559f40;
    puVar10[1] = 0;
    puVar4 = PTR_DAT_047dab98;
    *(undefined1 *)(puVar10 + 2) = 0;
    puVar7 = PTR_LAB_047daba8;
    puVar6 = PTR_DAT_047daba0;
    puVar5 = PTR_DAT_047dab98;
    if (*(long *)puVar4 != 2) {
      local_68 = PTR_DAT_047daba0 + 0x10;
      puStack_60 = PTR_LAB_047daba8;
      local_58 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar13 = *(long *)puVar5;
          if (lVar13 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(undefined8 *)puVar5 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar4 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar13 == 0) {
          (**(code **)(puVar6 + 0x20))(&local_68);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar13 == 1) {
            sched_yield();
            lVar13 = *(long *)puVar4;
          }
        }
      }
    }
    *(undefined4 *)(puVar10 + 5) = 0;
    uVar14 = *(undefined8 *)puVar3;
    puVar10[3] = 0;
    puVar10[4] = uVar14;
    plVar12 = *(long **)(lVar15 + 0x30);
    DAT_0483a608 = puVar10;
    if (plVar12 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar12 = DAT_04859430;
      *(long **)(lVar15 + 0x30) = DAT_04859430;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x38,8);
    *puVar10 = &PTR_FUN_0455a010;
    puVar10[1] = 0;
    puVar4 = PTR_DAT_047dab98;
    *(undefined1 *)(puVar10 + 2) = 0;
    puVar7 = PTR_LAB_047daba8;
    puVar6 = PTR_DAT_047daba0;
    puVar5 = PTR_DAT_047dab98;
    if (*(long *)puVar4 != 2) {
      local_68 = PTR_DAT_047daba0 + 0x10;
      puStack_60 = PTR_LAB_047daba8;
      local_58 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar13 = *(long *)puVar5;
          if (lVar13 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(undefined8 *)puVar5 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar4 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar13 == 0) {
          (**(code **)(puVar6 + 0x20))(&local_68);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar13 == 1) {
            sched_yield();
            lVar13 = *(long *)puVar4;
          }
        }
      }
    }
    *(undefined4 *)(puVar10 + 6) = 0;
    uVar14 = *(undefined8 *)puVar3;
    puVar10[3] = 0;
    puVar10[4] = uVar14;
    puVar10[5] = uVar14;
    plVar12 = *(long **)(lVar15 + 0x30);
    DAT_0483a620 = puVar10;
    if (plVar12 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar12 = DAT_04859430;
      *(long **)(lVar15 + 0x30) = DAT_04859430;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x30,8);
    *puVar10 = &PTR_FUN_0455a0e0;
    puVar10[1] = 0;
    puVar4 = PTR_DAT_047dab98;
    *(undefined1 *)(puVar10 + 2) = 0;
    puVar6 = PTR_LAB_047daba8;
    puVar5 = PTR_DAT_047dab98;
    if (*(long *)puVar4 != 2) {
      local_68 = PTR_DAT_047daba0 + 0x10;
      puStack_60 = PTR_LAB_047daba8;
      local_58 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar13 = *(long *)puVar5;
          if (lVar13 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(undefined8 *)puVar5 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar4 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar13 == 0) {
          FUN_00bb162c(&local_68);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar13 == 1) {
            sched_yield();
            lVar13 = *(long *)puVar4;
          }
        }
      }
    }
    *(undefined4 *)(puVar10 + 5) = 0;
    uVar14 = *(undefined8 *)puVar3;
    puVar10[3] = uVar14;
    puVar10[4] = uVar14;
    plVar12 = *(long **)(lVar15 + 0x30);
    DAT_0483a638 = puVar10;
    if (plVar12 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04859438), iVar9 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar12 = DAT_04859430;
      *(long **)(lVar15 + 0x30) = DAT_04859430;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,0x30,8);
    *puVar11 = &PTR_FUN_0455a1b0;
    puVar11[1] = 0;
    puVar4 = PTR_DAT_047dab98;
    *(undefined1 *)(puVar11 + 2) = 0;
    puVar6 = PTR_LAB_047daba8;
    puVar5 = PTR_DAT_047dab98;
    puVar10 = puVar11;
    if (*(long *)puVar4 != 2) {
      local_68 = PTR_DAT_047daba0 + 0x10;
      puStack_60 = PTR_LAB_047daba8;
      local_58 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar15 = *(long *)puVar5;
          if (lVar15 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(undefined8 *)puVar5 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar4 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar15 == 0) {
          puVar10 = (undefined8 *)FUN_00bb162c(&local_68);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar15 == 1) {
            uVar8 = sched_yield();
            puVar10 = (undefined8 *)(ulong)uVar8;
            lVar15 = *(long *)puVar4;
          }
        }
      }
    }
    *(undefined4 *)(puVar11 + 5) = 0;
    uVar14 = *(undefined8 *)puVar3;
    puVar11[3] = 0;
    puVar11[4] = uVar14;
    puVar16 = DAT_0483a5d8;
    DAT_0483a650 = puVar11;
    *(undefined1 *)(DAT_0483a5d8 + 2) = 1;
    puVar11 = DAT_0483a5f0;
    *(undefined1 *)(DAT_0483a5f0 + 2) = 1;
    if (puVar16 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)FUN_00b6f350(puVar10);
      puVar16 = DAT_0483a5d8;
    }
    puVar11[3] = puVar16;
    puVar11 = DAT_0483a608;
    *(undefined1 *)(DAT_0483a608 + 2) = 1;
    puVar16 = DAT_0483a620;
    *(undefined1 *)(DAT_0483a620 + 2) = 1;
    if (puVar11 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)FUN_00b6f350(puVar10);
      puVar11 = DAT_0483a608;
    }
    puVar16[3] = puVar11;
    puVar11 = DAT_0483a638;
    *(undefined1 *)(DAT_0483a638 + 2) = 1;
    puVar16 = DAT_0483a650;
    *(undefined1 *)(DAT_0483a650 + 2) = 1;
    if (puVar11 == (undefined8 *)0x0) {
      FUN_00b6f350(puVar10);
      puVar11 = DAT_0483a638;
    }
    puVar16[3] = puVar11;
    FUN_00bb0860(&LAB_00b6fcc0);
  }
  return;
}



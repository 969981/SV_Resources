/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bb5d70; name: FUN_00bb5d70
 */


void FUN_00bb5d70(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *local_78;
  undefined *puStack_70;
  undefined1 local_68;
  
  if ((DAT_0483a9b8 & 1) == 0) {
    DAT_0483a9b8 = 1;
    FUN_00baf670(3000000,3000000,
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.pb.cc"
                );
    FUN_00b7b1c0(&DAT_03d5c988,0x14ac);
    FUN_00bf67f0("google/protobuf/descriptor.proto",&LAB_00bb7f80);
    lVar16 = tpidr_el0;
    plVar13 = *(long **)(lVar16 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    DAT_0483a740 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x30,8);
    *DAT_0483a740 = &PTR_FUN_0455a5c0;
    DAT_0483a740[1] = 0;
    DAT_0483a740[2] = 0;
    DAT_0483a740[3] = 0;
    DAT_0483a740[4] = 0;
    DAT_0483a740[5] = 0;
    plVar13 = *(long **)(lVar16 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0xd8,8);
    *puVar11 = &PTR_FUN_0455a690;
    puVar11[1] = 0;
    memset(puVar11 + 5,0,0x98);
    puVar4 = PTR_LAB_047daba8;
    puVar3 = PTR_DAT_047dab98;
    if (*(long *)PTR_DAT_047dab98 != 2) {
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = PTR_LAB_047daba8;
      local_68 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar14 = *(long *)puVar3;
          if (lVar14 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar2) {
            *(undefined8 *)puVar3 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar3 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar14 == 0) {
          FUN_00bb162c(&local_78);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar14 == 1) {
            sched_yield();
            lVar14 = *(long *)puVar3;
          }
        }
      }
    }
    *(undefined4 *)((long)puVar11 + 0x14) = 0;
    puVar3 = PTR_DAT_047dabb0;
    uVar15 = *(undefined8 *)PTR_DAT_047dabb0;
    *(undefined4 *)(puVar11 + 2) = 0;
    puVar11[0x18] = 0;
    puVar11[0x19] = 0;
    puVar11[0x1a] = uVar15;
    puVar11[3] = uVar15;
    puVar11[4] = uVar15;
    plVar13 = *(long **)(lVar16 + 0x30);
    DAT_0483a758 = puVar11;
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0xe8,8);
    *puVar11 = &PTR_FUN_0455a900;
    puVar11[1] = 0;
    memset(puVar11 + 4,0,0x90);
    puVar11[0x17] = 0;
    puVar11[0x18] = 0;
    puVar11[0x19] = 0;
    puVar11[0x1a] = 0;
    puVar4 = PTR_DAT_047dab98;
    puVar11[0x1b] = 0;
    puVar11[0x1c] = 0;
    puVar7 = PTR_LAB_047daba8;
    puVar6 = PTR_DAT_047daba0;
    puVar5 = PTR_DAT_047dab98;
    if (*(long *)puVar4 != 2) {
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = PTR_LAB_047daba8;
      local_68 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar14 = *(long *)puVar5;
          if (lVar14 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(undefined8 *)puVar5 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar4 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar14 == 0) {
          (**(code **)(puVar6 + 0x20))(&local_78);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar14 == 1) {
            sched_yield();
            lVar14 = *(long *)puVar4;
          }
        }
      }
    }
    puVar11[2] = 0;
    uVar15 = *(undefined8 *)puVar3;
    puVar11[0x16] = 0;
    puVar11[3] = uVar15;
    plVar13 = *(long **)(lVar16 + 0x30);
    DAT_0483a770 = puVar11;
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    DAT_0483a788 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x20,8);
    *DAT_0483a788 = &PTR_FUN_0455a760;
    DAT_0483a788[1] = 0;
    DAT_0483a788[2] = 0;
    DAT_0483a788[3] = 0;
    plVar13 = *(long **)(lVar16 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    DAT_0483a7a0 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x20,8);
    *DAT_0483a7a0 = &PTR_FUN_0455a830;
    DAT_0483a7a0[1] = 0;
    DAT_0483a7a0[2] = 0;
    DAT_0483a7a0[3] = 0;
    plVar13 = *(long **)(lVar16 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x58,8);
    puVar4 = PTR_DAT_047dab98;
    *puVar11 = &PTR_FUN_0455a9d0;
    puVar11[1] = 0;
    puVar7 = PTR_LAB_047daba8;
    puVar6 = PTR_DAT_047daba0;
    puVar5 = PTR_DAT_047dab98;
    if (*(long *)puVar4 != 2) {
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = PTR_LAB_047daba8;
      local_68 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar14 = *(long *)puVar5;
          if (lVar14 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(undefined8 *)puVar5 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar4 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar14 == 0) {
          (**(code **)(puVar6 + 0x20))(&local_78);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar14 == 1) {
            sched_yield();
            lVar14 = *(long *)puVar4;
          }
        }
      }
    }
    puVar11[2] = 0;
    uVar15 = *(undefined8 *)puVar3;
    puVar11[3] = uVar15;
    puVar11[4] = 0x100000000;
    puVar11[5] = uVar15;
    puVar11[6] = uVar15;
    puVar11[7] = 1;
    puVar11[8] = uVar15;
    puVar11[9] = uVar15;
    puVar11[10] = 0;
    plVar13 = *(long **)(lVar16 + 0x30);
    DAT_0483a7b8 = puVar11;
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x28,8);
    puVar4 = PTR_DAT_047dab98;
    *puVar11 = &PTR_FUN_0455aaa0;
    puVar11[1] = 0;
    puVar7 = PTR_LAB_047daba8;
    puVar6 = PTR_DAT_047daba0;
    puVar5 = PTR_DAT_047dab98;
    if (*(long *)puVar4 != 2) {
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = PTR_LAB_047daba8;
      local_68 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar14 = *(long *)puVar5;
          if (lVar14 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(undefined8 *)puVar5 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar4 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar14 == 0) {
          (**(code **)(puVar6 + 0x20))(&local_78);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar14 == 1) {
            sched_yield();
            lVar14 = *(long *)puVar4;
          }
        }
      }
    }
    puVar11[2] = 0;
    puVar11[3] = *(undefined8 *)puVar3;
    puVar11[4] = 0;
    plVar13 = *(long **)(lVar16 + 0x30);
    DAT_0483a7e0 = puVar11;
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x40,8);
    *puVar11 = &PTR_FUN_0455ab70;
    puVar11[1] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar4 = PTR_DAT_047dab98;
    puVar11[6] = 0;
    puVar7 = PTR_LAB_047daba8;
    puVar6 = PTR_DAT_047daba0;
    puVar5 = PTR_DAT_047dab98;
    if (*(long *)puVar4 != 2) {
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = PTR_LAB_047daba8;
      local_68 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar14 = *(long *)puVar5;
          if (lVar14 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(undefined8 *)puVar5 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar4 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar14 == 0) {
          (**(code **)(puVar6 + 0x20))(&local_78);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar14 == 1) {
            sched_yield();
            lVar14 = *(long *)puVar4;
          }
        }
      }
    }
    puVar11[2] = 0;
    uVar15 = *(undefined8 *)puVar3;
    puVar11[7] = 0;
    puVar11[3] = uVar15;
    plVar13 = *(long **)(lVar16 + 0x30);
    DAT_0483a7f8 = puVar11;
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x30,8);
    puVar4 = PTR_DAT_047dab98;
    *puVar11 = &PTR_FUN_0455ac40;
    puVar11[1] = 0;
    puVar7 = PTR_LAB_047daba8;
    puVar6 = PTR_DAT_047daba0;
    puVar5 = PTR_DAT_047dab98;
    if (*(long *)puVar4 != 2) {
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = PTR_LAB_047daba8;
      local_68 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar14 = *(long *)puVar5;
          if (lVar14 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(undefined8 *)puVar5 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar4 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar14 == 0) {
          (**(code **)(puVar6 + 0x20))(&local_78);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar14 == 1) {
            sched_yield();
            lVar14 = *(long *)puVar4;
          }
        }
      }
    }
    puVar11[2] = 0;
    uVar15 = *(undefined8 *)puVar3;
    *(undefined4 *)(puVar11 + 5) = 0;
    puVar11[3] = uVar15;
    puVar11[4] = 0;
    plVar13 = *(long **)(lVar16 + 0x30);
    DAT_0483a810 = puVar11;
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x40,8);
    *puVar11 = &PTR_FUN_0455ad10;
    puVar11[1] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar4 = PTR_DAT_047dab98;
    puVar11[6] = 0;
    puVar7 = PTR_LAB_047daba8;
    puVar6 = PTR_DAT_047daba0;
    puVar5 = PTR_DAT_047dab98;
    if (*(long *)puVar4 != 2) {
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = PTR_LAB_047daba8;
      local_68 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar14 = *(long *)puVar5;
          if (lVar14 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(undefined8 *)puVar5 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar4 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar14 == 0) {
          (**(code **)(puVar6 + 0x20))(&local_78);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar14 == 1) {
            sched_yield();
            lVar14 = *(long *)puVar4;
          }
        }
      }
    }
    puVar11[2] = 0;
    uVar15 = *(undefined8 *)puVar3;
    puVar11[7] = 0;
    puVar11[3] = uVar15;
    plVar13 = *(long **)(lVar16 + 0x30);
    DAT_0483a828 = puVar11;
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x40,8);
    puVar4 = PTR_DAT_047dab98;
    *puVar11 = &PTR_FUN_0455ade0;
    puVar11[1] = 0;
    puVar7 = PTR_LAB_047daba8;
    puVar6 = PTR_DAT_047daba0;
    puVar5 = PTR_DAT_047dab98;
    if (*(long *)puVar4 != 2) {
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = PTR_LAB_047daba8;
      local_68 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar14 = *(long *)puVar5;
          if (lVar14 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(undefined8 *)puVar5 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar4 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar14 == 0) {
          (**(code **)(puVar6 + 0x20))(&local_78);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar14 == 1) {
            sched_yield();
            lVar14 = *(long *)puVar4;
          }
        }
      }
    }
    puVar11[2] = 0;
    uVar15 = *(undefined8 *)puVar3;
    *(undefined2 *)(puVar11 + 7) = 0;
    puVar11[3] = uVar15;
    puVar11[4] = uVar15;
    puVar11[5] = uVar15;
    puVar11[6] = 0;
    plVar13 = *(long **)(lVar16 + 0x30);
    DAT_0483a840 = puVar11;
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x88,8);
    puVar11[3] = 0;
    puVar11[2] = 0;
    *puVar11 = &PTR_FUN_0455aeb0;
    puVar11[1] = puVar11 + 2;
    puVar11[0xd] = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    puVar4 = PTR_DAT_047dab98;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar7 = PTR_LAB_047daba8;
    puVar6 = PTR_DAT_047daba0;
    puVar5 = PTR_DAT_047dab98;
    if (*(long *)puVar4 != 2) {
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = PTR_LAB_047daba8;
      local_68 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar14 = *(long *)puVar5;
          if (lVar14 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(undefined8 *)puVar5 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar4 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar14 == 0) {
          (**(code **)(puVar6 + 0x20))(&local_78);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar14 == 1) {
            sched_yield();
            lVar14 = *(long *)puVar4;
          }
        }
      }
    }
    puVar11[6] = 0;
    uVar15 = *(undefined8 *)puVar3;
    *(undefined4 *)(puVar11 + 0x10) = 0;
    puVar11[7] = uVar15;
    puVar11[8] = uVar15;
    puVar11[9] = 0x100000000;
    puVar11[10] = uVar15;
    puVar11[0xb] = uVar15;
    puVar11[0xc] = uVar15;
    plVar13 = *(long **)(lVar16 + 0x30);
    DAT_0483a858 = puVar11;
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    DAT_0483a878 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x58,8);
    DAT_0483a878[2] = 0;
    DAT_0483a878[3] = 0;
    DAT_0483a878[4] = 0;
    *DAT_0483a878 = &PTR_FUN_0455af80;
    DAT_0483a878[1] = DAT_0483a878 + 2;
    DAT_0483a878[9] = 0;
    *(undefined4 *)(DAT_0483a878 + 10) = 0;
    DAT_0483a878[5] = 0;
    DAT_0483a878[6] = 0;
    DAT_0483a878[7] = 0;
    DAT_0483a878[8] = 0;
    plVar13 = *(long **)(lVar16 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    DAT_0483a890 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x60,8);
    DAT_0483a890[2] = 0;
    *DAT_0483a890 = &PTR_FUN_0455b050;
    DAT_0483a890[1] = DAT_0483a890 + 2;
    DAT_0483a890[3] = 0;
    DAT_0483a890[4] = 0;
    *(undefined4 *)(DAT_0483a890 + 0xb) = 0;
    DAT_0483a890[5] = 0;
    DAT_0483a890[6] = 0;
    DAT_0483a890[7] = 0;
    DAT_0483a890[8] = 0;
    DAT_0483a890[9] = 0;
    DAT_0483a890[10] = 0;
    plVar13 = *(long **)(lVar16 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    DAT_0483a8b8 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x50,8);
    DAT_0483a8b8[3] = 0;
    DAT_0483a8b8[4] = 0;
    DAT_0483a8b8[2] = 0;
    *DAT_0483a8b8 = &PTR_FUN_0455b120;
    DAT_0483a8b8[1] = DAT_0483a8b8 + 2;
    DAT_0483a8b8[9] = 0;
    DAT_0483a8b8[5] = 0;
    DAT_0483a8b8[6] = 0;
    DAT_0483a8b8[7] = 0;
    DAT_0483a8b8[8] = 0;
    plVar13 = *(long **)(lVar16 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    DAT_0483a8d0 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x58,8);
    DAT_0483a8d0[2] = 0;
    *DAT_0483a8d0 = &PTR_FUN_0455b1f0;
    DAT_0483a8d0[1] = DAT_0483a8d0 + 2;
    DAT_0483a8d0[3] = 0;
    DAT_0483a8d0[4] = 0;
    DAT_0483a8d0[9] = 0;
    *(undefined2 *)(DAT_0483a8d0 + 10) = 0;
    DAT_0483a8d0[5] = 0;
    DAT_0483a8d0[6] = 0;
    DAT_0483a8d0[7] = 0;
    DAT_0483a8d0[8] = 0;
    plVar13 = *(long **)(lVar16 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    DAT_0483a8e8 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x58,8);
    DAT_0483a8e8[2] = 0;
    *DAT_0483a8e8 = &PTR_FUN_0455b2c0;
    DAT_0483a8e8[1] = DAT_0483a8e8 + 2;
    DAT_0483a8e8[3] = 0;
    DAT_0483a8e8[4] = 0;
    DAT_0483a8e8[9] = 0;
    *(undefined1 *)(DAT_0483a8e8 + 10) = 0;
    DAT_0483a8e8[5] = 0;
    DAT_0483a8e8[6] = 0;
    DAT_0483a8e8[7] = 0;
    DAT_0483a8e8[8] = 0;
    plVar13 = *(long **)(lVar16 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    DAT_0483a900 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x58,8);
    DAT_0483a900[2] = 0;
    *DAT_0483a900 = &PTR_FUN_0455b390;
    DAT_0483a900[1] = DAT_0483a900 + 2;
    DAT_0483a900[3] = 0;
    DAT_0483a900[4] = 0;
    DAT_0483a900[9] = 0;
    *(undefined1 *)(DAT_0483a900 + 10) = 0;
    DAT_0483a900[5] = 0;
    DAT_0483a900[6] = 0;
    DAT_0483a900[7] = 0;
    DAT_0483a900[8] = 0;
    plVar13 = *(long **)(lVar16 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    DAT_0483a918 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x58,8);
    DAT_0483a918[2] = 0;
    *DAT_0483a918 = &PTR_FUN_0455b460;
    DAT_0483a918[1] = DAT_0483a918 + 2;
    DAT_0483a918[3] = 0;
    DAT_0483a918[4] = 0;
    DAT_0483a918[9] = 0;
    *(undefined1 *)(DAT_0483a918 + 10) = 0;
    DAT_0483a918[5] = 0;
    DAT_0483a918[6] = 0;
    DAT_0483a918[7] = 0;
    DAT_0483a918[8] = 0;
    plVar13 = *(long **)(lVar16 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x60,8);
    *puVar11 = &PTR_FUN_0455b600;
    puVar11[1] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar4 = PTR_DAT_047dab98;
    puVar11[5] = 0;
    puVar7 = PTR_LAB_047daba8;
    puVar6 = PTR_DAT_047daba0;
    puVar5 = PTR_DAT_047dab98;
    if (*(long *)puVar4 != 2) {
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = PTR_LAB_047daba8;
      local_68 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar14 = *(long *)puVar5;
          if (lVar14 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(undefined8 *)puVar5 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar4 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar14 == 0) {
          (**(code **)(puVar6 + 0x20))(&local_78);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar14 == 1) {
            sched_yield();
            lVar14 = *(long *)puVar4;
          }
        }
      }
    }
    puVar11[2] = 0;
    uVar15 = *(undefined8 *)puVar3;
    puVar11[6] = uVar15;
    puVar11[7] = 0;
    puVar11[10] = uVar15;
    puVar11[0xb] = uVar15;
    puVar11[8] = 0;
    puVar11[9] = 0;
    plVar13 = *(long **)(lVar16 + 0x30);
    DAT_0483a930 = puVar11;
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x28,8);
    puVar4 = PTR_DAT_047dab98;
    *puVar11 = &PTR_FUN_0455b530;
    puVar11[1] = 0;
    puVar7 = PTR_LAB_047daba8;
    puVar6 = PTR_DAT_047daba0;
    puVar5 = PTR_DAT_047dab98;
    if (*(long *)puVar4 != 2) {
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = PTR_LAB_047daba8;
      local_68 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar14 = *(long *)puVar5;
          if (lVar14 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(undefined8 *)puVar5 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar4 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar14 == 0) {
          (**(code **)(puVar6 + 0x20))(&local_78);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar14 == 1) {
            sched_yield();
            lVar14 = *(long *)puVar4;
          }
        }
      }
    }
    puVar11[2] = 0;
    uVar15 = *(undefined8 *)puVar3;
    *(undefined1 *)(puVar11 + 4) = 0;
    puVar11[3] = uVar15;
    plVar13 = *(long **)(lVar16 + 0x30);
    DAT_0483a948 = puVar11;
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    DAT_0483a960 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x30,8);
    *DAT_0483a960 = &PTR_FUN_0455b7a0;
    DAT_0483a960[1] = 0;
    DAT_0483a960[2] = 0;
    DAT_0483a960[3] = 0;
    DAT_0483a960[4] = 0;
    DAT_0483a960[5] = 0;
    plVar13 = *(long **)(lVar16 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    puVar11 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x70,8);
    *puVar11 = &PTR_FUN_0455b6d0;
    puVar11[1] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[0xb] = 0;
    puVar11[0xc] = 0;
    puVar4 = PTR_DAT_047dab98;
    puVar11[0xd] = 0;
    puVar7 = PTR_LAB_047daba8;
    puVar6 = PTR_DAT_047daba0;
    puVar5 = PTR_DAT_047dab98;
    if (*(long *)puVar4 != 2) {
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = PTR_LAB_047daba8;
      local_68 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar14 = *(long *)puVar5;
          if (lVar14 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(undefined8 *)puVar5 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar4 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar14 == 0) {
          (**(code **)(puVar6 + 0x20))(&local_78);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar14 == 1) {
            sched_yield();
            lVar14 = *(long *)puVar4;
          }
        }
      }
    }
    puVar11[2] = 0;
    uVar15 = *(undefined8 *)puVar3;
    puVar11[9] = uVar15;
    puVar11[10] = uVar15;
    plVar13 = *(long **)(lVar16 + 0x30);
    DAT_0483a978 = puVar11;
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    DAT_0483a990 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x30,8);
    *DAT_0483a990 = &PTR_FUN_0455b940;
    DAT_0483a990[1] = 0;
    DAT_0483a990[2] = 0;
    DAT_0483a990[3] = 0;
    DAT_0483a990[4] = 0;
    DAT_0483a990[5] = 0;
    plVar13 = *(long **)(lVar16 + 0x30);
    if (plVar13 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04859438), iVar10 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar13 = DAT_04859430;
      *(long **)(lVar16 + 0x30) = DAT_04859430;
    }
    puVar12 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x40,8);
    *puVar12 = &PTR_FUN_0455b870;
    puVar12[1] = 0;
    puVar4 = PTR_DAT_047dab98;
    puVar12[3] = 0;
    puVar12[4] = 0;
    puVar6 = PTR_LAB_047daba8;
    puVar5 = PTR_DAT_047dab98;
    puVar11 = puVar12;
    if (*(long *)puVar4 != 2) {
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = PTR_LAB_047daba8;
      local_68 = 0;
      if (*(long *)PTR_DAT_047dab98 != 2) {
        do {
          lVar16 = *(long *)puVar5;
          if (lVar16 != 0) break;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(puVar5,0x10);
          if (bVar2) {
            *(undefined8 *)puVar5 = 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        puVar4 = PTR_DAT_047dab98;
        DataMemoryBarrier(2,3);
        if (lVar16 == 0) {
          puVar11 = (undefined8 *)FUN_00bb162c(&local_78);
          *(undefined8 *)PTR_DAT_047dab98 = 2;
        }
        else {
          while (lVar16 == 1) {
            uVar9 = sched_yield();
            puVar11 = (undefined8 *)(ulong)uVar9;
            lVar16 = *(long *)puVar4;
          }
        }
      }
    }
    puVar12[2] = 0;
    puVar12[6] = *(undefined8 *)puVar3;
    puVar12[7] = 0;
    puVar8 = DAT_0483a758;
    DAT_0483a9a8 = puVar12;
    if (DAT_0483a858 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)FUN_00bb5d70(puVar11);
    }
    puVar8[0x18] = DAT_0483a858;
    if (DAT_0483a960 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)FUN_00bb5d70(puVar11);
    }
    puVar8[0x19] = DAT_0483a960;
    puVar12 = DAT_0483a770;
    if (DAT_0483a878 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)FUN_00bb5d70(puVar11);
    }
    puVar12[0x16] = DAT_0483a878;
    puVar12 = DAT_0483a7b8;
    if (DAT_0483a890 == (undefined8 *)0x0) {
      FUN_00bb5d70(puVar11);
    }
    puVar12[10] = DAT_0483a890;
    puVar11 = DAT_0483a7e0;
    if (DAT_0483a8b8 == (undefined8 *)0x0) {
      FUN_00bb5d70();
    }
    puVar11[4] = DAT_0483a8b8;
    puVar11 = DAT_0483a7f8;
    if (DAT_0483a8d0 == (undefined8 *)0x0) {
      FUN_00bb5d70();
    }
    puVar11[7] = DAT_0483a8d0;
    puVar11 = DAT_0483a810;
    if (DAT_0483a8e8 == (undefined8 *)0x0) {
      FUN_00bb5d70();
    }
    puVar11[4] = DAT_0483a8e8;
    puVar11 = DAT_0483a828;
    if (DAT_0483a900 == (undefined8 *)0x0) {
      FUN_00bb5d70();
    }
    puVar11[7] = DAT_0483a900;
    puVar11 = DAT_0483a840;
    if (DAT_0483a918 == (undefined8 *)0x0) {
      FUN_00bb5d70();
    }
    puVar11[6] = DAT_0483a918;
    FUN_00bb0860(&LAB_00bb7ab0);
  }
  return;
}



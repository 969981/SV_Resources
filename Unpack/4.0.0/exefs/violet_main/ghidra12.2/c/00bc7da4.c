/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bc7da4; name: FUN_00bc7da4
 */


void FUN_00bc7da4(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  string *this;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined1 local_68;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00c01ab0("C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.pb.cc"
                 ,0x17d3);
  }
  uVar9 = *(uint *)(param_2 + 0x28);
  if (uVar9 != 0) {
    puVar10 = *(undefined8 **)(param_2 + 0x30);
    puVar7 = (undefined8 *)FUN_00c11f04((undefined8 *)(param_1 + 0x20),uVar9);
    iVar6 = **(int **)(param_1 + 0x30);
    iVar1 = *(int *)(param_1 + 0x28);
    uVar4 = iVar6 - iVar1;
    if ((0 < (int)uVar9) && (0 < (int)uVar4)) {
      uVar12 = (ulong)uVar9;
      if ((ulong)uVar4 - 1 <= (ulong)uVar9 - 1) {
        uVar12 = (ulong)uVar4;
      }
      lVar18 = -uVar12;
      puVar15 = puVar7;
      puVar17 = puVar10;
      do {
        puVar17 = puVar17 + 1;
        FUN_00be2bd0(*puVar17,*puVar15);
        bVar5 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar15 = puVar15 + 1;
      } while (bVar5);
    }
    if ((int)uVar4 < (int)uVar9) {
      iVar6 = (iVar1 + uVar9) - iVar6;
      uVar14 = *(undefined8 *)(param_1 + 0x20);
      puVar10 = puVar10 + (int)uVar4;
      puVar7 = puVar7 + (int)uVar4;
      do {
        puVar10 = puVar10 + 1;
        uVar16 = *puVar10;
        uVar8 = FUN_00ba906c(uVar16,uVar14);
        FUN_00be2bd0(uVar16,uVar8);
        iVar6 = iVar6 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x28) + uVar9;
    *(int *)(param_1 + 0x28) = iVar6;
    if (**(int **)(param_1 + 0x30) < iVar6) {
      **(int **)(param_1 + 0x30) = iVar6;
    }
  }
  bVar2 = *(byte *)(param_2 + 0x10);
  uVar9 = (uint)bVar2;
  if (bVar2 != 0) {
    if ((bVar2 & 1) != 0) {
      this = *(string **)(param_1 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if (this != *(string **)(param_2 + 0x18)) {
        if (this == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(this,*(string **)(param_2 + 0x18));
        }
      }
      uVar9 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar9 >> 2 & 1) != 0) {
      puVar10 = *(undefined8 **)(param_1 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      if (puVar10 == (undefined8 *)0x0) {
        lVar18 = tpidr_el0;
        plVar11 = *(long **)(lVar18 + 0x30);
        if (plVar11 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar11 = DAT_04859430;
          *(long **)(lVar18 + 0x30) = DAT_04859430;
        }
        puVar10 = (undefined8 *)(**(code **)(*plVar11 + 0x10))(plVar11,0x58,8);
        puVar10[3] = 0;
        puVar10[4] = 0;
        puVar10[2] = 0;
        *puVar10 = &PTR_FUN_0455b1f0;
        puVar10[1] = puVar10 + 2;
        puVar10[9] = 0;
        *(undefined2 *)(puVar10 + 10) = 0;
        puVar10[5] = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[8] = 0;
        *(undefined8 **)(param_1 + 0x38) = puVar10;
      }
      lVar18 = *(long *)(param_2 + 0x38);
      if (lVar18 == 0) {
        lVar18 = *(long *)(DAT_0483a7f8 + 0x38);
      }
      FUN_00bc943c(puVar10,lVar18);
    }
  }
  uVar12 = *(ulong *)(param_2 + 8);
  if ((uVar12 & 1) == 0) {
    return;
  }
  uVar13 = *(ulong *)(param_1 + 8);
  if ((uVar13 & 1) == 0) {
    uVar13 = FUN_00b7714c((ulong *)(param_1 + 8));
    uVar12 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar13 = uVar13 & 0xfffffffffffffffe;
  }
  if ((uVar12 & 1) == 0) {
    if (DAT_0483aa88 != 2) {
      local_68 = 0;
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = &LAB_00bfed80;
      if (DAT_0483aa88 != 2) {
        do {
          lVar18 = DAT_0483aa88;
          if (DAT_0483aa88 != 0) break;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(0x483aa88,0x10);
          if (bVar5) {
            DAT_0483aa88 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar18 == 0) {
          FUN_00bb162c(&local_78);
          DAT_0483aa88 = 2;
        }
        else {
          while (lVar18 == 1) {
            sched_yield();
            lVar18 = DAT_0483aa88;
          }
        }
      }
    }
    uVar12 = DAT_0483aa90;
  }
  else {
    uVar12 = uVar12 & 0xfffffffffffffffe;
  }
  FUN_00bff6d8(uVar13,uVar12);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bbf6e0; name: FUN_00bbf6e0
 */


void FUN_00bbf6e0(long param_1,long param_2)

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
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined1 local_68;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00c01ab0("C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.pb.cc"
                 ,0xe37);
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
      puVar16 = puVar7;
      puVar17 = puVar10;
      do {
        puVar17 = puVar17 + 1;
        FUN_00be2b90(*puVar17,*puVar16);
        bVar5 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar16 = puVar16 + 1;
      } while (bVar5);
    }
    if ((int)uVar4 < (int)uVar9) {
      iVar6 = (iVar1 + uVar9) - iVar6;
      uVar14 = *(undefined8 *)(param_1 + 0x20);
      puVar10 = puVar10 + (int)uVar4;
      puVar7 = puVar7 + (int)uVar4;
      do {
        puVar10 = puVar10 + 1;
        uVar15 = *puVar10;
        uVar8 = FUN_00ba8a8c(uVar15,uVar14);
        FUN_00be2b90(uVar15,uVar8);
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
  uVar9 = *(uint *)(param_2 + 0x40);
  if (uVar9 != 0) {
    puVar10 = *(undefined8 **)(param_2 + 0x48);
    puVar7 = (undefined8 *)FUN_00c11f04((undefined8 *)(param_1 + 0x38),uVar9);
    iVar6 = **(int **)(param_1 + 0x48);
    iVar1 = *(int *)(param_1 + 0x40);
    uVar4 = iVar6 - iVar1;
    if ((0 < (int)uVar9) && (0 < (int)uVar4)) {
      uVar12 = (ulong)uVar9;
      if ((ulong)uVar4 - 1 <= (ulong)uVar9 - 1) {
        uVar12 = (ulong)uVar4;
      }
      lVar18 = -uVar12;
      puVar16 = puVar7;
      puVar17 = puVar10;
      do {
        puVar17 = puVar17 + 1;
        FUN_00be2b90(*puVar17,*puVar16);
        bVar5 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar16 = puVar16 + 1;
      } while (bVar5);
    }
    if ((int)uVar4 < (int)uVar9) {
      iVar6 = (iVar1 + uVar9) - iVar6;
      uVar14 = *(undefined8 *)(param_1 + 0x38);
      puVar10 = puVar10 + (int)uVar4;
      puVar7 = puVar7 + (int)uVar4;
      do {
        puVar10 = puVar10 + 1;
        uVar15 = *puVar10;
        uVar8 = FUN_00ba8a8c(uVar15,uVar14);
        FUN_00be2b90(uVar15,uVar8);
        iVar6 = iVar6 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x40) + uVar9;
    *(int *)(param_1 + 0x40) = iVar6;
    if (**(int **)(param_1 + 0x48) < iVar6) {
      **(int **)(param_1 + 0x48) = iVar6;
    }
  }
  uVar9 = *(uint *)(param_2 + 0x58);
  if (uVar9 != 0) {
    puVar10 = *(undefined8 **)(param_2 + 0x60);
    puVar7 = (undefined8 *)FUN_00c11f04((undefined8 *)(param_1 + 0x50),uVar9);
    iVar6 = **(int **)(param_1 + 0x60);
    iVar1 = *(int *)(param_1 + 0x58);
    uVar4 = iVar6 - iVar1;
    if ((0 < (int)uVar9) && (0 < (int)uVar4)) {
      uVar12 = (ulong)uVar9;
      if ((ulong)uVar4 - 1 <= (ulong)uVar9 - 1) {
        uVar12 = (ulong)uVar4;
      }
      lVar18 = -uVar12;
      puVar16 = puVar7;
      puVar17 = puVar10;
      do {
        puVar17 = puVar17 + 1;
        FUN_00be2b60(*puVar17,*puVar16);
        bVar5 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar16 = puVar16 + 1;
      } while (bVar5);
    }
    if ((int)uVar4 < (int)uVar9) {
      iVar6 = (iVar1 + uVar9) - iVar6;
      uVar14 = *(undefined8 *)(param_1 + 0x50);
      puVar10 = puVar10 + (int)uVar4;
      puVar7 = puVar7 + (int)uVar4;
      do {
        puVar10 = puVar10 + 1;
        uVar15 = *puVar10;
        uVar8 = FUN_00ba8784(uVar15,uVar14);
        FUN_00be2b60(uVar15,uVar8);
        iVar6 = iVar6 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x58) + uVar9;
    *(int *)(param_1 + 0x58) = iVar6;
    if (**(int **)(param_1 + 0x60) < iVar6) {
      **(int **)(param_1 + 0x60) = iVar6;
    }
  }
  uVar9 = *(uint *)(param_2 + 0x70);
  if (uVar9 != 0) {
    puVar10 = *(undefined8 **)(param_2 + 0x78);
    puVar7 = (undefined8 *)FUN_00c11f04((undefined8 *)(param_1 + 0x68),uVar9);
    iVar6 = **(int **)(param_1 + 0x78);
    iVar1 = *(int *)(param_1 + 0x70);
    uVar4 = iVar6 - iVar1;
    if ((0 < (int)uVar9) && (0 < (int)uVar4)) {
      uVar12 = (ulong)uVar9;
      if ((ulong)uVar4 - 1 <= (ulong)uVar9 - 1) {
        uVar12 = (ulong)uVar4;
      }
      lVar18 = -uVar12;
      puVar16 = puVar7;
      puVar17 = puVar10;
      do {
        puVar17 = puVar17 + 1;
        FUN_00be2b70(*puVar17,*puVar16);
        bVar5 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar16 = puVar16 + 1;
      } while (bVar5);
    }
    if ((int)uVar4 < (int)uVar9) {
      iVar6 = (iVar1 + uVar9) - iVar6;
      uVar14 = *(undefined8 *)(param_1 + 0x68);
      puVar10 = puVar10 + (int)uVar4;
      puVar7 = puVar7 + (int)uVar4;
      do {
        puVar10 = puVar10 + 1;
        uVar15 = *puVar10;
        uVar8 = FUN_00ba888c(uVar15,uVar14);
        FUN_00be2b70(uVar15,uVar8);
        iVar6 = iVar6 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x70) + uVar9;
    *(int *)(param_1 + 0x70) = iVar6;
    if (**(int **)(param_1 + 0x78) < iVar6) {
      **(int **)(param_1 + 0x78) = iVar6;
    }
  }
  uVar9 = *(uint *)(param_2 + 0x88);
  if (uVar9 != 0) {
    puVar10 = *(undefined8 **)(param_2 + 0x90);
    puVar7 = (undefined8 *)FUN_00c11f04((undefined8 *)(param_1 + 0x80),uVar9);
    iVar6 = **(int **)(param_1 + 0x90);
    iVar1 = *(int *)(param_1 + 0x88);
    uVar4 = iVar6 - iVar1;
    if ((0 < (int)uVar9) && (0 < (int)uVar4)) {
      uVar12 = (ulong)uVar9;
      if ((ulong)uVar4 - 1 <= (ulong)uVar9 - 1) {
        uVar12 = (ulong)uVar4;
      }
      lVar18 = -uVar12;
      puVar16 = puVar7;
      puVar17 = puVar10;
      do {
        puVar17 = puVar17 + 1;
        FUN_00be2ba0(*puVar17,*puVar16);
        bVar5 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar16 = puVar16 + 1;
      } while (bVar5);
    }
    if ((int)uVar4 < (int)uVar9) {
      iVar6 = (iVar1 + uVar9) - iVar6;
      uVar14 = *(undefined8 *)(param_1 + 0x80);
      puVar10 = puVar10 + (int)uVar4;
      puVar7 = puVar7 + (int)uVar4;
      do {
        puVar10 = puVar10 + 1;
        uVar15 = *puVar10;
        uVar8 = FUN_00ba8e2c(uVar15,uVar14);
        FUN_00be2ba0(uVar15,uVar8);
        iVar6 = iVar6 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(param_1 + 0x88) + uVar9;
    *(int *)(param_1 + 0x88) = iVar6;
    if (**(int **)(param_1 + 0x90) < iVar6) {
      **(int **)(param_1 + 0x90) = iVar6;
    }
  }
  uVar9 = *(uint *)(param_2 + 0xa0);
  if (uVar9 != 0) {
    puVar10 = *(undefined8 **)(param_2 + 0xa8);
    puVar7 = (undefined8 *)FUN_00c11f04((undefined8 *)(param_1 + 0x98),uVar9);
    iVar6 = **(int **)(param_1 + 0xa8);
    iVar1 = *(int *)(param_1 + 0xa0);
    uVar4 = iVar6 - iVar1;
    if ((0 < (int)uVar9) && (0 < (int)uVar4)) {
      uVar12 = (ulong)uVar9;
      if ((ulong)uVar4 - 1 <= (ulong)uVar9 - 1) {
        uVar12 = (ulong)uVar4;
      }
      lVar18 = -uVar12;
      puVar16 = puVar7;
      puVar17 = puVar10;
      do {
        puVar17 = puVar17 + 1;
        FUN_00be2bb0(*puVar17,*puVar16);
        bVar5 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar16 = puVar16 + 1;
      } while (bVar5);
    }
    if ((int)uVar4 < (int)uVar9) {
      iVar6 = (iVar1 + uVar9) - iVar6;
      uVar14 = *(undefined8 *)(param_1 + 0x98);
      puVar10 = puVar10 + (int)uVar4;
      puVar7 = puVar7 + (int)uVar4;
      do {
        puVar10 = puVar10 + 1;
        uVar15 = *puVar10;
        uVar8 = FUN_00ba8b8c(uVar15,uVar14);
        FUN_00be2bb0(uVar15,uVar8);
        iVar6 = iVar6 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(param_1 + 0xa0) + uVar9;
    *(int *)(param_1 + 0xa0) = iVar6;
    if (**(int **)(param_1 + 0xa8) < iVar6) {
      **(int **)(param_1 + 0xa8) = iVar6;
    }
  }
  uVar9 = *(uint *)(param_2 + 0xc0);
  if (uVar9 != 0) {
    puVar10 = *(undefined8 **)(param_2 + 200);
    puVar7 = (undefined8 *)FUN_00c11f04((undefined8 *)(param_1 + 0xb8),uVar9);
    iVar6 = **(int **)(param_1 + 200);
    iVar1 = *(int *)(param_1 + 0xc0);
    uVar4 = iVar6 - iVar1;
    if ((0 < (int)uVar9) && (0 < (int)uVar4)) {
      uVar12 = (ulong)uVar9;
      if ((ulong)uVar4 - 1 <= (ulong)uVar9 - 1) {
        uVar12 = (ulong)uVar4;
      }
      lVar18 = -uVar12;
      puVar16 = puVar7;
      puVar17 = puVar10;
      do {
        puVar17 = puVar17 + 1;
        FUN_00be2bc0(*puVar17,*puVar16);
        bVar5 = lVar18 != -1;
        lVar18 = lVar18 + 1;
        puVar16 = puVar16 + 1;
      } while (bVar5);
    }
    if ((int)uVar4 < (int)uVar9) {
      iVar6 = (iVar1 + uVar9) - iVar6;
      uVar14 = *(undefined8 *)(param_1 + 0xb8);
      puVar10 = puVar10 + (int)uVar4;
      puVar7 = puVar7 + (int)uVar4;
      do {
        puVar10 = puVar10 + 1;
        uVar15 = *puVar10;
        uVar8 = FUN_00ba8f4c(uVar15,uVar14);
        FUN_00be2bc0(uVar15,uVar8);
        iVar6 = iVar6 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar6 != 0);
    }
    iVar6 = *(int *)(param_1 + 0xc0) + uVar9;
    *(int *)(param_1 + 0xc0) = iVar6;
    if (**(int **)(param_1 + 200) < iVar6) {
      **(int **)(param_1 + 200) = iVar6;
    }
  }
  FUN_00be295c(param_1 + 0xd0,param_2 + 0xd0);
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
    if ((uVar9 >> 7 & 1) != 0) {
      puVar10 = *(undefined8 **)(param_1 + 0xb0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80;
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
        *puVar10 = &PTR_FUN_0455af80;
        puVar10[1] = puVar10 + 2;
        puVar10[9] = 0;
        *(undefined4 *)(puVar10 + 10) = 0;
        puVar10[5] = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[8] = 0;
        *(undefined8 **)(param_1 + 0xb0) = puVar10;
      }
      lVar18 = *(long *)(param_2 + 0xb0);
      if (lVar18 == 0) {
        lVar18 = *(long *)(DAT_0483a770 + 0xb0);
      }
      FUN_00bc2f58(puVar10,lVar18);
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



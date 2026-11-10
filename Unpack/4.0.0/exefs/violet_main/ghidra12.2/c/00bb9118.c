/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bb9118; name: FUN_00bb9118
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00bb9118(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  string *psVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined1 local_68;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00c01ab0("C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.pb.cc"
                 ,0x753);
  }
  FUN_00be295c(param_1 + 0x28,param_2 + 0x28);
  if (*(int *)(param_2 + 0x40) != 0) {
    FUN_00ba867c(param_1 + 0x40,*(int *)(param_1 + 0x40) + *(int *)(param_2 + 0x40));
    memcpy((void *)(*(long *)(param_1 + 0x48) + (long)*(int *)(param_1 + 0x40) * 4 + 8),
           (void *)(*(long *)(param_2 + 0x48) + 8),(long)*(int *)(param_2 + 0x40) << 2);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + *(int *)(param_2 + 0x40);
  }
  if (*(int *)(param_2 + 0x50) != 0) {
    FUN_00ba867c(param_1 + 0x50,*(int *)(param_1 + 0x50) + *(int *)(param_2 + 0x50));
    memcpy((void *)(*(long *)(param_1 + 0x58) + (long)*(int *)(param_1 + 0x50) * 4 + 8),
           (void *)(*(long *)(param_2 + 0x58) + 8),(long)*(int *)(param_2 + 0x50) << 2);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_2 + 0x50);
  }
  uVar11 = *(uint *)(param_2 + 0x68);
  if (uVar11 != 0) {
    puVar12 = *(undefined8 **)(param_2 + 0x70);
    puVar9 = (undefined8 *)FUN_00c11f04((undefined8 *)(param_1 + 0x60),uVar11);
    iVar8 = **(int **)(param_1 + 0x70);
    iVar1 = *(int *)(param_1 + 0x68);
    uVar3 = iVar8 - iVar1;
    if ((0 < (int)uVar11) && (0 < (int)uVar3)) {
      uVar15 = (ulong)uVar11;
      if ((ulong)uVar3 - 1 <= (ulong)uVar11 - 1) {
        uVar15 = (ulong)uVar3;
      }
      lVar21 = -uVar15;
      puVar19 = puVar9;
      puVar20 = puVar12;
      do {
        puVar20 = puVar20 + 1;
        FUN_00be2b60(*puVar20,*puVar19);
        bVar7 = lVar21 != -1;
        lVar21 = lVar21 + 1;
        puVar19 = puVar19 + 1;
      } while (bVar7);
    }
    if ((int)uVar3 < (int)uVar11) {
      iVar8 = (iVar1 + uVar11) - iVar8;
      uVar17 = *(undefined8 *)(param_1 + 0x60);
      puVar12 = puVar12 + (int)uVar3;
      puVar9 = puVar9 + (int)uVar3;
      do {
        puVar12 = puVar12 + 1;
        uVar18 = *puVar12;
        uVar10 = FUN_00ba8784(uVar18,uVar17);
        FUN_00be2b60(uVar18,uVar10);
        iVar8 = iVar8 + -1;
        *puVar9 = uVar10;
        puVar9 = puVar9 + 1;
      } while (iVar8 != 0);
    }
    iVar8 = *(int *)(param_1 + 0x68) + uVar11;
    *(int *)(param_1 + 0x68) = iVar8;
    if (**(int **)(param_1 + 0x70) < iVar8) {
      **(int **)(param_1 + 0x70) = iVar8;
    }
  }
  uVar11 = *(uint *)(param_2 + 0x80);
  if (uVar11 != 0) {
    puVar12 = *(undefined8 **)(param_2 + 0x88);
    puVar9 = (undefined8 *)FUN_00c11f04((undefined8 *)(param_1 + 0x78),uVar11);
    iVar8 = **(int **)(param_1 + 0x88);
    iVar1 = *(int *)(param_1 + 0x80);
    uVar3 = iVar8 - iVar1;
    if ((0 < (int)uVar11) && (0 < (int)uVar3)) {
      uVar15 = (ulong)uVar11;
      if ((ulong)uVar3 - 1 <= (ulong)uVar11 - 1) {
        uVar15 = (ulong)uVar3;
      }
      lVar21 = -uVar15;
      puVar19 = puVar9;
      puVar20 = puVar12;
      do {
        puVar20 = puVar20 + 1;
        FUN_00be2b70(*puVar20,*puVar19);
        bVar7 = lVar21 != -1;
        lVar21 = lVar21 + 1;
        puVar19 = puVar19 + 1;
      } while (bVar7);
    }
    if ((int)uVar3 < (int)uVar11) {
      iVar8 = (iVar1 + uVar11) - iVar8;
      uVar17 = *(undefined8 *)(param_1 + 0x78);
      puVar12 = puVar12 + (int)uVar3;
      puVar9 = puVar9 + (int)uVar3;
      do {
        puVar12 = puVar12 + 1;
        uVar18 = *puVar12;
        uVar10 = FUN_00ba888c(uVar18,uVar17);
        FUN_00be2b70(uVar18,uVar10);
        iVar8 = iVar8 + -1;
        *puVar9 = uVar10;
        puVar9 = puVar9 + 1;
      } while (iVar8 != 0);
    }
    iVar8 = *(int *)(param_1 + 0x80) + uVar11;
    *(int *)(param_1 + 0x80) = iVar8;
    if (**(int **)(param_1 + 0x88) < iVar8) {
      **(int **)(param_1 + 0x88) = iVar8;
    }
  }
  uVar11 = *(uint *)(param_2 + 0x98);
  if (uVar11 != 0) {
    puVar12 = *(undefined8 **)(param_2 + 0xa0);
    puVar9 = (undefined8 *)FUN_00c11f04((undefined8 *)(param_1 + 0x90),uVar11);
    iVar8 = **(int **)(param_1 + 0xa0);
    iVar1 = *(int *)(param_1 + 0x98);
    uVar3 = iVar8 - iVar1;
    if ((0 < (int)uVar11) && (0 < (int)uVar3)) {
      uVar15 = (ulong)uVar11;
      if ((ulong)uVar3 - 1 <= (ulong)uVar11 - 1) {
        uVar15 = (ulong)uVar3;
      }
      lVar21 = -uVar15;
      puVar19 = puVar9;
      puVar20 = puVar12;
      do {
        puVar20 = puVar20 + 1;
        FUN_00be2b80(*puVar20,*puVar19);
        bVar7 = lVar21 != -1;
        lVar21 = lVar21 + 1;
        puVar19 = puVar19 + 1;
      } while (bVar7);
    }
    if ((int)uVar3 < (int)uVar11) {
      iVar8 = (iVar1 + uVar11) - iVar8;
      uVar17 = *(undefined8 *)(param_1 + 0x90);
      puVar12 = puVar12 + (int)uVar3;
      puVar9 = puVar9 + (int)uVar3;
      do {
        puVar12 = puVar12 + 1;
        uVar18 = *puVar12;
        uVar10 = FUN_00ba898c(uVar18,uVar17);
        FUN_00be2b80(uVar18,uVar10);
        iVar8 = iVar8 + -1;
        *puVar9 = uVar10;
        puVar9 = puVar9 + 1;
      } while (iVar8 != 0);
    }
    iVar8 = *(int *)(param_1 + 0x98) + uVar11;
    *(int *)(param_1 + 0x98) = iVar8;
    if (**(int **)(param_1 + 0xa0) < iVar8) {
      **(int **)(param_1 + 0xa0) = iVar8;
    }
  }
  uVar11 = *(uint *)(param_2 + 0xb0);
  if (uVar11 != 0) {
    puVar12 = *(undefined8 **)(param_2 + 0xb8);
    puVar9 = (undefined8 *)FUN_00c11f04((undefined8 *)(param_1 + 0xa8),uVar11);
    iVar8 = **(int **)(param_1 + 0xb8);
    iVar1 = *(int *)(param_1 + 0xb0);
    uVar3 = iVar8 - iVar1;
    if ((0 < (int)uVar11) && (0 < (int)uVar3)) {
      uVar15 = (ulong)uVar11;
      if ((ulong)uVar3 - 1 <= (ulong)uVar11 - 1) {
        uVar15 = (ulong)uVar3;
      }
      lVar21 = -uVar15;
      puVar19 = puVar9;
      puVar20 = puVar12;
      do {
        puVar20 = puVar20 + 1;
        FUN_00be2b90(*puVar20,*puVar19);
        bVar7 = lVar21 != -1;
        lVar21 = lVar21 + 1;
        puVar19 = puVar19 + 1;
      } while (bVar7);
    }
    if ((int)uVar3 < (int)uVar11) {
      iVar8 = (iVar1 + uVar11) - iVar8;
      uVar17 = *(undefined8 *)(param_1 + 0xa8);
      puVar12 = puVar12 + (int)uVar3;
      puVar9 = puVar9 + (int)uVar3;
      do {
        puVar12 = puVar12 + 1;
        uVar18 = *puVar12;
        uVar10 = FUN_00ba8a8c(uVar18,uVar17);
        FUN_00be2b90(uVar18,uVar10);
        iVar8 = iVar8 + -1;
        *puVar9 = uVar10;
        puVar9 = puVar9 + 1;
      } while (iVar8 != 0);
    }
    iVar8 = *(int *)(param_1 + 0xb0) + uVar11;
    *(int *)(param_1 + 0xb0) = iVar8;
    if (**(int **)(param_1 + 0xb8) < iVar8) {
      **(int **)(param_1 + 0xb8) = iVar8;
    }
  }
  uVar11 = *(uint *)(param_2 + 0x10);
  if ((uVar11 & 0xff) != 0) {
    if ((uVar11 & 1) != 0) {
      psVar13 = *(string **)(param_1 + 0x18);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      if (psVar13 != *(string **)(param_2 + 0x18)) {
        if (psVar13 == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(psVar13,*(string **)(param_2 + 0x18));
        }
      }
      uVar11 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar11 >> 1 & 1) != 0) {
      psVar13 = *(string **)(param_1 + 0x20);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (psVar13 != *(string **)(param_2 + 0x20)) {
        if (psVar13 == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(psVar13,*(string **)(param_2 + 0x20));
        }
      }
      uVar11 = *(uint *)(param_2 + 0x10);
    }
  }
  if ((uVar11 & 0x1fe00) != 0) {
    if ((uVar11 >> 9 & 1) != 0) {
      puVar12 = *(undefined8 **)(param_1 + 0xc0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
      if (puVar12 == (undefined8 *)0x0) {
        lVar21 = tpidr_el0;
        plVar14 = *(long **)(lVar21 + 0x30);
        if (plVar14 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar14 = DAT_04859430;
          *(long **)(lVar21 + 0x30) = DAT_04859430;
        }
        puVar12 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14,0x88,8);
        puVar12[3] = 0;
        puVar12[2] = 0;
        *puVar12 = &PTR_FUN_0455aeb0;
        puVar12[1] = puVar12 + 2;
        puVar12[0xd] = 0;
        puVar12[0xe] = 0;
        puVar12[0xf] = 0;
        puVar4 = PTR_DAT_047dab98;
        puVar12[4] = 0;
        puVar12[5] = 0;
        puVar6 = PTR_LAB_047daba8;
        puVar5 = PTR_DAT_047dab98;
        if (*(long *)puVar4 != 2) {
          local_78 = PTR_DAT_047daba0 + 0x10;
          puStack_70 = PTR_LAB_047daba8;
          local_68 = 0;
          if (*(long *)PTR_DAT_047dab98 != 2) {
            do {
              lVar21 = *(long *)puVar5;
              if (lVar21 != 0) break;
              cVar2 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(puVar5,0x10);
              if (bVar7) {
                *(undefined8 *)puVar5 = 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            puVar4 = PTR_DAT_047dab98;
            DataMemoryBarrier(2,3);
            if (lVar21 == 0) {
              FUN_00bb162c(&local_78);
              *(undefined8 *)PTR_DAT_047dab98 = 2;
            }
            else {
              while (lVar21 == 1) {
                sched_yield();
                lVar21 = *(long *)puVar4;
              }
            }
          }
        }
        puVar4 = PTR_DAT_047dabb0;
        puVar12[6] = 0;
        uVar17 = *(undefined8 *)puVar4;
        *(undefined4 *)(puVar12 + 0x10) = 0;
        puVar12[7] = uVar17;
        puVar12[8] = uVar17;
        puVar12[9] = 0x100000000;
        puVar12[10] = uVar17;
        puVar12[0xb] = uVar17;
        puVar12[0xc] = uVar17;
        *(undefined8 **)(param_1 + 0xc0) = puVar12;
      }
      lVar21 = *(long *)(param_2 + 0xc0);
      if (lVar21 == 0) {
        lVar21 = *(long *)(DAT_0483a758 + 0xc0);
      }
      FUN_00bbd238(puVar12,lVar21);
      uVar11 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar11 >> 10 & 1) != 0) {
      puVar12 = *(undefined8 **)(param_1 + 200);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x400;
      if (puVar12 == (undefined8 *)0x0) {
        lVar21 = tpidr_el0;
        plVar14 = *(long **)(lVar21 + 0x30);
        if (plVar14 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04859438), iVar8 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar14 = DAT_04859430;
          *(long **)(lVar21 + 0x30) = DAT_04859430;
        }
        puVar12 = (undefined8 *)(**(code **)(*plVar14 + 0x10))(plVar14,0x30,8);
        *puVar12 = &PTR_FUN_0455b7a0;
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar12[4] = 0;
        puVar12[5] = 0;
        *(undefined8 **)(param_1 + 200) = puVar12;
      }
      lVar21 = *(long *)(param_2 + 200);
      if (lVar21 == 0) {
        lVar21 = *(long *)(DAT_0483a758 + 200);
      }
      FUN_00bbd7c0(puVar12,lVar21);
      uVar11 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar11 >> 0xb & 1) != 0) {
      psVar13 = *(string **)(param_1 + 0xd0);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x800;
      if (psVar13 != *(string **)(param_2 + 0xd0)) {
        if (psVar13 == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(psVar13,*(string **)(param_2 + 0xd0));
        }
      }
    }
  }
  uVar15 = *(ulong *)(param_2 + 8);
  if ((uVar15 & 1) == 0) {
    return;
  }
  uVar16 = *(ulong *)(param_1 + 8);
  if ((uVar16 & 1) == 0) {
    uVar16 = FUN_00b7714c((ulong *)(param_1 + 8));
    uVar15 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar16 = uVar16 & 0xfffffffffffffffe;
  }
  if ((uVar15 & 1) == 0) {
    if (DAT_0483aa88 != 2) {
      local_68 = 0;
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = &LAB_00bfed80;
      if (DAT_0483aa88 != 2) {
        do {
          lVar21 = DAT_0483aa88;
          if (DAT_0483aa88 != 0) break;
          cVar2 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(0x483aa88,0x10);
          if (bVar7) {
            DAT_0483aa88 = 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar21 == 0) {
          FUN_00bb162c(&local_78);
          DAT_0483aa88 = 2;
        }
        else {
          while (lVar21 == 1) {
            sched_yield();
            lVar21 = DAT_0483aa88;
          }
        }
      }
    }
    uVar15 = DAT_0483aa90;
  }
  else {
    uVar15 = uVar15 & 0xfffffffffffffffe;
  }
  FUN_00bff6d8(uVar16,uVar15);
  return;
}



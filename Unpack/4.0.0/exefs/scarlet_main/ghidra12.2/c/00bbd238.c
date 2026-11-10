/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bbd238; name: FUN_00bbd238
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00bbd238(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  string *psVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined8 *puVar20;
  int iVar21;
  long lVar22;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined1 local_68;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00c01ab0("C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.pb.cc"
                 ,0x2293);
  }
  uVar9 = *(uint *)(param_2 + 0x70);
  if (uVar9 != 0) {
    puVar10 = *(undefined8 **)(param_2 + 0x78);
    puVar7 = (undefined8 *)FUN_00c11f04((undefined8 *)(param_1 + 0x68),uVar9);
    iVar21 = **(int **)(param_1 + 0x78);
    iVar1 = *(int *)(param_1 + 0x70);
    uVar5 = iVar21 - iVar1;
    if ((0 < (int)uVar9) && (0 < (int)uVar5)) {
      uVar13 = (ulong)uVar9;
      if ((ulong)uVar5 - 1 <= (ulong)uVar9 - 1) {
        uVar13 = (ulong)uVar5;
      }
      lVar22 = -uVar13;
      puVar17 = puVar7;
      puVar20 = puVar10;
      do {
        puVar20 = puVar20 + 1;
        FUN_00be2bf0(*puVar20,*puVar17);
        bVar6 = lVar22 != -1;
        lVar22 = lVar22 + 1;
        puVar17 = puVar17 + 1;
      } while (bVar6);
    }
    if ((int)uVar5 < (int)uVar9) {
      iVar21 = (iVar1 + uVar9) - iVar21;
      uVar16 = *(undefined8 *)(param_1 + 0x68);
      puVar10 = puVar10 + (int)uVar5;
      puVar7 = puVar7 + (int)uVar5;
      do {
        puVar10 = puVar10 + 1;
        uVar18 = *puVar10;
        uVar8 = FUN_00be1e9c(uVar16);
        FUN_00be2bf0(uVar18,uVar8);
        iVar21 = iVar21 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar21 != 0);
    }
    iVar21 = *(int *)(param_1 + 0x70) + uVar9;
    *(int *)(param_1 + 0x70) = iVar21;
    if (**(int **)(param_1 + 0x78) < iVar21) {
      **(int **)(param_1 + 0x78) = iVar21;
    }
  }
  uVar9 = *(uint *)(param_2 + 0x30);
  if ((uVar9 & 0xff) != 0) {
    if ((uVar9 & 1) != 0) {
      psVar11 = *(string **)(param_1 + 0x38);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
      if (psVar11 != *(string **)(param_2 + 0x38)) {
        if (psVar11 == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(psVar11,*(string **)(param_2 + 0x38));
        }
      }
      uVar9 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar9 >> 1 & 1) != 0) {
      psVar11 = *(string **)(param_1 + 0x40);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
      if (psVar11 != *(string **)(param_2 + 0x40)) {
        if (psVar11 == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(psVar11,*(string **)(param_2 + 0x40));
        }
      }
      uVar9 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar9 >> 2 & 1) != 0) {
      uVar3 = *(undefined1 *)(param_2 + 0x48);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 4;
      *(undefined1 *)(param_1 + 0x48) = uVar3;
      uVar9 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar9 >> 3 & 1) != 0) {
      uVar3 = *(undefined1 *)(param_2 + 0x49);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 8;
      *(undefined1 *)(param_1 + 0x49) = uVar3;
      uVar9 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar9 >> 4 & 1) != 0) {
      uVar3 = *(undefined1 *)(param_2 + 0x4a);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x10;
      *(undefined1 *)(param_1 + 0x4a) = uVar3;
      uVar9 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar9 >> 5 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x4c);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x20;
      *(undefined4 *)(param_1 + 0x4c) = uVar2;
      uVar9 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar9 >> 6 & 1) != 0) {
      psVar11 = *(string **)(param_1 + 0x50);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x40;
      if (psVar11 != *(string **)(param_2 + 0x50)) {
        if (psVar11 == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(psVar11,*(string **)(param_2 + 0x50));
        }
      }
      uVar9 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar9 >> 7 & 1) != 0) {
      uVar3 = *(undefined1 *)(param_2 + 0x4b);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80;
      *(undefined1 *)(param_1 + 0x4b) = uVar3;
      uVar9 = *(uint *)(param_2 + 0x30);
    }
  }
  if ((uVar9 & 0xff00) != 0) {
    if ((uVar9 >> 8 & 1) != 0) {
      uVar3 = *(undefined1 *)(param_2 + 0x80);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x100;
      *(undefined1 *)(param_1 + 0x80) = uVar3;
      uVar9 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar9 >> 9 & 1) != 0) {
      uVar3 = *(undefined1 *)(param_2 + 0x81);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x200;
      *(undefined1 *)(param_1 + 0x81) = uVar3;
      uVar9 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar9 >> 10 & 1) != 0) {
      uVar3 = *(undefined1 *)(param_2 + 0x82);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x400;
      *(undefined1 *)(param_1 + 0x82) = uVar3;
      uVar9 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar9 >> 0xb & 1) != 0) {
      uVar3 = *(undefined1 *)(param_2 + 0x83);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800;
      *(undefined1 *)(param_1 + 0x83) = uVar3;
      uVar9 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar9 >> 0xc & 1) != 0) {
      psVar11 = *(string **)(param_1 + 0x58);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x1000;
      if (psVar11 != *(string **)(param_2 + 0x58)) {
        if (psVar11 == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(psVar11,*(string **)(param_2 + 0x58));
        }
      }
      uVar9 = *(uint *)(param_2 + 0x30);
    }
    if ((uVar9 >> 0xd & 1) != 0) {
      psVar11 = *(string **)(param_1 + 0x60);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x2000;
      if (psVar11 != *(string **)(param_2 + 0x60)) {
        if (psVar11 == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(psVar11,*(string **)(param_2 + 0x60));
        }
      }
    }
  }
  if (*(long **)(param_2 + 8) != (long *)(param_2 + 0x10)) {
    plVar19 = *(long **)(param_2 + 8);
    do {
      FUN_00c24e04(param_1 + 8,(int)plVar19[4],plVar19 + 5);
      plVar12 = (long *)plVar19[1];
      if ((long *)plVar19[1] == (long *)0x0) {
        plVar12 = plVar19 + 2;
        plVar14 = (long *)*plVar12;
        if ((long *)*plVar14 != plVar19) {
          do {
            lVar22 = *plVar12;
            plVar12 = (long *)(lVar22 + 0x10);
            plVar14 = (long *)*plVar12;
          } while (*plVar14 != lVar22);
        }
      }
      else {
        do {
          plVar14 = plVar12;
          plVar12 = (long *)*plVar14;
        } while ((long *)*plVar14 != (long *)0x0);
      }
      plVar19 = plVar14;
    } while (plVar14 != (long *)(param_2 + 0x10));
  }
  uVar13 = *(ulong *)(param_2 + 0x28);
  if ((uVar13 & 1) == 0) {
    return;
  }
  uVar15 = *(ulong *)(param_1 + 0x28);
  if ((uVar15 & 1) == 0) {
    uVar15 = FUN_00b7714c((ulong *)(param_1 + 0x28));
    uVar13 = *(ulong *)(param_2 + 0x28);
  }
  else {
    uVar15 = uVar15 & 0xfffffffffffffffe;
  }
  if ((uVar13 & 1) == 0) {
    if (DAT_0483aa88 != 2) {
      local_68 = 0;
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = &LAB_00bfed80;
      if (DAT_0483aa88 != 2) {
        do {
          lVar22 = DAT_0483aa88;
          if (DAT_0483aa88 != 0) break;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x483aa88,0x10);
          if (bVar6) {
            DAT_0483aa88 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar22 == 0) {
          FUN_00bb162c(&local_78);
          DAT_0483aa88 = 2;
        }
        else {
          while (lVar22 == 1) {
            sched_yield();
            lVar22 = DAT_0483aa88;
          }
        }
      }
    }
    uVar13 = DAT_0483aa90;
  }
  else {
    uVar13 = uVar13 & 0xfffffffffffffffe;
  }
  FUN_00bff6d8(uVar15,uVar13);
  return;
}



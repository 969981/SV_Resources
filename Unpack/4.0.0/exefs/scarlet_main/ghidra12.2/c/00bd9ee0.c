/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bd9ee0; name: FUN_00bd9ee0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00bd9ee0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  string *psVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  int iVar16;
  long lVar17;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined1 local_68;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00c01ab0("C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.pb.cc"
                 ,0x3460);
  }
  uVar1 = *(uint *)(param_2 + 0x20);
  if (uVar1 != 0) {
    puVar8 = *(undefined8 **)(param_2 + 0x28);
    puVar6 = (undefined8 *)FUN_00c11f04((undefined8 *)(param_1 + 0x18),uVar1);
    iVar16 = **(int **)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x20);
    uVar4 = iVar16 - iVar2;
    if ((0 < (int)uVar1) && (0 < (int)uVar4)) {
      uVar10 = (ulong)uVar1;
      if ((ulong)uVar4 - 1 <= (ulong)uVar1 - 1) {
        uVar10 = (ulong)uVar4;
      }
      lVar17 = -uVar10;
      puVar13 = puVar6;
      puVar15 = puVar8;
      do {
        puVar15 = puVar15 + 1;
        FUN_00be2c00(*puVar15,*puVar13);
        bVar5 = lVar17 != -1;
        lVar17 = lVar17 + 1;
        puVar13 = puVar13 + 1;
      } while (bVar5);
    }
    if ((int)uVar4 < (int)uVar1) {
      iVar16 = (iVar2 + uVar1) - iVar16;
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      puVar8 = puVar8 + (int)uVar4;
      puVar6 = puVar6 + (int)uVar4;
      do {
        puVar8 = puVar8 + 1;
        uVar14 = *puVar8;
        uVar7 = FUN_00be214c(uVar12);
        FUN_00be2c00(uVar14,uVar7);
        iVar16 = iVar16 + -1;
        *puVar6 = uVar7;
        puVar6 = puVar6 + 1;
      } while (iVar16 != 0);
    }
    iVar16 = *(int *)(param_1 + 0x20) + uVar1;
    *(int *)(param_1 + 0x20) = iVar16;
    if (**(int **)(param_1 + 0x28) < iVar16) {
      **(int **)(param_1 + 0x28) = iVar16;
    }
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x1fe) != 0) {
    if ((uVar1 >> 1 & 1) != 0) {
      psVar9 = *(string **)(param_1 + 0x30);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
      if (psVar9 != *(string **)(param_2 + 0x30)) {
        if (psVar9 == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(psVar9,*(string **)(param_2 + 0x30));
        }
      }
      uVar1 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar1 >> 2 & 1) != 0) {
      uVar12 = *(undefined8 *)(param_2 + 0x38);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      *(undefined8 *)(param_1 + 0x38) = uVar12;
      uVar1 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar1 >> 3 & 1) != 0) {
      uVar12 = *(undefined8 *)(param_2 + 0x40);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
      *(undefined8 *)(param_1 + 0x40) = uVar12;
      uVar1 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar1 >> 4 & 1) != 0) {
      uVar12 = *(undefined8 *)(param_2 + 0x48);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
      *(undefined8 *)(param_1 + 0x48) = uVar12;
      uVar1 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar1 >> 5 & 1) != 0) {
      psVar9 = *(string **)(param_1 + 0x50);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
      if (psVar9 != *(string **)(param_2 + 0x50)) {
        if (psVar9 == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(psVar9,*(string **)(param_2 + 0x50));
        }
      }
      uVar1 = *(uint *)(param_2 + 0x10);
    }
    if ((uVar1 >> 6 & 1) != 0) {
      psVar9 = *(string **)(param_1 + 0x58);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40;
      if (psVar9 != *(string **)(param_2 + 0x58)) {
        if (psVar9 == *(string **)PTR_DAT_047dabb0) {
          FUN_00b6eb88();
        }
        else {
          std::string::operator=(psVar9,*(string **)(param_2 + 0x58));
        }
      }
    }
  }
  uVar10 = *(ulong *)(param_2 + 8);
  if ((uVar10 & 1) == 0) {
    return;
  }
  uVar11 = *(ulong *)(param_1 + 8);
  if ((uVar11 & 1) == 0) {
    uVar11 = FUN_00b7714c((ulong *)(param_1 + 8));
    uVar10 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar11 = uVar11 & 0xfffffffffffffffe;
  }
  if ((uVar10 & 1) == 0) {
    if (DAT_0483aa88 != 2) {
      local_68 = 0;
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = &LAB_00bfed80;
      if (DAT_0483aa88 != 2) {
        do {
          lVar17 = DAT_0483aa88;
          if (DAT_0483aa88 != 0) break;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(0x483aa88,0x10);
          if (bVar5) {
            DAT_0483aa88 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar17 == 0) {
          FUN_00bb162c(&local_78);
          DAT_0483aa88 = 2;
        }
        else {
          while (lVar17 == 1) {
            sched_yield();
            lVar17 = DAT_0483aa88;
          }
        }
      }
    }
    uVar10 = DAT_0483aa90;
  }
  else {
    uVar10 = uVar10 & 0xfffffffffffffffe;
  }
  FUN_00bff6d8(uVar11,uVar10);
  return;
}



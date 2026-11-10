/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bccb94; name: FUN_00bccb94
 */


void FUN_00bccb94(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 *puVar18;
  int iVar19;
  long lVar20;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined1 local_68;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00c01ab0("C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.pb.cc"
                 ,0x2f75);
  }
  uVar1 = *(uint *)(param_2 + 0x40);
  if (uVar1 != 0) {
    puVar9 = *(undefined8 **)(param_2 + 0x48);
    puVar7 = (undefined8 *)FUN_00c11f04((undefined8 *)(param_1 + 0x38),uVar1);
    iVar19 = **(int **)(param_1 + 0x48);
    iVar2 = *(int *)(param_1 + 0x40);
    uVar5 = iVar19 - iVar2;
    if ((0 < (int)uVar1) && (0 < (int)uVar5)) {
      uVar11 = (ulong)uVar1;
      if ((ulong)uVar5 - 1 <= (ulong)uVar1 - 1) {
        uVar11 = (ulong)uVar5;
      }
      lVar20 = -uVar11;
      puVar15 = puVar7;
      puVar18 = puVar9;
      do {
        puVar18 = puVar18 + 1;
        FUN_00be2bf0(*puVar18,*puVar15);
        bVar6 = lVar20 != -1;
        lVar20 = lVar20 + 1;
        puVar15 = puVar15 + 1;
      } while (bVar6);
    }
    if ((int)uVar5 < (int)uVar1) {
      iVar19 = (iVar2 + uVar1) - iVar19;
      uVar14 = *(undefined8 *)(param_1 + 0x38);
      puVar9 = puVar9 + (int)uVar5;
      puVar7 = puVar7 + (int)uVar5;
      do {
        puVar9 = puVar9 + 1;
        uVar16 = *puVar9;
        uVar8 = FUN_00be1e9c(uVar14);
        FUN_00be2bf0(uVar16,uVar8);
        iVar19 = iVar19 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar19 != 0);
    }
    iVar19 = *(int *)(param_1 + 0x40) + uVar1;
    *(int *)(param_1 + 0x40) = iVar19;
    if (**(int **)(param_1 + 0x48) < iVar19) {
      **(int **)(param_1 + 0x48) = iVar19;
    }
  }
  if ((*(byte *)(param_2 + 0x30) & 1) != 0) {
    uVar3 = *(undefined1 *)(param_2 + 0x50);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
    *(undefined1 *)(param_1 + 0x50) = uVar3;
  }
  if (*(long **)(param_2 + 8) != (long *)(param_2 + 0x10)) {
    plVar17 = *(long **)(param_2 + 8);
    do {
      FUN_00c24e04(param_1 + 8,(int)plVar17[4],plVar17 + 5);
      plVar10 = (long *)plVar17[1];
      if ((long *)plVar17[1] == (long *)0x0) {
        plVar10 = plVar17 + 2;
        plVar12 = (long *)*plVar10;
        if ((long *)*plVar12 != plVar17) {
          do {
            lVar20 = *plVar10;
            plVar10 = (long *)(lVar20 + 0x10);
            plVar12 = (long *)*plVar10;
          } while (*plVar12 != lVar20);
        }
      }
      else {
        do {
          plVar12 = plVar10;
          plVar10 = (long *)*plVar12;
        } while ((long *)*plVar12 != (long *)0x0);
      }
      plVar17 = plVar12;
    } while (plVar12 != (long *)(param_2 + 0x10));
  }
  uVar11 = *(ulong *)(param_2 + 0x28);
  if ((uVar11 & 1) == 0) {
    return;
  }
  uVar13 = *(ulong *)(param_1 + 0x28);
  if ((uVar13 & 1) == 0) {
    uVar13 = FUN_00b7714c((ulong *)(param_1 + 0x28));
    uVar11 = *(ulong *)(param_2 + 0x28);
  }
  else {
    uVar13 = uVar13 & 0xfffffffffffffffe;
  }
  if ((uVar11 & 1) == 0) {
    if (DAT_0483aa88 != 2) {
      local_68 = 0;
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = &LAB_00bfed80;
      if (DAT_0483aa88 != 2) {
        do {
          lVar20 = DAT_0483aa88;
          if (DAT_0483aa88 != 0) break;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x483aa88,0x10);
          if (bVar6) {
            DAT_0483aa88 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar20 == 0) {
          FUN_00bb162c(&local_78);
          DAT_0483aa88 = 2;
        }
        else {
          while (lVar20 == 1) {
            sched_yield();
            lVar20 = DAT_0483aa88;
          }
        }
      }
    }
    uVar11 = DAT_0483aa90;
  }
  else {
    uVar11 = uVar11 & 0xfffffffffffffffe;
  }
  FUN_00bff6d8(uVar13,uVar11);
  return;
}



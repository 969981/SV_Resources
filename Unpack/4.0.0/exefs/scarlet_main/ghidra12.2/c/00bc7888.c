/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bc7888; name: FUN_00bc7888
 */


void FUN_00bc7888(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *puVar17;
  int iVar18;
  long lVar19;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined1 local_68;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00c01ab0("C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.pb.cc"
                 ,0x2b06);
  }
  uVar1 = *(uint *)(param_2 + 0x40);
  if (uVar1 != 0) {
    puVar8 = *(undefined8 **)(param_2 + 0x48);
    puVar6 = (undefined8 *)FUN_00c11f04((undefined8 *)(param_1 + 0x38),uVar1);
    iVar18 = **(int **)(param_1 + 0x48);
    iVar2 = *(int *)(param_1 + 0x40);
    uVar4 = iVar18 - iVar2;
    if ((0 < (int)uVar1) && (0 < (int)uVar4)) {
      uVar10 = (ulong)uVar1;
      if ((ulong)uVar4 - 1 <= (ulong)uVar1 - 1) {
        uVar10 = (ulong)uVar4;
      }
      lVar19 = -uVar10;
      puVar14 = puVar6;
      puVar17 = puVar8;
      do {
        puVar17 = puVar17 + 1;
        FUN_00be2bf0(*puVar17,*puVar14);
        bVar5 = lVar19 != -1;
        lVar19 = lVar19 + 1;
        puVar14 = puVar14 + 1;
      } while (bVar5);
    }
    if ((int)uVar4 < (int)uVar1) {
      iVar18 = (iVar2 + uVar1) - iVar18;
      uVar13 = *(undefined8 *)(param_1 + 0x38);
      puVar8 = puVar8 + (int)uVar4;
      puVar6 = puVar6 + (int)uVar4;
      do {
        puVar8 = puVar8 + 1;
        uVar15 = *puVar8;
        uVar7 = FUN_00be1e9c(uVar13);
        FUN_00be2bf0(uVar15,uVar7);
        iVar18 = iVar18 + -1;
        *puVar6 = uVar7;
        puVar6 = puVar6 + 1;
      } while (iVar18 != 0);
    }
    iVar18 = *(int *)(param_1 + 0x40) + uVar1;
    *(int *)(param_1 + 0x40) = iVar18;
    if (**(int **)(param_1 + 0x48) < iVar18) {
      **(int **)(param_1 + 0x48) = iVar18;
    }
  }
  if (*(long **)(param_2 + 8) != (long *)(param_2 + 0x10)) {
    plVar16 = *(long **)(param_2 + 8);
    do {
      FUN_00c24e04(param_1 + 8,(int)plVar16[4],plVar16 + 5);
      plVar9 = (long *)plVar16[1];
      if ((long *)plVar16[1] == (long *)0x0) {
        plVar9 = plVar16 + 2;
        plVar11 = (long *)*plVar9;
        if ((long *)*plVar11 != plVar16) {
          do {
            lVar19 = *plVar9;
            plVar9 = (long *)(lVar19 + 0x10);
            plVar11 = (long *)*plVar9;
          } while (*plVar11 != lVar19);
        }
      }
      else {
        do {
          plVar11 = plVar9;
          plVar9 = (long *)*plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
      plVar16 = plVar11;
    } while (plVar11 != (long *)(param_2 + 0x10));
  }
  uVar10 = *(ulong *)(param_2 + 0x28);
  if ((uVar10 & 1) == 0) {
    return;
  }
  uVar12 = *(ulong *)(param_1 + 0x28);
  if ((uVar12 & 1) == 0) {
    uVar12 = FUN_00b7714c((ulong *)(param_1 + 0x28));
    uVar10 = *(ulong *)(param_2 + 0x28);
  }
  else {
    uVar12 = uVar12 & 0xfffffffffffffffe;
  }
  if ((uVar10 & 1) == 0) {
    if (DAT_0483aa88 != 2) {
      local_68 = 0;
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = &LAB_00bfed80;
      if (DAT_0483aa88 != 2) {
        do {
          lVar19 = DAT_0483aa88;
          if (DAT_0483aa88 != 0) break;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(0x483aa88,0x10);
          if (bVar5) {
            DAT_0483aa88 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar19 == 0) {
          FUN_00bb162c(&local_78);
          DAT_0483aa88 = 2;
        }
        else {
          while (lVar19 == 1) {
            sched_yield();
            lVar19 = DAT_0483aa88;
          }
        }
      }
    }
    uVar10 = DAT_0483aa90;
  }
  else {
    uVar10 = uVar10 & 0xfffffffffffffffe;
  }
  FUN_00bff6d8(uVar12,uVar10);
  return;
}



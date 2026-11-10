/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bc2f58; name: FUN_00bc2f58
 */


void FUN_00bc2f58(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 *puVar19;
  int iVar20;
  long lVar21;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined1 local_68;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00c01ab0("C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.pb.cc"
                 ,0x267c);
  }
  uVar9 = *(uint *)(param_2 + 0x40);
  if (uVar9 != 0) {
    puVar10 = *(undefined8 **)(param_2 + 0x48);
    puVar7 = (undefined8 *)FUN_00c11f04((undefined8 *)(param_1 + 0x38),uVar9);
    iVar20 = **(int **)(param_1 + 0x48);
    iVar1 = *(int *)(param_1 + 0x40);
    uVar5 = iVar20 - iVar1;
    if ((0 < (int)uVar9) && (0 < (int)uVar5)) {
      uVar12 = (ulong)uVar9;
      if ((ulong)uVar5 - 1 <= (ulong)uVar9 - 1) {
        uVar12 = (ulong)uVar5;
      }
      lVar21 = -uVar12;
      puVar16 = puVar7;
      puVar19 = puVar10;
      do {
        puVar19 = puVar19 + 1;
        FUN_00be2bf0(*puVar19,*puVar16);
        bVar6 = lVar21 != -1;
        lVar21 = lVar21 + 1;
        puVar16 = puVar16 + 1;
      } while (bVar6);
    }
    if ((int)uVar5 < (int)uVar9) {
      iVar20 = (iVar1 + uVar9) - iVar20;
      uVar15 = *(undefined8 *)(param_1 + 0x38);
      puVar10 = puVar10 + (int)uVar5;
      puVar7 = puVar7 + (int)uVar5;
      do {
        puVar10 = puVar10 + 1;
        uVar17 = *puVar10;
        uVar8 = FUN_00be1e9c(uVar15);
        FUN_00be2bf0(uVar17,uVar8);
        iVar20 = iVar20 + -1;
        *puVar7 = uVar8;
        puVar7 = puVar7 + 1;
      } while (iVar20 != 0);
    }
    iVar20 = *(int *)(param_1 + 0x40) + uVar9;
    *(int *)(param_1 + 0x40) = iVar20;
    if (**(int **)(param_1 + 0x48) < iVar20) {
      **(int **)(param_1 + 0x48) = iVar20;
    }
  }
  bVar2 = *(byte *)(param_2 + 0x30);
  uVar9 = (uint)bVar2;
  if (bVar2 == 0) goto LAB_00bc309c;
  if ((bVar2 & 1) == 0) {
    if ((bVar2 >> 1 & 1) != 0) goto LAB_00bc31f8;
  }
  else {
    uVar3 = *(undefined1 *)(param_2 + 0x50);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
    *(undefined1 *)(param_1 + 0x50) = uVar3;
    uVar9 = *(uint *)(param_2 + 0x30);
    if ((uVar9 >> 1 & 1) != 0) {
LAB_00bc31f8:
      uVar3 = *(undefined1 *)(param_2 + 0x51);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
      *(undefined1 *)(param_1 + 0x51) = uVar3;
      uVar9 = *(uint *)(param_2 + 0x30);
    }
  }
  if ((uVar9 >> 2 & 1) != 0) {
    uVar3 = *(undefined1 *)(param_2 + 0x52);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 4;
    *(undefined1 *)(param_1 + 0x52) = uVar3;
    uVar9 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar9 >> 3 & 1) != 0) {
    uVar3 = *(undefined1 *)(param_2 + 0x53);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 8;
    *(undefined1 *)(param_1 + 0x53) = uVar3;
  }
LAB_00bc309c:
  if (*(long **)(param_2 + 8) != (long *)(param_2 + 0x10)) {
    plVar18 = *(long **)(param_2 + 8);
    do {
      FUN_00c24e04(param_1 + 8,(int)plVar18[4],plVar18 + 5);
      plVar11 = (long *)plVar18[1];
      if ((long *)plVar18[1] == (long *)0x0) {
        plVar11 = plVar18 + 2;
        plVar13 = (long *)*plVar11;
        if ((long *)*plVar13 != plVar18) {
          do {
            lVar21 = *plVar11;
            plVar11 = (long *)(lVar21 + 0x10);
            plVar13 = (long *)*plVar11;
          } while (*plVar13 != lVar21);
        }
      }
      else {
        do {
          plVar13 = plVar11;
          plVar11 = (long *)*plVar13;
        } while ((long *)*plVar13 != (long *)0x0);
      }
      plVar18 = plVar13;
    } while (plVar13 != (long *)(param_2 + 0x10));
  }
  uVar12 = *(ulong *)(param_2 + 0x28);
  if ((uVar12 & 1) == 0) {
    return;
  }
  uVar14 = *(ulong *)(param_1 + 0x28);
  if ((uVar14 & 1) == 0) {
    uVar14 = FUN_00b7714c((ulong *)(param_1 + 0x28));
    uVar12 = *(ulong *)(param_2 + 0x28);
  }
  else {
    uVar14 = uVar14 & 0xfffffffffffffffe;
  }
  if ((uVar12 & 1) == 0) {
    if (DAT_0483aa88 != 2) {
      local_68 = 0;
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = &LAB_00bfed80;
      if (DAT_0483aa88 != 2) {
        do {
          lVar21 = DAT_0483aa88;
          if (DAT_0483aa88 != 0) break;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(0x483aa88,0x10);
          if (bVar6) {
            DAT_0483aa88 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
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
    uVar12 = DAT_0483aa90;
  }
  else {
    uVar12 = uVar12 & 0xfffffffffffffffe;
  }
  FUN_00bff6d8(uVar14,uVar12);
  return;
}



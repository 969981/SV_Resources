/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bc60dc; name: FUN_00bc60dc
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00bc60dc(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 *puVar11;
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
                 ,0x2930);
  }
  uVar10 = *(uint *)(param_2 + 0x48);
  if (uVar10 != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0x50);
    puVar8 = (undefined8 *)FUN_00c11f04((undefined8 *)(param_1 + 0x40),uVar10);
    iVar21 = **(int **)(param_1 + 0x50);
    iVar1 = *(int *)(param_1 + 0x48);
    uVar6 = iVar21 - iVar1;
    if ((0 < (int)uVar10) && (0 < (int)uVar6)) {
      uVar13 = (ulong)uVar10;
      if ((ulong)uVar6 - 1 <= (ulong)uVar10 - 1) {
        uVar13 = (ulong)uVar6;
      }
      lVar22 = -uVar13;
      puVar17 = puVar8;
      puVar20 = puVar11;
      do {
        puVar20 = puVar20 + 1;
        FUN_00be2bf0(*puVar20,*puVar17);
        bVar7 = lVar22 != -1;
        lVar22 = lVar22 + 1;
        puVar17 = puVar17 + 1;
      } while (bVar7);
    }
    if ((int)uVar6 < (int)uVar10) {
      iVar21 = (iVar1 + uVar10) - iVar21;
      uVar16 = *(undefined8 *)(param_1 + 0x40);
      puVar11 = puVar11 + (int)uVar6;
      puVar8 = puVar8 + (int)uVar6;
      do {
        puVar11 = puVar11 + 1;
        uVar18 = *puVar11;
        uVar9 = FUN_00be1e9c(uVar16);
        FUN_00be2bf0(uVar18,uVar9);
        iVar21 = iVar21 + -1;
        *puVar8 = uVar9;
        puVar8 = puVar8 + 1;
      } while (iVar21 != 0);
    }
    iVar21 = *(int *)(param_1 + 0x48) + uVar10;
    *(int *)(param_1 + 0x48) = iVar21;
    if (**(int **)(param_1 + 0x50) < iVar21) {
      **(int **)(param_1 + 0x50) = iVar21;
    }
  }
  bVar3 = *(byte *)(param_2 + 0x30);
  uVar10 = (uint)bVar3;
  if (bVar3 == 0) goto LAB_00bc6228;
  if ((bVar3 & 1) == 0) {
    if ((bVar3 >> 1 & 1) != 0) goto LAB_00bc6384;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x38);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
    *(undefined4 *)(param_1 + 0x38) = uVar2;
    uVar10 = *(uint *)(param_2 + 0x30);
    if ((uVar10 >> 1 & 1) != 0) {
LAB_00bc6384:
      uVar4 = *(undefined1 *)(param_2 + 0x58);
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 2;
      *(undefined1 *)(param_1 + 0x58) = uVar4;
      uVar10 = *(uint *)(param_2 + 0x30);
    }
  }
  if ((uVar10 >> 2 & 1) != 0) {
    uVar2 = *(undefined4 *)(param_2 + 0x3c);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 4;
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    uVar10 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar10 >> 3 & 1) != 0) {
    uVar4 = *(undefined1 *)(param_2 + 0x59);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 8;
    *(undefined1 *)(param_1 + 0x59) = uVar4;
    uVar10 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar10 >> 4 & 1) != 0) {
    uVar4 = *(undefined1 *)(param_2 + 0x5a);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x10;
    *(undefined1 *)(param_1 + 0x5a) = uVar4;
    uVar10 = *(uint *)(param_2 + 0x30);
  }
  if ((uVar10 >> 5 & 1) != 0) {
    uVar4 = *(undefined1 *)(param_2 + 0x5b);
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x20;
    *(undefined1 *)(param_1 + 0x5b) = uVar4;
  }
LAB_00bc6228:
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
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(0x483aa88,0x10);
          if (bVar7) {
            DAT_0483aa88 = 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
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



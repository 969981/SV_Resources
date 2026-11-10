/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bbd7c0; name: FUN_00bbd7c0
 */


void FUN_00bbd7c0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  undefined *local_78;
  undefined1 *puStack_70;
  undefined1 local_68;
  
  if (param_2 == param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00c01ab0("C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/include/network/protobuf/google/protobuf/descriptor.pb.cc"
                 ,0x38c1);
  }
  uVar1 = *(uint *)(param_2 + 0x20);
  if (uVar1 != 0) {
    puVar8 = *(undefined8 **)(param_2 + 0x28);
    puVar6 = (undefined8 *)FUN_00c11f04((undefined8 *)(param_1 + 0x18),uVar1);
    iVar15 = **(int **)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x20);
    uVar4 = iVar15 - iVar2;
    if ((0 < (int)uVar1) && (0 < (int)uVar4)) {
      uVar9 = (ulong)uVar1;
      if ((ulong)uVar4 - 1 <= (ulong)uVar1 - 1) {
        uVar9 = (ulong)uVar4;
      }
      lVar16 = -uVar9;
      puVar12 = puVar6;
      puVar14 = puVar8;
      do {
        puVar14 = puVar14 + 1;
        FUN_00be2c10(*puVar14,*puVar12);
        bVar5 = lVar16 != -1;
        lVar16 = lVar16 + 1;
        puVar12 = puVar12 + 1;
      } while (bVar5);
    }
    if ((int)uVar4 < (int)uVar1) {
      iVar15 = (iVar2 + uVar1) - iVar15;
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      puVar8 = puVar8 + (int)uVar4;
      puVar6 = puVar6 + (int)uVar4;
      do {
        puVar8 = puVar8 + 1;
        uVar13 = *puVar8;
        uVar7 = FUN_00be23ec(uVar11);
        FUN_00be2c10(uVar13,uVar7);
        iVar15 = iVar15 + -1;
        *puVar6 = uVar7;
        puVar6 = puVar6 + 1;
      } while (iVar15 != 0);
    }
    iVar15 = *(int *)(param_1 + 0x20) + uVar1;
    *(int *)(param_1 + 0x20) = iVar15;
    if (**(int **)(param_1 + 0x28) < iVar15) {
      **(int **)(param_1 + 0x28) = iVar15;
    }
  }
  uVar9 = *(ulong *)(param_2 + 8);
  if ((uVar9 & 1) == 0) {
    return;
  }
  uVar10 = *(ulong *)(param_1 + 8);
  if ((uVar10 & 1) == 0) {
    uVar10 = FUN_00b7714c((ulong *)(param_1 + 8));
    uVar9 = *(ulong *)(param_2 + 8);
  }
  else {
    uVar10 = uVar10 & 0xfffffffffffffffe;
  }
  if ((uVar9 & 1) == 0) {
    if (DAT_0483aa88 != 2) {
      local_68 = 0;
      local_78 = PTR_DAT_047daba0 + 0x10;
      puStack_70 = &LAB_00bfed80;
      if (DAT_0483aa88 != 2) {
        do {
          lVar16 = DAT_0483aa88;
          if (DAT_0483aa88 != 0) break;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(0x483aa88,0x10);
          if (bVar5) {
            DAT_0483aa88 = 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        DataMemoryBarrier(2,3);
        if (lVar16 == 0) {
          FUN_00bb162c(&local_78);
          DAT_0483aa88 = 2;
        }
        else {
          while (lVar16 == 1) {
            sched_yield();
            lVar16 = DAT_0483aa88;
          }
        }
      }
    }
    uVar9 = DAT_0483aa90;
  }
  else {
    uVar9 = uVar9 & 0xfffffffffffffffe;
  }
  FUN_00bff6d8(uVar10,uVar9);
  return;
}



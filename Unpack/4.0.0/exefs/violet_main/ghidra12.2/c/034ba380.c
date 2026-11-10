/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ba380; name: FUN_034ba380
 */


void FUN_034ba380(long param_1,byte *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  puVar5 = PTR_DAT_047e2fd0;
  bVar2 = *param_2;
  if (bVar2 == 0xff) {
    if ((param_2[8] == 0xff) && (*(long *)(param_2 + 0x10) == 0)) {
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      FUN_034ba5a0(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      puVar10 = *(undefined8 **)(param_1 + 0x10);
      do {
        FUN_034ba840(puVar10,param_2 + 8);
        if ((*(char *)((long)puVar10 + 0xc) == '\0') && (*(int *)(puVar10 + 3) == 0)) {
          if (puVar10[2] != 0) {
            *(undefined4 *)(puVar10 + 3) = 0;
            (**(code **)(puVar5 + 0x30))(0);
            puVar10[2] = 0;
            *(undefined4 *)((long)puVar10 + 0x1c) = 0;
          }
          puVar6 = (undefined8 *)
                   ((*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x28) - 0x28);
          for (puVar4 = puVar10; puVar4 < puVar6; puVar4 = puVar4 + 5) {
            *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(puVar4 + 9);
            puVar4[2] = puVar4[7];
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar4 + 6);
            *(undefined1 *)((long)puVar4 + 0xc) = *(undefined1 *)((long)puVar4 + 0x34);
            *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(puVar4 + 8);
            *(undefined4 *)((long)puVar4 + 0x1c) = *(undefined4 *)((long)puVar4 + 0x44);
            puVar4[7] = 0;
            puVar4[8] = 0;
          }
          (**(code **)*puVar6)();
          uVar8 = *(int *)(param_1 + 0x18) - 1;
          *(uint *)(param_1 + 0x18) = uVar8;
        }
        else {
          uVar8 = *(uint *)(param_1 + 0x18);
          puVar10 = puVar10 + 5;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)uVar8 * 0x28) != puVar10);
    }
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x18);
    if (uVar8 != 0) {
      lVar13 = *(long *)(param_1 + 0x10);
      iVar9 = 0;
      do {
        iVar1 = iVar9 + (uVar8 >> 1);
        lVar14 = (long)iVar1;
        bVar3 = *(byte *)(lVar13 + (long)iVar1 * 0x28 + 0x20);
        if (bVar3 == bVar2) {
          lVar11 = lVar13 + lVar14 * 0x28;
          FUN_034ba840(lVar11,param_2 + 8);
          if (*(char *)(lVar11 + 0xc) != '\0') {
            return;
          }
          piVar7 = (int *)(lVar13 + lVar14 * 0x28 + 0x18);
          if (*piVar7 != 0) {
            return;
          }
          plVar12 = (long *)(lVar13 + lVar14 * 0x28 + 0x10);
          if (*plVar12 != 0) {
            *piVar7 = 0;
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
            *plVar12 = 0;
            *(undefined4 *)(lVar13 + lVar14 * 0x28 + 0x1c) = 0;
          }
          FUN_034baca4((long *)(param_1 + 0x10),*param_2);
          return;
        }
        if (bVar3 < bVar2) {
          iVar9 = iVar1 + 1;
        }
        uVar8 = uVar8 - (bVar3 < bVar2) >> 1;
      } while (uVar8 != 0);
    }
  }
  return;
}



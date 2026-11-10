/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b9f60; name: FUN_034b9f60
 */


void FUN_034b9f60(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  puVar4 = PTR_DAT_047e2fd0;
  uVar6 = *param_2;
  if (uVar6 == 0) {
    if ((((char)param_2[2] == -1) && ((char)param_2[4] == -1)) && (*(long *)(param_2 + 6) == 0)) {
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      puVar9 = *(undefined8 **)(param_1 + 0x10);
      if (*(uint *)(param_1 + 0x18) != 0) {
        lVar11 = (ulong)*(uint *)(param_1 + 0x18) * 0x28;
        do {
          FUN_034ba5a0(puVar9);
          puVar9 = puVar9 + 5;
          lVar11 = lVar11 + -0x28;
        } while (lVar11 != 0);
        puVar9 = *(undefined8 **)(param_1 + 0x10);
      }
      if (puVar9 != (undefined8 *)0x0) {
        if (*(uint *)(param_1 + 0x18) != 0) {
          lVar11 = (ulong)*(uint *)(param_1 + 0x18) * 0x28;
          do {
            (**(code **)*puVar9)(puVar9);
            lVar11 = lVar11 + -0x28;
            puVar9 = puVar9 + 5;
          } while (lVar11 != 0);
          puVar9 = *(undefined8 **)(param_1 + 0x10);
        }
        *(undefined4 *)(param_1 + 0x18) = 0;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar9);
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
    }
    else if (*(int *)(param_1 + 0x18) != 0) {
      puVar9 = *(undefined8 **)(param_1 + 0x10);
      do {
        FUN_034ba380(puVar9,param_2 + 2);
        if ((*(char *)((long)puVar9 + 0xc) == '\0') && (*(int *)(puVar9 + 3) == 0)) {
          FUN_034ba5a0(puVar9);
          puVar12 = (undefined8 *)
                    (*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x28 + -0x28);
          puVar3 = puVar9;
          while (puVar3 < puVar12) {
            *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar3 + 9);
            puVar5 = (undefined8 *)puVar3[2];
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar3 + 6);
            *(undefined1 *)((long)puVar3 + 0xc) = *(undefined1 *)((long)puVar3 + 0x34);
            if (puVar5 != (undefined8 *)0x0) {
              if (*(uint *)(puVar3 + 3) != 0) {
                lVar11 = (ulong)*(uint *)(puVar3 + 3) * 0x28;
                do {
                  (**(code **)*puVar5)(puVar5);
                  lVar11 = lVar11 + -0x28;
                  puVar5 = puVar5 + 5;
                } while (lVar11 != 0);
                puVar5 = (undefined8 *)puVar3[2];
              }
              *(undefined4 *)(puVar3 + 3) = 0;
              (**(code **)(puVar4 + 0x30))(0,puVar5);
              puVar3[2] = 0;
              *(undefined4 *)((long)puVar3 + 0x1c) = 0;
            }
            puVar3[2] = puVar3[7];
            *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(puVar3 + 8);
            *(undefined4 *)((long)puVar3 + 0x1c) = *(undefined4 *)((long)puVar3 + 0x44);
            puVar3[7] = 0;
            puVar3[8] = 0;
            puVar3 = puVar3 + 5;
          }
          (**(code **)*puVar12)(puVar12);
          uVar6 = *(int *)(param_1 + 0x18) - 1;
          *(uint *)(param_1 + 0x18) = uVar6;
        }
        else {
          uVar6 = *(uint *)(param_1 + 0x18);
          puVar9 = puVar9 + 5;
        }
      } while ((undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)uVar6 * 0x28) != puVar9);
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x18);
    if (uVar7 != 0) {
      lVar11 = *(long *)(param_1 + 0x10);
      iVar8 = 0;
      do {
        iVar1 = iVar8 + (uVar7 >> 1);
        uVar2 = *(uint *)(lVar11 + (long)iVar1 * 0x28 + 0x20);
        if (uVar2 == uVar6) {
          lVar10 = lVar11 + (long)iVar1 * 0x28;
          FUN_034ba380(lVar10,param_2 + 2);
          if (*(char *)(lVar10 + 0xc) != '\0') {
            return;
          }
          if (*(int *)(lVar11 + (long)iVar1 * 0x28 + 0x18) == 0) {
            FUN_034ba5a0(lVar10);
            FUN_034ba6ec((long *)(param_1 + 0x10),*param_2);
            return;
          }
          return;
        }
        if (uVar2 < uVar6) {
          iVar8 = iVar1 + 1;
        }
        uVar7 = uVar7 - (uVar2 < uVar6) >> 1;
      } while (uVar7 != 0);
    }
  }
  return;
}



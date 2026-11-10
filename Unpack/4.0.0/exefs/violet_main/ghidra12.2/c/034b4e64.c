/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b4e64; name: FUN_034b4e64
 */


void FUN_034b4e64(long param_1,ulong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  puVar3 = PTR_DAT_047e2fd0;
  uVar5 = *param_2;
  if (uVar5 == 0) {
    if (((((int)param_2[1] == 0) && ((int)param_2[2] == 0)) && ((char)param_2[3] == -1)) &&
       (((char)param_2[4] == -1 && (param_2[5] == 0)))) {
      if (*(char *)(param_1 + 0xc) != '\0') {
        *(undefined1 *)(param_1 + 0xc) = 0;
      }
      puVar9 = *(undefined8 **)(param_1 + 0x10);
      if (*(uint *)(param_1 + 0x18) != 0) {
        lVar11 = (ulong)*(uint *)(param_1 + 0x18) * 0x28;
        do {
          FUN_034b9cd0(puVar9);
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
        FUN_034b9aa8(puVar9,param_2 + 1);
        if ((*(char *)((long)puVar9 + 0xc) == '\0') && (*(int *)(puVar9 + 3) == 0)) {
          FUN_034b9cd0(puVar9);
          puVar12 = (undefined8 *)
                    (*(long *)(param_1 + 0x10) + (ulong)*(uint *)(param_1 + 0x18) * 0x28 + -0x28);
          puVar2 = puVar9;
          while (puVar2 < puVar12) {
            puVar2[4] = puVar2[9];
            puVar4 = (undefined8 *)puVar2[2];
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar2 + 6);
            *(undefined1 *)((long)puVar2 + 0xc) = *(undefined1 *)((long)puVar2 + 0x34);
            if (puVar4 != (undefined8 *)0x0) {
              if (*(uint *)(puVar2 + 3) != 0) {
                lVar11 = (ulong)*(uint *)(puVar2 + 3) * 0x28;
                do {
                  (**(code **)*puVar4)(puVar4);
                  lVar11 = lVar11 + -0x28;
                  puVar4 = puVar4 + 5;
                } while (lVar11 != 0);
                puVar4 = (undefined8 *)puVar2[2];
              }
              *(undefined4 *)(puVar2 + 3) = 0;
              (**(code **)(puVar3 + 0x30))(0,puVar4);
              puVar2[2] = 0;
              *(undefined4 *)((long)puVar2 + 0x1c) = 0;
            }
            puVar2[2] = puVar2[7];
            *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar2 + 8);
            *(undefined4 *)((long)puVar2 + 0x1c) = *(undefined4 *)((long)puVar2 + 0x44);
            puVar2[7] = 0;
            puVar2[8] = 0;
            puVar2 = puVar2 + 5;
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
    uVar6 = *(uint *)(param_1 + 0x18);
    if (uVar6 != 0) {
      lVar11 = *(long *)(param_1 + 0x10);
      iVar7 = 0;
      do {
        iVar1 = iVar7 + (uVar6 >> 1);
        uVar8 = *(ulong *)(lVar11 + (long)iVar1 * 0x28 + 0x20);
        if (uVar8 == uVar5) {
          lVar10 = lVar11 + (long)iVar1 * 0x28;
          FUN_034b9aa8(lVar10,param_2 + 1);
          if (*(char *)(lVar10 + 0xc) != '\0') {
            return;
          }
          if (*(int *)(lVar11 + (long)iVar1 * 0x28 + 0x18) == 0) {
            FUN_034b9cd0(lVar10);
            FUN_034b9e0c((long *)(param_1 + 0x10),*param_2);
            return;
          }
          return;
        }
        if (uVar8 < uVar5) {
          iVar7 = iVar1 + 1;
        }
        uVar6 = uVar6 - (uVar8 < uVar5) >> 1;
      } while (uVar6 != 0);
    }
  }
  return;
}



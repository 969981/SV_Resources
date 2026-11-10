/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03453e68; name: FUN_03453e68
 */


void FUN_03453e68(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 local_a8 [18];
  
  puVar4 = PTR_DAT_047e2fd0;
  puVar10 = *(undefined8 **)(param_1 + 0x28);
  if (puVar10 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    do {
      plVar7 = (long *)puVar10[2];
      if ((int)plVar7[6] == param_2) {
        local_a8[0] = 0;
        plVar5 = (long *)plVar7[1];
        if ((*(ushort *)((long)plVar5 + 0x34) | 0x100) == 0x503) {
          (**(code **)(*plVar5 + 0x58))(plVar5,local_a8);
        }
        plVar5 = *(long **)PTR_DAT_047e6f38;
        uVar1 = *(uint *)(plVar7 + 6);
        nn::os::LockMutex((MutexType *)(plVar5 + 3));
        uVar2 = *(uint *)(plVar5 + 1);
        if (uVar2 != 0) {
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar1 / uVar2;
          }
          for (lVar6 = *(long *)(*plVar5 + (ulong)(uVar1 - uVar3 * uVar2) * 8); lVar6 != 0;
              lVar6 = *(long *)(lVar6 + 0x70)) {
            if (*(uint *)(lVar6 + 0x54) == uVar1) {
              *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + -1;
              FUN_034b3448(plVar5,uVar1);
              goto LAB_03453f34;
            }
          }
        }
        nn::os::UnlockMutex((MutexType *)(plVar5 + 3));
LAB_03453f34:
        puVar8 = (undefined8 *)*puVar10;
        puVar9 = (undefined8 *)(param_1 + 0x28);
        if (*(undefined8 **)(param_1 + 0x28) != puVar10) {
          puVar9 = puVar11;
        }
        *puVar9 = puVar8;
        if (*(undefined8 **)(param_1 + 0x30) == puVar10) {
          *(undefined8 **)(param_1 + 0x30) = puVar11;
        }
        *puVar10 = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 **)(param_1 + 0x38) = puVar10;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        (**(code **)(*(long *)plVar7[1] + 0x18))();
        (**(code **)(*plVar7 + 8))(plVar7);
        (**(code **)(puVar4 + 0x30))(0,plVar7);
      }
      else {
        puVar8 = (undefined8 *)*puVar10;
        puVar11 = puVar10;
      }
      puVar10 = puVar8;
    } while (puVar8 != (undefined8 *)0x0);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x50);
  if (puVar10 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    do {
      while (plVar7 = (long *)puVar10[2], (int)plVar7[6] == param_2) {
        local_a8[0] = 0;
        plVar5 = (long *)plVar7[1];
        if ((*(ushort *)((long)plVar5 + 0x34) | 0x100) == 0x503) {
          (**(code **)(*plVar5 + 0x58))(plVar5,local_a8);
        }
        plVar5 = *(long **)PTR_DAT_047e6f38;
        uVar1 = *(uint *)(plVar7 + 6);
        nn::os::LockMutex((MutexType *)(plVar5 + 3));
        uVar2 = *(uint *)(plVar5 + 1);
        if (uVar2 != 0) {
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar1 / uVar2;
          }
          for (lVar6 = *(long *)(*plVar5 + (ulong)(uVar1 - uVar3 * uVar2) * 8); lVar6 != 0;
              lVar6 = *(long *)(lVar6 + 0x70)) {
            if (*(uint *)(lVar6 + 0x54) == uVar1) {
              *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + -1;
              FUN_034b3448(plVar5,uVar1);
              goto LAB_03454070;
            }
          }
        }
        nn::os::UnlockMutex((MutexType *)(plVar5 + 3));
LAB_03454070:
        puVar9 = (undefined8 *)*puVar10;
        puVar8 = (undefined8 *)(param_1 + 0x50);
        if (*(undefined8 **)(param_1 + 0x50) != puVar10) {
          puVar8 = puVar11;
        }
        *puVar8 = puVar9;
        if (*(undefined8 **)(param_1 + 0x58) == puVar10) {
          *(undefined8 **)(param_1 + 0x58) = puVar11;
        }
        *puVar10 = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 **)(param_1 + 0x60) = puVar10;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        (**(code **)(*(long *)plVar7[1] + 0x18))();
        (**(code **)(*plVar7 + 8))(plVar7);
        (**(code **)(puVar4 + 0x30))(0,plVar7);
        puVar10 = puVar9;
        if (puVar9 == (undefined8 *)0x0) {
          return;
        }
      }
      puVar8 = (undefined8 *)*puVar10;
      puVar11 = puVar10;
      puVar10 = puVar8;
    } while (puVar8 != (undefined8 *)0x0);
  }
  return;
}



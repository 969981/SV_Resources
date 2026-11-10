/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03456260; name: FUN_03456260
 */


undefined8 FUN_03456260(long param_1,long param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 local_a8 [18];
  
  puVar8 = (undefined8 *)(param_1 + 0x28);
  puVar12 = (undefined8 *)*puVar8;
  if (puVar12 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)0x0;
    if (param_2 == 0) {
      do {
        plVar10 = (long *)puVar12[2];
        if (((param_4 == 0) || ((int)plVar10[6] == param_4)) &&
           (uVar5 = FUN_034560f0(plVar10[1],param_3), (uVar5 & 1) == 0)) {
          plVar6 = (long *)plVar10[1];
          if (*(ushort *)((long)plVar6 + 0x34) == 0x1820) goto LAB_03456560;
          local_a8[0] = 0;
          if ((*(ushort *)((long)plVar6 + 0x34) | 0x100) == 0x503) {
            (**(code **)(*plVar6 + 0x58))(plVar6,local_a8);
          }
          plVar6 = *(long **)PTR_DAT_047e6f38;
          uVar2 = *(uint *)(plVar10 + 6);
          nn::os::LockMutex((MutexType *)(plVar6 + 3));
          uVar3 = *(uint *)(plVar6 + 1);
          if (uVar3 != 0) {
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = uVar2 / uVar3;
            }
            for (lVar7 = *(long *)(*plVar6 + (ulong)(uVar2 - uVar4 * uVar3) * 8); lVar7 != 0;
                lVar7 = *(long *)(lVar7 + 0x70)) {
              if (*(uint *)(lVar7 + 0x54) == uVar2) {
                *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + -1;
                FUN_034b3448(plVar6,uVar2);
                goto LAB_0345648c;
              }
            }
          }
          nn::os::UnlockMutex((MutexType *)(plVar6 + 3));
LAB_0345648c:
          puVar9 = (undefined8 *)*puVar12;
          puVar1 = puVar8;
          if (*(undefined8 **)(param_1 + 0x28) != puVar12) {
            puVar1 = puVar11;
          }
          *puVar1 = puVar9;
          if (*(undefined8 **)(param_1 + 0x30) == puVar12) {
            *(undefined8 **)(param_1 + 0x30) = puVar11;
          }
          *puVar12 = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 **)(param_1 + 0x38) = puVar12;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
          (**(code **)(*(long *)plVar10[1] + 0x18))();
          (**(code **)(*plVar10 + 8))(plVar10);
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar10);
        }
        else {
LAB_03456560:
          puVar9 = (undefined8 *)*puVar12;
          puVar11 = puVar12;
        }
        puVar12 = puVar9;
      } while (puVar9 != (undefined8 *)0x0);
    }
    else {
      do {
        plVar10 = (long *)puVar12[2];
        if (((plVar10[8] == param_2) && ((param_4 == 0 || ((int)plVar10[6] == param_4)))) &&
           (uVar5 = FUN_034560f0(plVar10[1],param_3), (uVar5 & 1) == 0)) {
          plVar6 = (long *)plVar10[1];
          if (*(ushort *)((long)plVar6 + 0x34) == 0x1820) goto LAB_034562f0;
          local_a8[0] = 0;
          if ((*(ushort *)((long)plVar6 + 0x34) | 0x100) == 0x503) {
            (**(code **)(*plVar6 + 0x58))(plVar6,local_a8);
          }
          plVar6 = *(long **)PTR_DAT_047e6f38;
          uVar2 = *(uint *)(plVar10 + 6);
          nn::os::LockMutex((MutexType *)(plVar6 + 3));
          uVar3 = *(uint *)(plVar6 + 1);
          if (uVar3 != 0) {
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = uVar2 / uVar3;
            }
            for (lVar7 = *(long *)(*plVar6 + (ulong)(uVar2 - uVar4 * uVar3) * 8); lVar7 != 0;
                lVar7 = *(long *)(lVar7 + 0x70)) {
              if (*(uint *)(lVar7 + 0x54) == uVar2) {
                *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + -1;
                FUN_034b3448(plVar6,uVar2);
                goto LAB_03456378;
              }
            }
          }
          nn::os::UnlockMutex((MutexType *)(plVar6 + 3));
LAB_03456378:
          puVar9 = (undefined8 *)*puVar12;
          puVar1 = puVar8;
          if (*(undefined8 **)(param_1 + 0x28) != puVar12) {
            puVar1 = puVar11;
          }
          *puVar1 = puVar9;
          if (*(undefined8 **)(param_1 + 0x30) == puVar12) {
            *(undefined8 **)(param_1 + 0x30) = puVar11;
          }
          *puVar12 = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 **)(param_1 + 0x38) = puVar12;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
          (**(code **)(*(long *)plVar10[1] + 0x18))();
          (**(code **)(*plVar10 + 8))(plVar10);
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar10);
        }
        else {
LAB_034562f0:
          puVar9 = (undefined8 *)*puVar12;
          puVar11 = puVar12;
        }
        puVar12 = puVar9;
      } while (puVar9 != (undefined8 *)0x0);
    }
  }
  puVar8 = (undefined8 *)(param_1 + 0x50);
  puVar12 = (undefined8 *)*puVar8;
  if (puVar12 != (undefined8 *)0x0) {
    if (param_2 == 0) {
      puVar11 = (undefined8 *)0x0;
      do {
        plVar10 = (long *)puVar12[2];
        if (((param_4 == 0) || ((int)plVar10[6] == param_4)) &&
           (uVar5 = FUN_034560f0(plVar10[1],param_3), (uVar5 & 1) == 0)) {
          plVar6 = (long *)plVar10[1];
          if (*(ushort *)((long)plVar6 + 0x34) == 0x1820) goto LAB_03456738;
          local_a8[0] = 0;
          if ((*(ushort *)((long)plVar6 + 0x34) | 0x100) == 0x503) {
            (**(code **)(*plVar6 + 0x58))(plVar6,local_a8);
          }
          plVar6 = *(long **)PTR_DAT_047e6f38;
          uVar2 = *(uint *)(plVar10 + 6);
          nn::os::LockMutex((MutexType *)(plVar6 + 3));
          uVar3 = *(uint *)(plVar6 + 1);
          if (uVar3 != 0) {
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = uVar2 / uVar3;
            }
            for (lVar7 = *(long *)(*plVar6 + (ulong)(uVar2 - uVar4 * uVar3) * 8); lVar7 != 0;
                lVar7 = *(long *)(lVar7 + 0x70)) {
              if (*(uint *)(lVar7 + 0x54) == uVar2) {
                *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + -1;
                FUN_034b3448(plVar6,uVar2);
                goto LAB_034567c0;
              }
            }
          }
          nn::os::UnlockMutex((MutexType *)(plVar6 + 3));
LAB_034567c0:
          puVar9 = (undefined8 *)*puVar12;
          puVar1 = puVar8;
          if (*(undefined8 **)(param_1 + 0x50) != puVar12) {
            puVar1 = puVar11;
          }
          *puVar1 = puVar9;
          if (*(undefined8 **)(param_1 + 0x58) == puVar12) {
            *(undefined8 **)(param_1 + 0x58) = puVar11;
          }
          *puVar12 = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 **)(param_1 + 0x60) = puVar12;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
          (**(code **)(*(long *)plVar10[1] + 0x18))();
          (**(code **)(*plVar10 + 8))(plVar10);
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar10);
        }
        else {
LAB_03456738:
          puVar9 = (undefined8 *)*puVar12;
          puVar11 = puVar12;
        }
        puVar12 = puVar9;
      } while (puVar9 != (undefined8 *)0x0);
    }
    else {
      puVar11 = (undefined8 *)0x0;
      do {
        plVar10 = (long *)puVar12[2];
        if ((plVar10[8] == param_2) &&
           (((param_4 == 0 || ((int)plVar10[6] == param_4)) &&
            (uVar5 = FUN_034560f0(plVar10[1],param_3), (uVar5 & 1) == 0)))) {
          plVar6 = (long *)plVar10[1];
          if (*(ushort *)((long)plVar6 + 0x34) == 0x1820) goto LAB_034565d0;
          local_a8[0] = 0;
          if ((*(ushort *)((long)plVar6 + 0x34) | 0x100) == 0x503) {
            (**(code **)(*plVar6 + 0x58))(plVar6,local_a8);
          }
          plVar6 = *(long **)PTR_DAT_047e6f38;
          uVar2 = *(uint *)(plVar10 + 6);
          nn::os::LockMutex((MutexType *)(plVar6 + 3));
          uVar3 = *(uint *)(plVar6 + 1);
          if (uVar3 != 0) {
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = uVar2 / uVar3;
            }
            for (lVar7 = *(long *)(*plVar6 + (ulong)(uVar2 - uVar4 * uVar3) * 8); lVar7 != 0;
                lVar7 = *(long *)(lVar7 + 0x70)) {
              if (*(uint *)(lVar7 + 0x54) == uVar2) {
                *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + -1;
                FUN_034b3448(plVar6,uVar2);
                goto LAB_03456658;
              }
            }
          }
          nn::os::UnlockMutex((MutexType *)(plVar6 + 3));
LAB_03456658:
          puVar9 = (undefined8 *)*puVar12;
          puVar1 = puVar8;
          if (*(undefined8 **)(param_1 + 0x50) != puVar12) {
            puVar1 = puVar11;
          }
          *puVar1 = puVar9;
          if (*(undefined8 **)(param_1 + 0x58) == puVar12) {
            *(undefined8 **)(param_1 + 0x58) = puVar11;
          }
          *puVar12 = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 **)(param_1 + 0x60) = puVar12;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
          (**(code **)(*(long *)plVar10[1] + 0x18))();
          (**(code **)(*plVar10 + 8))(plVar10);
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar10);
        }
        else {
LAB_034565d0:
          puVar9 = (undefined8 *)*puVar12;
          puVar11 = puVar12;
        }
        puVar12 = puVar9;
      } while (puVar9 != (undefined8 *)0x0);
    }
  }
  return 1;
}



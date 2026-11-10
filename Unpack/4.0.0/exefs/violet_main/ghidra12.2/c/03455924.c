/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03455924; name: FUN_03455924
 */


undefined8 FUN_03455924(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 local_a8 [18];
  
  if ((param_4 & 0xfffffffe) == 2) {
    puVar7 = (undefined8 *)(param_1 + 0x28);
    puVar10 = (undefined8 *)*puVar7;
    if (puVar10 != (undefined8 *)0x0) {
      if (param_4 == 2) {
        puVar12 = (undefined8 *)0x0;
        do {
          plVar8 = (long *)puVar10[2];
          if (((long *)plVar8[1] == param_2) &&
             (uVar4 = FUN_0345fec8(param_2,param_3,plVar8[8],plVar8), (uVar4 & 1) != 0)) {
            local_a8[0] = 0;
            plVar5 = (long *)plVar8[1];
            if ((*(ushort *)((long)plVar5 + 0x34) | 0x100) == 0x503) {
              (**(code **)(*plVar5 + 0x58))(plVar5,local_a8);
            }
            plVar5 = *(long **)PTR_DAT_047e6f38;
            uVar1 = *(uint *)(plVar8 + 6);
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
                  goto LAB_03455a50;
                }
              }
            }
            nn::os::UnlockMutex((MutexType *)(plVar5 + 3));
LAB_03455a50:
            puVar9 = (undefined8 *)*puVar10;
            puVar11 = puVar7;
            if (*(undefined8 **)(param_1 + 0x28) != puVar10) {
              puVar11 = puVar12;
            }
            *puVar11 = puVar9;
            if (*(undefined8 **)(param_1 + 0x30) == puVar10) {
              *(undefined8 **)(param_1 + 0x30) = puVar12;
            }
            *puVar10 = *(undefined8 *)(param_1 + 0x38);
            *(undefined8 **)(param_1 + 0x38) = puVar10;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
            (**(code **)(*(long *)plVar8[1] + 0x18))();
            (**(code **)(*plVar8 + 8))(plVar8);
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar8);
            puVar10 = puVar12;
          }
          else {
            puVar9 = (undefined8 *)*puVar10;
          }
          puVar12 = puVar10;
          puVar10 = puVar9;
        } while (puVar9 != (undefined8 *)0x0);
      }
      else {
        puVar12 = (undefined8 *)0x0;
        do {
          plVar8 = (long *)puVar10[2];
          if ((long *)plVar8[1] == param_2) {
            local_a8[0] = 0;
            plVar5 = param_2;
            if (*(short *)((long)param_2 + 0x34) == 0x403) {
LAB_03455b14:
              (**(code **)(*plVar5 + 0x58))(plVar5,local_a8);
            }
            else if (*(short *)((long)param_2 + 0x34) == 0x503) {
              plVar5 = (long *)plVar8[1];
              goto LAB_03455b14;
            }
            plVar5 = *(long **)PTR_DAT_047e6f38;
            uVar1 = *(uint *)(plVar8 + 6);
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
                  goto LAB_03455b94;
                }
              }
            }
            nn::os::UnlockMutex((MutexType *)(plVar5 + 3));
LAB_03455b94:
            puVar11 = (undefined8 *)*puVar10;
            puVar9 = puVar7;
            if (*(undefined8 **)(param_1 + 0x28) != puVar10) {
              puVar9 = puVar12;
            }
            *puVar9 = puVar11;
            if (*(undefined8 **)(param_1 + 0x30) == puVar10) {
              *(undefined8 **)(param_1 + 0x30) = puVar12;
            }
            *puVar10 = *(undefined8 *)(param_1 + 0x38);
            *(undefined8 **)(param_1 + 0x38) = puVar10;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
            (**(code **)(*(long *)plVar8[1] + 0x18))();
            (**(code **)(*plVar8 + 8))(plVar8);
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar8);
          }
          else {
            puVar11 = (undefined8 *)*puVar10;
            puVar12 = puVar10;
          }
          puVar10 = puVar11;
        } while (puVar11 != (undefined8 *)0x0);
      }
    }
    puVar10 = *(undefined8 **)(param_1 + 0x50);
    if (puVar10 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
      do {
        while ((plVar8 = (long *)puVar10[2], (long *)plVar8[1] != param_2 ||
               (uVar4 = FUN_0345fec8(param_2,param_3,plVar8[8],plVar8), (uVar4 & 1) == 0))) {
          puVar12 = (undefined8 *)*puVar10;
          puVar7 = puVar10;
          puVar10 = puVar12;
          if (puVar12 == (undefined8 *)0x0) {
            return 1;
          }
        }
        local_a8[0] = 0;
        plVar5 = (long *)plVar8[1];
        if ((*(ushort *)((long)plVar5 + 0x34) | 0x100) == 0x503) {
          (**(code **)(*plVar5 + 0x58))(plVar5,local_a8);
        }
        plVar5 = *(long **)PTR_DAT_047e6f38;
        uVar1 = *(uint *)(plVar8 + 6);
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
              goto LAB_03455cf8;
            }
          }
        }
        nn::os::UnlockMutex((MutexType *)(plVar5 + 3));
LAB_03455cf8:
        puVar9 = (undefined8 *)*puVar10;
        puVar12 = (undefined8 *)(param_1 + 0x50);
        if (*(undefined8 **)(param_1 + 0x50) != puVar10) {
          puVar12 = puVar7;
        }
        *puVar12 = puVar9;
        if (*(undefined8 **)(param_1 + 0x58) == puVar10) {
          *(undefined8 **)(param_1 + 0x58) = puVar7;
        }
        *puVar10 = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 **)(param_1 + 0x60) = puVar10;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        (**(code **)(*(long *)plVar8[1] + 0x18))();
        (**(code **)(*plVar8 + 8))(plVar8);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar8);
        puVar10 = puVar9;
      } while (puVar9 != (undefined8 *)0x0);
    }
  }
  return 1;
}



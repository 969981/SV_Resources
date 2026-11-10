/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03454fac; name: FUN_03454fac
 */


undefined8 FUN_03454fac(long param_1,long *param_2,long param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined4 local_a8 [18];
  
  plVar9 = *(long **)(param_1 + 0x28);
  puVar11 = (undefined8 *)PTR_DAT_047e6f28;
  if (plVar9 != (long *)0x0) {
    plVar12 = (long *)0x0;
    do {
      plVar8 = (long *)plVar9[2];
      lVar10 = plVar8[1];
      plVar4 = (long *)FUN_0344ec90(*puVar11,*(undefined4 *)(lVar10 + 0x30),
                                    *(byte *)(lVar10 + 0x36) >> 6 & 1);
      if (param_2 == (long *)0x0) {
LAB_03455064:
        if ((((param_3 != 0) && (plVar8[8] != param_3)) ||
            ((param_4 != 0 && ((int)plVar8[6] != param_4)))) ||
           ((*(short *)(lVar10 + 0x34) != 0x403 &&
            ((*(short *)(lVar10 + 0x34) != 0x503 ||
             (uVar5 = FUN_0345fec8(plVar8[1],param_2,plVar8[8],plVar8), (uVar5 & 1) == 0))))))
        goto LAB_0345512c;
        local_a8[0] = 0;
        plVar7 = (long *)plVar8[1];
        if ((*(ushort *)((long)plVar7 + 0x34) | 0x100) == 0x503) {
          (**(code **)(*plVar7 + 0x58))(plVar7,local_a8);
        }
        plVar7 = *(long **)PTR_DAT_047e6f38;
        uVar1 = *(uint *)(plVar8 + 6);
        nn::os::LockMutex((MutexType *)(plVar7 + 3));
        uVar2 = *(uint *)(plVar7 + 1);
        if (uVar2 != 0) {
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar1 / uVar2;
          }
          for (lVar10 = *(long *)(*plVar7 + (ulong)(uVar1 - uVar3 * uVar2) * 8); lVar10 != 0;
              lVar10 = *(long *)(lVar10 + 0x70)) {
            if (*(uint *)(lVar10 + 0x54) == uVar1) {
              *(int *)(lVar10 + 0x30) = *(int *)(lVar10 + 0x30) + -1;
              FUN_034b3448(plVar7,uVar1);
              goto LAB_03455168;
            }
          }
        }
        nn::os::UnlockMutex((MutexType *)(plVar7 + 3));
LAB_03455168:
        plVar6 = (long *)*plVar9;
        plVar7 = (long *)(param_1 + 0x28);
        if (*(long **)(param_1 + 0x28) != plVar9) {
          plVar7 = plVar12;
        }
        *plVar7 = (long)plVar6;
        puVar11 = (undefined8 *)PTR_DAT_047e6f28;
        if (*(long **)(param_1 + 0x30) == plVar9) {
          *(long **)(param_1 + 0x30) = plVar12;
        }
        *plVar9 = *(long *)(param_1 + 0x38);
        *(long **)(param_1 + 0x38) = plVar9;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        (**(code **)(*(long *)plVar8[1] + 0x18))();
        (**(code **)(*plVar8 + 8))(plVar8);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar8);
      }
      else {
        if (plVar4 != (long *)0x0) {
          if (plVar4 == param_2) goto LAB_03455064;
          plVar6 = (long *)plVar4[0x14];
          for (plVar7 = (long *)plVar4[0x13]; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[0x13])
          {
            if (plVar7 == param_2) goto LAB_03455064;
            if (plVar6 == (long *)0x0) {
              plVar6 = (long *)plVar7[0x14];
            }
          }
          for (; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[0x14]) {
            if (plVar6 == param_2) goto LAB_03455064;
          }
        }
LAB_0345512c:
        plVar6 = (long *)*plVar9;
        plVar12 = plVar9;
      }
      plVar9 = plVar6;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4);
      }
    } while (plVar9 != (long *)0x0);
  }
  plVar9 = *(long **)(param_1 + 0x50);
  if (plVar9 != (long *)0x0) {
    plVar12 = (long *)0x0;
    do {
      plVar8 = (long *)plVar9[2];
      lVar10 = plVar8[1];
      plVar4 = (long *)FUN_0344ec90(*puVar11,*(undefined4 *)(lVar10 + 0x30),
                                    *(byte *)(lVar10 + 0x36) >> 6 & 1);
      if (param_2 == (long *)0x0) {
LAB_03455270:
        if ((((param_3 != 0) && (plVar8[8] != param_3)) ||
            ((param_4 != 0 && ((int)plVar8[6] != param_4)))) ||
           ((*(short *)(lVar10 + 0x34) != 0x503 ||
            (uVar5 = FUN_0345fec8(plVar8[1],param_2,plVar8[8],plVar8), (uVar5 & 1) == 0))))
        goto LAB_03455330;
        local_a8[0] = 0;
        plVar7 = (long *)plVar8[1];
        if ((*(ushort *)((long)plVar7 + 0x34) | 0x100) == 0x503) {
          (**(code **)(*plVar7 + 0x58))(plVar7,local_a8);
        }
        plVar7 = *(long **)PTR_DAT_047e6f38;
        uVar1 = *(uint *)(plVar8 + 6);
        nn::os::LockMutex((MutexType *)(plVar7 + 3));
        uVar2 = *(uint *)(plVar7 + 1);
        if (uVar2 != 0) {
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar1 / uVar2;
          }
          for (lVar10 = *(long *)(*plVar7 + (ulong)(uVar1 - uVar3 * uVar2) * 8); lVar10 != 0;
              lVar10 = *(long *)(lVar10 + 0x70)) {
            if (*(uint *)(lVar10 + 0x54) == uVar1) {
              *(int *)(lVar10 + 0x30) = *(int *)(lVar10 + 0x30) + -1;
              FUN_034b3448(plVar7,uVar1);
              goto LAB_0345536c;
            }
          }
        }
        nn::os::UnlockMutex((MutexType *)(plVar7 + 3));
LAB_0345536c:
        plVar6 = (long *)*plVar9;
        plVar7 = (long *)(param_1 + 0x50);
        if (*(long **)(param_1 + 0x50) != plVar9) {
          plVar7 = plVar12;
        }
        *plVar7 = (long)plVar6;
        puVar11 = (undefined8 *)PTR_DAT_047e6f28;
        if (*(long **)(param_1 + 0x58) == plVar9) {
          *(long **)(param_1 + 0x58) = plVar12;
        }
        *plVar9 = *(long *)(param_1 + 0x60);
        *(long **)(param_1 + 0x60) = plVar9;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        (**(code **)(*(long *)plVar8[1] + 0x18))();
        (**(code **)(*plVar8 + 8))(plVar8);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar8);
      }
      else {
        if (plVar4 != (long *)0x0) {
          if (plVar4 == param_2) goto LAB_03455270;
          plVar6 = (long *)plVar4[0x14];
          for (plVar7 = (long *)plVar4[0x13]; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[0x13])
          {
            if (plVar7 == param_2) goto LAB_03455270;
            if (plVar6 == (long *)0x0) {
              plVar6 = (long *)plVar7[0x14];
            }
          }
          for (; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[0x14]) {
            if (plVar6 == param_2) goto LAB_03455270;
          }
        }
LAB_03455330:
        plVar6 = (long *)*plVar9;
        plVar12 = plVar9;
      }
      plVar9 = plVar6;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4);
      }
    } while (plVar9 != (long *)0x0);
  }
  return 1;
}



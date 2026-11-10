/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0345423c; name: FUN_0345423c
 */


undefined8 FUN_0345423c(long param_1,long *param_2,long param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined4 local_a8 [18];
  
  plVar11 = *(long **)(param_1 + 0x28);
  puVar10 = (undefined8 *)PTR_DAT_047e6f28;
  if (plVar11 != (long *)0x0) {
    plVar7 = (long *)0x0;
    do {
      plVar8 = (long *)plVar11[2];
      lVar9 = plVar8[1];
      plVar4 = (long *)FUN_0344ec90(*puVar10,*(undefined4 *)(lVar9 + 0x30),
                                    *(byte *)(lVar9 + 0x36) >> 6 & 1);
      if (param_2 == (long *)0x0) {
LAB_034542f0:
        if ((((param_3 != 0) && (plVar8[8] != param_3)) ||
            ((param_4 != 0 && ((int)plVar8[6] != param_4)))) || (*(short *)(lVar9 + 0x34) == 0x1820)
           ) goto LAB_03454320;
        local_a8[0] = 0;
        plVar6 = (long *)plVar8[1];
        if ((*(ushort *)((long)plVar6 + 0x34) | 0x100) == 0x503) {
          (**(code **)(*plVar6 + 0x58))(plVar6,local_a8);
        }
        plVar6 = *(long **)PTR_DAT_047e6f38;
        uVar1 = *(uint *)(plVar8 + 6);
        nn::os::LockMutex((MutexType *)(plVar6 + 3));
        uVar2 = *(uint *)(plVar6 + 1);
        if (uVar2 != 0) {
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar1 / uVar2;
          }
          for (lVar9 = *(long *)(*plVar6 + (ulong)(uVar1 - uVar3 * uVar2) * 8); lVar9 != 0;
              lVar9 = *(long *)(lVar9 + 0x70)) {
            if (*(uint *)(lVar9 + 0x54) == uVar1) {
              *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + -1;
              FUN_034b3448(plVar6,uVar1);
              goto LAB_034543e0;
            }
          }
        }
        nn::os::UnlockMutex((MutexType *)(plVar6 + 3));
LAB_034543e0:
        plVar5 = (long *)*plVar11;
        plVar6 = (long *)(param_1 + 0x28);
        if (*(long **)(param_1 + 0x28) != plVar11) {
          plVar6 = plVar7;
        }
        *plVar6 = (long)plVar5;
        puVar10 = (undefined8 *)PTR_DAT_047e6f28;
        if (*(long **)(param_1 + 0x30) == plVar11) {
          *(long **)(param_1 + 0x30) = plVar7;
        }
        *plVar11 = *(long *)(param_1 + 0x38);
        *(long **)(param_1 + 0x38) = plVar11;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        (**(code **)(*(long *)plVar8[1] + 0x18))();
        (**(code **)(*plVar8 + 8))(plVar8);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar8);
      }
      else {
        if (plVar4 != (long *)0x0) {
          if (plVar4 == param_2) goto LAB_034542f0;
          plVar5 = (long *)plVar4[0x14];
          for (plVar6 = (long *)plVar4[0x13]; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[0x13])
          {
            if (plVar6 == param_2) goto LAB_034542f0;
            if (plVar5 == (long *)0x0) {
              plVar5 = (long *)plVar6[0x14];
            }
          }
          for (; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[0x14]) {
            if (plVar5 == param_2) goto LAB_034542f0;
          }
        }
LAB_03454320:
        plVar5 = (long *)*plVar11;
        plVar7 = plVar11;
      }
      plVar11 = plVar5;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4);
      }
    } while (plVar11 != (long *)0x0);
  }
  plVar11 = *(long **)(param_1 + 0x50);
  if (plVar11 != (long *)0x0) {
    plVar7 = (long *)0x0;
    do {
      plVar8 = (long *)plVar11[2];
      lVar9 = plVar8[1];
      plVar4 = (long *)FUN_0344ec90(*puVar10,*(undefined4 *)(lVar9 + 0x30),
                                    *(byte *)(lVar9 + 0x36) >> 6 & 1);
      if (param_2 == (long *)0x0) {
LAB_034544e4:
        if (((param_3 != 0) && (plVar8[8] != param_3)) ||
           (((param_4 != 0 && ((int)plVar8[6] != param_4)) || (*(short *)(lVar9 + 0x34) == 0x1820)))
           ) goto LAB_03454510;
        local_a8[0] = 0;
        plVar6 = (long *)plVar8[1];
        if ((*(ushort *)((long)plVar6 + 0x34) | 0x100) == 0x503) {
          (**(code **)(*plVar6 + 0x58))(plVar6,local_a8);
        }
        plVar6 = *(long **)PTR_DAT_047e6f38;
        uVar1 = *(uint *)(plVar8 + 6);
        nn::os::LockMutex((MutexType *)(plVar6 + 3));
        uVar2 = *(uint *)(plVar6 + 1);
        if (uVar2 != 0) {
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar1 / uVar2;
          }
          for (lVar9 = *(long *)(*plVar6 + (ulong)(uVar1 - uVar3 * uVar2) * 8); lVar9 != 0;
              lVar9 = *(long *)(lVar9 + 0x70)) {
            if (*(uint *)(lVar9 + 0x54) == uVar1) {
              *(int *)(lVar9 + 0x30) = *(int *)(lVar9 + 0x30) + -1;
              FUN_034b3448(plVar6,uVar1);
              goto LAB_034545d0;
            }
          }
        }
        nn::os::UnlockMutex((MutexType *)(plVar6 + 3));
LAB_034545d0:
        plVar5 = (long *)*plVar11;
        plVar6 = (long *)(param_1 + 0x50);
        if (*(long **)(param_1 + 0x50) != plVar11) {
          plVar6 = plVar7;
        }
        *plVar6 = (long)plVar5;
        puVar10 = (undefined8 *)PTR_DAT_047e6f28;
        if (*(long **)(param_1 + 0x58) == plVar11) {
          *(long **)(param_1 + 0x58) = plVar7;
        }
        *plVar11 = *(long *)(param_1 + 0x60);
        *(long **)(param_1 + 0x60) = plVar11;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        (**(code **)(*(long *)plVar8[1] + 0x18))();
        (**(code **)(*plVar8 + 8))(plVar8);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar8);
      }
      else {
        if (plVar4 != (long *)0x0) {
          if (plVar4 == param_2) goto LAB_034544e4;
          plVar5 = (long *)plVar4[0x14];
          for (plVar6 = (long *)plVar4[0x13]; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[0x13])
          {
            if (plVar6 == param_2) goto LAB_034544e4;
            if (plVar5 == (long *)0x0) {
              plVar5 = (long *)plVar6[0x14];
            }
          }
          for (; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[0x14]) {
            if (plVar5 == param_2) goto LAB_034544e4;
          }
        }
LAB_03454510:
        plVar5 = (long *)*plVar11;
        plVar7 = plVar11;
      }
      plVar11 = plVar5;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4);
      }
    } while (plVar11 != (long *)0x0);
  }
  return 1;
}



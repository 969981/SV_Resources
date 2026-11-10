/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0345706c; name: FUN_0345706c
 */


void FUN_0345706c(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  undefined4 local_a8 [18];
  
  plVar11 = *(long **)(param_1 + 0x28);
  if (plVar11 != (long *)0x0) {
    plVar10 = (long *)0x0;
    puVar9 = (undefined8 *)PTR_DAT_047e6f28;
    do {
      plVar7 = (long *)plVar11[2];
      lVar8 = plVar7[1];
      plVar4 = (long *)FUN_0344ec90(*puVar9,*(undefined4 *)(lVar8 + 0x30),
                                    *(byte *)(lVar8 + 0x36) >> 6 & 1);
      if ((param_2 == (long *)0x0) || (plVar4 == (long *)0x0)) {
LAB_03457124:
        plVar6 = (long *)*plVar11;
        plVar10 = plVar11;
      }
      else {
        if (plVar4 != param_2) {
          plVar5 = (long *)plVar4[0x14];
          for (plVar6 = (long *)plVar4[0x13]; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[0x13])
          {
            if (plVar6 == param_2) goto LAB_03457118;
            if (plVar5 == (long *)0x0) {
              plVar5 = (long *)plVar6[0x14];
            }
          }
          for (; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[0x14]) {
            if (plVar5 == param_2) goto LAB_03457118;
          }
          goto LAB_03457124;
        }
LAB_03457118:
        if (*(short *)(lVar8 + 0x34) == 0x1820) goto LAB_03457124;
        local_a8[0] = 0;
        plVar6 = (long *)plVar7[1];
        if ((*(ushort *)((long)plVar6 + 0x34) | 0x100) == 0x503) {
          (**(code **)(*plVar6 + 0x58))(plVar6,local_a8);
        }
        plVar6 = *(long **)PTR_DAT_047e6f38;
        uVar1 = *(uint *)(plVar7 + 6);
        nn::os::LockMutex((MutexType *)(plVar6 + 3));
        uVar2 = *(uint *)(plVar6 + 1);
        if (uVar2 != 0) {
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar1 / uVar2;
          }
          for (lVar8 = *(long *)(*plVar6 + (ulong)(uVar1 - uVar3 * uVar2) * 8); lVar8 != 0;
              lVar8 = *(long *)(lVar8 + 0x70)) {
            if (*(uint *)(lVar8 + 0x54) == uVar1) {
              *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + -1;
              FUN_034b3448(plVar6,uVar1);
              goto LAB_034571e4;
            }
          }
        }
        nn::os::UnlockMutex((MutexType *)(plVar6 + 3));
LAB_034571e4:
        plVar6 = (long *)*plVar11;
        plVar5 = (long *)(param_1 + 0x28);
        if (*(long **)(param_1 + 0x28) != plVar11) {
          plVar5 = plVar10;
        }
        *plVar5 = (long)plVar6;
        puVar9 = (undefined8 *)PTR_DAT_047e6f28;
        if (*(long **)(param_1 + 0x30) == plVar11) {
          *(long **)(param_1 + 0x30) = plVar10;
        }
        *plVar11 = *(long *)(param_1 + 0x38);
        *(long **)(param_1 + 0x38) = plVar11;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        (**(code **)(*(long *)plVar7[1] + 0x18))();
        (**(code **)(*plVar7 + 8))(plVar7);
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar7);
      }
      plVar11 = plVar6;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4);
      }
    } while (plVar11 != (long *)0x0);
  }
  return;
}



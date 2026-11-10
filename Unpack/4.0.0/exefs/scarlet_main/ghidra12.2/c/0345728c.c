/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0345728c; name: FUN_0345728c
 */


void FUN_0345728c(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined4 local_a8 [18];
  
  puVar4 = PTR_DAT_047e6f28;
  plVar11 = *(long **)(param_1 + 0x50);
  if (plVar11 != (long *)0x0) {
    if (param_2 == (long *)0x0) {
      do {
        plVar12 = (long *)FUN_0344ec90(*(undefined8 *)puVar4,
                                       *(undefined4 *)(*(long *)(plVar11[2] + 8) + 0x30),
                                       *(byte *)(*(long *)(plVar11[2] + 8) + 0x36) >> 6 & 1);
        plVar11 = (long *)*plVar11;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x30))();
        }
      } while (plVar11 != (long *)0x0);
    }
    else {
      plVar12 = (long *)0x0;
      puVar10 = (undefined8 *)PTR_DAT_047e6f28;
      do {
        plVar9 = (long *)plVar11[2];
        plVar5 = (long *)FUN_0344ec90(*puVar10,*(undefined4 *)(plVar9[1] + 0x30),
                                      *(byte *)(plVar9[1] + 0x36) >> 6 & 1);
        if (plVar5 == (long *)0x0) {
LAB_03457338:
          plVar8 = (long *)*plVar11;
          plVar12 = plVar11;
        }
        else {
          if (plVar5 != param_2) {
            plVar7 = (long *)plVar5[0x14];
            for (plVar8 = (long *)plVar5[0x13]; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[0x13]
                ) {
              if (plVar8 == param_2) goto LAB_03457360;
              if (plVar7 == (long *)0x0) {
                plVar7 = (long *)plVar8[0x14];
              }
            }
            for (; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[0x14]) {
              if (plVar7 == param_2) goto LAB_03457360;
            }
            goto LAB_03457338;
          }
LAB_03457360:
          local_a8[0] = 0;
          plVar8 = (long *)plVar9[1];
          if ((*(ushort *)((long)plVar8 + 0x34) | 0x100) == 0x503) {
            (**(code **)(*plVar8 + 0x58))(plVar8,local_a8);
          }
          plVar8 = *(long **)PTR_DAT_047e6f38;
          uVar1 = *(uint *)(plVar9 + 6);
          nn::os::LockMutex((MutexType *)(plVar8 + 3));
          uVar2 = *(uint *)(plVar8 + 1);
          if (uVar2 != 0) {
            uVar3 = 0;
            if (uVar2 != 0) {
              uVar3 = uVar1 / uVar2;
            }
            for (lVar6 = *(long *)(*plVar8 + (ulong)(uVar1 - uVar3 * uVar2) * 8); lVar6 != 0;
                lVar6 = *(long *)(lVar6 + 0x70)) {
              if (*(uint *)(lVar6 + 0x54) == uVar1) {
                *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + -1;
                FUN_034b3448(plVar8,uVar1);
                goto LAB_034573dc;
              }
            }
          }
          nn::os::UnlockMutex((MutexType *)(plVar8 + 3));
LAB_034573dc:
          puVar10 = (undefined8 *)PTR_DAT_047e6f28;
          plVar8 = (long *)*plVar11;
          plVar7 = (long *)(param_1 + 0x50);
          if (*(long **)(param_1 + 0x50) != plVar11) {
            plVar7 = plVar12;
          }
          *plVar7 = (long)plVar8;
          if (*(long **)(param_1 + 0x58) == plVar11) {
            *(long **)(param_1 + 0x58) = plVar12;
          }
          *plVar11 = *(long *)(param_1 + 0x60);
          *(long **)(param_1 + 0x60) = plVar11;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
          (**(code **)(*(long *)plVar9[1] + 0x18))();
          (**(code **)(*plVar9 + 8))(plVar9);
          (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar9);
        }
        plVar11 = plVar8;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x30))(plVar5);
        }
      } while (plVar11 != (long *)0x0);
    }
  }
  return;
}



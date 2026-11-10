/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e3b030; name: FUN_02e3b030
 */


undefined4 FUN_02e3b030(long param_1,byte param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  ulong uVar7;
  ushort *puVar8;
  long *plVar9;
  
  piVar4 = *(int **)(param_1 + 8);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  if (((4 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
      (uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar7 != 0)) &&
     (puVar5 = (uint *)((long)piVar4 + uVar7), puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5),
     (uint)param_2 < *puVar5)) {
    puVar5 = puVar5 + (ulong)param_2 + 1;
    piVar4 = (int *)((long)puVar5 + (ulong)*puVar5);
    puVar8 = (ushort *)((long)piVar4 - (long)*piVar4);
    uVar3 = *puVar8;
    if ((4 < uVar3) && ((ulong)puVar8[2] != 0)) {
      bVar2 = *(byte *)((long)piVar4 + (ulong)puVar8[2]);
      if (bVar2 < 0xc) {
        if (bVar2 == 3) {
          if (6 < uVar3) {
            if ((ulong)puVar8[3] == 0) {
              return 0;
            }
            uVar1 = *(uint *)((long)piVar4 + (ulong)puVar8[3]);
            if (5 < uVar1) {
              if ((uVar3 < 0xb) || ((ulong)puVar8[5] == 0)) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)((long)piVar4 + (ulong)puVar8[5]);
              }
              plVar9 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) +
                                                     8) + 0x50) + 0x38);
              if (plVar9 != (long *)0x0) {
                while ((*(int *)((long)plVar9 + 0x14) != iVar6 ||
                       ((uint)*(byte *)(plVar9 + 3) != (uVar1 & 0xff)))) {
                  plVar9 = (long *)*plVar9;
                  if (plVar9 == (long *)0x0) {
                    return 0;
                  }
                }
                goto LAB_02e3b2a8;
              }
            }
          }
        }
        else {
          if (bVar2 != 4) {
            return 0;
          }
          if (6 < uVar3) {
            if ((ulong)puVar8[3] == 0) {
              return 0;
            }
            uVar1 = *(uint *)((long)piVar4 + (ulong)puVar8[3]);
            if (5 < uVar1) {
              if ((uVar3 < 0xb) || ((ulong)puVar8[5] == 0)) {
                iVar6 = 0;
              }
              else {
                iVar6 = *(int *)((long)piVar4 + (ulong)puVar8[5]);
              }
              plVar9 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) +
                                                     8) + 0x50) + 0x38);
              if (plVar9 != (long *)0x0) {
                while ((*(int *)((long)plVar9 + 0x14) != iVar6 ||
                       ((uint)*(byte *)(plVar9 + 3) != (uVar1 & 0xff)))) {
                  plVar9 = (long *)*plVar9;
                  if (plVar9 == (long *)0x0) {
                    return 0;
                  }
                }
LAB_02e3b2a8:
                return (int)plVar9[2];
              }
            }
          }
        }
      }
      else if (bVar2 == 0xc) {
        if (6 < uVar3) {
          if ((ulong)puVar8[3] == 0) {
            return 0;
          }
          uVar1 = *(uint *)((long)piVar4 + (ulong)puVar8[3]);
          if (5 < uVar1) {
            if ((uVar3 < 9) || ((ulong)puVar8[4] == 0)) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)((long)piVar4 + (ulong)puVar8[4]);
            }
            plVar9 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) + 8
                                                   ) + 0x50) + 0x38);
            if (plVar9 != (long *)0x0) {
              while ((*(int *)((long)plVar9 + 0x14) != iVar6 ||
                     ((uint)*(byte *)(plVar9 + 3) != (uVar1 & 0xff)))) {
                plVar9 = (long *)*plVar9;
                if (plVar9 == (long *)0x0) {
                  return 0;
                }
              }
              goto LAB_02e3b2a8;
            }
          }
        }
      }
      else {
        if (bVar2 != 0x16) {
          return 0;
        }
        if (8 < uVar3) {
          if ((ulong)puVar8[4] == 0) {
            return 0;
          }
          uVar1 = *(uint *)((long)piVar4 + (ulong)puVar8[4]);
          if (5 < uVar1) {
            if ((ulong)puVar8[3] == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)((long)piVar4 + (ulong)puVar8[3]);
            }
            plVar9 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) + 8
                                                   ) + 0x50) + 0x38);
            if (plVar9 != (long *)0x0) {
              while ((*(int *)((long)plVar9 + 0x14) != iVar6 ||
                     ((uint)*(byte *)(plVar9 + 3) != (uVar1 & 0xff)))) {
                plVar9 = (long *)*plVar9;
                if (plVar9 == (long *)0x0) {
                  return 0;
                }
              }
              goto LAB_02e3b2a8;
            }
          }
        }
      }
    }
  }
  return 0;
}



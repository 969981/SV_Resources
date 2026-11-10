/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b2990; name: FUN_034b2990
 */


undefined8 FUN_034b2990(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined4 *puVar9;
  long *plVar10;
  
  plVar7 = (long *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  plVar10 = plVar7;
  if ((uVar2 != 0) && (*plVar7 != param_2)) {
    lVar6 = (ulong)uVar2 * 8;
    plVar8 = plVar7;
    do {
      lVar6 = lVar6 + -8;
      if (lVar6 == 0) {
        plVar10 = plVar7 + uVar2;
        goto LAB_034b29ec;
      }
      plVar10 = plVar8 + 1;
      plVar1 = plVar8 + 1;
      plVar8 = plVar10;
    } while (*plVar1 != param_2);
  }
LAB_034b29ec:
  if (plVar10 == (long *)0x0) {
    return 1;
  }
  if (plVar7 + uVar2 == plVar10) {
    return 1;
  }
  uVar2 = *(uint *)(param_2 + 0x38);
  if (uVar2 != 0) {
    plVar7 = *(long **)(param_2 + 0x30);
    plVar10 = plVar7 + uVar2;
    if (*plVar7 != param_3) {
      lVar6 = (ulong)uVar2 * 8;
      do {
        lVar6 = lVar6 + -8;
        if (lVar6 == 0) {
          plVar7 = plVar10;
          break;
        }
        plVar1 = plVar7 + 1;
        plVar8 = plVar7 + 1;
        plVar7 = plVar1;
      } while (*plVar8 != param_3);
    }
    if (plVar10 != plVar7) {
      if (uVar2 < 2) {
        iVar5 = 0;
      }
      else {
        *plVar7 = plVar10[-1];
        iVar5 = *(int *)(param_2 + 0x38) + -1;
      }
      *(int *)(param_2 + 0x38) = iVar5;
      sVar3 = *(short *)(param_2 + 0x42) + -1;
      *(short *)(param_2 + 0x42) = sVar3;
      if (*(short *)(param_2 + 0x40) != 0 || sVar3 != 0) {
        return 1;
      }
      uVar2 = *(uint *)(param_1 + 1);
      if (uVar2 != 0) {
        plVar7 = (long *)*param_1;
        plVar10 = plVar7 + uVar2;
        if (*plVar7 != param_2) {
          lVar6 = (ulong)uVar2 * 8;
          do {
            lVar6 = lVar6 + -8;
            if (lVar6 == 0) {
              plVar7 = plVar10;
              break;
            }
            plVar1 = plVar7 + 1;
            plVar8 = plVar7 + 1;
            plVar7 = plVar1;
          } while (*plVar8 != param_2);
        }
        if (plVar10 != plVar7) {
          puVar9 = (undefined4 *)*plVar7;
          if (uVar2 < 2) {
            iVar5 = 0;
          }
          else {
            *plVar7 = plVar10[-1];
            iVar5 = (int)param_1[1] + -1;
          }
          *(int *)(param_1 + 1) = iVar5;
          *puVar9 = 0;
          puVar4 = PTR_DAT_047e2fd0;
          if (*(long *)(puVar9 + 0xc) != 0) {
            puVar9[0xe] = 0;
            (**(code **)(puVar4 + 0x30))(0);
            *(undefined8 *)(puVar9 + 0xc) = 0;
            puVar9[0xf] = 0;
          }
          if ((*(byte *)(puVar9 + 10) >> 1 & 1) != 0) {
            plVar10 = *(long **)(puVar9 + 4);
            if (plVar10 != (long *)0x0) {
              if (*(ushort *)(plVar10 + 2) - 1 == 0) {
                if (*plVar10 != 0) {
                  *(undefined4 *)(plVar10 + 1) = 0;
                  (**(code **)(puVar4 + 0x30))(0);
                  *plVar10 = 0;
                  *(undefined4 *)((long)plVar10 + 0xc) = 0;
                }
                (**(code **)(puVar4 + 0x30))(0,plVar10);
              }
              else {
                *(short *)(plVar10 + 2) = (short)(*(ushort *)(plVar10 + 2) - 1);
              }
            }
            *(undefined8 *)(puVar9 + 4) = 0;
          }
          if (*(long *)(puVar9 + 0x22) != 0) {
            puVar9[0x24] = 0;
            (**(code **)(puVar4 + 0x30))(0);
            *(undefined8 *)(puVar9 + 0x22) = 0;
            puVar9[0x25] = 0;
          }
          plVar10 = *(long **)(puVar9 + 4);
          if (plVar10 != (long *)0x0) {
            if (*(ushort *)(plVar10 + 2) - 1 == 0) {
              if (*plVar10 != 0) {
                *(undefined4 *)(plVar10 + 1) = 0;
                (**(code **)(puVar4 + 0x30))(0);
                *plVar10 = 0;
                *(undefined4 *)((long)plVar10 + 0xc) = 0;
              }
              (**(code **)(puVar4 + 0x30))(0,plVar10);
            }
            else {
              *(short *)(plVar10 + 2) = (short)(*(ushort *)(plVar10 + 2) - 1);
            }
          }
          (**(code **)(puVar4 + 0x30))(0,puVar9);
          return 1;
        }
      }
      return 0x24;
    }
  }
  return 0x29;
}



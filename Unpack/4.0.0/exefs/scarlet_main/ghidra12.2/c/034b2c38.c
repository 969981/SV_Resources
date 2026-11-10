/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b2c38; name: FUN_034b2c38
 */


undefined8 FUN_034b2c38(long *param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined4 *puVar10;
  long *plVar11;
  
  plVar8 = (long *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  plVar11 = plVar8;
  if ((uVar2 != 0) && (*plVar8 != param_2)) {
    lVar6 = (ulong)uVar2 * 8;
    plVar9 = plVar8;
    do {
      lVar6 = lVar6 + -8;
      if (lVar6 == 0) {
        plVar11 = plVar8 + uVar2;
        goto LAB_034b2c94;
      }
      plVar11 = plVar9 + 1;
      plVar1 = plVar9 + 1;
      plVar9 = plVar11;
    } while (*plVar1 != param_2);
  }
LAB_034b2c94:
  if (plVar11 == (long *)0x0) {
    return 1;
  }
  if (plVar8 + uVar2 == plVar11) {
    return 1;
  }
  sVar3 = *(short *)(param_2 + 0x40);
  if (((sVar3 == 0) || (*(short *)(param_2 + 0x40) = sVar3 + -1, sVar3 == 1)) &&
     (*(short *)(param_2 + 0x42) == 0)) {
    uVar2 = *(uint *)(param_1 + 1);
    if (uVar2 != 0) {
      plVar8 = (long *)*param_1;
      plVar11 = plVar8 + uVar2;
      if (*plVar8 != param_2) {
        lVar6 = (ulong)uVar2 * 8;
        do {
          lVar6 = lVar6 + -8;
          if (lVar6 == 0) {
            plVar8 = plVar11;
            break;
          }
          plVar1 = plVar8 + 1;
          plVar9 = plVar8 + 1;
          plVar8 = plVar1;
        } while (*plVar9 != param_2);
      }
      if (plVar11 != plVar8) {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar2 < 2) {
          iVar5 = 0;
        }
        else {
          *plVar8 = plVar11[-1];
          iVar5 = (int)param_1[1] + -1;
        }
        *(int *)(param_1 + 1) = iVar5;
        *puVar10 = 0;
        puVar4 = PTR_DAT_047e2fd0;
        if (*(long *)(puVar10 + 0xc) != 0) {
          puVar10[0xe] = 0;
          (**(code **)(puVar4 + 0x30))(0);
          *(undefined8 *)(puVar10 + 0xc) = 0;
          puVar10[0xf] = 0;
        }
        if ((*(byte *)(puVar10 + 10) >> 1 & 1) != 0) {
          plVar11 = *(long **)(puVar10 + 4);
          if (plVar11 != (long *)0x0) {
            if (*(ushort *)(plVar11 + 2) - 1 == 0) {
              if (*plVar11 != 0) {
                *(undefined4 *)(plVar11 + 1) = 0;
                (**(code **)(puVar4 + 0x30))(0);
                *plVar11 = 0;
                *(undefined4 *)((long)plVar11 + 0xc) = 0;
              }
              (**(code **)(puVar4 + 0x30))(0,plVar11);
            }
            else {
              *(short *)(plVar11 + 2) = (short)(*(ushort *)(plVar11 + 2) - 1);
            }
          }
          *(undefined8 *)(puVar10 + 4) = 0;
        }
        if (*(long *)(puVar10 + 0x22) != 0) {
          puVar10[0x24] = 0;
          (**(code **)(puVar4 + 0x30))(0);
          *(undefined8 *)(puVar10 + 0x22) = 0;
          puVar10[0x25] = 0;
        }
        plVar11 = *(long **)(puVar10 + 4);
        if (plVar11 != (long *)0x0) {
          if (*(ushort *)(plVar11 + 2) - 1 == 0) {
            if (*plVar11 != 0) {
              *(undefined4 *)(plVar11 + 1) = 0;
              (**(code **)(puVar4 + 0x30))(0);
              *plVar11 = 0;
              *(undefined4 *)((long)plVar11 + 0xc) = 0;
            }
            (**(code **)(puVar4 + 0x30))(0,plVar11);
          }
          else {
            *(short *)(plVar11 + 2) = (short)(*(ushort *)(plVar11 + 2) - 1);
          }
        }
        (**(code **)(puVar4 + 0x30))(0,puVar10);
        goto LAB_034b2cc4;
      }
    }
    uVar7 = 0x24;
  }
  else {
LAB_034b2cc4:
    uVar7 = 1;
  }
  return uVar7;
}



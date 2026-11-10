/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015e3f5c; name: FUN_015e3f5c
 */


void FUN_015e3f5c(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  if (param_1[0xb] != 0) {
    puVar6 = (undefined8 *)param_1[6];
    if (puVar6 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)*puVar6;
      if ((long *)puVar6[2] != (long *)0x0) {
        (**(code **)(*(long *)puVar6[2] + 0x60))();
      }
      plVar7 = (long *)param_1[7];
      uVar1 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,puVar6,0x18,8);
      }
      else {
        FUN_00c48fe8(plVar7,puVar6,0x18,8);
      }
      if (puVar5 != (undefined8 *)0x0) {
        plVar7 = (long *)*puVar5;
        if ((long *)puVar5[2] != (long *)0x0) {
          (**(code **)(*(long *)puVar5[2] + 0x60))();
        }
        plVar8 = (long *)param_1[7];
        uVar1 = (**(code **)(*plVar8 + 0xf8))(plVar8);
        if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar8 + 0x18))(plVar8,puVar5,0x18,8);
        }
        else {
          FUN_00c48fe8(plVar8,puVar5,0x18,8);
        }
        if (plVar7 != (long *)0x0) {
          plVar8 = (long *)*plVar7;
          if ((long *)plVar7[2] != (long *)0x0) {
            (**(code **)(*(long *)plVar7[2] + 0x60))();
          }
          plVar9 = (long *)param_1[7];
          uVar1 = (**(code **)(*plVar9 + 0xf8))(plVar9);
          if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar9 + 0x18))(plVar9,plVar7,0x18,8);
          }
          else {
            FUN_00c48fe8(plVar9,plVar7,0x18,8);
          }
          while (plVar8 != (long *)0x0) {
            plVar7 = (long *)*plVar8;
            if ((long *)plVar8[2] != (long *)0x0) {
              (**(code **)(*(long *)plVar8[2] + 0x60))();
            }
            plVar9 = (long *)param_1[7];
            uVar1 = (**(code **)(*plVar9 + 0xf8))(plVar9);
            if (((uVar1 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
              (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,0x18,8);
              plVar8 = plVar7;
            }
            else {
              FUN_00c48fe8(plVar9,plVar8,0x18,8);
              plVar8 = plVar7;
            }
          }
        }
      }
    }
    uVar1 = param_1[1];
    param_1[6] = 0;
    if (uVar1 != 0) {
      uVar2 = uVar1 & 3;
      if (uVar1 - 1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          *(undefined8 *)(*param_1 + uVar3 * 8) = 0;
          *(undefined8 *)(*param_1 + uVar3 * 8 + 8) = 0;
          *(undefined8 *)(*param_1 + uVar3 * 8 + 0x10) = 0;
          lVar4 = uVar3 * 8;
          uVar3 = uVar3 + 4;
          *(undefined8 *)(*param_1 + lVar4 + 0x18) = 0;
        } while ((uVar1 & 0xfffffffffffffffc) != uVar3);
      }
      if (uVar2 != 0) {
        lVar4 = uVar3 << 3;
        do {
          *(undefined8 *)(*param_1 + lVar4) = 0;
          uVar2 = uVar2 - 1;
          lVar4 = lVar4 + 8;
        } while (uVar2 != 0);
      }
    }
    param_1[0xb] = 0;
  }
  return;
}



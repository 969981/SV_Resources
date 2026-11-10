/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027576e0; name: FUN_027576e0
 */


void FUN_027576e0(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_1[7] != *(long *)(param_2 + 0x38)) {
    if (param_1[0xb] != 0) {
      puVar5 = (undefined8 *)param_1[6];
      if (puVar5 != (undefined8 *)0x0) {
        plVar6 = (long *)*puVar5;
        if ((long *)puVar5[5] != (long *)0x0) {
          (**(code **)(*(long *)puVar5[5] + 0x20))();
        }
        plVar7 = (long *)param_1[7];
        uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar7 + 0x18))(plVar7,puVar5,0x40,0x10);
        }
        else {
          FUN_00c48fe8(plVar7,puVar5,0x40,0x10);
        }
        if (plVar6 != (long *)0x0) {
          plVar7 = (long *)*plVar6;
          if ((long *)plVar6[5] != (long *)0x0) {
            (**(code **)(*(long *)plVar6[5] + 0x20))();
          }
          plVar8 = (long *)param_1[7];
          uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
          if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
            (**(code **)(*plVar8 + 0x18))(plVar8,plVar6,0x40,0x10);
          }
          else {
            FUN_00c48fe8(plVar8,plVar6,0x40,0x10);
          }
          while (plVar7 != (long *)0x0) {
            plVar6 = (long *)*plVar7;
            if ((long *)plVar7[5] != (long *)0x0) {
              (**(code **)(*(long *)plVar7[5] + 0x20))();
            }
            plVar8 = (long *)param_1[7];
            uVar2 = (**(code **)(*plVar8 + 0xf8))(plVar8);
            if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
              (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0x40,0x10);
              plVar7 = plVar6;
            }
            else {
              FUN_00c48fe8(plVar8,plVar7,0x40,0x10);
              plVar7 = plVar6;
            }
          }
        }
      }
      lVar3 = param_1[1];
      param_1[6] = 0;
      if ((((lVar3 != 0) && (*(undefined8 *)*param_1 = 0, lVar3 != 1)) &&
          (*(undefined8 *)(*param_1 + 8) = 0, lVar3 != 2)) &&
         ((*(undefined8 *)(*param_1 + 0x10) = 0, lVar3 != 3 &&
          (*(undefined8 *)(*param_1 + 0x18) = 0, lVar3 != 4)))) {
        lVar4 = 4;
        do {
          *(undefined8 *)(*param_1 + lVar4 * 8) = 0;
          lVar4 = lVar4 + 1;
        } while (lVar3 != lVar4);
      }
      param_1[0xb] = 0;
    }
    lVar3 = *param_1;
    *param_1 = 0;
    if (lVar3 != 0) {
      FUN_027575d0(param_1 + 1);
    }
    param_1[1] = 0;
  }
  lVar3 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x28);
  param_1[4] = *(long *)(param_2 + 0x20);
  param_1[5] = lVar1;
  param_1[2] = lVar3;
  param_1[3] = lVar4;
  lVar3 = *(long *)(param_2 + 0x38);
  lVar4 = *(long *)(param_2 + 0x40);
  lVar1 = *(long *)(param_2 + 0x50);
  param_1[9] = *(long *)(param_2 + 0x48);
  param_1[10] = lVar1;
  param_1[7] = lVar3;
  param_1[8] = lVar4;
  return;
}



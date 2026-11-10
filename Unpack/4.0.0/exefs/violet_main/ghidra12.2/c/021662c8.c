/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021662c8; name: FUN_021662c8
 */


void FUN_021662c8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_38;
  
  lVar3 = param_1[4];
  local_38 = param_5;
  if (lVar3 == 0) {
    FUN_02166490(&local_38,param_1,param_2);
    lVar1 = param_2 + 0x28;
  }
  else {
    lVar1 = FUN_01518fb0(param_1,lVar3,param_4,param_2);
    FUN_02166490(&local_38,param_1,lVar1);
    lVar1 = FUN_01518fb0(param_1,param_4,lVar3 + param_1[5] * 0x28,lVar1 + 0x28);
    lVar5 = param_1[5];
    if (lVar5 != 0) {
      if (*(long **)(lVar3 + 0x18) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + 0x18) + 0x20))();
      }
      if (lVar5 != 1) {
        if (*(long **)(lVar3 + 0x40) != (long *)0x0) {
          (**(code **)(**(long **)(lVar3 + 0x40) + 0x20))();
        }
        if (lVar5 != 2) {
          lVar5 = lVar5 + -3;
          if (*(long **)(lVar3 + 0x68) != (long *)0x0) {
            (**(code **)(**(long **)(lVar3 + 0x68) + 0x20))();
          }
          if (lVar5 != 0) {
            plVar6 = (long *)(lVar3 + 0x90);
            do {
              lVar5 = lVar5 + -1;
              if ((long *)*plVar6 != (long *)0x0) {
                (**(code **)(*(long *)*plVar6 + 0x20))();
              }
              plVar6 = plVar6 + 5;
            } while (lVar5 != 0);
          }
        }
      }
    }
    lVar3 = param_1[6];
    plVar6 = (long *)*param_1;
    uVar4 = param_1[4];
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,uVar4,lVar3 * 0x28,8);
    }
    else {
      FUN_00c48fe8(plVar6,uVar4,lVar3 * 0x28,8);
    }
  }
  param_1[6] = param_3;
  param_1[4] = param_2;
  param_1[5] = (lVar1 - param_2 >> 3) * -0x3333333333333333;
  return;
}



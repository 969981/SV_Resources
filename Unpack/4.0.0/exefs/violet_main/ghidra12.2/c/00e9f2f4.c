/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e9f2f4; name: FUN_00e9f2f4
 */


void FUN_00e9f2f4(long *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 local_58 [3];
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar2 = uVar5 & 3;
    if (uVar5 - 1 < 3) {
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
      } while ((uVar5 & 0xfffffffffffffffc) != uVar3);
    }
    if (uVar2 != 0) {
      lVar4 = uVar3 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar4) = 0;
        uVar2 = uVar2 - 1;
        lVar4 = lVar4 + 8;
      } while (uVar2 != 0);
    }
    plVar7 = (long *)param_1[6];
    param_1[0xb] = 0;
    param_1[6] = 0;
    while (plVar7 != (long *)0x0) {
      if (param_2 == param_3) {
        plVar6 = (long *)*plVar7;
        if ((long *)plVar7[5] != (long *)0x0) {
          (**(code **)(*(long *)plVar7[5] + 0x20))();
        }
        plVar1 = (long *)param_1[7];
        uVar5 = (**(code **)(*plVar1 + 0xf8))(plVar1);
        if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar1 + 0x18))(plVar1,plVar7,0x38,8);
        }
        else {
          FUN_00c48fe8(plVar1,plVar7,0x38,8);
        }
        while (plVar6 != (long *)0x0) {
          plVar7 = (long *)*plVar6;
          if ((long *)plVar6[5] != (long *)0x0) {
            (**(code **)(*(long *)plVar6[5] + 0x20))();
          }
          plVar1 = (long *)param_1[7];
          uVar5 = (**(code **)(*plVar1 + 0xf8))(plVar1);
          if (((uVar5 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
            (**(code **)(*plVar1 + 0x18))(plVar1,plVar6,0x38,8);
            plVar6 = plVar7;
          }
          else {
            FUN_00c48fe8(plVar1,plVar6,0x38,8);
            plVar6 = plVar7;
          }
        }
        break;
      }
      plVar7[2] = param_2[2];
      plVar7[3] = param_2[3];
      plVar7[4] = param_2[4];
      plVar6 = (long *)param_2[5];
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
      plVar1 = (long *)plVar7[5];
      plVar7[5] = (long)plVar6;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x20))();
      }
      lVar4 = *plVar7;
      *(undefined4 *)(plVar7 + 6) = *(undefined4 *)(param_2 + 6);
      FUN_00e9f6c8(param_1,plVar7);
      param_2 = (long *)*param_2;
      plVar7 = (long *)lVar4;
    }
  }
  for (; param_2 != param_3; param_2 = (long *)*param_2) {
    FUN_00e9f564(local_58,param_1,param_2 + 2);
    FUN_00e9f6c8(param_1,local_58[0]);
  }
  return;
}



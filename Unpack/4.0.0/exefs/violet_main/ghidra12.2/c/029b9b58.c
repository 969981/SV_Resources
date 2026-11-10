/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b9b58; name: FUN_029b9b58
 */


void FUN_029b9b58(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar1 = uVar4 & 3;
    if (uVar4 - 1 < 3) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + uVar2 * 8) = 0;
        *(undefined8 *)(*param_1 + uVar2 * 8 + 8) = 0;
        *(undefined8 *)(*param_1 + uVar2 * 8 + 0x10) = 0;
        lVar3 = uVar2 * 8;
        uVar2 = uVar2 + 4;
        *(undefined8 *)(*param_1 + lVar3 + 0x18) = 0;
      } while ((uVar4 & 0xfffffffffffffffc) != uVar2);
    }
    if (uVar1 != 0) {
      lVar3 = uVar2 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar3) = 0;
        uVar1 = uVar1 - 1;
        lVar3 = lVar3 + 8;
      } while (uVar1 != 0);
    }
    plVar7 = (long *)param_1[6];
    param_1[0xb] = 0;
    param_1[6] = 0;
    while (plVar7 != (long *)0x0) {
      if (param_2 == (long *)0x0) {
        plVar6 = (long *)*plVar7;
        if ((long *)plVar7[5] != (long *)0x0) {
          (**(code **)(*(long *)plVar7[5] + 0x20))();
        }
        plVar5 = (long *)param_1[7];
        uVar4 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar5 + 0x18))(plVar5,plVar7,0x40,8);
        }
        else {
          FUN_00c48fe8(plVar5,plVar7,0x40,8);
        }
        if (plVar6 == (long *)0x0) {
          return;
        }
        plVar7 = (long *)*plVar6;
        if ((long *)plVar6[5] != (long *)0x0) {
          (**(code **)(*(long *)plVar6[5] + 0x20))();
        }
        plVar5 = (long *)param_1[7];
        uVar4 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
          (**(code **)(*plVar5 + 0x18))(plVar5,plVar6,0x40,8);
        }
        else {
          FUN_00c48fe8(plVar5,plVar6,0x40,8);
        }
        while (plVar7 != (long *)0x0) {
          plVar6 = (long *)*plVar7;
          if ((long *)plVar7[5] != (long *)0x0) {
            (**(code **)(*(long *)plVar7[5] + 0x20))();
          }
          plVar5 = (long *)param_1[7];
          uVar4 = (**(code **)(*plVar5 + 0xf8))(plVar5);
          if (((uVar4 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
            (**(code **)(*plVar5 + 0x18))(plVar5,plVar7,0x40,8);
            plVar7 = plVar6;
          }
          else {
            FUN_00c48fe8(plVar5,plVar7,0x40,8);
            plVar7 = plVar6;
          }
        }
        return;
      }
      FUN_029b9dcc(plVar7 + 2,param_2 + 2);
      lVar3 = *plVar7;
      FUN_029b9e54(param_1,plVar7);
      param_2 = (long *)*param_2;
      plVar7 = (long *)lVar3;
    }
  }
  for (; param_2 != (long *)0x0; param_2 = (long *)*param_2) {
    FUN_029b9e90(param_1,param_2 + 2);
  }
  return;
}



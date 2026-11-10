/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015e3ca0; name: FUN_015e3ca0
 */


void FUN_015e3ca0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  puVar4 = (undefined8 *)param_1[6];
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    if ((long *)puVar4[2] != (long *)0x0) {
      (**(code **)(*(long *)puVar4[2] + 0x60))();
    }
    plVar5 = (long *)param_1[7];
    uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar4,0x18,8);
    }
    else {
      FUN_00c48fe8(plVar5,puVar4,0x18,8);
    }
    if (puVar3 != (undefined8 *)0x0) {
      plVar5 = (long *)*puVar3;
      if ((long *)puVar3[2] != (long *)0x0) {
        (**(code **)(*(long *)puVar3[2] + 0x60))();
      }
      plVar6 = (long *)param_1[7];
      uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,puVar3,0x18,8);
      }
      else {
        FUN_00c48fe8(plVar6,puVar3,0x18,8);
      }
      if (plVar5 != (long *)0x0) {
        plVar6 = (long *)*plVar5;
        if ((long *)plVar5[2] != (long *)0x0) {
          (**(code **)(*(long *)plVar5[2] + 0x60))();
        }
        plVar7 = (long *)param_1[7];
        uVar1 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
          (**(code **)(*plVar7 + 0x18))(plVar7,plVar5,0x18,8);
        }
        else {
          FUN_00c48fe8(plVar7,plVar5,0x18,8);
        }
        while (plVar6 != (long *)0x0) {
          plVar5 = (long *)*plVar6;
          if ((long *)plVar6[2] != (long *)0x0) {
            (**(code **)(*(long *)plVar6[2] + 0x60))();
          }
          plVar7 = (long *)param_1[7];
          uVar1 = (**(code **)(*plVar7 + 0xf8))(plVar7);
          if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
            (**(code **)(*plVar7 + 0x18))(plVar7,plVar6,0x18,8);
            plVar6 = plVar5;
          }
          else {
            FUN_00c48fe8(plVar7,plVar6,0x18,8);
            plVar6 = plVar5;
          }
        }
      }
    }
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_015e3ed4(param_1 + 1);
  return;
}



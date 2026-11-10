/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0119bc20; name: FUN_0119bc20
 */


void FUN_0119bc20(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  puVar3 = (undefined8 *)param_1[0x16];
  *param_1 = &DAT_04604fd8;
  if (puVar3 != (undefined8 *)0x0) {
    plVar4 = (long *)*puVar3;
    FUN_0119bfb4(puVar3 + 2);
    plVar5 = (long *)param_1[0x17];
    uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar3,0x50,8);
    }
    else {
      FUN_00c48fe8(plVar5,puVar3,0x50,8);
    }
    if (plVar4 != (long *)0x0) {
      plVar5 = (long *)*plVar4;
      FUN_0119bfb4(plVar4 + 2);
      plVar6 = (long *)param_1[0x17];
      uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar4,0x50,8);
      }
      else {
        FUN_00c48fe8(plVar6,plVar4,0x50,8);
      }
      while (plVar5 != (long *)0x0) {
        plVar6 = (long *)*plVar5;
        FUN_0119bfb4(plVar5 + 2);
        plVar4 = (long *)param_1[0x17];
        uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
          (**(code **)(*plVar4 + 0x18))(plVar4,plVar5,0x50,8);
          plVar5 = plVar6;
        }
        else {
          FUN_00c48fe8(plVar4,plVar5,0x50,8);
          plVar5 = plVar6;
        }
      }
    }
  }
  FUN_0119bf14(param_1 + 0x10);
  puVar3 = (undefined8 *)param_1[8];
  if (puVar3 != (undefined8 *)0x0) {
    plVar4 = (long *)*puVar3;
    FUN_0119bfb4(puVar3 + 2);
    plVar5 = (long *)param_1[9];
    uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar3,0x50,8);
    }
    else {
      FUN_00c48fe8(plVar5,puVar3,0x50,8);
    }
    if (plVar4 != (long *)0x0) {
      plVar5 = (long *)*plVar4;
      FUN_0119bfb4(plVar4 + 2);
      plVar6 = (long *)param_1[9];
      uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar4,0x50,8);
      }
      else {
        FUN_00c48fe8(plVar6,plVar4,0x50,8);
      }
      while (plVar5 != (long *)0x0) {
        plVar6 = (long *)*plVar5;
        FUN_0119bfb4(plVar5 + 2);
        plVar4 = (long *)param_1[9];
        uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
          (**(code **)(*plVar4 + 0x18))(plVar4,plVar5,0x50,8);
          plVar5 = plVar6;
        }
        else {
          FUN_00c48fe8(plVar4,plVar5,0x50,8);
          plVar5 = plVar6;
        }
      }
    }
  }
  FUN_0119bf14(param_1 + 2);
  return;
}



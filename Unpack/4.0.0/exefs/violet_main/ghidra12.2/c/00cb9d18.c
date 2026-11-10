/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cb9d18; name: FUN_00cb9d18
 */


void FUN_00cb9d18(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  *param_1 = &PTR_FUN_045e97f8;
  FUN_00cb9f64();
  lVar5 = param_1[0x44];
  if (lVar5 != 0) {
    lVar3 = param_1[0x46];
    param_1[0x45] = lVar5;
    plVar7 = (long *)param_1[0x47];
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar3 - lVar5,1);
    }
    else {
      FUN_00c48fe8(plVar7,lVar5,lVar3 - lVar5,1);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x42));
  FUN_00cba288(param_1 + 0x17);
  plVar7 = (long *)param_1[0xb];
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7;
    if ((long *)param_1[0xc] != plVar7) {
      plVar6 = (long *)param_1[0xc] + -1;
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x18))();
      }
      while (plVar6 != plVar7) {
        plVar6 = plVar6 + -1;
        if ((long *)*plVar6 != (long *)0x0) {
          (**(code **)(*(long *)*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[0xb];
    }
    lVar5 = param_1[0xd];
    plVar1 = (long *)param_1[0xe];
    param_1[0xc] = plVar7;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar6,lVar5 - (long)plVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,plVar6,lVar5 - (long)plVar6,1);
    }
  }
  plVar7 = (long *)param_1[4];
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar7;
    if ((long *)param_1[5] != plVar7) {
      plVar6 = (long *)param_1[5] + -1;
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x18))();
      }
      while (plVar6 != plVar7) {
        plVar6 = plVar6 + -1;
        if ((long *)*plVar6 != (long *)0x0) {
          (**(code **)(*(long *)*plVar6 + 0x18))();
        }
      }
      plVar6 = (long *)param_1[4];
    }
    lVar5 = param_1[6];
    plVar1 = (long *)param_1[7];
    param_1[5] = plVar7;
    uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar1 + 0x18))(plVar1,plVar6,lVar5 - (long)plVar6,1);
    }
    else {
      FUN_00c48fe8(plVar1,plVar6,lVar5 - (long)plVar6,1);
    }
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 2));
  return;
}



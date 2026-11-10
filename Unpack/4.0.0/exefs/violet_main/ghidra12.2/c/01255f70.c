/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01255f70; name: FUN_01255f70
 */


void FUN_01255f70(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = (long *)param_1[0x4f];
  *param_1 = (long)&DAT_046049d0;
  param_1[4] = (long)&PTR_LAB_04604a68;
  param_1[5] = (long)&DAT_04604ab8;
  if (plVar5 != (long *)0x0) {
    lVar3 = plVar5[7];
    plVar5[7] = 0;
    plVar4 = (long *)*plVar5;
    if (lVar3 != 0) {
      FUN_010de998(plVar5 + 8);
    }
    if ((long *)plVar5[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[5] + 0x20))();
    }
    plVar6 = (long *)param_1[0x50];
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0x58,8);
    }
    else {
      FUN_00c48fe8(plVar6,plVar5,0x58,8);
    }
    while (plVar4 != (long *)0x0) {
      lVar3 = plVar4[7];
      plVar4[7] = 0;
      plVar5 = (long *)*plVar4;
      if (lVar3 != 0) {
        FUN_010de998(plVar4 + 8);
      }
      if ((long *)plVar4[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar4[5] + 0x20))();
      }
      plVar6 = (long *)param_1[0x50];
      uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar4,0x58,8);
        plVar4 = plVar5;
      }
      else {
        FUN_00c48fe8(plVar6,plVar4,0x58,8);
        plVar4 = plVar5;
      }
    }
  }
  lVar3 = param_1[0x49];
  param_1[0x49] = 0;
  if (lVar3 != 0) {
    FUN_010dffc8(param_1 + 0x4a);
  }
  lVar3 = param_1[0x45];
  param_1[0x45] = 0;
  if (lVar3 != 0) {
    FUN_010de998(param_1 + 0x46);
  }
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x43));
  puVar1 = PTR_DAT_047d9260;
  *param_1 = (long)(PTR_DAT_047d9260 + 0x10);
  param_1[4] = (long)(puVar1 + 0xa8);
  param_1[5] = (long)(puVar1 + 0xf8);
  FUN_01256154(param_1 + 0x3e,0);
  FUN_00db9ce0(param_1);
  return;
}



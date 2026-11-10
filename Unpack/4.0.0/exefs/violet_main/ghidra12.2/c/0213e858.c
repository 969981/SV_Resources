/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0213e858; name: FUN_0213e858
 */


void FUN_0213e858(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  puVar3 = (undefined8 *)param_1[6];
  if (puVar3 != (undefined8 *)0x0) {
    plVar4 = (long *)*puVar3;
    if ((long *)puVar3[2] != (long *)0x0) {
      (**(code **)(*(long *)puVar3[2] + 0x18))();
    }
    plVar5 = (long *)param_1[7];
    uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,puVar3,0x18,8);
    }
    else {
      FUN_00c48fe8(plVar5,puVar3,0x18,8);
    }
    if (plVar4 != (long *)0x0) {
      plVar5 = (long *)*plVar4;
      if ((long *)plVar4[2] != (long *)0x0) {
        (**(code **)(*(long *)plVar4[2] + 0x18))();
      }
      plVar6 = (long *)param_1[7];
      uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar4,0x18,8);
      }
      else {
        FUN_00c48fe8(plVar6,plVar4,0x18,8);
      }
      while (plVar5 != (long *)0x0) {
        plVar4 = (long *)*plVar5;
        if ((long *)plVar5[2] != (long *)0x0) {
          (**(code **)(*(long *)plVar5[2] + 0x18))();
        }
        plVar6 = (long *)param_1[7];
        uVar1 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0x18,8);
          plVar5 = plVar4;
        }
        else {
          FUN_00c48fe8(plVar6,plVar5,0x18,8);
          plVar5 = plVar4;
        }
      }
    }
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_010544b4(param_1 + 1);
  return;
}



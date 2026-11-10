/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a46fc0; name: FUN_01a46fc0
 */


void FUN_01a46fc0(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar4 = (long *)param_1[7];
  *param_1 = &PTR_LAB_045fcaa0;
  if (plVar4 != (long *)0x0) {
    plVar5 = (long *)param_1[8];
    plVar3 = (long *)*plVar4;
    uVar1 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,plVar4,0x28,4);
    }
    else {
      FUN_00c48fe8(plVar5,plVar4,0x28,4);
    }
    while (plVar3 != (long *)0x0) {
      plVar4 = (long *)param_1[8];
      plVar5 = (long *)*plVar3;
      uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
      if (((uVar1 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
        (**(code **)(*plVar4 + 0x18))(plVar4,plVar3,0x28,4);
        plVar3 = plVar5;
      }
      else {
        FUN_00c48fe8(plVar4,plVar3,0x28,4);
        plVar3 = plVar5;
      }
    }
  }
  lVar2 = param_1[1];
  param_1[1] = 0;
  if (lVar2 == 0) {
    return;
  }
  FUN_01a470f8(param_1 + 2);
  return;
}



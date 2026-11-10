/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dbe2e0; name: FUN_00dbe2e0
 */


undefined8 FUN_00dbe2e0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  lVar6 = *param_1;
  plVar1 = (long *)0x0;
  if (*param_2 != 0) {
    plVar1 = (long *)(*param_2 + -0x18);
  }
  uVar2 = (**(code **)(*plVar1 + 0x40))();
  plVar1 = (long *)0x0;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + -0x18);
  }
  uVar3 = (**(code **)(*plVar1 + 0x40))();
  plVar1 = (long *)0x0;
  if (*param_3 != 0) {
    plVar1 = (long *)(*param_3 + -0x18);
  }
  lVar6 = *param_2;
  uVar4 = (**(code **)(*plVar1 + 0x40))();
  plVar1 = (long *)0x0;
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + -0x18);
  }
  uVar5 = (**(code **)(*plVar1 + 0x40))();
  if (uVar2 < uVar3) {
    lVar6 = *param_1;
    if (uVar4 < uVar5) {
      *param_1 = *param_3;
      *param_3 = lVar6;
    }
    else {
      *param_1 = *param_2;
      *param_2 = lVar6;
      plVar1 = (long *)0x0;
      if (*param_3 != 0) {
        plVar1 = (long *)(*param_3 + -0x18);
      }
      uVar2 = (**(code **)(*plVar1 + 0x40))();
      plVar1 = (long *)0x0;
      if (lVar6 != 0) {
        plVar1 = (long *)(lVar6 + -0x18);
      }
      uVar3 = (**(code **)(*plVar1 + 0x40))();
      if (uVar2 < uVar3) {
        lVar6 = *param_2;
        *param_2 = *param_3;
        *param_3 = lVar6;
        return 2;
      }
    }
  }
  else {
    if (uVar5 <= uVar4) {
      return 0;
    }
    lVar6 = *param_2;
    *param_2 = *param_3;
    *param_3 = lVar6;
    plVar1 = (long *)0x0;
    if (*param_2 != 0) {
      plVar1 = (long *)(*param_2 + -0x18);
    }
    lVar6 = *param_1;
    uVar2 = (**(code **)(*plVar1 + 0x40))();
    plVar1 = (long *)0x0;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + -0x18);
    }
    uVar3 = (**(code **)(*plVar1 + 0x40))();
    if (uVar2 < uVar3) {
      lVar6 = *param_1;
      *param_1 = *param_2;
      *param_2 = lVar6;
      return 2;
    }
  }
  return 1;
}



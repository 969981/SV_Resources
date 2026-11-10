/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0142e6e8; name: FUN_0142e6e8
 */


void FUN_0142e6e8(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar1 = (long *)param_1[6];
  while (plVar1 != (long *)0x0) {
    plVar7 = (long *)*plVar1;
    lVar6 = plVar1[6];
    if (lVar6 != 0) {
      lVar4 = plVar1[7];
      if (lVar4 == lVar6) {
        lVar4 = lVar6;
      }
      else {
        do {
          plVar5 = (long *)(lVar4 + -0x50);
          lVar4 = lVar4 + -0x68;
          if ((long *)*plVar5 != (long *)0x0) {
            (**(code **)(*(long *)*plVar5 + 0x20))();
          }
        } while (lVar6 != lVar4);
        lVar4 = plVar1[6];
      }
      lVar3 = plVar1[8];
      plVar5 = (long *)plVar1[9];
      plVar1[7] = lVar6;
      uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if (((uVar2 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar3 - lVar4,8);
      }
      else {
        FUN_00c48fe8(plVar5,lVar4,lVar3 - lVar4,8);
      }
    }
    if ((long *)plVar1[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar1[5] + 0x20))();
    }
    plVar5 = (long *)param_1[7];
    uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar2 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,plVar1,0x68,8);
      plVar1 = plVar7;
    }
    else {
      FUN_00c48fe8(plVar5,plVar1,0x68,8);
      plVar1 = plVar7;
    }
  }
  lVar6 = *param_1;
  *param_1 = 0;
  if (lVar6 == 0) {
    return;
  }
  lVar4 = param_1[1];
  plVar1 = (long *)param_1[2];
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0142e848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,lVar6,lVar4 << 3,8);
    return;
  }
  FUN_00c48fe8(plVar1,lVar6,lVar4 << 3,8);
  return;
}



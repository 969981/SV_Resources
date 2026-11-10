/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01048314; name: FUN_01048314
 */


void FUN_01048314(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)param_1[6];
  if (plVar6 != (long *)0x0) {
    plVar5 = (long *)*plVar6;
    if ((long *)plVar6[5] != (long *)0x0) {
      (**(code **)(*(long *)plVar6[5] + 0x20))();
    }
    plVar7 = (long *)param_1[7];
    uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar6,0x38,8);
    }
    else {
      FUN_00c48fe8(plVar7,plVar6,0x38,8);
    }
    while (plVar5 != (long *)0x0) {
      plVar6 = (long *)*plVar5;
      if ((long *)plVar5[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar5[5] + 0x20))();
      }
      plVar7 = (long *)param_1[7];
      uVar2 = (**(code **)(*plVar7 + 0xf8))(plVar7);
      if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar7 + 0x18))(plVar7,plVar5,0x38,8);
        plVar5 = plVar6;
      }
      else {
        FUN_00c48fe8(plVar7,plVar5,0x38,8);
        plVar5 = plVar6;
      }
    }
  }
  lVar4 = *param_1;
  *param_1 = 0;
  if (lVar4 == 0) {
    return;
  }
  lVar1 = param_1[1];
  plVar6 = (long *)param_1[2];
  uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x0104841c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar4,lVar1 << 3,8);
    return;
  }
  FUN_00c48fe8(plVar6,lVar4,lVar1 << 3,8);
  return;
}



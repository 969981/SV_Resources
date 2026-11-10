/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018c9f48; name: FUN_018c9f48
 */


void FUN_018c9f48(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  FUN_018ca690();
  puVar1 = (undefined8 *)param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  if (puVar1 != puVar3) {
    plVar7 = (long *)param_1[10];
    uVar6 = *puVar1;
    uVar4 = FUN_00c4e564(plVar7);
    if ((uVar4 & 1) == 0) {
      (**(code **)(*plVar7 + 0x18))(plVar7,uVar6,0xff0,0x10);
    }
    else {
      FUN_00c48fe8(plVar7,uVar6,0xff0,0x10);
    }
    while (puVar1 = puVar1 + 1, puVar1 != puVar3) {
      plVar7 = (long *)param_1[10];
      uVar6 = *puVar1;
      uVar4 = FUN_00c4e564(plVar7);
      if ((uVar4 & 1) == 0) {
        (**(code **)(*plVar7 + 0x18))(plVar7,uVar6,0xff0,0x10);
      }
      else {
        FUN_00c48fe8(plVar7,uVar6,0xff0,0x10);
      }
    }
  }
  lVar5 = param_1[2] - param_1[1];
  if (lVar5 != 0) {
    param_1[2] = param_1[2] + (lVar5 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
  }
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar2 = param_1[3];
  plVar7 = (long *)param_1[4];
  uVar4 = FUN_00c4e564(plVar7);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x018ca0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar2 - lVar5,0x10);
    return;
  }
  FUN_00c48fe8(plVar7,lVar5,lVar2 - lVar5,0x10);
  return;
}



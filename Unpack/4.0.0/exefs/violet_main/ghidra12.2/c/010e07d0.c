/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010e07d0; name: FUN_010e07d0
 */


void FUN_010e07d0(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = (long)&DAT_045d1508;
  param_1[4] = (long)&PTR_LAB_045d15a0;
  param_1[5] = (long)&DAT_045d15f0;
  if (param_1[0x49] != 0) {
    FUN_010e0a44(param_1 + 0x49);
    lVar5 = param_1[0x49];
    lVar3 = param_1[0x4b];
    plVar6 = (long *)param_1[0x4c];
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar3 - lVar5,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar5,lVar3 - lVar5,8);
    }
  }
  lVar3 = param_1[0x42];
  if (lVar3 != 0) {
    lVar5 = param_1[0x43];
    if (lVar5 == lVar3) {
      lVar5 = lVar3;
    }
    else {
      FUN_010e0b2c(lVar5 + -0x1b0);
      if ((((lVar5 + -0x1b0 != lVar3) && (FUN_010e0b2c(lVar5 + -0x360), lVar5 + -0x360 != lVar3)) &&
          (FUN_010e0b2c(lVar5 + -0x510), lVar5 + -0x510 != lVar3)) &&
         (FUN_010e0b2c(lVar5 + -0x6c0), lVar5 + -0x6c0 != lVar3)) {
        do {
          FUN_010e0b2c(lVar5 + -0x870);
          lVar5 = lVar5 + -0x1b0;
        } while (lVar3 + 0x6c0 != lVar5);
      }
      lVar5 = param_1[0x42];
    }
    lVar4 = param_1[0x44];
    param_1[0x43] = lVar3;
    plVar6 = (long *)param_1[0x45];
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar3 = FUN_00c4e600(), *(int *)(lVar3 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar4 - lVar5,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar5,lVar4 - lVar5,8);
    }
  }
  puVar1 = PTR_DAT_047dd550;
  *param_1 = (long)(PTR_DAT_047dd550 + 0x10);
  param_1[4] = (long)(puVar1 + 0xa8);
  param_1[5] = (long)(puVar1 + 0xf8);
  FUN_010e09a4(param_1 + 0x3e,0);
  FUN_00db9ce0(param_1);
  return;
}



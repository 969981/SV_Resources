/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027d6c2c; name: FUN_027d6c2c
 */


void FUN_027d6c2c(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar4 = param_1[1];
  if (lVar4 == lVar5) {
    lVar4 = lVar5;
  }
  else {
    do {
      lVar4 = lVar4 + -8;
      FUN_027d6d64(lVar4);
    } while (lVar5 != lVar4);
    lVar4 = *param_1;
  }
  param_1[1] = lVar5;
  lVar5 = param_1[2];
  plVar1 = (long *)param_1[3];
  uVar2 = (**(code **)(*plVar1 + 0xf8))(plVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00c4e600();
    if (0 < *(int *)(lVar3 + 0x12c8)) {
      FUN_00c48fe8(plVar1,lVar4,lVar5 - lVar4,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x027d6cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar4,lVar5 - lVar4,8);
  return;
}



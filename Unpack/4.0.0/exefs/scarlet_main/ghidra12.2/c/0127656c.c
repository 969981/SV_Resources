/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0127656c; name: FUN_0127656c
 */


void FUN_0127656c(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = param_1[0x42];
  *param_1 = (long)&DAT_045d1e98;
  param_1[4] = (long)&PTR_LAB_045d1f30;
  param_1[5] = (long)&DAT_045d1f80;
  if (lVar4 != 0) {
    lVar5 = param_1[0x43];
    lVar3 = lVar4;
    if (lVar5 != lVar4) {
      FUN_0127673c(lVar5 + -200);
      if ((lVar5 + -200 != lVar4) && (FUN_0127673c(lVar5 + -400), lVar5 + -400 != lVar4)) {
        do {
          FUN_0127673c(lVar5 + -600);
          lVar5 = lVar5 + -200;
        } while (lVar4 + 400 != lVar5);
      }
      lVar3 = param_1[0x42];
    }
    lVar5 = param_1[0x44];
    param_1[0x43] = lVar4;
    plVar6 = (long *)param_1[0x45];
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar3,lVar5 - lVar3,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar3,lVar5 - lVar3,8);
    }
  }
  puVar1 = PTR_DAT_047d9260;
  *param_1 = (long)(PTR_DAT_047d9260 + 0x10);
  param_1[4] = (long)(puVar1 + 0xa8);
  param_1[5] = (long)(puVar1 + 0xf8);
  FUN_0127669c(param_1 + 0x3e,0);
  FUN_00db9ce0(param_1);
  return;
}



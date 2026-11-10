/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010b2e44; name: FUN_010b2e44
 */


void FUN_010b2e44(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = (long)&DAT_045d2340;
  param_1[4] = (long)&PTR_LAB_045d23d8;
  param_1[5] = (long)&DAT_045d2428;
  FUN_010b33ac(param_1 + 0x49);
  lVar4 = param_1[0x42];
  if (lVar4 != 0) {
    lVar5 = param_1[0x43];
    if (lVar5 == lVar4) {
      lVar5 = lVar4;
    }
    else {
      FUN_010b3048(lVar5 + -0x1a0);
      if ((((lVar5 + -0x1a0 != lVar4) && (FUN_010b3048(lVar5 + -0x340), lVar5 + -0x340 != lVar4)) &&
          (FUN_010b3048(lVar5 + -0x4e0), lVar5 + -0x4e0 != lVar4)) &&
         (FUN_010b3048(lVar5 + -0x680), lVar5 + -0x680 != lVar4)) {
        do {
          FUN_010b3048(lVar5 + -0x820);
          lVar5 = lVar5 + -0x1a0;
        } while (lVar4 + 0x680 != lVar5);
      }
      lVar5 = param_1[0x42];
    }
    lVar3 = param_1[0x44];
    param_1[0x43] = lVar4;
    plVar6 = (long *)param_1[0x45];
    uVar2 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar2 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar3 - lVar5,0x10);
    }
    else {
      FUN_00c48fe8(plVar6,lVar5,lVar3 - lVar5,0x10);
    }
  }
  puVar1 = PTR_DAT_047dd550;
  *param_1 = (long)(PTR_DAT_047dd550 + 0x10);
  param_1[4] = (long)(puVar1 + 0xa8);
  param_1[5] = (long)(puVar1 + 0xf8);
  FUN_010b2fa8(param_1 + 0x3e,0);
  FUN_00db9ce0(param_1);
  return;
}



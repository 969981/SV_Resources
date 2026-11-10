/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ee1b80; name: FUN_00ee1b80
 */


void FUN_00ee1b80(long *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_68 [40];
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  lVar3 = lVar5 - lVar1 >> 6;
  uVar4 = lVar3 * -0x3333333333333333;
  if (param_2 <= uVar4) {
    if (uVar4 != param_2) {
      lVar3 = lVar1 + param_2 * 0x140;
      if ((((lVar3 != lVar5) && (FUN_00ee1834(lVar5 + -0x140), lVar5 + -0x140 != lVar3)) &&
          (FUN_00ee1834(lVar5 + -0x280), lVar5 + -0x280 != lVar3)) &&
         (((FUN_00ee1834(lVar5 + -0x3c0), lVar5 + -0x3c0 != lVar3 &&
           (FUN_00ee1834(lVar5 + -0x500), lVar5 + -0x500 != lVar3)) &&
          (FUN_00ee1834(lVar5 + -0x640), lVar5 + -0x640 != lVar3)))) {
        do {
          FUN_00ee1834(lVar5 + -0x780);
          lVar5 = lVar5 + -0x140;
        } while (lVar1 + param_2 * 0x140 + 0x640 != lVar5);
      }
      param_1[1] = lVar3;
    }
    return;
  }
  param_2 = param_2 + lVar3 * 0x3333333333333333;
  if ((ulong)((param_1[2] - param_1[1] >> 6) * -0x3333333333333333) < param_2) {
    uVar2 = FUN_00ee1d6c(param_1,param_2 + (param_1[1] - *param_1 >> 6) * -0x3333333333333333);
    FUN_00ee1dc8(auStack_68,uVar2,(param_1[1] - *param_1 >> 6) * -0x3333333333333333,param_1 + 3);
    FUN_00ee1fc8(auStack_68,param_2,param_3);
    FUN_00ee1e5c(param_1,auStack_68);
    FUN_00ee1f04(auStack_68);
    return;
  }
  FUN_00ee4cc4(param_1,param_2,param_3);
  return;
}



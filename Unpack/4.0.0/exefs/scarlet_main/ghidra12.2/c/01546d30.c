/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01546d30; name: FUN_01546d30
 */


void FUN_01546d30(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [16];
  long local_58;
  undefined8 local_48;
  
  lVar2 = param_1[1];
  if ((ulong)((param_1[2] - lVar2 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    uVar1 = FUN_01547034(param_1,param_2 + (lVar2 - *param_1 >> 3) * 0x6db6db6db6db6db7);
    FUN_01547098(auStack_68,uVar1,(param_1[1] - *param_1 >> 3) * 0x6db6db6db6db6db7,param_1 + 3);
    lVar3 = param_2 * 0x38;
    lVar2 = local_58 + lVar3;
    do {
      FUN_01546e40(local_48,local_58);
      local_58 = local_58 + 0x38;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
    local_58 = lVar2;
    FUN_0154712c(param_1,auStack_68);
    FUN_015471d4(auStack_68);
  }
  else {
    lVar4 = param_2 * 0x38;
    lVar3 = lVar2 + lVar4;
    do {
      FUN_01546e40(param_1 + 3,lVar2);
      lVar2 = lVar2 + 0x38;
      lVar4 = lVar4 + -0x38;
    } while (lVar4 != 0);
    param_1[1] = lVar3;
  }
  return;
}



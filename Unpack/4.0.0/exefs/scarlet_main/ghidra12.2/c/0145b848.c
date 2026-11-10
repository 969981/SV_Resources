/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0145b848; name: FUN_0145b848
 */


void FUN_0145b848(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [16];
  long local_58;
  undefined8 local_48;
  
  lVar3 = param_1[1];
  if ((ulong)((param_1[2] - lVar3 >> 4) * 0x6db6db6db6db6db7) < param_2) {
    uVar1 = FUN_0145bb74(param_1,param_2 + (lVar3 - *param_1 >> 4) * 0x6db6db6db6db6db7);
    FUN_0145bbd8(auStack_68,uVar1,(param_1[1] - *param_1 >> 4) * 0x6db6db6db6db6db7,param_1 + 3);
    lVar4 = param_2 * 0x70;
    lVar3 = local_58 + lVar4;
    do {
      FUN_0145b964(local_48,local_58);
      local_58 = local_58 + 0x70;
      lVar4 = lVar4 + -0x70;
    } while (lVar4 != 0);
    local_58 = lVar3;
    FUN_0145bc6c(param_1,auStack_68);
    FUN_0145bd14(auStack_68);
  }
  else {
    lVar4 = lVar3;
    if (param_2 != 0) {
      lVar4 = lVar3 + param_2 * 0x70;
      lVar2 = param_2 * 0x70;
      do {
        FUN_0145b964(param_1 + 3,lVar3);
        lVar3 = lVar3 + 0x70;
        lVar2 = lVar2 + -0x70;
      } while (lVar2 != 0);
    }
    param_1[1] = lVar4;
  }
  return;
}



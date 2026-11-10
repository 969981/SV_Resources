/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015129b4; name: FUN_015129b4
 */


void FUN_015129b4(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_68 [16];
  long local_58;
  undefined8 local_48;
  
  lVar4 = param_1[1];
  lVar2 = lVar4 - *param_1 >> 3;
  uVar3 = lVar2 * 0x6db6db6db6db6db7;
  if (param_2 <= uVar3) {
    if (uVar3 != param_2) {
      lVar2 = *param_1 + param_2 * 0x38;
      while (lVar2 != lVar4) {
        lVar4 = lVar4 + -0x38;
        FUN_01512fa8(lVar4);
      }
      param_1[1] = lVar2;
    }
    return;
  }
  param_2 = param_2 + lVar2 * -0x6db6db6db6db6db7;
  lVar4 = param_1[1];
  if ((ulong)((param_1[2] - lVar4 >> 3) * 0x6db6db6db6db6db7) < param_2) {
    uVar1 = FUN_01512d44(param_1,param_2 + (lVar4 - *param_1 >> 3) * 0x6db6db6db6db6db7);
    FUN_01512da8(auStack_68,uVar1,(param_1[1] - *param_1 >> 3) * 0x6db6db6db6db6db7,param_1 + 3);
    lVar2 = param_2 * 0x38;
    lVar4 = local_58 + lVar2;
    do {
      FUN_01512b5c(local_48,local_58);
      local_58 = local_58 + 0x38;
      lVar2 = lVar2 + -0x38;
    } while (lVar2 != 0);
    local_58 = lVar4;
    FUN_01512e3c(param_1,auStack_68);
    FUN_01512ee4(auStack_68);
  }
  else {
    lVar2 = lVar4;
    if (param_2 != 0) {
      lVar2 = lVar4 + param_2 * 0x38;
      lVar5 = param_2 * 0x38;
      do {
        FUN_01512b5c(param_1 + 3,lVar4);
        lVar4 = lVar4 + 0x38;
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
    }
    param_1[1] = lVar2;
  }
  return;
}



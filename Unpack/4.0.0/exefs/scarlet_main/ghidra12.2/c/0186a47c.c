/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0186a47c; name: FUN_0186a47c
 */


void FUN_0186a47c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = param_1[1];
  if (uVar1 < (ulong)param_1[2]) {
    FUN_0186a658(param_1 + 3,uVar1,param_2);
    param_1[1] = uVar1 + 5;
    return;
  }
  uVar2 = FUN_0186a56c(param_1,(param_1[1] - *param_1) * -0x3333333333333333 + 1);
  FUN_0186a5c4(auStack_58,uVar2,(param_1[1] - *param_1) * -0x3333333333333333,param_1 + 3);
  FUN_0186a658(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 5;
  FUN_0186a818(param_1,auStack_58);
  FUN_0186a744(auStack_58);
  return;
}



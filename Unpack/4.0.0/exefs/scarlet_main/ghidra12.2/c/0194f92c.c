/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0194f92c; name: FUN_0194f92c
 */


void FUN_0194f92c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = param_1[1];
  if (uVar1 < (ulong)param_1[2]) {
    FUN_0194fa80(param_1 + 3,uVar1,param_2);
    param_1[1] = uVar1 + 0x18;
    return;
  }
  uVar2 = FUN_0194fa24(param_1,(param_1[1] - *param_1 >> 3) * -0x5555555555555555 + 1);
  FUN_0194fb6c(auStack_58,uVar2,(param_1[1] - *param_1 >> 3) * -0x5555555555555555,param_1 + 3);
  FUN_0194fa80(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x18;
  FUN_0194fcd0(param_1,auStack_58);
  FUN_0194fc00(auStack_58);
  return;
}



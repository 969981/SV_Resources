/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016bd670; name: FUN_016bd670
 */


void FUN_016bd670(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_016bd71c(param_1,(param_1[1] - *param_1 >> 3) * 0x6db6db6db6db6db7 + 1);
  FUN_016bd780(auStack_58,uVar1,(param_1[1] - *param_1 >> 3) * 0x6db6db6db6db6db7,param_1 + 3);
  FUN_016bdaec(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0x38;
  FUN_016bd8d8(param_1,auStack_58);
  FUN_016bd814(auStack_58);
  return;
}



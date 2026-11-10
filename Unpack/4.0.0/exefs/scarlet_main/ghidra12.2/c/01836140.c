/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01836140; name: FUN_01836140
 */


void FUN_01836140(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long local_48;
  
  uVar1 = FUN_018361ec(param_1,(param_1[1] - *param_1 >> 4) * 0x2e8ba2e8ba2e8ba3 + 1);
  FUN_01836818(auStack_58,uVar1,(param_1[1] - *param_1 >> 4) * 0x2e8ba2e8ba2e8ba3,param_1 + 3);
  FUN_01835cc4(param_1 + 3,local_48,param_2);
  local_48 = local_48 + 0xb0;
  FUN_01836ca0(param_1,auStack_58);
  FUN_01836ed0(auStack_58);
  return;
}



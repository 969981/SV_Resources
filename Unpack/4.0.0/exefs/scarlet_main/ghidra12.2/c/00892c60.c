/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00892c60; name: FUN_00892c60
 */


void FUN_00892c60(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00892e08(param_2,*(undefined8 *)(param_3 + 0x20),*(undefined2 *)(param_3 + 0x4a));
  if ((uVar1 & 1) != 0) {
    FUN_008a5d9c(param_3,param_1);
  }
  FUN_00892df0(param_2,param_1);
  FUN_008a57b0(param_3,param_1,param_2);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018f6d1c; name: FUN_018f6d1c
 */


void FUN_018f6d1c(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_016c04b0(param_1,param_3);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_018f6d7c(param_1,param_2,param_3);
  FUN_010a29d0(param_1,param_2);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01568494; name: FUN_01568494
 */


uint FUN_01568494(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_8;
  
  local_8 = 0;
  FUN_0111e634(param_1,param_2,&local_8,0);
  uVar1 = FUN_015684d0(param_1,&local_8);
  return uVar1 & 1;
}



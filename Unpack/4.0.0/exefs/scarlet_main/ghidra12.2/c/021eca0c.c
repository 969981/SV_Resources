/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021eca0c; name: FUN_021eca0c
 */


uint FUN_021eca0c(undefined2 param_1,undefined2 param_2)

{
  uint uVar1;
  undefined *local_20;
  undefined2 local_18;
  undefined2 local_16;
  
  local_20 = PTR_DAT_047d8ee0 + 0x10;
  local_18 = param_1;
  local_16 = param_2;
  uVar1 = FUN_021eca48(&local_20);
  return uVar1 & 1;
}



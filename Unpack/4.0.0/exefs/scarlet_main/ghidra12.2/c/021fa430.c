/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021fa430; name: FUN_021fa430
 */


uint FUN_021fa430(undefined2 param_1)

{
  uint uVar1;
  undefined *local_20;
  undefined2 local_18;
  
  local_20 = PTR_DAT_047ddac0 + 0x10;
  local_18 = param_1;
  uVar1 = FUN_021fa468(&local_20);
  return uVar1 & 1;
}



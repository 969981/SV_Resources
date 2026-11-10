/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01482ab0; name: FUN_01482ab0
 */


uint FUN_01482ab0(undefined2 param_1)

{
  uint uVar1;
  undefined *local_20;
  undefined2 local_18;
  
  local_20 = PTR_DAT_047ddad8 + 0x10;
  local_18 = param_1;
  uVar1 = FUN_01482ae8(&local_20);
  return uVar1 & 1;
}



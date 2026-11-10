/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02923f40; name: thunk_FUN_021fd97c
 */


uint thunk_FUN_021fd97c(undefined2 param_1)

{
  uint uVar1;
  undefined *puStack_20;
  undefined2 uStack_18;
  
  puStack_20 = PTR_DAT_047ddad8 + 0x10;
  uStack_18 = param_1;
  uVar1 = FUN_021fd9b4(&puStack_20);
  return uVar1 & 1;
}



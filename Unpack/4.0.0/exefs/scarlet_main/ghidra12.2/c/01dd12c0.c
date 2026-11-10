/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd12c0; name: FUN_01dd12c0
 */


uint FUN_01dd12c0(long param_1)

{
  uint uVar1;
  
  FUN_01195974();
  uVar1 = *(uint *)(param_1 + 0x108);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



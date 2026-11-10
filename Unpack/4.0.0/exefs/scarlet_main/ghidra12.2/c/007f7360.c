/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f7360; name: FUN_007f7360
 */


int FUN_007f7360(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xbc);
  uVar3 = -uVar1;
  uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x70) + 0x18) + 0x38);
  if (uVar2 < uVar1) {
    uVar3 = ~uVar1;
  }
  *(uint *)(param_1 + 0xbc) = uVar2;
  return uVar3 + uVar2;
}



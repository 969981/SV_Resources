/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e0c698; name: FUN_01e0c698
 */


uint FUN_01e0c698(long param_1)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x138) == 0) {
    uVar1 = *(uint *)(param_1 + 0x128);
  }
  else {
    uVar1 = FUN_00cec030(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70));
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}



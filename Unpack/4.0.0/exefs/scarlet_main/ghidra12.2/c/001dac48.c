/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001dac48; name: FUN_001dac48
 */


void FUN_001dac48(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 < 0) {
    uVar1 = *(uint *)(param_1 + 0xfac) & 0xffffffbf;
    *(undefined8 *)(param_1 + 0xf80) = 0;
  }
  else {
    *(long *)(param_1 + 0xf80) = param_2;
    uVar1 = *(uint *)(param_1 + 0xfac) | 0x40;
  }
  *(uint *)(param_1 + 0xfac) = uVar1;
  return;
}



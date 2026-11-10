/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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



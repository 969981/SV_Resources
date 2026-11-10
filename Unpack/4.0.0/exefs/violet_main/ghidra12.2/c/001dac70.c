/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001dac70; name: FUN_001dac70
 */


void FUN_001dac70(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 < 0) {
    uVar1 = *(uint *)(param_1 + 0xfac) & 0xffffffdf;
    *(undefined8 *)(param_1 + 0xf88) = 0;
  }
  else {
    *(long *)(param_1 + 0xf88) = param_2;
    uVar1 = *(uint *)(param_1 + 0xfac) | 0x20;
  }
  *(uint *)(param_1 + 0xfac) = uVar1;
  return;
}



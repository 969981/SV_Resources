/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c33a0; name: FUN_001c33a0
 */


void FUN_001c33a0(long param_1)

{
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xffffff00;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffb | 1;
  *(undefined **)(param_1 + 8) = &DAT_044841b8;
  *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) * 4.0;
  return;
}



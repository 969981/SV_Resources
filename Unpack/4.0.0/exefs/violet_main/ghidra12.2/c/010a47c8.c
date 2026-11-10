/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010a47c8; name: FUN_010a47c8
 */


void FUN_010a47c8(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x50) = param_2[2];
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  return;
}



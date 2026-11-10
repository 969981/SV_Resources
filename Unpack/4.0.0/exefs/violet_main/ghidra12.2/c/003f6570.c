/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003f6570; name: FUN_003f6570
 */


void FUN_003f6570(long param_1)

{
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    return;
  }
  FUN_00451ce0(*(long *)(param_1 + 0x10),0);
  FUN_00451bc0(*(undefined8 *)(param_1 + 0x10),&LAB_003f65d0,*(undefined8 *)(param_1 + 0x10));
  FUN_00451b60(*(undefined8 *)(param_1 + 0x10),&LAB_003f65f0);
  FUN_00451510(*(undefined8 *)(param_1 + 0x10));
  return;
}



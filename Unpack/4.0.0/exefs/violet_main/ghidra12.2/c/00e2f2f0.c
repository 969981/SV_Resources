/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e2f2f0; name: FUN_00e2f2f0
 */


void FUN_00e2f2f0(long param_1)

{
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    FUN_00e2f328(*(undefined8 *)(param_1 + 0x40),param_1);
    *(byte *)(param_1 + 0x50) = 1;
  }
  return;
}



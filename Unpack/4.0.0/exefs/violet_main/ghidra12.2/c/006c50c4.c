/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006c50c4; name: FUN_006c50c4
 */


byte FUN_006c50c4(undefined8 *param_1)

{
  if ((byte *)*param_1 == (byte *)0x0) {
    return 0;
  }
  return *(byte *)*param_1 & 1;
}



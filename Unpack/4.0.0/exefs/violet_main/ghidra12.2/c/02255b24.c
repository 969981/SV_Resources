/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02255b24; name: FUN_02255b24
 */


undefined8 FUN_02255b24(short *param_1)

{
  while( true ) {
    if (*param_1 == 0) {
      return 0;
    }
    if (*param_1 == 0x10) break;
    param_1 = param_1 + 1;
  }
  return 1;
}



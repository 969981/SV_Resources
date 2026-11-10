/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ed984; name: FUN_001ed984
 */


undefined8 FUN_001ed984(byte *param_1,long param_2)

{
  while( true ) {
    if (param_2 == 0) {
      return 1;
    }
    if (*(int *)(&DAT_03cc1318 + (ulong)*param_1 * 4) == 0) break;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  }
  return 0;
}



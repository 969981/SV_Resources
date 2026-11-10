/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00394a20; name: FUN_00394a20
 */


int FUN_00394a20(byte *param_1,byte *param_2,long param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if ((uint)(byte)PTR_DAT_047cd028[*param_1] - (uint)(byte)PTR_DAT_047cd028[*param_2] != 0) break;
    param_3 = param_3 + -1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return (uint)(byte)PTR_DAT_047cd028[*param_1] - (uint)(byte)PTR_DAT_047cd028[*param_2];
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001eda30; name: FUN_001eda30
 */


bool FUN_001eda30(int *param_1)

{
  if ((*param_1 == 0) && (param_1[1] == 0x10)) {
    return (char)param_1[2] == '\0';
  }
  return false;
}



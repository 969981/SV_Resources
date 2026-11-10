/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00864984; name: FUN_00864984
 */


char * FUN_00864984(byte param_1)

{
  if (param_1 < 6) {
    return (&PTR_s_Physics_044e97b8)[(char)param_1];
  }
  return "Invalid";
}



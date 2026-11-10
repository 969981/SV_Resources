/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e0ba4; name: FUN_001e0ba4
 */


char * FUN_001e0ba4(uint param_1)

{
  if (param_1 < 100) {
    return (&PTR_s_No_error_04484a68)[(int)param_1];
  }
  return "Unknown error";
}



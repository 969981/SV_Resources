/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0034c7b0; name: FUN_0034c7b0
 */


undefined8 FUN_0034c7b0(uint param_1,undefined8 *param_2)

{
  if (param_1 < 4) {
    *param_2 = (&PTR_s_identity_044960b8)[(int)param_1];
    return 1;
  }
  return 0;
}



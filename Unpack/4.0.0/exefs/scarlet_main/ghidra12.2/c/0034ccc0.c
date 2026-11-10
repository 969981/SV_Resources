/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034ccc0; name: FUN_0034ccc0
 */


undefined8 FUN_0034ccc0(uint param_1,undefined8 *param_2)

{
  if (param_1 < 3) {
    *param_2 = (&PTR_s_identity_044960d8)[(int)param_1];
    return 1;
  }
  return 0;
}



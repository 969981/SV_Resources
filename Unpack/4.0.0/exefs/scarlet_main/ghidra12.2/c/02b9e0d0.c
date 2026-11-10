/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b9e0d0; name: FUN_02b9e0d0
 */


void FUN_02b9e0d0(undefined4 param_1,undefined8 *param_2)

{
  param_2[1] = CONCAT44((int)((ulong)param_2[1] >> 0x20),param_1);
  *param_2 = *param_2;
  return;
}



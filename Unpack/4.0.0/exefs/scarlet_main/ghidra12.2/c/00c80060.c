/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c80060; name: FUN_00c80060
 */


void FUN_00c80060(undefined8 param_1,long *param_2,long *param_3)

{
  if ((*param_2 != 0) && (0.0 < *(float *)(*param_3 + 4))) {
    *(bool *)(*param_2 + 0x240) = 0.5 < *(float *)(*param_3 + 8);
    return;
  }
  return;
}



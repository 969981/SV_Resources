/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002134d0; name: FUN_002134d0
 */


void FUN_002134d0(char *param_1)

{
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    param_1 = *(char **)PTR_PTR_047cbcf8;
  }
                    /* try { // try from 002134ec to 002134ef has its CatchHandler @ 002134f8 */
  FUN_00267510(param_1);
  return;
}



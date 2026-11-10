/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006839e0; name: FUN_006839e0
 */


void FUN_006839e0(int *param_1)

{
  if (*param_1 == 3) {
    param_1[0x10] = 2;
                    /* try { // try from 00683a08 to 00683a13 has its CatchHandler @ 00683a1c */
    (**(code **)(**(long **)(param_1 + 0xc) + 0x40))(*(long **)(param_1 + 0xc),param_1 + 0x10,0,0);
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00683864; name: FUN_00683864
 */


void FUN_00683864(int *param_1)

{
  int *piVar1;
  
  if (*param_1 == 3) {
    piVar1 = param_1 + 0x10;
    *piVar1 = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
                    /* try { // try from 0068388c to 0068389b has its CatchHandler @ 006838ac */
    (**(code **)(**(long **)(param_1 + 0xc) + 0x40))(*(long **)(param_1 + 0xc),piVar1,0,0);
    *piVar1 = 1;
  }
  return;
}



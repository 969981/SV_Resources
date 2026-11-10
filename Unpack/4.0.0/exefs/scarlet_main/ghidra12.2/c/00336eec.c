/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00336eec; name: FUN_00336eec
 */


void FUN_00336eec(ulong *param_1)

{
  ulong *puVar1;
  
  if ((*param_1 & 1) == 0) {
    puVar1 = param_1 + 1;
  }
  else {
    puVar1 = (ulong *)param_1[1];
  }
                    /* try { // try from 00336f0c to 00336f13 has its CatchHandler @ 00336f38 */
  FUN_003384c0(param_1,puVar1,*param_1 >> 1);
  if ((*param_1 & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1[1]);
  return;
}



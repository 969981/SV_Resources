/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f506c; name: FUN_002f506c
 */


void FUN_002f506c(undefined8 *param_1)

{
  byte bVar1;
  
  *param_1 = &PTR_FUN_04493fa0;
                    /* try { // try from 002f5088 to 002f508b has its CatchHandler @ 002f50e4 */
  FUN_002feb40(param_1[6]);
  if ((*(byte *)(param_1 + 10) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 7);
  }
  else {
    FUN_0049e790(PTR_LAB_047cba48,param_1[0xc]);
    bVar1 = *(byte *)(param_1 + 7);
  }
  if ((bVar1 & 1) == 0) {
    FUN_002f490c(param_1);
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1[9]);
  FUN_002f490c(param_1);
  return;
}



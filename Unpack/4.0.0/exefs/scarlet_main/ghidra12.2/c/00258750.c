/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00258750; name: FUN_00258750
 */


void FUN_00258750(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  *param_1 = 0;
  lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x30);
  if (lVar1 != 0) {
                    /* try { // try from 0025877c to 00258787 has its CatchHandler @ 002587a4 */
    FUN_00269fa4(lVar1,0);
  }
  *param_1 = lVar1;
                    /* try { // try from 0025878c to 00258797 has its CatchHandler @ 002587a8 */
  FUN_0026ac80(lVar1,param_2);
  return;
}



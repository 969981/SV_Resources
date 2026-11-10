/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0028eef8; name: FUN_0028eef8
 */


void FUN_0028eef8(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if (0x333333333333333 < param_3) {
                    /* try { // try from 0028ef8c to 0028ef93 has its CatchHandler @ 0028ef94 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = param_3 * 0x50;
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,lVar2);
    param_1[2] = lVar1 + lVar2;
    *param_1 = lVar1;
    param_1[1] = lVar1;
    do {
                    /* try { // try from 0028ef58 to 0028ef63 has its CatchHandler @ 0028ef9c */
      FUN_002886bc(lVar1,param_2);
      param_2 = param_2 + 0x50;
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
    param_1[1] = lVar1;
  }
  return;
}



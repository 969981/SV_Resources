/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00287e10; name: FUN_00287e10
 */


void FUN_00287e10(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if (0x333333333333333 < param_3) {
                    /* try { // try from 00287ea4 to 00287eab has its CatchHandler @ 00287eac */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = param_3 * 0x50;
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,lVar2);
    param_1[2] = lVar1 + lVar2;
    *param_1 = lVar1;
    param_1[1] = lVar1;
    do {
                    /* try { // try from 00287e70 to 00287e7b has its CatchHandler @ 00287eb4 */
      FUN_002886bc(lVar1,param_2);
      param_2 = param_2 + 0x50;
      lVar1 = lVar1 + 0x50;
      lVar2 = lVar2 + -0x50;
    } while (lVar2 != 0);
    param_1[1] = lVar1;
  }
  return;
}



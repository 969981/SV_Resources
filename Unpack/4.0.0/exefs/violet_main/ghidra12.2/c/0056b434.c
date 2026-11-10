/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0056b434; name: FUN_0056b434
 */


long * FUN_0056b434(long *param_1,long *param_2)

{
  long lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      FUN_0057a198(lVar1);
      FUN_0049e790(PTR_LAB_047cba48,lVar1);
      *param_1 = 0;
    }
    if (*param_2 != 0) {
      lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar1 != 0) {
                    /* try { // try from 0056b490 to 0056b49b has its CatchHandler @ 0056b4bc */
        FUN_00579bf0(lVar1,0);
      }
      *param_1 = lVar1;
                    /* try { // try from 0056b4a4 to 0056b4ab has its CatchHandler @ 0056b4c0 */
      FUN_0057aea4(lVar1,*param_2);
    }
  }
  return param_1;
}



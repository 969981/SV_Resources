/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bbf28; name: FUN_027bbf28
 */


long * FUN_027bbf28(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    if (lVar1 == 0) {
      lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x30);
      if (lVar1 != 0) {
                    /* try { // try from 027bbf70 to 027bbf7b has its CatchHandler @ 027bbfd8 */
        FUN_00269fa4(lVar1,0);
      }
      *param_1 = lVar1;
      lVar2 = *param_2;
    }
    else {
      lVar2 = *param_2;
    }
    if (lVar2 == 0) {
      lVar2 = FUN_0049e770(PTR_FUN_047cba38,0x30);
      if (lVar2 != 0) {
                    /* try { // try from 027bbfa0 to 027bbfab has its CatchHandler @ 027bbfd4 */
        FUN_00269fa4(lVar2,0);
      }
      *param_2 = lVar2;
      lVar1 = *param_1;
    }
                    /* try { // try from 027bbfb4 to 027bbfbf has its CatchHandler @ 027bbfdc */
    FUN_0026ac80(lVar1,lVar2);
  }
  return param_1;
}



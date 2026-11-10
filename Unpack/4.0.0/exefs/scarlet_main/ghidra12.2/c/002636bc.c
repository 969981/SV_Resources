/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002636bc; name: FUN_002636bc
 */


long * FUN_002636bc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    if (lVar1 == 0) {
      lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar1 != 0) {
                    /* try { // try from 00263704 to 0026370f has its CatchHandler @ 0026376c */
        FUN_00267c98(lVar1,0);
      }
      *param_1 = lVar1;
      lVar2 = *param_2;
    }
    else {
      lVar2 = *param_2;
    }
    if (lVar2 == 0) {
      lVar2 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar2 != 0) {
                    /* try { // try from 00263734 to 0026373f has its CatchHandler @ 00263768 */
        FUN_00267c98(lVar2,0);
      }
      *param_2 = lVar2;
      lVar1 = *param_1;
    }
    FUN_002696a0(lVar1,lVar2);
  }
  return param_1;
}



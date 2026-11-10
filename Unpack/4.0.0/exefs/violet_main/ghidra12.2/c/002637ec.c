/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002637ec; name: FUN_002637ec
 */


bool FUN_002637ec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x20);
    if (lVar1 == 0) {
      *param_1 = 0;
      lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x20);
      if (lVar1 != 0) {
                    /* try { // try from 00263844 to 0026384f has its CatchHandler @ 0026386c */
        FUN_00267c98(lVar1,0);
      }
    }
    else {
                    /* try { // try from 00263818 to 00263823 has its CatchHandler @ 00263870 */
      FUN_00267c98(lVar1,0);
    }
    *param_1 = lVar1;
  }
  return *(int *)(lVar1 + 0x1c) == 0;
}



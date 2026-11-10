/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002594d4; name: FUN_002594d4
 */


long FUN_002594d4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x30);
    if (lVar1 != 0) {
                    /* try { // try from 00259500 to 0025950b has its CatchHandler @ 00259524 */
      FUN_00269fa4(lVar1,0);
    }
    *param_1 = lVar1;
  }
  *param_1 = 0;
  return lVar1;
}



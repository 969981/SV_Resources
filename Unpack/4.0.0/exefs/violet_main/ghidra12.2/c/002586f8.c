/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002586f8; name: FUN_002586f8
 */


void FUN_002586f8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = FUN_0049e770(PTR_FUN_047cba38,0x30);
    if (lVar1 != 0) {
                    /* try { // try from 00258728 to 00258733 has its CatchHandler @ 0025874c */
      FUN_00269fa4(lVar1,0);
    }
    *param_2 = lVar1;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



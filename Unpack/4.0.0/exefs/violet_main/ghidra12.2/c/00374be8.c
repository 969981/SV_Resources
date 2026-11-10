/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00374be8; name: FUN_00374be8
 */


void FUN_00374be8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_2 = 0;
  *param_1 = lVar1;
  param_1[1] = *(long *)(lVar1 + 8);
                    /* try { // try from 00374c0c to 00374c0f has its CatchHandler @ 00374c1c */
  FUN_00368450(param_1 + 2);
  return;
}



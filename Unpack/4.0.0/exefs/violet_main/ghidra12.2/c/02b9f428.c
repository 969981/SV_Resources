/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b9f428; name: FUN_02b9f428
 */


undefined1  [16] FUN_02b9f428(undefined1 param_1 [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmin(*param_2,param_1,4);
  return auVar1;
}



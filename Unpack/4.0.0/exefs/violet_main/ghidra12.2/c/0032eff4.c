/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032eff4; name: FUN_0032eff4
 */


void FUN_0032eff4(long *param_1)

{
  undefined1 auVar1 [16];
  
  *param_1 = (long)(PTR_DAT_047ccc38 + 0x10);
  param_1[1] = 1;
  auVar1 = FUN_003427c0(PTR_PTR_047ccc40);
  *(undefined1 (*) [16])(param_1 + 2) = auVar1;
  return;
}



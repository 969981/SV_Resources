/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038e680; name: FUN_0038e680
 */


void FUN_0038e680(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  
  auVar1 = FUN_0038e500(1);
  *param_1 = auVar1;
  *(undefined4 *)(*param_1 + 0xc) = 2;
  return;
}



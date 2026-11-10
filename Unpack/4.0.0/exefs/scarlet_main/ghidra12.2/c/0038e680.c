/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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



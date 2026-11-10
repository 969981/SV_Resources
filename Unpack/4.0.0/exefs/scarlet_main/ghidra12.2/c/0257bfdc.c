/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0257bfdc; name: thunk_FUN_0257bfe0
 */


void thunk_FUN_0257bfe0(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = FUN_0257c04c((int)param_1[0xe],*(undefined8 *)(param_1[2] + 0x1d8),param_1 + 3);
  *(undefined8 *)(*(long *)(lVar2 + 0xe8) + param_1[1] * 0x10 + 8) = uVar1;
  return;
}



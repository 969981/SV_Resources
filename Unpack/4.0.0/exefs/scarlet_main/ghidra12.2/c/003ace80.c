/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003ace80; name: FUN_003ace80
 */


void FUN_003ace80(long param_1)

{
  long lVar1;
  
  FUN_003e8b90(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe0));
  lVar1 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  FUN_0042bbe0(*(undefined8 *)(lVar1 + 0xe8));
  *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe8) = 0;
  return;
}



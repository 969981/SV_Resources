/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f97dc; name: FUN_001f97dc
 */


void FUN_001f97dc(long param_1,undefined8 param_2)

{
  int iVar1;
  
  *(undefined8 *)(param_1 + 0xa8) = param_2;
  iVar1 = FUN_001f9a90(*(undefined8 *)(param_1 + 0x70),param_1);
  if (iVar1 != 0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}



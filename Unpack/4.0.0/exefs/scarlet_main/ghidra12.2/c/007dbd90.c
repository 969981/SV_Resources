/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007dbd90; name: FUN_007dbd90
 */


void FUN_007dbd90(long param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  piVar1 = (int *)(param_1 + 0x78);
  if (*piVar1 == 1) {
    FUN_0078cc00(piVar1);
  }
  FUN_0078cac8(piVar1);
  return;
}



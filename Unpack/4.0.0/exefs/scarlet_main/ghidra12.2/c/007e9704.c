/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e9704; name: FUN_007e9704
 */


void FUN_007e9704(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x78))();
  if ((uVar1 & 1) == 0) {
    FUN_007e9458(param_1);
    return;
  }
  return;
}



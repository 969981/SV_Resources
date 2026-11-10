/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ce650; name: FUN_007ce650
 */


void FUN_007ce650(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(*(long *)PTR_DAT_047d0a08 + 0x18) + 0x1d8))();
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  return;
}



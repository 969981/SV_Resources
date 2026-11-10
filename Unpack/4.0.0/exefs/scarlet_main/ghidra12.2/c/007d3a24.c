/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007d3a24; name: FUN_007d3a24
 */


void FUN_007d3a24(long param_1)

{
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_007dc5ac();
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x10))(*(long **)(param_1 + 0xa0),0);
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    FUN_007da5ac();
    (**(code **)(**(long **)(param_1 + 0xa8) + 0x10))(*(long **)(param_1 + 0xa8),0);
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    FUN_007db6dc();
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x10))(*(long **)(param_1 + 0xb0),0);
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_007dece4();
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))(*(long **)(param_1 + 0xb8),0);
  }
  if (*(long *)(param_1 + 0xc0) == 0) {
    return;
  }
  FUN_007dbd90();
                    /* WARNING: Could not recover jumptable at 0x007d3acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xc0) + 0x10))(*(long **)(param_1 + 0xc0),0);
  return;
}



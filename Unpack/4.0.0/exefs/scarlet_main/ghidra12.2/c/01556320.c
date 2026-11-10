/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01556320; name: FUN_01556320
 */


void FUN_01556320(long param_1)

{
  long lVar1;
  
  if (**(char **)(param_1 + 0x1b8) != '\0') {
    (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),param_1 + 0x1b0);
  }
  if (**(char **)(param_1 + 0x1d8) != '\0') {
    (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),param_1 + 0x1d0);
  }
  if (**(char **)(param_1 + 0x1b8) != '\0') {
    lVar1 = param_1 + 0x1b0;
    (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),lVar1);
    (**(code **)(**(long **)(param_1 + 200) + 0xa8))(0,*(long **)(param_1 + 200),lVar1);
    (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),lVar1);
  }
  if (**(char **)(param_1 + 0x1d8) == '\0') {
    return;
  }
  lVar1 = param_1 + 0x1d0;
  (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),lVar1);
  (**(code **)(**(long **)(param_1 + 200) + 0xa8))(0,*(long **)(param_1 + 200),lVar1);
                    /* WARNING: Could not recover jumptable at 0x01556414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),lVar1);
  return;
}



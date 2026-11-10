/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011f40f4; name: FUN_011f40f4
 */


void FUN_011f40f4(long param_1)

{
  long lVar1;
  
  if (**(char **)(param_1 + 0x1f8) != '\0') {
    lVar1 = param_1 + 0x1f0;
    (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),lVar1);
    (**(code **)(**(long **)(param_1 + 200) + 0xa8))(0,*(long **)(param_1 + 200),lVar1);
    (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),lVar1);
  }
  if (**(char **)(param_1 + 0x218) != '\0') {
    lVar1 = param_1 + 0x210;
    (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),lVar1);
    (**(code **)(**(long **)(param_1 + 200) + 0xa8))(0,*(long **)(param_1 + 200),lVar1);
    (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),lVar1);
  }
  if (**(char **)(param_1 + 0x238) != '\0') {
    lVar1 = param_1 + 0x230;
    (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),lVar1);
    (**(code **)(**(long **)(param_1 + 200) + 0xa8))(0,*(long **)(param_1 + 200),lVar1);
    (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),lVar1);
  }
  if (**(char **)(param_1 + 600) == '\0') {
    return;
  }
  lVar1 = param_1 + 0x250;
  (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),lVar1);
  (**(code **)(**(long **)(param_1 + 200) + 0xa8))(0,*(long **)(param_1 + 200),lVar1);
                    /* WARNING: Could not recover jumptable at 0x011f4258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x90))(*(long **)(param_1 + 200),lVar1);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0126ebbc; name: FUN_0126ebbc
 */


void FUN_0126ebbc(long param_1,undefined1 *param_2,int *param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_0126ec0c(*(undefined8 *)(param_1 + 0x38));
  if (*param_3 != 0) {
    uVar1 = FUN_0126ee6c(*(undefined8 *)(param_1 + 0x38));
  }
  *param_2 = uVar1;
  return;
}



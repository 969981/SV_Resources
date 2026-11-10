/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f6fa0c; name: FUN_01f6fa0c
 */


void FUN_01f6fa0c(undefined8 param_1,long param_2,undefined8 param_3)

{
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    FUN_00538c98(param_1,param_2,param_2 + 0x11,param_3);
    return;
  }
  FUN_00538c98(param_1,param_2,*(undefined8 *)(param_2 + 0x20),param_3);
  return;
}



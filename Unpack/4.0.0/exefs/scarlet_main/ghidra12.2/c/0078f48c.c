/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078f48c; name: FUN_0078f48c
 */


void FUN_0078f48c(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0078ce18(param_2);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_0078ce3c(param_2);
    if ((uVar1 & 1) != 0) {
      FUN_0078f900(*(undefined8 *)(param_1 + 0x88),param_2);
      return;
    }
  }
  else {
    uVar1 = FUN_0078fa50(param_1,*(int *)(param_1 + 0x14) + param_2);
    if ((uVar1 & 1) != 0) {
      FUN_0078fa2c(param_1,*(int *)(param_1 + 0x14) + param_2);
      return;
    }
    uVar1 = FUN_0078fa50(param_1 + 0x18,*(int *)(param_1 + 0x2c) + param_2);
    if ((uVar1 & 1) != 0) {
      FUN_0078fa2c(param_1 + 0x18,*(int *)(param_1 + 0x2c) + param_2);
      return;
    }
  }
  return;
}



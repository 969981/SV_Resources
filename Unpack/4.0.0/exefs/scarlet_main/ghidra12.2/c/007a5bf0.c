/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a5bf0; name: FUN_007a5bf0
 */


undefined8 FUN_007a5bf0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0078ce3c(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x180));
  if ((uVar1 & 1) == 0) {
    *(undefined **)(param_1 + 0x30) = PTR_LAB_047d0b98;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NetNetworkStateJob::CompleteProcess";
    return 0;
  }
  return 5;
}



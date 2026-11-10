/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f43220; name: FUN_00f43220
 */


ulong FUN_00f43220(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x144) == '\0') {
    if (*(char *)(param_1 + 0x146) != '\0') {
      uVar1 = FUN_01ea7b3c(param_1);
      if (*(char *)(param_1 + 0x146) == '\0') {
        return uVar1;
      }
      *(undefined1 *)(param_1 + 0x146) = 0;
      return uVar1;
    }
    if (*(char *)(param_1 + 0x20c) == '\0') {
      return 0;
    }
    uVar1 = FUN_01ea7bcc(param_1);
    FUN_01ea7cb4(param_1);
  }
  else {
    uVar1 = FUN_01ea798c(param_1);
    FUN_01ea7a74(param_1);
  }
  return uVar1 & 0xffffffff;
}



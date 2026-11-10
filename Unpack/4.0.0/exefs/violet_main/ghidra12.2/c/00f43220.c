/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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



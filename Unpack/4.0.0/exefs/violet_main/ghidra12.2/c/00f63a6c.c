/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f63a6c; name: FUN_00f63a6c
 */


void FUN_00f63a6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 3) == '\0') {
    nn::os::GetSystemTick();
    uVar1 = nn::os::ConvertToTimeSpan();
    *param_1 = uVar1;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  else if ((*(char *)((long)param_1 + 0x19) != '\0') || (*(char *)((long)param_1 + 0x1a) != '\0')) {
    FUN_00f63ac4(param_1);
    return;
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f63ac4; name: FUN_00f63ac4
 */


void FUN_00f63ac4(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if ((((*(char *)((long)param_1 + 0x19) != '\0') || (*(char *)((long)param_1 + 0x1a) != '\0')) &&
      (*(undefined1 *)((long)param_1 + (param_2 & 0xff) + 0x19) = 0,
      *(char *)((long)param_1 + 0x19) == '\0')) && (*(char *)((long)param_1 + 0x1a) == '\0')) {
    nn::os::GetSystemTick();
    uVar1 = nn::os::ConvertToTimeSpan();
    *param_1 = uVar1;
    param_1[2] = 0;
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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



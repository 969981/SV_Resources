/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f68a7c; name: FUN_01f68a7c
 */


void FUN_01f68a7c(long param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0xc4) = 4;
  if (*(int *)(param_1 + 0xc0) == 4) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    if (*(char *)(param_1 + 200) == '\0') {
      *(undefined1 *)(param_1 + 200) = 1;
    }
    nn::os::GetSystemTick();
    uVar1 = nn::os::ConvertToTimeSpan();
    *(undefined8 *)(param_1 + 0xd0) = uVar1;
  }
  return;
}



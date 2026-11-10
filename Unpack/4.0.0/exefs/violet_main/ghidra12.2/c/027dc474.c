/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027dc474; name: FUN_027dc474
 */


undefined8 FUN_027dc474(long param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x90) == 0) || (*(char *)(param_1 + 0x98) == '\0')) {
    uVar1 = 0;
  }
  else {
    FUN_01ea06c8(param_1 + 0xa0);
    if (*(char *)(param_1 + 0x98) != '\0') {
      FUN_01e9eb34(param_1 + 0xa0);
      *(undefined1 *)(param_1 + 0x98) = 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}



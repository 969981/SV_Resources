/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6fc8c; name: FUN_01f6fc8c
 */


undefined8 FUN_01f6fc8c(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((((*(int *)(param_1 + 0x40) == 0) && (*(char *)(param_1 + 0x90) != '\0')) &&
      (*(char *)(param_1 + 0x98) != '\0')) && (uVar2 = FUN_01f6fcec(param_1), (uVar2 & 1) != 0)) {
    if (*(char *)(param_1 + 0xb0) != '\0') {
      *(undefined1 *)(param_1 + 0xb0) = 0;
    }
    uVar1 = 1;
    *(undefined4 *)(param_1 + 0x40) = 2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



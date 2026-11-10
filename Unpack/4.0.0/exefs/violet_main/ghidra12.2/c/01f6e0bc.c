/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6e0bc; name: FUN_01f6e0bc
 */


undefined1 FUN_01f6e0bc(long param_1,byte param_2)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x24) == 3) {
    uVar1 = 0;
    if (*(char *)(param_1 + 0x20) != '\0') {
      *(byte *)(param_1 + 0x21) = param_2 & 1;
      uVar1 = 1;
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



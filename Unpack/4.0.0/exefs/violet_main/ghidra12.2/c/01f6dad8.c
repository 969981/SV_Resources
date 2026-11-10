/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6dad8; name: FUN_01f6dad8
 */


void FUN_01f6dad8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar1 != 0) {
    FUN_01cf3674(param_1 + 0x58);
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



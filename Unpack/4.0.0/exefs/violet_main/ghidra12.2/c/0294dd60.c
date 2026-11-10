/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0294dd60; name: FUN_0294dd60
 */


undefined8 FUN_0294dd60(void)

{
  long lVar1;
  
  lVar1 = FUN_0294db90();
  if (lVar1 == 0) {
    return 0;
  }
  if (*(char *)(lVar1 + 0x42) == '\0') {
    return 0;
  }
  *(undefined1 *)(lVar1 + 0x42) = 0;
  return 1;
}



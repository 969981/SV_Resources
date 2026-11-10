/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e61c48; name: FUN_01e61c48
 */


void FUN_01e61c48(long param_1)

{
  long local_8;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    local_8 = 0;
  }
  else {
    FUN_01c27dd8(&local_8);
    if ((local_8 != 0) && (*(char *)(local_8 + 0xf0) != '\0')) {
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xb8);
      if (*(char *)(param_1 + 0xc0) == '\0') {
        *(undefined1 *)(param_1 + 0xc0) = 1;
      }
      *(undefined8 *)(local_8 + 0x78) = *(undefined8 *)(local_8 + 0x50);
    }
  }
  FUN_01c1abf8(&local_8);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e6405c; name: FUN_01e6405c
 */


void FUN_01e6405c(long param_1)

{
  long local_8;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    local_8 = 0;
  }
  else {
    FUN_01c27dd8(&local_8);
    if ((local_8 != 0) && (*(char *)(local_8 + 0xf0) != '\0')) {
      if (*(char *)(param_1 + 0xb4) == '\0') {
        *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xac);
        *(undefined1 *)(param_1 + 0xb4) = 1;
      }
      else {
        *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0xac);
      }
    }
  }
  FUN_01c1abf8(&local_8);
  return;
}



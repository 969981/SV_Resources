/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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



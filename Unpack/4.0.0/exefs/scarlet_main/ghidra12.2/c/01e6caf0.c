/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e6caf0; name: FUN_01e6caf0
 */


void FUN_01e6caf0(long param_1)

{
  long local_8;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    local_8 = 0;
  }
  else {
    FUN_01c27dd8(&local_8);
    if ((local_8 != 0) && (*(char *)(local_8 + 0xf1) != '\0')) {
      *(long *)(param_1 + 200) = *(long *)(param_1 + 0xb0);
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xb8);
      if (*(char *)(param_1 + 0xc0) == '\0') {
        *(undefined1 *)(param_1 + 0xc0) = 1;
      }
      *(bool *)(local_8 + 0xf0) = *(long *)(local_8 + 0x50) == *(long *)(param_1 + 0xb0);
    }
  }
  FUN_01c1abf8(&local_8);
  return;
}



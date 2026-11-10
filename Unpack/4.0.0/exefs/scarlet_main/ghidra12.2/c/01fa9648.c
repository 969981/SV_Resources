/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fa9648; name: FUN_01fa9648
 */


void FUN_01fa9648(long param_1)

{
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    return;
  }
  *(undefined1 *)(param_1 + 0xd0) = 1;
  FUN_01fabdfc(*(undefined8 *)(param_1 + 8));
  FUN_01fabe68(param_1 + 0x80);
  return;
}



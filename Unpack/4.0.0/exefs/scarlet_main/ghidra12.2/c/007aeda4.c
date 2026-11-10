/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007aeda4; name: FUN_007aeda4
 */


undefined8 FUN_007aeda4(long param_1)

{
  if (*(char *)(param_1 + 0x103) == '\x02') {
    return *(undefined8 *)(param_1 + 0xb8);
  }
  return 0;
}



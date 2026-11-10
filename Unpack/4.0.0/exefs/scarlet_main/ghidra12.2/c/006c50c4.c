/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006c50c4; name: FUN_006c50c4
 */


byte FUN_006c50c4(undefined8 *param_1)

{
  if ((byte *)*param_1 == (byte *)0x0) {
    return 0;
  }
  return *(byte *)*param_1 & 1;
}



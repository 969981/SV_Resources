/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021aa084; name: FUN_021aa084
 */


void FUN_021aa084(long param_1)

{
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  if (*(char *)(param_1 + 0x170) == '\0') {
    *(undefined1 *)(param_1 + 0x170) = 1;
  }
  FUN_021d17b4(param_1 + 0x100,*(undefined8 *)(param_1 + 0x100));
  FUN_021d185c(param_1 + 0x138,*(undefined8 *)(param_1 + 0x138));
  return;
}



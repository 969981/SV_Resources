/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0216bc24; name: FUN_0216bc24
 */


void FUN_0216bc24(long param_1)

{
  if (*(char *)(param_1 + 10) != '\0') {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x28))
              (*(long **)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x10));
    *(undefined1 *)(param_1 + 10) = 0;
  }
  return;
}



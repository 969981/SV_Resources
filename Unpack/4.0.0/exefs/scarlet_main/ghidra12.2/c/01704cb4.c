/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01704cb4; name: FUN_01704cb4
 */


void FUN_01704cb4(long param_1)

{
  if (*(char *)(*(long *)(param_1 + 0x30) + 0x2b0) == '\0') {
    return;
  }
  FUN_014e799c(*(long *)(param_1 + 0x30),0xffffffff);
  FUN_01704cf8(*(undefined8 *)(param_1 + 0x30),2);
  return;
}



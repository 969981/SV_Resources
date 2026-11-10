/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0013d7c0; name: FUN_0013d7c0
 */


void FUN_0013d7c0(void)

{
  undefined8 *in_x3;
  undefined8 *in_x4;
  
  if (*(char *)(in_x3 + 1) == ' ') {
    FUN_0013cb10();
    return;
  }
  *in_x3 = *in_x4;
  *(undefined1 *)(in_x3 + 1) = *(undefined1 *)(in_x4 + 1);
  return;
}



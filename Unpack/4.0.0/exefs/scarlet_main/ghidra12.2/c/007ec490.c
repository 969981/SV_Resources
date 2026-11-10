/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ec490; name: FUN_007ec490
 */


void FUN_007ec490(long param_1,char *param_2)

{
  if (*param_2 == '\x02') {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x10);
  }
  return;
}



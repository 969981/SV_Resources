/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01afb560; name: FUN_01afb560
 */


void FUN_01afb560(char *param_1)

{
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    FUN_011e0500(*(undefined8 *)(*(long *)(param_1 + 8) - ((ulong)~(uint)DAT_048024d8 & 1)));
    return;
  }
  FUN_011e0500(0);
  return;
}



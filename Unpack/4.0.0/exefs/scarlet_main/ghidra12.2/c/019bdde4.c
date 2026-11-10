/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019bdde4; name: FUN_019bdde4
 */


void FUN_019bdde4(ulong *param_1,long *param_2)

{
  FUN_019bde54();
  if (((((char)param_2[3] == '\0') && ((*param_2 == 0 || (*(short *)(*param_2 + 0x1a) == 0)))) ||
      (param_2[2] == 0)) || (*param_1 <= param_1[6])) {
    return;
  }
  FUN_01a40a28(param_1 + 1,param_2);
  return;
}



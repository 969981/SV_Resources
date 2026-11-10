/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0158b068; name: FUN_0158b068
 */


bool FUN_0158b068(char *param_1)

{
  if (((*param_1 == '\x01') || (*param_1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    return *(char *)(*(long *)(param_1 + 8) - ((ulong)~(uint)DAT_04831040 & 1)) != '\0';
  }
  return false;
}



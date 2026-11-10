/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc5cb4; name: FUN_01dc5cb4
 */


bool FUN_01dc5cb4(long param_1)

{
  if ((((((*(char *)(param_1 + 0x6c4b) == '\0') && (*(char *)(param_1 + 0x6c57) == '\0')) &&
        (*(char *)(param_1 + 0x6c63) == '\0')) &&
       ((*(char *)(param_1 + 0x6c6f) == '\0' && (*(char *)(param_1 + 0x6c7b) == '\0')))) &&
      ((*(char *)(param_1 + 0x6c87) == '\0' &&
       ((*(char *)(param_1 + 0x6c93) == '\0' && (*(char *)(param_1 + 0x6c9f) == '\0')))))) &&
     ((*(char *)(param_1 + 0x6cab) == '\0' &&
      ((*(char *)(param_1 + 0x6cb7) == '\0' && (*(char *)(param_1 + 0x6cc3) == '\0')))))) {
    return *(char *)(param_1 + 0x6ccf) != '\0';
  }
  return true;
}



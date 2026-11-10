/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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



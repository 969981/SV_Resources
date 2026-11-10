/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f66010; name: FUN_01f66010
 */


bool FUN_01f66010(char *param_1)

{
  char local_30 [8];
  long local_28;
  
  FUN_01ecce00(local_30);
  if ((((local_30[0] != '\0') && (*param_1 != '\0')) && (param_1[0x10] != '\0')) &&
     (param_1[0x20] != '\0')) {
    if (-1 < (long)(*(ulong *)(param_1 + 8) | *(ulong *)(param_1 + 0x18))) {
      if ((long)*(ulong *)(param_1 + 8) < 3) {
        return (long)(*(ulong *)(param_1 + 0x18) + 0x708) < local_28;
      }
      return true;
    }
  }
  return false;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f8d2c; name: FUN_001f8d2c
 */


undefined8 FUN_001f8d2c(long param_1,long param_2,ushort param_3)

{
  long lVar1;
  char *pcVar2;
  
  if ((*(ushort *)(param_1 + 0xe2) & param_3) == 0) {
    lVar1 = *(long *)(*(long *)(param_2 + 8) + 0x18);
    if (lVar1 != 0) {
      pcVar2 = *(char **)(*(long *)(param_2 + 8) + 0x10);
      do {
        if (*pcVar2 != ' ' && *pcVar2 != '\t') {
          *(ushort *)(param_1 + 0xe2) = *(ushort *)(param_1 + 0xe2) | param_3;
          return 1;
        }
        lVar1 = lVar1 + -1;
        pcVar2 = pcVar2 + 1;
      } while (lVar1 != 0);
    }
  }
  return 0;
}



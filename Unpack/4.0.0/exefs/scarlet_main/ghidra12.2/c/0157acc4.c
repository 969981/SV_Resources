/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0157acc4; name: FUN_0157acc4
 */


void FUN_0157acc4(long param_1,int param_2)

{
  int *piVar1;
  
  if (((((*(char *)(param_1 + 0xc) == '\0') || (piVar1 = (int *)(param_1 + 8), *piVar1 != param_2))
       && ((*(char *)(param_1 + 0x14) == '\0' ||
           (piVar1 = (int *)(param_1 + 0x10), *piVar1 != param_2)))) &&
      ((((*(char *)(param_1 + 0x1c) == '\0' ||
         (piVar1 = (int *)(param_1 + 0x18), *piVar1 != param_2)) &&
        ((*(char *)(param_1 + 0x24) == '\0' ||
         (piVar1 = (int *)(param_1 + 0x20), *piVar1 != param_2)))) &&
       ((((*(char *)(param_1 + 0x2c) == '\0' ||
          (piVar1 = (int *)(param_1 + 0x28), *piVar1 != param_2)) &&
         ((*(char *)(param_1 + 0x34) == '\0' ||
          (piVar1 = (int *)(param_1 + 0x30), *piVar1 != param_2)))) &&
        ((*(char *)(param_1 + 0x3c) == '\0' ||
         (piVar1 = (int *)(param_1 + 0x38), *piVar1 != param_2)))))))) &&
     (((*(char *)(param_1 + 0x44) == '\0' || (piVar1 = (int *)(param_1 + 0x40), *piVar1 != param_2))
      && (((*(char *)(param_1 + 0x4c) == '\0' ||
           (piVar1 = (int *)(param_1 + 0x48), *piVar1 != param_2)) &&
          ((*(char *)(param_1 + 0x54) == '\0' ||
           (piVar1 = (int *)(param_1 + 0x50), *piVar1 != param_2)))))))) {
    if (*(char *)(param_1 + 0x5c) == '\0') {
      return;
    }
    piVar1 = (int *)(param_1 + 0x58);
    if (*piVar1 != param_2) {
      return;
    }
  }
  *piVar1 = 0;
  return;
}



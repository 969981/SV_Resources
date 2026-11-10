/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f98d0; name: FUN_004f98d0
 */


void FUN_004f98d0(char *param_1)

{
  uint uVar1;
  long lVar2;
  
  if (*param_1 != '\0') {
    return;
  }
  *param_1 = '\x01';
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = 0;
    do {
      while (**(int **)(*(long *)(param_1 + 0x28) + lVar2 * 8) == 0) {
        lVar2 = lVar2 + 1;
        if (*(int *)(param_1 + 0x38) <= lVar2) goto LAB_004f9940;
      }
      FUN_0052b230();
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x38));
  }
LAB_004f9940:
  uVar1 = *(uint *)(param_1 + 0x3c);
  if (0 < (int)uVar1) {
    lVar2 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x30) + lVar2) != 0) {
        FUN_004f98d0();
      }
      lVar2 = lVar2 + 8;
    } while ((ulong)uVar1 * 8 != lVar2);
  }
  FUN_004a4580(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x18));
  FUN_005022b0(param_1);
  return;
}



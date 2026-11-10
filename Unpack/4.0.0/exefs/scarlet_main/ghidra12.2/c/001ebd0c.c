/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ebd0c; name: FUN_001ebd0c
 */


void FUN_001ebd0c(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x16c8) != 0) {
    lVar1 = *(long *)(param_1 + 0x16d0);
    if (0 < *(int *)(param_1 + 0x16c8)) {
      lVar2 = 0;
      do {
        FUN_001e04f0(*(undefined8 *)(lVar1 + lVar2 * 8));
        *(undefined8 *)(*(long *)(param_1 + 0x16d0) + lVar2 * 8) = 0;
        lVar1 = *(long *)(param_1 + 0x16d0);
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(param_1 + 0x16c8));
    }
    FUN_001ec308();
    *(undefined8 *)(param_1 + 0x16d0) = 0;
    *(undefined4 *)(param_1 + 0x16c8) = 0;
  }
  return;
}



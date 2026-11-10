/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004fdd58; name: FUN_004fdd58
 */


long FUN_004fdd58(long param_1)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    return 0;
  }
  lVar3 = (long)*(int *)(lVar4 + 0xc) << 3;
  piVar2 = *(int **)(lVar4 + 0x10);
  if (piVar2 != (int *)0x0) {
    if (0 < *piVar2) {
      lVar5 = 0;
      do {
        lVar1 = (**(code **)(**(long **)(piVar2 + lVar5 * 2 + 2) + 0x88))();
        piVar2 = *(int **)(lVar4 + 0x10);
        lVar5 = lVar5 + 1;
        lVar3 = lVar1 + lVar3;
      } while (lVar5 < *piVar2);
    }
    lVar3 = lVar3 + 8;
  }
  return lVar3;
}



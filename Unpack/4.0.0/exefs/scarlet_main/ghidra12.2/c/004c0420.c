/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004c0420; name: FUN_004c0420
 */


void FUN_004c0420(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x50) + lVar3 * 8) != 0) {
        uVar1 = FUN_004a464c(*(undefined8 *)(param_1 + 0x10));
        *(undefined8 *)(*(long *)(param_1 + 0x48) + lVar3 * 8) = uVar1;
        iVar2 = *(int *)(param_1 + 0x20);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



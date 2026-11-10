/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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



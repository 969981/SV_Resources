/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0012ea70; name: FUN_0012ea70
 */


int FUN_0012ea70(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x42);
  do {
    if ((int)uVar2 < 1) {
      return 0;
    }
    iVar1 = uVar2 + *(int *)(param_1 + 0x38) + -1;
    lVar3 = **(long **)(*(long *)(param_1 + 0x10) + 0x58);
    uVar2 = uVar2 - 1;
  } while (*(char *)(lVar3 + (long)iVar1 * 0x18 + 9) == '\x03');
  return *(byte *)(lVar3 + (long)iVar1 * 0x18 + 10) + 1;
}



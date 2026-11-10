/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01921d0c; name: FUN_01921d0c
 */


undefined4 FUN_01921d0c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  if (*(int *)(lVar2 + 0x30) != 0) {
    if (*(int *)(lVar2 + 0x30) - 1U < 3) {
      return 2;
    }
    return 1;
  }
  if ((*(byte *)(lVar2 + 0x499) >> 2 & 1) == 0) {
    return 0;
  }
  uVar1 = 1;
  if (*(char *)(lVar2 + 0x8c) == '\0') {
    uVar1 = 2;
  }
  return uVar1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013b950; name: FUN_0013b950
 */


uint FUN_0013b950(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  
  if (*(char *)(param_1 + 10) != '\0') {
    return *(uint *)(param_1 + 0xc);
  }
  lVar3 = *(long *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0xc) ^ (uint)lVar3;
  if (lVar3 != 0) {
    do {
      pbVar1 = (byte *)(param_1 + 0x17 + lVar3);
      lVar3 = lVar3 + -1;
      uVar2 = uVar2 * 0x20 + (uVar2 >> 2) + (uint)*pbVar1 ^ uVar2;
    } while (lVar3 != 0);
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  *(undefined1 *)(param_1 + 10) = 1;
  return uVar2;
}



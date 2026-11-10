/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c2ba8; name: FUN_007c2ba8
 */


void FUN_007c2ba8(long param_1,long param_2)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0xd0) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1 + 0x90;
    FUN_007c9e3c(lVar1);
  }
  FUN_007bfd40(param_1 + 0x70,*(int *)(param_1 + 0x84) + param_2);
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  if (lVar1 == 0) {
    return;
  }
  FUN_007c9e44(lVar1);
  return;
}



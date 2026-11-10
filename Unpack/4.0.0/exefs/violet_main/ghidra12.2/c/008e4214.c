/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008e4214; name: FUN_008e4214
 */


int FUN_008e4214(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(*(long *)(param_1 + 0x418) + 0x10) == '\0') {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  for (lVar2 = *(long *)(*(long *)(param_1 + 0x418) + 0x18); lVar2 != 0;
      lVar2 = *(long *)(lVar2 + 0x68)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



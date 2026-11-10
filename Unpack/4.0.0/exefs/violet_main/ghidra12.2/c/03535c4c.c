/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03535c4c; name: FUN_03535c4c
 */


bool FUN_03535c4c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_4 [4];
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    bVar1 = false;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x78);
    lVar2 = FUN_035359a8(param_1,auStack_4);
    bVar1 = lVar2 != lVar3 && lVar2 != 0;
  }
  return bVar1;
}



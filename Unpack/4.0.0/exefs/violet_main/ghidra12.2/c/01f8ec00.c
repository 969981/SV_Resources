/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8ec00; name: FUN_01f8ec00
 */


bool FUN_01f8ec00(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined1 auStack_18 [8];
  
  bVar1 = false;
  if (*(long *)(param_1 + 200) != 0) {
    lVar2 = FUN_01f8ec30(*(long *)(param_1 + 200),auStack_18);
    bVar1 = lVar2 != 0;
  }
  return bVar1;
}



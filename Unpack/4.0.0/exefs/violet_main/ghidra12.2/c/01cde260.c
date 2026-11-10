/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01cde260; name: FUN_01cde260
 */


bool FUN_01cde260(ulong param_1)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_017f6f98();
  bVar1 = false;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x38) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = param_1 <= *(byte *)(lVar2 + 0x60);
    }
  }
  return bVar1;
}



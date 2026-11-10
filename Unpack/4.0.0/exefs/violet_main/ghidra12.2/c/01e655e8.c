/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e655e8; name: FUN_01e655e8
 */


long FUN_01e655e8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = FUN_01e65690();
  lVar2 = FUN_0111b030(*(undefined1 *)(param_1 + 8));
  lVar3 = FUN_0111b030(*(undefined1 *)(param_1 + 9));
  return lVar2 + lVar1 + lVar3;
}



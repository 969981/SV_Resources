/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0284d948; name: FUN_0284d948
 */


long FUN_0284d948(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar2 = param_2;
  if (param_2 + 0x10 != lVar4) {
    lVar3 = param_2;
    do {
      lVar2 = lVar3 + 0x10;
      FUN_0178f674(lVar3,lVar2);
      lVar1 = lVar3 + 0x20;
      lVar3 = lVar2;
    } while (lVar1 != lVar4);
  }
  FUN_0284d9c0(param_1,lVar2);
  return param_2;
}



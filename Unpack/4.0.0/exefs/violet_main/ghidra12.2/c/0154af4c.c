/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0154af4c; name: FUN_0154af4c
 */


long FUN_0154af4c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x68);
  if (((lVar1 != 0) && (lVar2 = *(long *)(lVar1 + 0x68), param_1 = lVar1, lVar2 != 0)) &&
     (lVar1 = *(long *)(lVar2 + 0x68), param_1 = lVar2, lVar1 != 0)) {
    param_1 = lVar1;
    for (lVar1 = *(long *)(lVar1 + 0x68); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x68)) {
      param_1 = lVar1;
    }
  }
  return param_1;
}



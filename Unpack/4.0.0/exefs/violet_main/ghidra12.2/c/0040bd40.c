/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040bd40; name: FUN_0040bd40
 */


long FUN_0040bd40(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0040c6d0(*(undefined8 *)(param_1 + 8));
  if ((lVar1 == 0) || (lVar2 = FUN_0040bba0(lVar1,param_1), lVar2 != 0)) {
    return lVar1;
  }
  FUN_0040bae0(lVar1);
  return 0;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0011e620; name: FUN_0011e620
 */


void FUN_0011e620(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  Hint_Prefetch(param_1,0,0,0);
  Hint_Prefetch(param_1 + param_2,0,0,0);
  lVar2 = param_2 * 2;
  param_1 = param_1 + lVar2;
  Hint_Prefetch(param_1,0,0,0);
  lVar1 = param_1 + lVar2;
  Hint_Prefetch(param_1 + param_2,0,0,0);
  Hint_Prefetch(lVar1,0,0,0);
  Hint_Prefetch(lVar1 + param_2,0,0,0);
  Hint_Prefetch(lVar1 + lVar2,0,0,0);
  Hint_Prefetch(lVar1 + lVar2 + param_2,0,0,0);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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



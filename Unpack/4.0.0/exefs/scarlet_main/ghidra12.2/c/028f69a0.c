/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028f69a0; name: FUN_028f69a0
 */


void FUN_028f69a0(long param_1,long param_2)

{
  LightEventType *pLVar1;
  
  if (param_2 != 0) {
    pLVar1 = (LightEventType *)(param_1 + 0x10);
    do {
      param_2 = param_2 + -1;
      FUN_028f69e0(pLVar1 + 0x10);
      nn::os::FinalizeLightEvent(pLVar1);
      pLVar1 = pLVar1 + 0xa8;
    } while (param_2 != 0);
  }
  return;
}



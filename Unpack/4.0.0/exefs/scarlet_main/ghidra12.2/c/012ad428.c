/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012ad428; name: thunk_FUN_012ad48c
 */


void thunk_FUN_012ad48c(void)

{
  undefined8 uStack_30;
  char *pcStack_28;
  undefined8 uStack_20;
  long *plStack_18;
  
  uStack_30 = 0xbe72bafef73871c3;
  pcStack_28 = "pe_PokeConfigComponent";
  uStack_20 = 0x16;
  plStack_18 = (long *)0x0;
  FUN_012ad95c(&uStack_30);
  if (plStack_18 != (long *)0x0) {
    (**(code **)(*plStack_18 + 0x20))();
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035335c; name: FUN_0035335c
 */


void FUN_0035335c(void)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar1 = (double)FUN_0038e610();
  auVar3 = FUN_0038e500(0);
  DAT_047ef5f8 = auVar3._8_8_;
  DAT_047ef5f0 = auVar3._0_8_;
  dVar2 = (double)FUN_0038e610();
  DAT_047ef5e8 = (dVar1 + dVar2) * 0.5;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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



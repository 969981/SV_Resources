/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a7940; name: FUN_024a7940
 */


undefined * FUN_024a7940(void)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = FUN_00821660();
  puVar1 = PTR_PTR_044e8b70;
  if ((uVar2 & 1) == 0) {
    return PTR_PTR_047d19a8;
  }
  thunk_FUN_008217d0();
  return puVar1;
}



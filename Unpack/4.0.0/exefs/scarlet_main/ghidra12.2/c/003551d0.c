/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003551d0; name: FUN_003551d0
 */


undefined8 FUN_003551d0(ulong param_1)

{
  undefined8 uVar1;
  
  if ((param_1 & 1) == 0) {
    return 0;
  }
  uVar1 = FUN_00355240(1);
  DAT_047ef680 = *(undefined8 *)PTR_PTR_047cce38;
  *(undefined1 **)PTR_PTR_047cce38 = &LAB_00355220;
  FUN_003547c0();
  return uVar1;
}



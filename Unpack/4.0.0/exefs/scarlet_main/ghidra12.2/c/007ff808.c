/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ff808; name: FUN_007ff808
 */


void FUN_007ff808(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047d0860;
  lVar2 = FUN_007f72c8(*(undefined8 *)PTR_DAT_047d0860);
  if (lVar2 != 0) {
    FUN_00796c9c(lVar2 + 8);
  }
  lVar2 = FUN_007f72b0(*(undefined8 *)puVar1);
  if (lVar2 == 0) {
    return;
  }
  FUN_00796c9c(lVar2 + 8);
  return;
}



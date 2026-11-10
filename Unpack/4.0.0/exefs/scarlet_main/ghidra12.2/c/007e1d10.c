/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e1d10; name: FUN_007e1d10
 */


void FUN_007e1d10(long *param_1)

{
  long lVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_047d1440 + 0x10);
  if (param_1[0x1d] != 0) {
    FUN_007e27b4(param_1);
    FUN_007e29ac(param_1);
    if (*(long *)PTR_DAT_047d0860 != 0) {
      lVar1 = *(long *)PTR_DAT_047d0860 + 0x10;
      lVar2 = FUN_00f21488(lVar1,*(undefined4 *)((long)param_1 + 0xa4),0x58);
      if (lVar2 != 0) {
        FUN_007f30fc();
        FUN_01913dc4(lVar1,*(undefined4 *)((long)param_1 + 0xa4));
      }
    }
    FUN_007f4848(param_1);
  }
  FUN_007f45dc(param_1);
  return;
}


